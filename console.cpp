#include "console.h"
#include <Windows.h>
#include <iostream>

void ConsoleCenterWindow(int consoleWidth, int consoleHeight)
{
    HWND consoleWindow = GetConsoleWindow();

    RECT consoleRect;
    GetWindowRect(consoleWindow, &consoleRect);

    int consoleWindowWidth = consoleRect.right - consoleRect.left;
    int consoleWindowHeight = consoleRect.bottom - consoleRect.top;

    int screenWidth = GetSystemMetrics(SM_CXSCREEN);
    int screenHeight = GetSystemMetrics(SM_CYSCREEN);

    int windowLeft = (screenWidth - consoleWidth) / 2;
    int windowTop = (screenHeight - consoleHeight) / 2;

    MoveWindow(consoleWindow, windowLeft, windowTop, consoleWidth, consoleHeight, TRUE);
}

void ConsoleCursorVisibility(bool visible)
{
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

    cursorInfo.bVisible = visible;

    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void SetColor(std::string color)
{
    if (color == "black") {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
    } else if (color == "blue") {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
    } else if (color == "green") {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
    } else if (color == "cyan") {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_BLUE);
    } else if (color == "red") {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
    } else if (color == "magenta") {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE);
    } else if (color == "yellow") {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
    } else if (color == "white") {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    } else {
        std::cerr << "Error: Invalid color specified." << std::endl;
    }
}
