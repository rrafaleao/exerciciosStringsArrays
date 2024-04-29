#include <iostream>
using namespace std;

//Declare um array de caracteres produtos com 20 posições e um array de floats precos com 20 posições. 
//Leia os nomes e preços de 10 produtos usando cin e armazene-os nos arrays. 
//Imprima a lista de produtos e preços em colunas 

int main(){
    char produtos[20][50];
    float precos[20];

    cout <<"Digite o nome do produto: ";
    cin >> produtos[0];
    cout <<"Digite o preço do produto: ";
    cin >> precos[0];

    cout <<"Digite o nome do produto: ";
    cin >> produtos[1];
    cout <<"Digite o preço do produto: ";
    cin >> precos[1];

    cout <<"Digite o nome do produto: ";
    cin >> produtos[2];
    cout <<"Digite o preço do produto: ";
    cin >> precos[2];

    cout <<"Digite o nome do produto: ";
    cin >> produtos[3];
    cout <<"Digite o preço do produto: ";
    cin >> precos[3];

    cout <<"Digite o nome do produto: ";
    cin >> produtos[4];
    cout <<"Digite o preço do produto: ";
    cin >> precos[4];

    cout <<"Digite o nome do produto: ";
    cin >> produtos[5];
    cout <<"Digite o preço do produto: ";
    cin >> precos[5];

    cout <<"Digite o nome do produto: ";
    cin >> produtos[6];
    cout <<"Digite o preço do produto: ";
    cin >> precos[6];

    cout <<"Digite o nome do produto: ";
    cin >> produtos[7];
    cout <<"Digite o preço do produto: ";
    cin >> precos[7];

    cout <<"Digite o nome do produto: ";
    cin >> produtos[8];
    cout <<"Digite o preço do produto: ";
    cin >> precos[8];
    
    cout <<"Digite o nome do produto: ";
    cin >> produtos[9];
    cout <<"Digite o preço do produto: ";
    cin >> precos[9];
    
    cout <<"Lista dos produtos: " << endl;

    cout<<"O produto: " << produtos[0] <<" Custa: " << precos[0] << endl;
    cout<<"O produto: " << produtos[1] <<" Custa: " << precos[1] << endl;
    cout<<"O produto: " << produtos[2] <<" Custa: " << precos[2] << endl;
    cout<<"O produto: " << produtos[3] <<" Custa: " << precos[3] << endl;
    cout<<"O produto: " << produtos[4] <<" Custa: " << precos[4] << endl;
    cout<<"O produto: " << produtos[5] <<" Custa: " << precos[5] << endl;
    cout<<"O produto: " << produtos[6] <<" Custa: " << precos[6] << endl;
    cout<<"O produto: " << produtos[7] <<" Custa: " << precos[7] << endl;
    cout<<"O produto: " << produtos[8] <<" Custa: " << precos[8] << endl;
    cout<<"O produto: " << produtos[9] <<" Custa: " << precos[9] << endl;


    return false;
}