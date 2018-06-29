////#############################################################################
// ARCHIVO : launcher.h
// AUTORES : Alejandro Tidele - Cristian Castillo
// FECHA DE CREACION : 03/06/2018.
// ULTIMA ACTUALIZACION: dd/mm/aaaa.
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// SISTEMA OPERATIVO : Windows 10.
// IDE : Code::Blocks - 17.12
// COMPILADOR : GNU GCC Compiler (Linux) / MinGW (Windows).
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// DESCRIPCION:
// Librería intermedia que se encarga de ejecutar las funciones de "cadenas.h".
/////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "../CSYSTEM/csystem.h" // Libreria multiplataforma.

using namespace std;

namespace game
{
/***************************************************************************************
// DECLARACION DE VARIABLES GLOABALES DEL JUEGO
*****************************************************************************************/
// Cantidad de turnos minimos.
int turn = 20;

// Tamaño del tablero elegido.
int boundSize = 4;

// Tamaño del tablero maximo.
const int maxBound = 8;

// Cartas máximas a descubrir. (maxBound * maxBound / 2)
char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456";
/***************************************************************************************
// ESTRUCTURA : struct card
// ACCION     : Estructura de cada carta.
// COMPONENTES: char card    -> Contiene el caracter de una carta.
//              bool mostrar -> Define si la carta se muestra o no.
//              const static char reverse -> Contiene el caracter de una carta al reverso.
*****************************************************************************************/
struct card
{
    char card;
    bool show;
    const static char reverse = '*';
};

/***************************************************************************************
// FUNCION   : void notExists()
// ACCION    : Anuncia que la posicion seleccionada es inexistente.
// PARAMETROS: Ninguno
// DEVUELVE  : Nada
*****************************************************************************************/
void notExists()
{
    cout << endl << "\t\tººººººººººººººººººººººººººººººººººººººººººººººººº";
    cout << endl << "\t\tºº   Posicion inexistente, intentelo de nuevo  ºº";
    cout << endl << "\t\tººººººººººººººººººººººººººººººººººººººººººººººººº";
}

/***************************************************************************************
// FUNCION   : void incorrect()
// ACCION    : Anuncia que las fichas elegidas no coinciden.
// PARAMETROS: Ninguno
// DEVUELVE  : Nada
*****************************************************************************************/
void incorrect()
{
    cout << endl << "\t\tººººººººººººººººººººººººººººººººººººººººººººººººº";
    cout << endl << "\t\tºº     No acertaste... Intentalo de nuevo      ºº";
    cout << endl << "\t\tººººººººººººººººººººººººººººººººººººººººººººººººº";
}

/***************************************************************************************
// FUNCION   : void usedCard()
// ACCION    : Anuncia que la carta elegida ya fue utilizada.
// PARAMETROS: Ninguno
// DEVUELVE  : Nada
*****************************************************************************************/
void usedCard()
{
    cout << endl << "\t\tººººººººººººººººººººººººººººººººººººººººººººººººº";
    cout << endl << "\t\tºº       Esta carta ya fue descubierta         ºº";
    cout << endl << "\t\tºº             selecciona otra                 ºº";
    cout << endl << "\t\tººººººººººººººººººººººººººººººººººººººººººººººººº";
}

/***************************************************************************************
// FUNCION   : void noMoreFlash()
// ACCION    : Anuncia que no se puede utilizar mas el flash.
// PARAMETROS: Ninguno
// DEVUELVE  : Nada
*****************************************************************************************/
void noMoreFlash()
{
    cout << endl << "\t\tººººººººººººººººººººººººººººººººººººººººººººººººº";
    cout << endl << "\t\tºº       No puedes volver a utilizar la        ºº";
    cout << endl << "\t\tºº             opcion FLASH                    ºº";
    cout << endl << "\t\tººººººººººººººººººººººººººººººººººººººººººººººººº";
}

/***************************************************************************************
// FUNCION   : void hit()
// ACCION    : Anuncia que se ha descubierto el par.
// PARAMETROS: Ninguno
// DEVUELVE  : Nada
*****************************************************************************************/
void hit()
{
    cout << endl << "\t\tººººººººººººººººººººººººººººººººººººººººººººººººº";
    cout << endl << "\t\tºº                 ACERTASTE!                  ºº";
    cout << endl << "\t\tºº              Continua jugando               ºº";
    cout << endl << "\t\tººººººººººººººººººººººººººººººººººººººººººººººººº";
}

/***************************************************************************************
// FUNCION   : void gameWon()
// ACCION    : Anuncia que el juego ha sido ganado.
// PARAMETROS: Ninguno
// DEVUELVE  : Nada
*****************************************************************************************/
void gameWon()
{
    cout << endl;
    cout << endl << "\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
    cout << endl << "\t\t°°          (: G A N A S T E :)          °°";
    cout << endl << "\t\t°°      Y te sobraron " << (turn > 9 ? "" : "0") << turn << " movimientos     °°";
    cout << endl << "\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
    cout << endl;
}

/***************************************************************************************
// FUNCION   : void gameLost()
// ACCION    : Anuncia que el juego ha sido perdido.
// PARAMETROS: Ninguno
// DEVUELVE  : Nada
*****************************************************************************************/
void gameLost()
{
    cout << endl;
    cout << "\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
    cout << "\t\t°°                                       °°" << endl;
    cout << "\t\t°°        ): P E R D I S T E :(          °°" << endl;
    cout << "\t\t°°                                       °°" << endl;
    cout << "\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
    cout << endl;

}

/***************************************************************************************
// FUNCION   : void configurateGame(int type)
// ACCION    : Configura la modalidad de juego.
// PARAMETROS: int type -> Modalidad de juego (1 - F, 2 - M, 3 - D).
// DEVUELVE  : Nada
*****************************************************************************************/
void configurateGame(int type)
{
    turn = 20 * type;
    boundSize = (2 * type) + 2;
}

/***************************************************************************************
// FUNCION   : void showBoardFooter()
// ACCION    : Muestra el pie de la tabla de juego.
// PARAMETROS: Nada
// DEVUELVE  : Nada
*****************************************************************************************/
void showBoardFooter()
{
    if (boundSize == 4)
        cout << "\n\t\t   =================";
    else if (boundSize == 6)
        cout << "\n\t\t   =========================";
    else
        cout << "\n\t\t   =================================";
}

/***************************************************************************************
// FUNCION   : void showBoardHeader()
// ACCION    : Muestra el encabezado de la tabla de juego.
// PARAMETROS: Nada
// DEVUELVE  : Nada
*****************************************************************************************/
void showBoardHeader()
{
    if (boundSize == 4)
        cout << "\n\t\t   | 1 | 2 | 3 | 4 |";
    else if (boundSize == 6)
        cout << "\n\t\t   | 1 | 2 | 3 | 4 | 5 | 6 |";
    else
        cout << "\n\t\t   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |";

    showBoardFooter();
}

/***************************************************************************************
// FUNCION   : void initialize(card arrayCards[maxBound][maxBound])
// ACCION    : Inicializa la matriz en un valor generico.
// PARAMETROS: card arrayCards[maxBound][maxBound] -> Matriz a inicializar
// DEVUELVE  : Nada
*****************************************************************************************/
void initialize(card arrayCards[maxBound][maxBound])
{
    for (int x = 0; x < boundSize; x++)
        for (int y = 0; y < boundSize; y++)
        {
            arrayCards[x][y].card = '0';
            arrayCards[x][y].show = true;
        }
}

/***************************************************************************************
// FUNCION   : void distribute(card arrayCards[maxBound][maxBound])
// ACCION    : Distribuye las cards en la matriz en orden aleatorio.
// PARAMETROS: card arrayCards[maxBound][maxBound] -> Matriz a inicializar
// DEVUELVE  : NADA
*****************************************************************************************/
void distribute(card arrayCards[maxBound][maxBound])
{
    int f = sys::random(boundSize), c = sys::random(boundSize);

    initialize(arrayCards); // Inicializo el tablero

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < (boundSize * boundSize / 2); j++)
        {
            // Si la carta no se muestra, es porque ya tiene una letra del array letters[].
            while (! arrayCards[f][c].show)
            {
                // Busco fila y columna random para que la distribución sea pareja.
                f = sys::random(boundSize);
                c = sys::random(boundSize);
            }

            arrayCards[f][c].card = letters[j]; // Le asigno un valor de la lista a la carta.
            arrayCards[f][c].show = false; // Doy vuelta la carta para que no cambie su valor.
        }
}

/***************************************************************************************
// FUNCION   : void flash(card arrayCards[maxBound][maxBound])
// ACCION    : Muestra todas las cards de la matriz sin importar si fueron descubiertos o no.
// PARAMETROS: card arrayCards[maxBound][maxBound] -> Matriz a mostrar
// DEVUELVE  : NADA
*****************************************************************************************/
void flash(card arrayCards[maxBound][maxBound])
{
    char character = 65;

    showBoardHeader();

    for (int x = 0; x < boundSize; x++, character++)
    {
        cout << "\n\t\t" << character << "  | ";

        for (int y = 0; y < boundSize; y++)
            cout << arrayCards[x][y].card << " | "; // Muestro el tablero dado vuelta.

        cout << " " << character << endl;
    }

    showBoardFooter();
}

/***************************************************************************************
// FUNCION   : void show(card arrayCards[maxBound][maxBound])
// ACCION    : Muestra el tablero con los aciertos hasta el momento.
// PARAMETROS: card arrayCards[maxBound][maxBound] -> Matriz a mostrar
// DEVUELVE  : NADA
*****************************************************************************************/
void showBoard(card arrayCards[maxBound][maxBound])
{
    char character = 65;

    showBoardHeader();

    for (int x = 0; x < boundSize; x++, character++)
    {
        cout << "\n\t\t" << character << "  | ";

        for (int y=0; y < boundSize; y++)
            if (arrayCards[x][y].show) // Muestro el tablero como está (Verde).
                cout << "\033[1;32m" <<  arrayCards[x][y].card << "\033[0m | ";
            else
                cout << arrayCards[x][y].reverse << " | ";

        cout << " " << character << endl;
    }

    showBoardFooter();
}

/***************************************************************************************
// FUNCION   : void showElection(card arrayCards[maxBound][maxBound], int f, int c)
// ACCION    : Muestra el tablero con la eleccion parcial de la jugada.
// PARAMETROS: card arrayCards[maxBound][maxBound] -> Matriz a mostrar
//             int f -> Indice de la fila elegida.
//             int c -> Indice de la columna elegida
// DEVUELVE  : NADA
*****************************************************************************************/
void showElection(card arrayCards[maxBound][maxBound], int f, int c)
{
    char character = 65;
    arrayCards[f][c].show = true;
    cout << endl << "\t\tTurno: " << turn << endl;

    showBoardHeader();

    for (int x = 0; x < boundSize; x++, character++)
    {
        cout << "\n\t\t" << character << "  | ";

        for (int y = 0; y < boundSize; y++)
            if (arrayCards[x][y].show) // Muestro el tablero con lo que eligió (Amarillo).
                cout << "\033[1;33m" << arrayCards[x][y].card << "\033[0m | " ;
            else
                cout << arrayCards[x][y].reverse << " | " ;

        cout << " " << character << endl;
    }

    showBoardFooter();
}

//******************************************************************************************************************************
// FUNCION   : int setTurn(card arrayCards[maxBound][maxBound],int f1,int c1,int f2,int c2, int turno)
// ACCION    : Verifica si las cartas son iguales y devuelve el turno, de no serlo, esconde las tarjetas y retorna un turno menos.
// PARAMETROS: card arrayCards[maxBound][maxBound]  -> matriz a mostrar
//             int f1 -> indice de la fila elegida de la primer eleccion.
//             int c1 -> indice de la columna elegida de la primer eleccion.
//             int f2 -> indice de la fila elegida de la segunda eleccion.
//             int c2 -> indice de la columna elegida de la segunda eleccion.
//             int turn -> Turno actual a ser devuelto.
// DEVUELVE  : Nada.
//******************************************************************************************************************************
void setTurn(card arrayCards[maxBound][maxBound],int f1,int c1,int f2,int c2)
{
    if (arrayCards[f1][c1].card != arrayCards[f2][c2].card)
    {
        incorrect();
        arrayCards[f1][c1].show = false;
        arrayCards[f2][c2].show = false;
        turn--;
    }
    else
        hit();

}

/***************************************************************************************
// FUNCION   : int getRowPosition(card arrayCards[maxBound][maxBound], char election, bool mustShow,int turn)
// ACCION    : Valida el primer caracter de la eleccion del usuario y la modifica para utilizarse de indice en la matriz.
// PARAMETROS: card arrayCards[maxBound][maxBound] -> matriz a mostrar
//             char election -> el caracter ingresado para procesar la eleccion
//             bool mustShow -> indica la utilizacion de la opcion flash, la vuelve false una vez utilizado
//             int turn -> el turno actual de la jugada.
// DEVUELVE  : la posicion de la fila en la matriz
*****************************************************************************************/
int getRowPosition(card arrayCards[maxBound][maxBound], char election, bool mustShow,int turn)
{
    bool pass = false;
    int row,
        maxLowcaseRow = 96 + boundSize, // Desde a hasta d/f/g.
        maxUppercaseRow = 64 + boundSize; // Desde A hasta D/F/G.

    while (! pass)   // Mientras que no pase..
    {
        sys::cls();
        cout << endl << "\t\tTurno: " << turn << endl;

        showBoard(arrayCards);

        cout << "\n\n\t\tPresione Z para FLASH\n\n\t\tPresione X para SALIR \n\n\t\tSeleccione una Posicion: ";

        election = sys::getch(); // Obtengo la entrada por el usuario.

        if (election == 'z' || election == 'Z') // Si es flash..
        {
            if (mustShow) // Si no se ha usado, pasa.
            {
                sys::cls();
                flash(arrayCards);
                mustShow = false;
                sys::msleep(3);
                sys::cls();
            }
            else // Si ya se uso, alerta al usuario.
            {
                noMoreFlash();
                cin.ignore();
                cin.get();
            }
            return election; // Devuelvo el valor entero de la eleccion.
        }

        row = election;

        if (row <= maxLowcaseRow && row >= 97) // Valido la entrada
        {
            row = row - 97;
            pass = true;
        }
        else if (row <= maxUppercaseRow && row >= 65)
        {
            row = row - 65;
            pass = true;
        }
        else if (row == 'x' || row == 'X')
        {
            return row;
        }
        else
        {
            notExists();
            cin.ignore();
            cin.get();
            sys::cls();
            cout << endl << "\t\tTurno: " << turn << endl;
            showBoard(arrayCards);
            cout << "\n\n\t\tPresione Z para FLASH\n\n\t\tPresione X para SALIR";
            pass = false;
        }
    }

    return row;
}

/***************************************************************************************
// FUNCION   : int getColPosition(card arrayCards[maxBound][maxBound], char election, bool mustShow)
// ACCION    : Valida el segundo caracter de la eleccion del usuario y la modifica para utilizarse de indice en la matriz.
// PARAMETROS: card arrayCards[4][4]  -> matriz a mostrar
//             char election -> el caracter ingresado para procesar la eleccion
//             bool mustShow -> indica la utilizacion de la opcion flash, la vuelve false una vez utilizado
// DEVUELVE  : la posicion de la columna en la matriz
*****************************************************************************************/
int getColPosition(card arrayCards[maxBound][maxBound], char election, bool mustShow)
{
    int column;
    bool pass = false;
    election = sys::getch();

    while (! pass)
    {
        if (election == 'z' || election == 'Z')
        {
            if (mustShow)
            {
                sys::cls();
                flash(arrayCards);
                mustShow = false;
                sys::msleep(3);
            }
            else
            {
                noMoreFlash();
                cin.ignore();
                cin.get();
            }
        }

        column = election;

        if (column <= (boundSize + '0') && column >= 49)
        {
            column = column - 49;
            pass = true;
        }
        else
        {
            notExists();
            pass = false;
            cin.ignore();
            cin.get();
            sys::cls();
            cout << endl << "\t\tTurno: " << turn << endl;
            showBoard(arrayCards);
            cout << "\n\n\t\tYa ha seleccionado la fila\n\n\t\tSeleccione una columna: ";
            election = sys::getch();
        }
    }

    return column;

}

/***************************************************************************************
// FUNCION   : int play(card arrayCards[maxBound][maxBound], bool mustShow, bool &gameOver)
// ACCION    : Se toma los ingresos del usuario, se procesa la eleccion y modifica el turno en caso de no haber aciertos.
//             Se pueden ejecutar las opciones "Flash" o "Salida".
// PARAMETROS: card arrayCards[maxBound][maxBound] -> matriz a trabajar
//             bool mustShow       -> indica la utilizacion de la opcion flash, la vuelve false una vez utilizado
//             bool *gameOver -> indica el salto de acciones en caso de utilizar Flash o Salida.
// DEVUELVE  : la modificacion o no del turno.
*****************************************************************************************/
int play(card arrayCards[maxBound][maxBound], bool mustShow, bool &gameOver)
{
    bool pass = true; // Determina si continua ejecutando o no.
    char f1 = 0, c1 = 0, f2 = 0, c2 = 0; // Posiciones a ingresar por teclado
    int row1 = 0,  col1 = 0,  row2 = 1,  col2 = 1; // Posiciones validadas a buscar en la matriz.

    do
    {
        row1 = getRowPosition(arrayCards, f1, mustShow, turn); // Obtengo la primer fila.

        if (row1 == 88 || row1 == 120) // Si presiona X..
        {
            gameOver = true;
            return 0; // Devuelve 0 porque quiere salir.
        }
        else if (row1 == 90 || row1 == 122) // Si presiona Z..
        {
            mustShow = false;
            pass = false;
            return -1; // Devuelve -1 porque eligio Flash.
        }

        col1 = getColPosition(arrayCards, c1, mustShow); // Obtengo la primer columna.

        if (arrayCards[row1][col1].show) // Si ya habia dado vuelta la carta..
        {
            usedCard();
            cin.ignore();
            cin.get();
        }
    }
    while (arrayCards[row1][col1].show); // Hasta que no elija una posicion valida, no finaliza..

    if (pass) // Si selecciono una entrada valida..
    {
        sys::cls();
        showElection(arrayCards, row1, col1); // Muestra la eleccion parcial.
        do
        {
            row2 = getRowPosition(arrayCards, f2, mustShow, turn);

            if (row2 == 88 || row2 == 120)
            {
                gameOver = true;
                return 0;
            }
            else if (row2 == 90 || row2 == 122)
            {
                arrayCards[row1][col1].show = false; // Vuelvo a esconder la carta.
                mustShow = false;
                return -1;
            }

            col2 = getColPosition(arrayCards, c2, mustShow);

            if (arrayCards[row2][col2].show)
            {
                usedCard();
                cin.ignore();
                cin.get();
            }
        }
        while (arrayCards[row2][col2].show);

        if (pass)
        {
            sys::cls();
            showElection(arrayCards, row2, col2);
            setTurn(arrayCards, row1, col1, row2, col2); // Resta o no el turno actual.
        }
    }

    return turn; // Si no pasó es porque eligió Flash.
}

/***************************************************************************************
// FUNCION   : bool gameOver(card arrayCards[maxBound][maxBound], int movements)
// ACCION    : Comprueba la matriz completa y evalua la muestra de cada carta
// PARAMETROS: card arrayCards[maxBound][maxBound] -> Matriz a mostrar
// DEVUELVE  : Verdadero si se descubrió todo y falso en caso de no finalizar el juego.
*****************************************************************************************/
bool gameOver(card arrayCards[maxBound][maxBound])
{
    bool win = false;

    if (turn > 0) // Solo se pierde cuando no tenga mas turnos
        for (int x = 0; x < boundSize; x++)
            for (int y = 0; y < boundSize; y++)
                if (arrayCards[x][y].show)
                    win = true; // Si se mostraron todas las cartas, gana el juego.
                else
                    return false; // Si una posicion no fue descubierta, no finalizó el juego.

    sys::cls();
    win ? gameWon() : gameLost();
    cout << "\t\tPresione enter para volver al menu." << endl;
    return win;
}
}
//=============================================================================
//                            FIN DE ARCHIVO
//#############################################################################
