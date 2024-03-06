#include <iostream>
using namespace std;

class TicTacToe {
private:
    char board[10], mark;
    int player, choice;

public:
    TicTacToe() {
        for (int i = 1; i < 10; ++i) {
            board[i] = '0' + i;
        }
        player = 1;
    }

    int checkWin() {
        if ((board[1] == board[2] && board[2] == board[3]) ||
            (board[4] == board[5] && board[5] == board[6]) ||
            (board[7] == board[8] && board[8] == board[9]) ||
            (board[1] == board[4] && board[4] == board[7]) ||
            (board[2] == board[5] && board[5] == board[8]) ||
            (board[3] == board[6] && board[6] == board[9]) ||
            (board[1] == board[5] && board[5] == board[9]) ||
            (board[3] == board[5] && board[5] == board[7])) {
            return 1;
        }
        else if (board[1] != '1' && board[2] != '2' && board[3] != '3' &&
                 board[4] != '4' && board[5] != '5' && board[6] != '6' &&
                 board[7] != '7' && board[8] != '8' && board[9] != '9') {
            return 0;
        }
        else {
            return -1;
        }
    }

    void drawBoard() {
        cout << "    Tic Tac Toe Game\n";
        cout << "Player 1(X) - Player 2(O)\n\n";

        cout << "     |     |     " << endl;
        cout << "  " << board[1] << "  |  " << board[2] << "  |  " << board[3] << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << board[4] << "  |  " << board[5] << "  |  " << board[6] << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << board[7] << "  |  " << board[8] << "  |  " << board[9] << endl;
        cout << "     |     |     " << endl;
    }

    void startGame() {
        int i;
        do {
            drawBoard();
            player = (player % 2) ? 1 : 2;
            cout << "Player " << player << ", enter the number : ";
            cin >> choice;

            mark = (player == 1) ? 'X' : 'O';

            if (choice >= 1 && choice <= 9 && board[choice] == '0' + choice) {
                board[choice] = mark;
            }
            else {
                cout << "INVALID MOVE!\n";
                continue;
            }

            i = checkWin();
            player++;
        } while (i == -1);

        drawBoard();

        if (i == 1) {
            cout << "\aCONGRATULATIONS! PLAYER " << (player == 1 ? 2 : 1) << " WINS!\n";
        }
        else {
            cout << "\aGAME DRAW!\n";
        }
    }
};

int main() {
    TicTacToe game;
    game.startGame();
    return 0;
}


