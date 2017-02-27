#include <iostream>

using namespace std;
enum GameResult {WIN = 2, LOSE = 1, TIE, CANCEL};
int main() {
    GameResult result;
    enum GameResult omit = CANCEL;
    for (int count = WIN; count <= CANCEL; count++) {
        int result = GameResult(count);
        if (result == omit) {
            cout << "The game is cancelled." << endl;
        } else {
            cout << "The game is played";
            if (result == WIN) cout << "and we won!";
            if (result == LOSE) cout << "and we lost!";
            cout << endl;
        }
    }
}

