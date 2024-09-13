#include<iostream>
#include<string>
using namespace std;

int main(){
    int x;
    int max{1000000};
    int multiplos{0};
    
    for ( x=1; x<max; x++ ){
        if(x%3==0 or x%5==0){
            multiplos +=x;
        }
    }
    cout<<"la suma de los multiplos de los numeros son: "<<multiplos;
    return 0;

}