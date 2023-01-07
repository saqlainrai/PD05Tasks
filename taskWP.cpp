#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void erasePacman();
void printPacman();

int pacmanX = 3, pacmanY = 3;

main()
{
    system("cls");
    printMaze();

    bool gameRunning = true;

    while (gameRunning)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextlocation = getCharAtxy(pacmanX - 1, pacmanY);
            if (nextlocation == ' ')
            {
                erasePacman();
                pacmanX = pacmanX - 1;
                printPacman();
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextlocation = getCharAtxy(pacmanX + 1, pacmanY);
            if (nextlocation == ' ')
            {
                erasePacman();
                pacmanX = pacmanX + 1;
                printPacman();
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextlocation = getCharAtxy(pacmanX, pacmanY - 1);
            if (nextlocation == ' ')
            {
                erasePacman();
                pacmanY = pacmanY - 1;
                printPacman();
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextlocation = getCharAtxy(pacmanX, pacmanY + 1);
            if (nextlocation == ' ')
            {
                erasePacman();
                pacmanY = pacmanY + 1;
                printPacman();
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }
        Sleep(200);
    }
}

void printMaze()
{
    cout << "%%%%%%%%%%" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%%%%%%%%%%" << endl;

    cout << endl;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void erasePacman()
{
    gotoxy(pacmanX, pacmanY);
    cout << " ";
}
void printPacman()
{
    gotoxy(pacmanX, pacmanY);
    cout << "P";
}