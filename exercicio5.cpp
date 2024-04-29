#include <iostream> 
#include <cstring>
using namespace std;

int main(){
    char frase[20];
    cout <<"Digite uma frase: " << endl;
    cin.ignore();
    cin.getline(frase, 20);

    cout<< frase << endl;

}