# include <iostream>
using namespace std;

int main(){
    int tip_op;

    cout << "Selecione o tipo de operação:\n1. Cálculo de juros simples\n2. Cálculo de câmbio\n3. Cálculo de taxa por porcentagem\n";
    cin >> tip_op;

    switch (tip_op){
        case 1:
        {
            cout << "Você selecionou: CÁLCULO DE JUROS SIMPLES" << endl;
            float vlr_inicial, juros, dias;

            cout << "Informe o valor inicial: ";
            cin >> vlr_inicial;

            cout << "Informe o valor do juros: ";
            cin >> juros;

            cout << "Informe a quantidade de dias que o documento venceu: ";
            cin >> dias;

            float total = vlr_inicial + (juros * dias);

            cout << "O valor total do documento é de: R$" << total << endl;

            break;
        }
        case 2:
        {
            cout << "Você selecionou: CÁLCULO DE CÂMBIO" << endl;
            break;
        }
        case 3:
        {
            cout << "Você selecionou: CÁLCULO DE TAXA POR PORCENTAGEM" << endl;
            break;
        }
        default:
            cout << "Você selecionou uma opção inválida" << endl;
    }
}