#include <iostream>
using namespace std;

int main(){
    string letra;
    cout <<"Digite uma letra: " << endl;
    cin >> letra;

    if(letra == "a" || "e" || "i" || "o" || "u"){
        cout << "sua letra é uma vogal" << endl;
    }else{
        cout << "sua letra é uma consoante" << endl;
}
return false;
}