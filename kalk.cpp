#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
int main(){

    float x,y;
    char znak;
    for(;;){
    cout<<"podaj liczbe pierwsza"<<endl;
    cin>>x;
    cout<<"podaj znak"<<endl;
    cin>>znak;
    cout<<"podaj liczbe druga"<<endl;
    cin>>y;

        switch(znak) {
            case '+':
                cout << "Wynik dodawania: " << x + y << endl;
                break;
            case '-':
                cout << "Wynik odejmowania: " << x - y << endl;
                break;
            case '/'
                cout<<"Wynik dzielenia" <<x / y<< endl;
            case '*'
                cout<<"Wynik mnozenia"<< x* y<<endl;
            default;
            cout<<"Nieprawidlowy znak"
            break;
        }
}
}
return 0;