#include <iostream>
using namespace std;

//Declare um array de caracteres cidades com 15 posições. 
//Leia os nomes de 15 cidades do usuário usando cin e armazene-as no array. 
//Ordene as cidades em ordem alfabética e imprima a lista ordenada usando cout.

int main(){
    char cidades[15][20];
    cout <<"Digite o nome uma Cidade: " << endl;
    cin >> cidades[0];
    cout <<"Digite o nome uma Cidade: " << endl;
    cin >> cidades[1];
    cout <<"Digite o nome uma Cidade: " << endl;
    cin >> cidades[2];
    cout <<"Digite o nome uma Cidade: " << endl;
    cin >> cidades[3];
    cout <<"Digite o nome uma Cidade: " << endl;
    cin >> cidades[4];
    cout <<"Digite o nome uma Cidade: " << endl;
    cin >> cidades[5];
    cout <<"Digite o nome uma Cidade: " << endl;
    cin >> cidades[6];
    cout <<"Digite o nome uma Cidade: " << endl;
    cin >> cidades[7];
    cout <<"Digite o nome uma Cidade: " << endl;
    cin >> cidades[8];
    cout <<"Digite o nome uma Cidade: " << endl;
    cin >> cidades[9];
    cout <<"Digite o nome uma Cidade: " << endl;
    cin >> cidades[10];
    cout <<"Digite o nome uma Cidade: " << endl;
    cin >> cidades[11];
    cout <<"Digite o nome uma Cidade: " << endl;
    cin >> cidades[12];
    cout <<"Digite o nome uma Cidade: " << endl;
    cin >> cidades[13];
    cout <<"Digite o nome uma Cidade: " << endl;
    cin >> cidades[14];

    if (cidades[0] > cidades[1]) {
        cout << cidades[0] << cidades[1] << endl;
    }
    else{
        cout << cidades[1]<< ", " << cidades[0] << endl;
    }
    return false;
}