#include <iostream>

using namespace std;

bool czy_pierwsza(int n) {
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
	cout << "1. Sprawdzenie czy liczba jest pierwsza." << endl;
	if(wyjscie == 1){
		if(czyPierwsza(a)) cout << "Licba " << a << " jest liczba pierwsza." << endl;
		else cout << "Liczba " << a << " nie jest liczba pierwsza" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
