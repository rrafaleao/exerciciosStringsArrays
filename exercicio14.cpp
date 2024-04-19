#include <iostream>
using namespace std;

int main(){
    char palavra[10];
    printf("Digite uma palavra: ");
    scanf("%c %c %c %c %c %c %c %c %c %c",&palavra[0], &palavra[1], &palavra[2], &palavra[3], &palavra[4], &palavra[5], &palavra[6], &palavra[7], &palavra[8], &palavra[9]);

    printf("%c %c %c %c %c %c %c %c %c %c", palavra[9], palavra[8], palavra[7], palavra[6], palavra[5], palavra[4], palavra[3], palavra[2], palavra[1], palavra[0]);

}