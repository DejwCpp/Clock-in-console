#include <iostream>
#include <ctime>
#include <windows.h>
#include "console.h"
#include "digits.h"
using namespace std;

int marginLeft = 5;
int marginTop  = 2;

int X = marginLeft;
int Y = marginTop;

int main()
{
	system("title clock");
	
    ConsoleCenterWindow(750, 215);
    ConsoleCursorVisibility(false);
    SetColor("green");

    time_t now;

    struct tm nowLocal;

    now = time(NULL);
    nowLocal = *localtime(&now);

    while (now)
    {
        int hour = nowLocal.tm_hour;
        int min  = nowLocal.tm_min;
        int sec  = nowLocal.tm_sec;

        setDigits(hour); colon(); setDigits(min); colon(); setDigits(sec);

        Sleep(1000);
        
        now = time(NULL);
        nowLocal = *localtime(&now);
        
        system("CLS");

        X = marginLeft;
    	Y = marginTop;
    	
        setXY(X, Y);
    }
}
