#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Podaj koniec przedziału: ";
    cin >> x;

    for (int i = 2; i <= x; i++) {
        bool is_prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            cout << i << endl;
        }
    }

    return 0;
}
