# include <iostream>
using namespace std;

int main(){
    int base, exp, result = 1;

    cout << "Informe uma base: ";
    cin >> base;
    cout << "Informe um expoente: ";
    cin >> exp;

    int i = 1;
    while (i <= exp){
        result = result * base;
        i++;
    }

    cout << "O resultado é: " << result << endl;
}