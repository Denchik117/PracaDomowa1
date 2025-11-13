#include <iostream>

using namespace std;

int silnia(int n){
	if(n <= 0) return 1;
	else return n*silnia(n-1);
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
	cout << "1. Silnia" << endl;
	if(wyjscie == 1) cout << a << "! = " << silnia(a) << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
