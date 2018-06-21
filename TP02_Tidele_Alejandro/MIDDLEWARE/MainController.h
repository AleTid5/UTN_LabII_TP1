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
void swSubMenu();
void swMenu();
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
// FUNCION   : void byebye()
// ACCION    : Muestra una pantalla de despedida del sistema
// PARAMETROS: Nada.
// DEVUELVE  : Nada.
//---------------------------------------------------------------------------
void goodbye()
{
    sys::cls();
    cout << endl;
    cout << " °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
    cout << " °°                                        °°" << endl;
    cout << " °°             A  D  I  O  S              °°" << endl;
    cout << " °°                                        °°" << endl;
    cout << " °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
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
    cout << "°===================================================°" << endl;
    cout << "|                     MEMOTEST                      |" << endl;
    cout << "°===================================================°" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                A - JUGAR                          |" << endl;
    cout << "|                B - AYUDA                          |" << endl;
    cout << "|                Z - SALIR                          |" << endl;
    cout << "|                                                   |" << endl;
    cout << "°===================================================°" << endl;

    swMenu();
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
    cout << "°===================================================°" << endl;
    cout << "|                     MEMOTEST                      |" << endl;
    cout << "°===================================================°" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                A - FACIL                          |" << endl;
    cout << "|                B - MEDIO                          |" << endl;
    cout << "|                C - DIFICIL                        |" << endl;
    cout << "|                Z - SALIR                          |" << endl;
    cout << "|                                                   |" << endl;
    cout << "°===================================================°" << endl;

    swSubMenu();
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
    cout << "°===================================================°" << endl;
    cout << "|                     MEMOTEST                      |" << endl;
    cout << "°===================================================°" << endl;
    cout << "|                                                   |" << endl;
    cout << "|  El juego consiste en un tablero con fichas       |" << endl;
    cout << "|  dadas vueltas a ser descubieras.                 |" << endl;
    cout << "|  Segun la dificultad se va a tener un nro de      |" << endl;
    cout << "|  movimientos predeterminados:                     |" << endl;
    cout << "|       * FACIL   - tablero 4x4 - 20 movimientos    |" << endl;
    cout << "|       * MEDIO   - tablero 6x6 - 40 movimientos    |" << endl;
    cout << "|       * DIFICIL - tablero 8x8 - 60 movimientos    |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|  Se debe ingresar una letra para la fila y un     |" << endl;
    cout << "|  numero para la columna deseada a descubrir.      |" << endl;
    cout << "|  Luego se debe seleccionar otra ficha y si ambas  |" << endl;
    cout << "|  coinciden no se descuenta movimiento.            |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|  Si te quedas sin movimientos, PERDES.            |" << endl;
    cout << "|  Si descubris todas las fichas, GANAS.            |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|  Como ayuda, existe la tecla FLASH, la cual       |" << endl;
    cout << "|  descubre el tablero con las respuestas por       |" << endl;
    cout << "|  unos pocos segundos.                             |" << endl;
    cout << "|  La misma se puede activar apretando la tecla Z   |" << endl;
    cout << "|  IMPORTANTE: solo se puede usar una vez por       |" << endl;
    cout << "|              partida a la tecla flash.            |" << endl;
    cout << "|                                                   |" << endl;
    cout << "°===================================================°" << endl;
    cout << endl;
    cin.ignore();
    cout << "Presione enter para volver al menu." << endl;
    cin.get();

    // Despues de leer la ayuda, tiene que volver al menu.
    showMenu();
}

void error(int origin)
{
    cout << "Opcion incorrecta, intente nuevamente.";
    cin.ignore();
    cin.get();
    origin == 1 ? showMenu() : showSubMenu();
}


//---------------------------------------------------------------------------
// FUNCION   : void swSubMenu()
// ACCION    : Analiza la opcion elegida y toma la decision que sea correspondiente.
// PARAMETROS: Nada
// DEVUELVE  : Nada.
//---------------------------------------------------------------------------
void swSubMenu()
{
    bool getOut=false;

    while (!getOut)
    {
        char op;
        int turn = 20, aux;
        bool mustShow = true, mustStop = false,  endOfGame = false;
        cout << "Ingrese una opcion: ";
        cin >> op;
        cin.ignore();

        switch (op)
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
// FUNCION   : void swMenu()
// ACCION    : analiza la opcion elegida y realiza una accion segun el caso.
// PARAMETROS: nada.
// DEVUELVE  : la opcion elegida.
//---------------------------------------------------------------------------
void swMenu()
{
    char op;
    cout << "Ingrese una opcion: ";
    cin >> op;

    switch (op)
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
