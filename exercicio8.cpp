#include <iostream>
using namespace std;

int main(){
    string cores[7] = {"azul", "verde", "amarelo", "laranja", "cinza", "preto", "roxo"};
    int num;

    cout << "Digite um número de 0 a 6" << endl;
    cin >> num;

    if(num == 0){
        cout <<""<< (cores[0]) << endl;
    }
    if(num == 1){
        cout <<""<< (cores[1]) << endl;
    }
    if(num == 2){
        cout <<""<< (cores[2]) << endl;
    }
    if(num == 3){
        cout <<""<< (cores[3]) << endl;
    }
    if(num == 4){
        cout <<""<< (cores[4]) << endl;
    }
    if(num == 5){
        cout <<""<< (cores[5]) << endl;
    }
    if(num == 6){
        cout <<""<< (cores[6]) << endl;
    }
    if((num >= 7)||(num < 0)){
        cout <<"ERRO! Digite um número válido." << endl;
}
return 0;
}