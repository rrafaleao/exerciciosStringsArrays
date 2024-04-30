#include <iostream>
using namespace std;

//Declare um array de caracteres frase com 20 posições.
//Leia uma frase do usuário usando cin e armazene-a em frase. Substitua todas as vogais da frase por '*'. 
//Imprima a frase com as vogais substituídas usando cout.

int main(){
    char frase[20];
    cout << "Digite uma frase: " << endl;
    cin >> frase;

    if (frase[0] == 'a' || frase[0] == 'e' || frase[0] == 'i' || frase[0] == 'o' || frase[0] == 'u') frase[0] = '*';
    if (frase[1] == 'a' || frase[1] == 'e' || frase[1] == 'i' || frase[1] == 'o' || frase[1] == 'u') frase[1] = '*';
    if (frase[2] == 'a' || frase[2] == 'e' || frase[2] == 'i' || frase[2] == 'o' || frase[2] == 'u') frase[2] = '*';
    if (frase[3] == 'a' || frase[3] == 'e' || frase[3] == 'i' || frase[3] == 'o' || frase[3] == 'u') frase[3] = '*';
    if (frase[4] == 'a' || frase[4] == 'e' || frase[4] == 'i' || frase[4] == 'o' || frase[4] == 'u') frase[4] = '*';
    if (frase[5] == 'a' || frase[0] == 'e' || frase[0] == 'i' || frase[0] == 'o' || frase[0] == 'u') frase[0] = '*';
    if (frase[6] == 'a' || frase[1] == 'e' || frase[1] == 'i' || frase[1] == 'o' || frase[1] == 'u') frase[1] = '*';
    if (frase[7] == 'a' || frase[2] == 'e' || frase[2] == 'i' || frase[2] == 'o' || frase[2] == 'u') frase[2] = '*';
    if (frase[8] == 'a' || frase[3] == 'e' || frase[3] == 'i' || frase[3] == 'o' || frase[3] == 'u') frase[3] = '*';
    if (frase[9] == 'a' || frase[4] == 'e' || frase[4] == 'i' || frase[4] == 'o' || frase[4] == 'u') frase[4] = '*';
    if (frase[10] == 'a' || frase[0] == 'e' || frase[0] == 'i' || frase[0] == 'o' || frase[0] == 'u') frase[0] = '*';
    if (frase[11] == 'a' || frase[1] == 'e' || frase[1] == 'i' || frase[1] == 'o' || frase[1] == 'u') frase[1] = '*';
    if (frase[12] == 'a' || frase[2] == 'e' || frase[2] == 'i' || frase[2] == 'o' || frase[2] == 'u') frase[2] = '*';
    if (frase[13] == 'a' || frase[3] == 'e' || frase[3] == 'i' || frase[3] == 'o' || frase[3] == 'u') frase[3] = '*';
    if (frase[14] == 'a' || frase[4] == 'e' || frase[4] == 'i' || frase[4] == 'o' || frase[4] == 'u') frase[4] = '*';
    if (frase[15] == 'a' || frase[0] == 'e' || frase[0] == 'i' || frase[0] == 'o' || frase[0] == 'u') frase[0] = '*';
    if (frase[16] == 'a' || frase[1] == 'e' || frase[1] == 'i' || frase[1] == 'o' || frase[1] == 'u') frase[1] = '*';
    if (frase[17] == 'a' || frase[2] == 'e' || frase[2] == 'i' || frase[2] == 'o' || frase[2] == 'u') frase[2] = '*';
    if (frase[18] == 'a' || frase[3] == 'e' || frase[3] == 'i' || frase[3] == 'o' || frase[3] == 'u') frase[3] = '*';
    if (frase[19] == 'a' || frase[4] == 'e' || frase[4] == 'i' || frase[4] == 'o' || frase[4] == 'u') frase[4] = '*';
    if (frase[20] == 'a' || frase[0] == 'e' || frase[0] == 'i' || frase[0] == 'o' || frase[0] == 'u') frase[0] = '*';
   
    cout << frase << endl;
    return false;
}