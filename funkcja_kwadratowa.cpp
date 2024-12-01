#include <iostream>
#include <math.h>

/*
1. Wylicza miejsce zerowe funkcji
2. Wyświetla czy ramiona są do góry i dołu
3. Wyświetla zbiór wartości funkcji
4. Wyświetla dla jakich argumentów wartość jest dodatnia i ujemna
5. Punkty przecięcia z osią x i y 
6. Wylicza wartość dla danego argumentu
7. Wyświetla postać kanoniczną
8. Wyświetla postać iloczynową



*/
using namespace std;
int main()
{
    int a,b,c;
    float x1, x2, x0;
    
    cout << "Podaj wartość a: ";
    cin >> a;
    cout << "Podaj wartość b: ";
    cin >> b;
    cout << "Podaj wartość c: ";
    cin >> c;
    
    
    //1
    float delta = (b*b) - (4*a*c);
    if(delta > 0){
        x1 = (-b -sqrt(delta)) / (2*a);
        x2 = (-b +sqrt(delta)) / (2*a);
        cout << "Miejsca zerowe funkcji: " << x1 << " i " << x2 << endl;
    }
    else if(delta == 0){
        x0 = (-b) / (2*a);
        cout << "Miejsce zerowe funkcji: " << x0 << endl;
    }
    else{
        cout << "Brak miejsc zerowych" << endl;
    }
    
    //2 
    bool wgore = true;
    if(a>0){
        cout << "Ramiona ułożone w górę" << endl;
        wgore = true;
    }
    else{
        cout << "Ramiona ułożone w dół" << endl;
        wgore = false;
    }
    
    //3 
    float q = (delta)/(4*a);
    if(wgore == true){
        cout << "Zbiór wartości funkcji: [" << q << ";∞)" << endl;
    }
    else{
        cout << "Zbiór wartości funkcji: (∞;" << q << "]" << endl;
    }
    
    //4 
    if(delta > 0){
        cout << "Wartości dodatnie: x należy do (-∞;" << x1 << ") i (" << x2 << ";∞)" << endl;
        cout << "Wartości ujemne: x należy do (" << x1 << ";" << x2 << ")" << endl;
    }
    else if (delta ==0){
        cout << "Wartości dodatnie: dla wszystkich x!=" << x0 << endl;
        cout << "Funkcja nigdy nie jest ujemna" << endl;
    }
    else{
        cout << "Wartości dodatnie: dla wszystkich x" << endl;
        cout << "Funkcja nigdy nie jest ujemna" << endl;
    }
    
    //5
    cout << "Punkt przecięcia z osią Y: (0," << c << ")" << endl;
    if(delta > 0){
        cout << "Punktu przecięcia z osią X: (" << x1 <<";0) i (" << x2 << ";0)"<< endl;
    }
    else if(delta == 0){
        cout << "Punkt przecięcia z osią X: (" << x0 << ",0)" << endl;
    }
    else{
        cout << "Funkcja nie przecina osi OX" << endl;
    }
    //6
     float arg;
     cout << "Podaj argument: " << endl;
     cin >> arg;
     float war = a*(arg*arg) + b*arg + c;
    cout << war << endl;
    return 0;
}