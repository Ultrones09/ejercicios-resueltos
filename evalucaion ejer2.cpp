#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int cont{0};
    cout<<"ingresar un numero: ";
    cin>>n;

    while(true){
        if(n>=1){
            if (cont!=n){
                cont=((cont)+1);
                if (cont%2){
                    cout<<","<<cont;                
                }
                else{
                    cout<<"";
                }  
            }
            else{
                cout<<" \ntermino";
                break;
            }
        }
        else{
            cout<<"debe ingresar un numerro natural...";
            break;
        }
    }
    return 0;
}