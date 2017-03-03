#include <iostream>

using namespace std;

void draw (int line, int i) {
    int state = line - i;
    int key = 0;
    int starCount = 0;
    while (starCount < i * 2 + 1) {
        if (key++ < state-1) {
            cout << ' ';
        } else {
            cout << '*';
            starCount++;
        }
    }
    cout << '\n';
}

int main() {
    int line;
    cin >> line;
    int i = 0;
    for (; i < line; i++) {
        draw(line, i);
    }
    i -= 2;
    for (; i >= 0; i-- ) {
        draw(line, i);
    }
}

