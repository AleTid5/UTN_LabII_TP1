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
#include "GameController.h"     // Libreria controladora del juego.
#include "string.h"             // Libreria de manejo de cadenas.

using namespace std;

namespace _system
{
//***************************************************************************
// DEFINICION DE LOS PROTOTIPOS A UTILIZAR EN EL SISTEMA
//===========================================================================
void takeSecondaryDecision();
void takeMainDecision();
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
    cout << "\t\tOpcion incorrecta, intente nuevamente.";
    cin.ignore();
    cin.get();
    origin == 1 ? showMenu() : showSubMenu();
}

//---------------------------------------------------------------------------
// FUNCION   : void takeSecondaryDecision()
// ACCION    : Analiza la opcion elegida y toma la decision que sea correspondiente.
// PARAMETROS: Nada
// DEVUELVE  : Nada.
//---------------------------------------------------------------------------
void takeSecondaryDecision()
{
    bool getOut=false;

    while (!getOut)
    {
        char _option[1];
        int turn = 20, aux;
        bool mustShow = true, mustStop = false,  endOfGame = false;
        cout << "\t\tIngrese una opcion: ";
        cin >> _option;

        if (strlen(_option) > 1)
            error(2);

        switch (_option[0])
        {
        case 'a':
        case 'A':
        {
            game::boundSize = 4;
        }
        break;

        case 'b':
        case 'B':
        {
            game::boundSize = 6;
        }
        break;

        case 'c':
        case 'C':
        {
            game::boundSize = 8;
        }
        break;

        case 'z':
        case 'Z':
            goodbye();
            break;

        default:
            error(2);
        }

        game::card arrayCards[game::maxBound][game::maxBound];
        game::distribute(arrayCards);

        while (turn > 0 && !endOfGame)
        {
            sys::cls();
            aux = turn;
            turn = play(arrayCards, turn, mustShow, &getOut);

            if (turn == -1)
            {
                mustShow = false;
                mustStop=true;
                turn = aux;
            }

            endOfGame = game::gameOver(arrayCards, turn);

            if (getOut)
                break;

            if (! mustStop)
                sys::pause();

            mustStop = false;
        }

        sys::cls();
        showMenu();
    }
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

    switch (_option[0])
    {
    case 'a':
    case 'A':
        showSubMenu();
        break;

    case 'b':
    case 'B':
        showHelp();
        break;

    case 'z':
    case 'Z':
        goodbye();
        break;

    default:
        error(1);
        break;
    }
}
}
//=============================================================================
//                            FIN DE ARCHIVO
//#############################################################################
