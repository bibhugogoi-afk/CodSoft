#include <iostream>
using namespace std;

char board[3][3];
char currentPlayer;

void initBoard()
{
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            board[i][j]=' ';
}

void disBoard()
{
    cout << "\n";
    for(int i=0;i<3;i++)
    {
        cout << " ";
        for(int j=0;j<3;j++)
        {
            cout << board[i][j];
            if(j<2) cout << " | ";
        }
        cout << "\n";
        if(i<2) cout << "---|---|---\n";
    }
}

bool ckWin()
{
    for(int i=0;i<3;i++)
    {
        if(board[i][0]==currentPlayer && board[i][1]==currentPlayer && board[i][2]==currentPlayer)
            return true;
        if(board[0][i]==currentPlayer && board[1][i]==currentPlayer && board[2][i]==currentPlayer)
            return true;
    }
    if(board[0][0]==currentPlayer && board[1][1]==currentPlayer && board[2][2]==currentPlayer)
        return true;
    if(board[0][2]==currentPlayer && board[1][1]==currentPlayer && board[2][0]==currentPlayer)
        return true;

    return false;
}

bool ckDraw()
{
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(board[i][j]==' ')
                return false;
    return true;
}

void switchPlayer()
{
    currentPlayer = (currentPlayer=='X') ? 'O' : 'X';
}

int main()
{
    char playAgain;

    do
    {
        initBoard();
        currentPlayer = 'X';
        bool gameOver = false;

        while(!gameOver)
        {
            disBoard();
            int row, col;

            cout << "\nPlayer " << currentPlayer << " enter row and column (1-3): ";
            cin >> row >> col;

            row--; col--;

            if(row<0 || row>2 || col<0 || col>2 || board[row][col]!=' ')
            {
                cout << "move not valid dummy! Try again.\n";
                continue;
            }

            board[row][col] = currentPlayer;

            if(ckWin())
            {
                disBoard();
                cout << "\nPlayer " << currentPlayer << " wow finally you won!\n";
                gameOver = true;
            }
            else if(ckDraw())
            {
                disBoard();
                cout << "\nYou got a draw what a noob!\n";
                gameOver = true;
            }
            else
            {
                switchPlayer();
            }
        }

        cout << "\nReady to lose I mean Play again? (y/n): ";
        cin >> playAgain;

    } while(playAgain=='y' || playAgain=='Y');

    return 0;
}
