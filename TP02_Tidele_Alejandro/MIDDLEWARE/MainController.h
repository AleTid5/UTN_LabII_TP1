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
#include <iostream> // Libreria de flujos de  Entrada/Salida  que contiene  los
// objetos cin, cout y endl.
#include "../CSYSTEM/csystem.h" // Libreria multiplataforma.
#include "GameController.h"     // Libreria controladora del juego.
#include "string.h"             // Libreria de manejo de cadenas.

using namespace std;

namespace _system
{
//***************************************************************************
// DEFINICION DE LOS PROTOTIPOS A UTILIZAR EN EL SISTEMA
//===========================================================================
void takeMainDecision();
void takeSecondaryDecision();
//***************************************************************************
// DEFINICION DE LAS FUNCIONES
//===========================================================================
// FUNCION   : void welcome()
// ACCION    : Muestra una pantalla de bienvenida al sistema
// PARAMETROS: Nada.
// DEVUELVE  : Nada.
//---------------------------------------------------------------------------
void welcome()
{
    cout << endl;
    cout << endl;
    cout << "\t\t°°°°°°°°°°°°" << endl;
    cout << "\t\t°°°°°°°°°°°°" << endl;
    cout << "\t\t       °°°°°" << endl;
    cout << "\t\t       °°°°°" << endl;
    cout << "\t\t°°°°°°°°°°°°" << endl;
    cout << "\t\t°°°°°°°°°°°°" << endl;
    cout << "\t\t       °°°°°" << endl;
    cout << "\t\t       °°°°°" << endl;
    cout << "\t\t°°°°°°°°°°°°" << endl;
    cout << "\t\t°°°°°°°°°°°°" << endl;
    sys::msleep(1);
    sys::cls();

    cout << endl;
    cout << endl;
    cout << "\t\t°°°°°°°°°°°°" << endl;
    cout << "\t\t°°°°°°°°°°°°" << endl;
    cout << "\t\t       °°°°°" << endl;
    cout << "\t\t       °°°°°" << endl;
    cout << "\t\t°°°°°°°°°°°°" << endl;
    cout << "\t\t°°°°°°°°°°°°" << endl;
    cout << "\t\t°°°°°       " << endl;
    cout << "\t\t°°°°°       " << endl;
    cout << "\t\t°°°°°°°°°°°°" << endl;
    cout << "\t\t°°°°°°°°°°°°" << endl;
    sys::msleep(1);
    sys::cls();

    cout << endl;
    cout << endl;
    cout << "\t\t    °°" << endl;
    cout << "\t\t   °°°" << endl;
    cout << "\t\t  °°°°" << endl;
    cout << "\t\t °°°°°" << endl;
    cout << "\t\t°°° °°" << endl;
    cout << "\t\t    °°" << endl;
    cout << "\t\t    °°" << endl;
    cout << "\t\t    °°" << endl;
    cout << "\t\t    °°" << endl;
    sys::msleep(1);
    sys::cls();

    cout << endl;
    cout << "\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
    cout << "\t\t °                                        ° " << endl;
    cout << "\t\t  °       M  E  M  O  T  E  S  T         °  " << endl;
    cout << "\t\t °                                        ° " << endl;
    cout << "\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
    sys::msleep(1);
    sys::cls();

    sys::randomize(); // Se inicializa la secuencia de numeros aleatorios.
}

//---------------------------------------------------------------------------
// FUNCION   : void goodbye()
// ACCION    : Muestra una pantalla de despedida del sistema
// PARAMETROS: Nada.
// DEVUELVE  : Nada.
//---------------------------------------------------------------------------
void goodbye()
{
    sys::cls();
    cout << endl;
    cout << "\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
    cout << "\t\t°°                                        °°" << endl;
    cout << "\t\t°°              A  D  I  O  S             °°" << endl;
    cout << "\t\t°°                                        °°" << endl;
    cout << "\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
    sys::msleep(2);

    exit(0);
}

//---------------------------------------------------------------------------
// FUNCION   : void showMenu()
// ACCION    : Muestra el menu principal
// PARAMETROS: Nada
// DEVUELVE  : Nada
//---------------------------------------------------------------------------
void showMenu()
{
    sys::cls();
    cout << endl;
    cout << "\t\t°===================================================°" << endl;
    cout << "\t\t|                     MEMOTEST                      |" << endl;
    cout << "\t\t°===================================================°" << endl;
    cout << "\t\t|                                                   |" << endl;
    cout << "\t\t|                    A - JUGAR                      |" << endl;
    cout << "\t\t|                    B - AYUDA                      |" << endl;
    cout << "\t\t|                    Z - SALIR                      |" << endl;
    cout << "\t\t|                                                   |" << endl;
    cout << "\t\t°===================================================°" << endl;

    takeMainDecision();
}

//---------------------------------------------------------------------------
// FUNCION   : void showSubMenu()
// ACCION    : Muestra el submenu
// PARAMETROS: Nada
// DEVUELVE  : Nada
//---------------------------------------------------------------------------
void showSubMenu()
{
    sys::cls();
    cout << endl;
    cout << "\t\t°===================================================°" << endl;
    cout << "\t\t|                     MEMOTEST                      |" << endl;
    cout << "\t\t°===================================================°" << endl;
    cout << "\t\t|                                                   |" << endl;
    cout << "\t\t|                    A - FACIL                      |" << endl;
    cout << "\t\t|                    B - MEDIO                      |" << endl;
    cout << "\t\t|                    C - DIFICIL                    |" << endl;
    cout << "\t\t|                    Z - SALIR                      |" << endl;
    cout << "\t\t|                                                   |" << endl;
    cout << "\t\t°===================================================°" << endl;

    takeSecondaryDecision();
}

//---------------------------------------------------------------------------
// FUNCION   : void showHelp()
// ACCION    : Muestra la ayuda del memotest
// PARAMETROS: Nada
// DEVUELVE  : Nada
//---------------------------------------------------------------------------
void showHelp()
{
    sys::cls();
    cout << endl;
    cout << "\t\t°===================================================°" << endl;
    cout << "\t\t|                     MEMOTEST                      |" << endl;
    cout << "\t\t°===================================================°" << endl;
    cout << "\t\t|                                                   |" << endl;
    cout << "\t\t|  El juego consiste en un tablero con fichas       |" << endl;
    cout << "\t\t|  dadas vueltas a ser descubieras.                 |" << endl;
    cout << "\t\t|  Segun la dificultad se va a tener un nro de      |" << endl;
    cout << "\t\t|  movimientos predeterminados:                     |" << endl;
    cout << "\t\t|       * FACIL   - tablero 4x4 - 20 movimientos    |" << endl;
    cout << "\t\t|       * MEDIO   - tablero 6x6 - 40 movimientos    |" << endl;
    cout << "\t\t|       * DIFICIL - tablero 8x8 - 60 movimientos    |" << endl;
    cout << "\t\t|                                                   |" << endl;
    cout << "\t\t|  Se debe ingresar una letra para la fila y un     |" << endl;
    cout << "\t\t|  numero para la columna deseada a descubrir.      |" << endl;
    cout << "\t\t|  Luego se debe seleccionar otra ficha y si ambas  |" << endl;
    cout << "\t\t|  coinciden no se descuenta movimiento.            |" << endl;
    cout << "\t\t|                                                   |" << endl;
    cout << "\t\t|  Si te quedas sin movimientos, PERDES.            |" << endl;
    cout << "\t\t|  Si descubris todas las fichas, GANAS.            |" << endl;
    cout << "\t\t|                                                   |" << endl;
    cout << "\t\t|  Como ayuda, existe la tecla FLASH, la cual       |" << endl;
    cout << "\t\t|  descubre el tablero con las respuestas por       |" << endl;
    cout << "\t\t|  unos pocos segundos.                             |" << endl;
    cout << "\t\t|  La misma se puede activar apretando la tecla Z   |" << endl;
    cout << "\t\t|  IMPORTANTE: solo se puede usar una vez por       |" << endl;
    cout << "\t\t|              partida a la tecla flash.            |" << endl;
    cout << "\t\t|                                                   |" << endl;
    cout << "\t\t°===================================================°" << endl;
    cout << endl;
    cin.ignore();
    cout << "\t\tPresione enter para volver al menu." << endl;
    cin.get();

    // Despues de leer la ayuda, tiene que volver al menu.
    showMenu();
}

//---------------------------------------------------------------------------
// FUNCION   : void error(int origin
// ACCION    : Muestra un mensaje de error y redirige a la opcion que sea necesaria.
// PARAMETROS: int origin -> Determina el origen de donde es llamado.
// DEVUELVE  : Nada.
//---------------------------------------------------------------------------
void error(int origin)
{
    cout << "\n\t\tOpcion incorrecta, intente nuevamente.";
    cin.ignore();
    cin.get();
    origin == 1 ? showMenu() : showSubMenu();
}

//---------------------------------------------------------------------------
// FUNCION   : void takeMainDecision()
// ACCION    : Analiza la opcion elegida y realiza una accion segun el caso.
// PARAMETROS: Nada.
// DEVUELVE  : La opcion elegida.
//---------------------------------------------------------------------------
void takeMainDecision()
{
    char _option[1];
    cout << "\t\tIngrese una opcion: ";
    cin >> _option;

    if (strlen(_option) > 1)
        error(1);

    // Se toma la decision elegida.
    if (_option[0] == 'a' || _option[0] == 'A')
        showSubMenu();
    else if (_option[0] == 'b' || _option[0] == 'B')
        showHelp();
    else if (_option[0] == 'z' || _option[0] == 'Z')
        goodbye();
    else
        error(1);
}

//---------------------------------------------------------------------------
// FUNCION   : void takeSecondaryDecision()
// ACCION    : Analiza la opcion elegida y toma la decision que sea correspondiente.
// PARAMETROS: Nada
// DEVUELVE  : Nada.
//---------------------------------------------------------------------------
void takeSecondaryDecision()
{
    char _option[1];
    cout << "\t\tIngrese una opcion: ";
    cin >> _option;

    if (strlen(_option) > 1)
        error(2);

    int aux;
    bool mustShow = true, mustStop = true,  endOfGame = false, getOut = false;

    // Se configura el juego en base a la decisión del usuario.
    if (_option[0] == 'a' || _option[0] == 'A')
        game::configurateGame(1);
    else if (_option[0] == 'b' || _option[0] == 'B')
        game::configurateGame(2);
    else if (_option[0] == 'c' || _option[0] == 'C')
        game::configurateGame(3);
    else if (_option[0] == 'z' || _option[0] == 'Z')
        goodbye();
    else
        error(2); // Si es incorrecta la decision, muestra Error.

    game::card arrayCards[game::maxBound][game::maxBound];
    game::distribute(arrayCards);

    while (game::turn > 0 && !endOfGame) // Mientras que tenga turnos y no haya finalizado el juego..
    {
        aux = game::turn; // Guardo el turno en Auxiliar por si ejecuta Flash.
        game::turn = game::play(arrayCards, mustShow, getOut);

        if (getOut) // Si decide salir, corto el while y lo llevo al menú principal.
            break;

        if (game::turn == -1) // Si ejecuta Flash se convierte en -1.
        {
            mustShow = false; // Ya no se debe mostrar mas el Flash.
            mustStop = false; // No debe detenerse a esperar Enter.
            game::turn = aux; // Asigno el turno despues de un Flash.
        }

        endOfGame = game::gameOver(arrayCards);

        if (mustStop) // Espera y muestra los carteles correspondientes.
            sys::pause();

        mustStop = true; // La proxima vuelta debe esperar al Enter.
    }

    showMenu(); // Muestro el menú principal.
}
}
//=============================================================================
//                            FIN DE ARCHIVO
//#############################################################################
