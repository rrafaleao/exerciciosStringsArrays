#include <iostream>
using namespace std;

int main(){
    char palavra1[10], palavra2[10];
    cout <<"Digite a primeira palavra: " << endl;
    cin >> palavra1;
    cout <<"Digite a segunda palavra: " << endl;
    cin >> palavra2;

    if(palavra1 > palavra2){
        cout<<"A segunda palavra é maior (Em ordem alfabetica.)" << endl;
    }else{
        cout <<"A primeira palavra é maior (Em ordem alfabetica.)" << endl;
    }

}