#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int BOARD_SIZE = 100;
const int NUM_SNAKES = 6;
const int NUM_LADDERS = 6;

int snakes[NUM_SNAKES][2] = {
    {16, 6}, {47, 26}, {49, 11}, {56, 53}, {62, 19}, {64, 60}
};

int ladders[NUM_LADDERS][2] = {
    {4, 14}, {9, 31}, {20, 38}, {28, 84}, {40, 59}, {63, 81}
};

void printBoard(int player1, int player2) {
    for (int i = BOARD_SIZE; i >= 1; i--) {
        if (i == player1 && i == player2) {
            cout << "X ";
        } else if (i == player1) {
            cout << "1 ";
        } else if (i == player2) {
            cout << "2 ";
        } else {
            cout << ". ";
        }

        if (i % 10 == 1) {
            cout << endl;
        }
    }
    cout << endl;
}

int rollDice() {
    return rand() % 6 + 1;
}

int checkSnakesAndLadders(int pos) {
    for (int i = 0; i < NUM_SNAKES; i++) {
        if (pos == snakes[i][0]) {
            cout << "Oops! Snake at " << pos << ", go down to " << snakes[i][1] << endl;
            return snakes[i][1];
        }
    }

    for (int i = 0; i < NUM_LADDERS; i++) {
        if (pos == ladders[i][0]) {
            cout << "Yay! Ladder at " << pos << ", go up to " << ladders[i][1] << endl;
            return ladders[i][1];
        }
    }

    return pos;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int player1 = 1;
    int player2 = 1;

    while (player1 < BOARD_SIZE && player2 < BOARD_SIZE) {
        cout << "Player 1's turn. Press Enter to roll the dice...";
        cin.get();

        int diceRoll = rollDice();
        player1 += diceRoll;
        player1 = checkSnakesAndLadders(player1);

        if (player1 > BOARD_SIZE) {
            player1 = BOARD_SIZE;
        }

        printBoard(player1, player2);

        if (player1 == BOARD_SIZE) {
            cout << "Player 1 wins!" << endl;
            break;
        }

        cout << "Player 2's turn. Press Enter to roll the dice...";
        cin.get();

        diceRoll = rollDice();
        player2 += diceRoll;
        player2 = checkSnakesAndLadders(player2);

        if (player2 > BOARD_SIZE) {
            player2 = BOARD_SIZE;
        }

        printBoard(player1, player2);

        if (player2 == BOARD_SIZE) {
            cout << "Player 2 wins!" << endl;
            break;
        }
    }

    return 0;
}