#include <iostream>

using namespace std;
// inkremetacja plus pętla
int main() {
    int liczba;
    string imie;

    cout << "podaj imie:";
    cin >> imie;
    cout << "Podaj liczbę ";
    cin >> liczba;
    for (int i = 1; i <= liczba; i++) {
        cout << i << ". " << imie << endl;
    }
    return 0;
}
