# include <iostream>
using namespace std;

int main(){
    float num;

    do {
        cout << "Informe um número real positivo: ";
        cin >> num;
        if (num <= 0){
            cout << "\033[91mO número é inválido\033[m" << endl;
        }
    } while (num <= 0);
    cout << "\033[92mO número é válido\033[m" << endl;
}