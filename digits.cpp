#include "digits.h"
#include <iostream>
#include <windows.h>

extern int X;
extern int Y;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPos;

void setXY(int x, int y)
{
    CursorPos.X = x;
    CursorPos.Y = y;
    SetConsoleCursorPosition(hConsole, CursorPos);
}

void setDigits(int time)
{
	// first digit
	if (time / 10 == 0) _0();
	if (time / 10 == 1) _1();
	if (time / 10 == 2) _2();
	if (time / 10 == 3) _3();
	if (time / 10 == 4) _4();
	if (time / 10 == 5) _5();
	if (time / 10 == 6) _6();
	
	// second digit
	if (time % 10 == 0) _0();
	if (time % 10 == 1) _1();
	if (time % 10 == 2) _2();
	if (time % 10 == 3) _3();
	if (time % 10 == 4) _4();
	if (time % 10 == 5) _5();
	if (time % 10 == 6) _6();
	if (time % 10 == 7) _7();
	if (time % 10 == 8) _8();
	if (time % 10 == 9) _9();
}

void _0()
{
	setXY(X, Y + 0);  std::cout << "  .oooo.  ";
	setXY(X, Y + 1);  std::cout << " d8P'`Y8b ";
	setXY(X, Y + 2);  std::cout << "888    888";
	setXY(X, Y + 3);  std::cout << "888    888";
	setXY(X, Y + 4);  std::cout << "888    888";
	setXY(X, Y + 5);  std::cout << "`88b  d88'";
	setXY(X, Y + 6);  std::cout << " `Y8bd8P' ";
		 
	X += 12;
}

void _1()
{
	setXY(X, Y + 0);  std::cout << "  .o ";
	setXY(X, Y + 1);  std::cout << "o888 ";
	setXY(X, Y + 2);  std::cout << " 888 ";
	setXY(X, Y + 3);  std::cout << " 888 ";
	setXY(X, Y + 4);  std::cout << " 888 ";
	setXY(X, Y + 5);  std::cout << " 888 ";
	setXY(X, Y + 6);  std::cout << "o888o";
		 
	X += 7;
}

void _2()
{
	setXY(X, Y + 0);  std::cout << "  .oooo.  ";
	setXY(X, Y + 1);  std::cout << ".dP\"\"Y88b ";
	setXY(X, Y + 2);  std::cout << "      ]8P'";
	setXY(X, Y + 3);  std::cout << "    .d8P' ";
	setXY(X, Y + 4);  std::cout << "  .dP'    ";
	setXY(X, Y + 5);  std::cout << ".oP     .o";
	setXY(X, Y + 6);  std::cout << "8888888888";
		 
	X += 12;
}

void _3()
{
	setXY(X, Y + 0);  std::cout << "  .oooo.  ";
	setXY(X, Y + 1);  std::cout << ".dP\"\"Y88b ";
	setXY(X, Y + 2);  std::cout << "      ]8P'";
	setXY(X, Y + 3);  std::cout << "    <88b. ";
	setXY(X, Y + 4);  std::cout << "     `88b.";
	setXY(X, Y + 5);  std::cout << "o.   .88P ";
	setXY(X, Y + 6);  std::cout << "`8bd88P'  ";
		 
	X += 12;
}

void _4()
{
	setXY(X, Y + 0);  std::cout << "      .o  ";
	setXY(X, Y + 1);  std::cout << "    .d88  ";
	setXY(X, Y + 2);  std::cout << "  .d'888  ";
	setXY(X, Y + 3);  std::cout << ".d'  888  ";
	setXY(X, Y + 4);  std::cout << "88ooo888oo";
	setXY(X, Y + 5);  std::cout << "     888  ";
	setXY(X, Y + 6);  std::cout << "    o888o ";
		 
	X += 12;
}

void _5()
{
	setXY(X, Y + 0);  std::cout << "  oooooooo";
	setXY(X, Y + 1);  std::cout << " dP\"\"\"\"\"\"\"";
	setXY(X, Y + 2);  std::cout << "d88888b.  ";
	setXY(X, Y + 3);  std::cout << "    `Y88b ";
	setXY(X, Y + 4);  std::cout << "      ]88 ";
	setXY(X, Y + 5);  std::cout << "o.   .88P ";
	setXY(X, Y + 6);  std::cout << "`8bd88P'  ";
		 
	X += 12;
}

void _6()
{
	setXY(X, Y + 0);  std::cout << "   .ooo   ";
	setXY(X, Y + 1);  std::cout << "  .88'    ";
	setXY(X, Y + 2);  std::cout << " d88'     ";
	setXY(X, Y + 3);  std::cout << "d888P\"Ybo.";
	setXY(X, Y + 4);  std::cout << "Y88[   ]88";
	setXY(X, Y + 5);  std::cout << "`Y88   88P";
	setXY(X, Y + 6);  std::cout << " `88bod8' ";
		 
	X += 12;
}

void _7()
{
	setXY(X, Y + 0);  std::cout << " ooooooooo";
	setXY(X, Y + 1);  std::cout << "d\"\"\"\"\"\"\"8'";
	setXY(X, Y + 2);  std::cout << "      .8' ";
	setXY(X, Y + 3);  std::cout << "     .8'  ";
	setXY(X, Y + 4);  std::cout << "    .8'   ";
	setXY(X, Y + 5);  std::cout << "   .8'    ";
	setXY(X, Y + 6);  std::cout << "  .8'     ";
		 
	X += 12;
}

void _8()
{
	setXY(X, Y + 0);  std::cout << " .ooooo.  ";
	setXY(X, Y + 1);  std::cout << "d88'   `8.";
	setXY(X, Y + 2);  std::cout << "Y88..  .8'";
	setXY(X, Y + 3);  std::cout << " `88888b. ";
	setXY(X, Y + 4);  std::cout << ".8'  ``88b";
	setXY(X, Y + 5);  std::cout << "`8.   .88P";
	setXY(X, Y + 6);  std::cout << " `boood8' ";
		 
	X += 12;
}

void _9()
{
	setXY(X, Y + 0);  std::cout << " .ooooo.  ";
	setXY(X, Y + 1);  std::cout << "888' `Y88.";
	setXY(X, Y + 2);  std::cout << "888    888";
	setXY(X, Y + 3);  std::cout << " `Vbood888";
	setXY(X, Y + 4);  std::cout << "      888'";
	setXY(X, Y + 5);  std::cout << "    .88P' ";
	setXY(X, Y + 6);  std::cout << "  .oP'    ";
		 
	X += 12;
}

void colon()
{
	setXY(X, Y + 0);  std::cout << "   ";
	setXY(X, Y + 1);  std::cout << "o8o";
	setXY(X, Y + 2);  std::cout << "`\"'";
	setXY(X, Y + 3);  std::cout << "   ";
	setXY(X, Y + 4);  std::cout << "o8o";
	setXY(X, Y + 5);  std::cout << "`\"'";
	setXY(X, Y + 6);  std::cout << "   ";
		 
	X += 5;
}
