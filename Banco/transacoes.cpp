# include <iostream>
using namespace std;
// programa que calcula saldo do banco após certas transações

int main(){
    float saldo, vlr_trans; // saldo e valor da transação
    bool tip_trans; // True para entrada e False para saída

    cout << "Qual é seu saldo atual? ";
    cin >> saldo;

    cout << "Seria um pagamento ou recebimento?\n0. Pagamento\n1. Recebimento\n";
    cin >> tip_trans;

    cout << "Qual é o valor total da transação? ";
    cin >> vlr_trans;

    if (tip_trans == true){
        saldo = saldo + vlr_trans;
    } else {
        saldo = saldo - vlr_trans;
    }

    cout << "Seu novo saldo é de R$" << saldo << endl; 
}