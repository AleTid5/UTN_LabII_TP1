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
// Librerํa intermedia que se encarga de ejecutar las funciones de "cadenas.h".
/////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "../CSYSTEM/csystem.h" // Libreria multiplataforma.

using namespace std;

namespace game
{
int boundSize = 4;
const int maxBound = 8;
char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
/***************************************************************************************
// ESTRUCTURA : struct card
// ACCION     : Estructura del componente de cada carta.
// COMPONENTES: char card  -> contiene el caracter de la carta.
//             char reverse -> contiene un simbolo de incognito.
//             bool mostrar -> booleano para definir el mostrar o no un caracter
*****************************************************************************************/
struct card
{
    char card;
    char reverse;
    bool show;
};

/***************************************************************************************
// FUNCION   : void notExists()
// ACCION    : Cartel de anuncio durante el juego.
// PARAMETROS: Ninguno
// DEVUELVE  : NADA
*****************************************************************************************/
void notExists()
{
    cout << endl << "\t\tบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบ";
    cout << endl << "\t\tบบ   Posicion inexistente, intentelo de nuevo  บบ";
    cout << endl << "\t\tบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบ";
}

/***************************************************************************************
// FUNCION   : void incorrect()
// ACCION    : Cartel de anuncio durante el juego.
// PARAMETROS: Ninguno
// DEVUELVE  : NADA
*****************************************************************************************/
void incorrect()
{
    cout << endl << "\t\tบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบ";
    cout << endl << "\t\tบบ     No acertaste... Intentalo de nuevo      บบ";
    cout << endl << "\t\tบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบ";
}

/***************************************************************************************
// FUNCION   : void usedCard()
// ACCION    : Cartel de anuncio durante el juego.
// PARAMETROS: Ninguno
// DEVUELVE  : NADA
*****************************************************************************************/
void usedCard()
{
    cout << endl << "\t\tบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบ";
    cout << endl << "\t\tบบ       Esta carta ya fue descubierta         บบ";
    cout << endl << "\t\tบบ             selecciona otra                 บบ";
    cout << endl << "\t\tบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบ";
}

/***************************************************************************************
// FUNCION   : void noMoreFlash()
// ACCION    : Cartel de anuncio durante el juego.
// PARAMETROS: Ninguno
// DEVUELVE  : NADA
*****************************************************************************************/
void noMoreFlash()
{
    cout << endl << "\t\tบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบ";
    cout << endl << "\t\tบบ       No puedes volver a utilizar la        บบ";
    cout << endl << "\t\tบบ             opcion FLASH                    บบ";
    cout << endl << "\t\tบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบ";
}

/***************************************************************************************
// FUNCION   : void hit()
// ACCION    : Cartel de anuncio durante el juego.
// PARAMETROS: Ninguno
// DEVUELVE  : NADA
*****************************************************************************************/
void hit()
{
    cout << endl << "\t\tบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบ";
    cout << endl << "\t\tบบ          ACERTASTE!!, bien hecho            บบ";
    cout << endl << "\t\tบบ             Continua jugando                บบ";
    cout << endl << "\t\tบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบ";
}

/***************************************************************************************
// FUNCION   : void gameWon()
// ACCION    : Cartel de anuncio durante el juego.
// PARAMETROS: Ninguno
// DEVUELVE  : NADA
*****************************************************************************************/
void gameWon()
{
	cout << endl;
    cout << endl << "\t\tฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐ";
    cout << endl << "\t\tฐฐ                                       ฐฐ";
    cout << endl << "\t\tฐฐ          (: G A N A S T E :)          ฐฐ";
    cout << endl << "\t\tฐฐ                                       ฐฐ";
    cout << endl << "\t\tฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐ";
    cout << endl;
}

/***************************************************************************************
// FUNCION   : void gameLost()
// ACCION    : Cartel de anuncio durante el juego.
// PARAMETROS: Ninguno
// DEVUELVE  : NADA
*****************************************************************************************/
void gameLost()
{
    cout<<endl;
    cout<<"\t\tฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐ"<<endl;
    cout<<"\t\tฐฐ                                       ฐฐ"<<endl;
    cout<<"\t\tฐฐ        ): P E R D I S T E :(          ฐฐ"<<endl;
    cout<<"\t\tฐฐ                                       ฐฐ"<<endl;
    cout<<"\t\tฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐฐ"<<endl;
    cout<<endl;

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
        cout << "\n\t\t     =================";
    else if (boundSize == 6)
        cout << "\n\t\t     =========================";
    else
        cout << "\n\t\t     =================================";
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
        cout << "\n\t\t     | 1 | 2 | 3 | 4 |";
    else if (boundSize == 6)
        cout << "\n\t\t     | 1 | 2 | 3 | 4 | 5 | 6 |";
    else
        cout << "\n\t\t     | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |";

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
            arrayCards[x][y].card='0';
            arrayCards[x][y].show=true;
            arrayCards[x][y].reverse='#';
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
    int n, f, c;
    initialize(arrayCards);
    for (int x = 0; x < 2; x++)
    {
        n = 0;
        for (int i = 0; i < (boundSize * boundSize / 2); i++, n++)
        {
            do
            {
                f = sys::random(boundSize);
                c = sys::random(boundSize);
            }
            while(! arrayCards[f][c].show);

            arrayCards[f][c].card = letters[n];
            arrayCards[f][c].show = false;
        }
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
        cout << "\n\t\t " << character << " ->| ";

        for (int y = 0; y < boundSize; y++)
            cout << arrayCards[x][y].card << " | ";

        cout << "<- " << character << endl;
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
        cout << "\n\t\t " << character << " ->| ";

        for (int y=0; y < boundSize; y++)
            if(arrayCards[x][y].show)
                cout << "\033[1;32m" <<  arrayCards[x][y].card << "\033[0m | ";
            else
                cout << arrayCards[x][y].reverse << " | ";

        cout << "<- " << character << endl;
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

    showBoardHeader();

    for (int x = 0; x < boundSize; x++, character++)
    {
        cout << "\n\t\t " << character << " -> |";

        for (int y = 0; y < boundSize; y++)
            if(arrayCards[x][y].show)
                cout << "\033[1;33m" << arrayCards[x][y].card << "\033[0m | " ;
            else
                cout << arrayCards[x][y].reverse << " | " ;

        cout << "<- " << character << endl;
    }

    showBoardFooter();
}

//******************************************************************************************************************************
// FUNCION   : int getTurn(card arrayCards[maxBound][maxBound],int f1,int c1,int f2,int c2, int turno)
// ACCION    : Compara los caracteres en las dos elecciones del usuario, verifica si hay coincidencias
//             y en caso de no haberlo vuelve el booleano ende las elecciones de vuelta a false.
// PARAMETROS: card arrayCards[maxBound][maxBound]  -> matriz a mostrar
//             int f1 -> indice de la fila elegida de la primer eleccion.
//             int c1 -> indice de la columna elegida de la primer eleccion.
//             int f2 -> indice de la fila elegida de la segunda eleccion.
//             int c2 -> indice de la columna elegida de la segunda eleccion.
//             int turn -> Turno actual a ser devuelto.
// DEVUELVE  : El turno con disminucion de 1 en caso de no haber coincidencias
//******************************************************************************************************************************
int getTurn(card arrayCards[maxBound][maxBound],int f1,int c1,int f2,int c2, int turno)
{
    if (arrayCards[f1][c1].card != arrayCards[f2][c2].card)
    {
        incorrect();
        arrayCards[f1][c1].show = false;
        arrayCards[f2][c2].show = false;
        return turno-1;
    }
    else
    {
        hit();
        return turno;
    }

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
    bool pass;
    int row, maxLowcaseRow = 96 + boundSize, maxUppercaseRow = 64 + boundSize;
    do
    {
        sys::cls();
        cout << endl << "\t\tTurno: " << turn << endl;

        showBoard(arrayCards);

        cout << "\n\n\t\tPresione Z para FLASH\n\n\t\tPresione X para SALIR \n\n\t\tSeleccione una Posicion: ";

        election = sys::getch();

        if (election == 'z' || election == 'Z')
        {
            if (mustShow)
            {
                sys::cls();
                flash(arrayCards);
                mustShow = false;
                sys::msleep(3);
                sys::cls();
                return election;
            }
            else
            {
                noMoreFlash();
                cin.ignore();
                cin.get();
                return election;
            }
        }

        row = election;

        if (row <= maxLowcaseRow && row >= 97)
        {
            row = row - 97;
            pass = true;
        }
        else if(row <= maxUppercaseRow && row >= 65)
        {
            row = row - 65;
            pass = true;
        }
        else if(row == 'x' || row == 'X')
        {
            return row;
        }
        else
        {
            notExists();
            cin.ignore();
            cin.get();
            sys::cls();
            cout << endl << "\t\tTurno: " << turn;
            cout<<endl;
            showBoard(arrayCards);
            cout << "\n\n\t\tPresione Z para FLASH\n\n\t\tPresione X para SALIR";
            pass = false;
        }
    }
    while(!pass);

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
    do
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
            showBoard(arrayCards);
            cout << "\n\n\t\tYa ha seleccionado la fila\n\n\t\tSeleccione una columna: ";
            election = sys::getch();
        }
    }
    while(!pass);

    return column;

}

/***************************************************************************************
// FUNCION   : int play(card arrayCards[maxBound][maxBound], int turn, bool mustShow, bool *specialAction)
// ACCION    : Se toma los ingresos del usuario, se procesa la eleccion y modifica el turno en caso de no haber aciertos.
//             Se pueden ejecutar las opciones "Flash" o "Salida".
// PARAMETROS: card easyArr[4][4]    -> matriz a trabajar
//             card mediumArr[6][6]    -> matriz a trabajar
//             card hardArr[8][8]  -> matriz a trabajar
//             int  turn           -> recibe el turno actual de la jugada en curso
//             bool mustShow       -> indica la utilizacion de la opcion flash, la vuelve false una vez utilizado
//             bool *specialAction -> indica el salto de acciones en caso de utilizar Flash o Salida.
// DEVUELVE  : la modificacion o no del turno.
*****************************************************************************************/
int play(card arrayCards[maxBound][maxBound], int turn, bool mustShow, bool *specialAction)
{
    char f1 = 0, c1 = 0, f2 = 0, c2 = 0;
    bool pass = false;
    int row1 = 0,  col1 = 0,  row2 = 1,  col2 = 1;
    do
    {
        row1 = getRowPosition(arrayCards, f1, mustShow, turn);

        if (row1 == 88 || row1 == 120)
        {
            *specialAction = true;
            pass = true;
            return 0;
        }
        else if (row1 == 90 || row1 == 122)
        {
            mustShow = false;
            pass = true;
            break;
        }

        col1 = getColPosition(arrayCards, c1, mustShow);

        if (arrayCards[row1][col1].show)
        {
            usedCard();
            cin.ignore();
            cin.get();
        }
    }
    while (arrayCards[row1][col1].show);

    if (! pass)
    {
        sys::cls();
        showElection(arrayCards, row1, col1);
        do
        {
            row2 = getRowPosition(arrayCards, f2, mustShow, turn);

            if (row2 == 88 || row2 == 120)
            {
                *specialAction = true;
                pass = true;
                return 0;
            }
            else if (row2 == 90 || row2 == 122)
            {
                mustShow = false;
                pass = true;
                break;
            }

            col2 = getColPosition(arrayCards, c2, mustShow);

            if (arrayCards[row2][col2].show)
            {
                usedCard();
                cin.ignore();
                cin.get();
            }
        }
        while(arrayCards[row2][col2].show);

        if (! pass)
        {
            sys::cls();
            showElection(arrayCards, row2, col2);
            turn = getTurn(arrayCards, row1, col1, row2, col2, turn);
        }
    }

    return pass ? -1 : turn;
}

/***************************************************************************************
// FUNCION   : bool gameOver(card arrayCards[maxBound][maxBound], int movements)
// ACCION    : Comprueba la matriz completa y evalua la muestra de cada carta
// PARAMETROS: card arrayCards[maxBound][maxBound] -> matriz a mostrar
//             int movements -> revisa en caso de que tenga turnos disponibles.
// DEVUELVE  : Verdader si se descubri๓ todo y Falso en caso de no finalizar el juego
*****************************************************************************************/
bool gameOver(card arrayCards[maxBound][maxBound], int movements)
{
    bool eog = false;

    if (movements > 0)
        for (int x = 0; x < boundSize; x++)
            for (int y = 0; y < boundSize; y++) //Con que 1 posicion sea falsa, es suficiente para no continuar
            if (arrayCards[x][y].show ) {
                eog = true;
            } else {
                return false;
            }

    sys::cls();
    eog ? gameWon() : gameLost();
    cout<<"\t\tPresione enter para volver al menu."<<endl;
    return eog;
}
}
//=============================================================================
//                            FIN DE ARCHIVO
//#############################################################################
