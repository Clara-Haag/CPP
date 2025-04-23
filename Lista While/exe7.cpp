# include <iostream>
using namespace std;

int main(){

    int media, valor, vezes = 1, soma = 0;

    do{
        cout << "Informe um valor \033[90m(0 para sair)\033[m: ";
        cin >> valor;
        if (valor % 2 == 0 && valor != 0){
            soma += valor;
            media = soma / vezes;
            vezes ++;
        }
    } while (valor != 0);

    cout << "A média dos valores apresentados é: \033[36m" << media << "\033[m" <<endl;
}