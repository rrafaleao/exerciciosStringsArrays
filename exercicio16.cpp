#include <iostream> 
using namespace std;

//Declare um array de caracteres nomes com 10 posições e um array de inteiros idades com 10 posições.
//Leia os nomes e idades de 10 pessoas usando cin e armazene-os nos arrays. 
//Imprima a lista de nomes e idades em colunas usando cout.

int main(){
    char nomes[10][20];
    int idades[10];

    cout <<"Digite um nome: ";
    cin >> nomes[0];
    cout <<"Digite uma idade: ";
    cin >> idades[0];
    cout <<"Digite um nome: ";
    cin >> nomes[1];
    cout <<"Digite uma idade: ";
    cin >> idades[1];
    cout <<"Digite um nome: ";
    cin >> nomes[2];
    cout <<"Digite uma idade: ";
    cin >> idades[2];
    cout <<"Digite um nome: ";
    cin >> nomes[3];
    cout <<"Digite uma idade: ";
    cin >> idades[3];
    cout <<"Digite um nome: ";
    cin >> nomes[4];
    cout <<"Digite uma idade: ";
    cin >> idades[4];
    cout <<"Digite um nome: ";
    cin >> nomes[5];
    cout <<"Digite uma idade: ";
    cin >> idades[5];
    cout <<"Digite um nome: ";
    cin >> nomes[6];
    cout <<"Digite uma idade: ";
    cin >> idades[6];
    cout <<"Digite um nome: ";
    cin >> nomes[7];
    cout <<"Digite uma idade: ";
    cin >> idades[7];
    cout <<"Digite um nome: ";
    cin >> nomes[8];
    cout <<"Digite uma idade: ";
    cin >> idades[8];
    cout <<"Digite um nome: ";
    cin >> nomes[9];
    cout <<"Digite uma idade: ";
    cin >> idades[9];

    cout <<"Lista dos Nomes e idades das pessoas: " << endl;

    cout <<"O nome da pessoa é: " << nomes[0] << ", a idade da pessoa é: " << idades[0] << endl;
    cout <<"O nome da pessoa é: " << nomes[1] << ", a idade da pessoa é: " << idades[1] << endl;
    cout <<"O nome da pessoa é: " << nomes[2] << ", a idade da pessoa é: " << idades[2] << endl;
    cout <<"O nome da pessoa é: " << nomes[3] << ", a idade da pessoa é: " << idades[3] << endl;
    cout <<"O nome da pessoa é: " << nomes[4] << ", a idade da pessoa é: " << idades[4] << endl;
    cout <<"O nome da pessoa é: " << nomes[5] << ", a idade da pessoa é: " << idades[5] << endl;
    cout <<"O nome da pessoa é: " << nomes[6] << ", a idade da pessoa é: " << idades[6] << endl;
    cout <<"O nome da pessoa é: " << nomes[7] << ", a idade da pessoa é: " << idades[7] << endl;
    cout <<"O nome da pessoa é: " << nomes[8] << ", a idade da pessoa é: " << idades[8] << endl;
    cout <<"O nome da pessoa é: " << nomes[9] << ", a idade da pessoa é: " << idades[9] << endl;


    return false;
}