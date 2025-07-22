#include <iostream>
using namespace std;

char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
char currentmarker;
int currentplayer;

void drawboard() 
{
    cout << "-------------\n";
    for (int i = 0; i < 3; i++) 
    {
        cout << "| ";
        for (int j = 0; j < 3; j++) 
        {
            cout << board[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}

bool placemarker(int slot) 
{
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') 
    {
        board[row][col] = currentmarker;
        return true; } 
        else 
    {
        return false;
    }
}

int winner() 
{
    for (int i = 0; i < 3; i++) 
        {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) || 
            (board[0][i] == board[1][i] && board[1][i] == board[2][i])) {
            return currentplayer;
        }
    }
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0])) 
    {
        return currentplayer;
    }

    return 0;
}

void swapplayerandmarker() 
{
    if (currentmarker == 'X') 
    {
        currentmarker = 'O';
        currentplayer = 2;
    } else {
        currentmarker = 'X';
        currentplayer = 1;
    }
}

int main() 
{
    cout << "-------------------------------\n";
    cout << "        Tic Tac Toe Game       \n";
    cout << "-------------------------------\n";

    currentmarker = 'X';
    currentplayer = 1;

    drawboard();

    int slot;
    int moves = 0;

    while (true) 
    {
        cout << "Player " << currentplayer << " [" << currentmarker << "], enter your slot (1-9): ";
        cin >> slot;

        if (slot < 1 || slot > 9) 
        {
            cout << "Invalid slot! Try again.\n";
            continue;
        }

        if (!placemarker(slot)) 
        {
            cout << "Slot already taken! Try again.\n";
            continue;
        }

        drawboard();
        moves++;

        if (winner() == currentplayer)     
        {
            cout << "Congratulations! Player " << currentplayer << " wins!\n";
            break;
        }

        if (moves == 9) {
            cout << "It's a draw!\n";
            break;
        }

        swapplayerandmarker();
    }

    return 0;
}