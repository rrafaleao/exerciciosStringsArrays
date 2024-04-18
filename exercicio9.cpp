#include <iostream>
using namespace std;

int main(){
    string animais[10] = {"Abelha", "Coelho","Gato","Hipopotamo","Morcego","Ovelha","Porco","Rato","Tamanduá","Urso"};
    char caractere;
    cout <<"Digite um caractere: " << endl;
    cin >> caractere;

    switch (caractere) {
    case 'a':
    cout << "Abelha" << endl;
    break;

    case 'c':
    cout <<"Coelho" << endl;
    break;

    case 'g':
    cout <<"Gato" << endl;
    break;

    case 'h':
    cout <<"Hipopotamo" << endl;
    break;

    case 'm':
    cout <<"Morcego" << endl;
    break;

    case 'o':
    cout <<"Ovelha" << endl;
    break;

    case 'p':
    cout <<"Porco" << endl;
    break;
    
    case 'r':
    cout <<"Rato" << endl;
    break;

    case 't':
    cout <<"Tamanduá" << endl;
    break;

    case 'u':
    cout <<"Urso" << endl;
    break;

    }

}