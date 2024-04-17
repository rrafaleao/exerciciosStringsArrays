#include <iostream>
using namespace std;

int main(){
    string cores[6];
    int num;
    cores[0] = "azul";
    cores[1] = "verde";
    cores[2] = "amarelo";
    cores[3] = "laranja";
    cores[4] = "cinza";
    cores[5] = "preto";
    cores[6] = "roxo";

    cout << "Digite um número de 0 a 6" << endl;
    cin >> num;

    if(num = 0){
        cout <<" "<< cores[0] << endl;
    }
    if(num = 1){
        cout <<" "<< cores[1] << endl;
    }
    if(num = 2){
        cout <<" "<< cores[2] << endl;
    }
    if(num = 3){
        cout <<" "<< cores[3] << endl;
    }
    if(num = 4){
        cout <<" "<< cores[4] << endl;
    }
    if(num = 5){
        cout <<" "<< cores[5] << endl;
    }
    if(num = 6){
        cout <<" "<< cores[6] << endl;
    }else{
        cout <<"Digite um número válido." << endl;
    }
    return false; 
}