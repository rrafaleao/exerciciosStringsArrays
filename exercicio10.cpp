#include <iostream>
using namespace std;

int main(){
    string dias[7] = {"Domingo","Segundo","Terça","Quarta","Quinta","Sexta","Sábado"};
    int num;

    cout <<"Digite Um Número entre 1 e 7: " << endl;
    cin >> num;

  if(num == 1){
        cout <<""<< (dias[0]) << endl;
    }
    if(num == 2){
        cout <<""<< (dias[1]) << endl;
    }
    if(num == 3){
        cout <<""<< (dias[2]) << endl;
    }
    if(num == 4){
        cout <<""<< (dias[3]) << endl;
    }
    if(num == 5){
        cout <<""<< (dias[4]) << endl;
    }
    if(num == 6){
        cout <<""<< (dias[5]) << endl;
    }
    if(num == 7){
        cout <<""<< (dias[6]) << endl;
    }
    if((num > 7)||(num < 0)){
        cout <<"ERRO! Digite um número válido." << endl;
}
}