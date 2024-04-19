#include <iostream>
#include <string>
using namespace std;

int main(){
    string texto;
    cout<<"Digite um texto: "<<endl;
    getline(cin, texto);
    cout<<"o texto digitado foi: " << texto << endl;

    int pos = texto.find("a");
    if(pos != std::string::npos){
        cout << "a vogal 'A' foi encontrada na posição: " << pos << endl;
    }else{
        cout << "a vogal não foi encontrada." << endl;
    }
}