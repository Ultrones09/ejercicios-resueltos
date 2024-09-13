#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int num{2};
    int divisor{2};
    cout << "Ingrese un numero: ";
    cin >> n;

    while(num<n){
        while (divisor * divisor <= num) {
            divisor++;
        }
        if (divisor * divisor > num) {
            cout << num << " ";
        }

        num++;
    }
    return 0;
}