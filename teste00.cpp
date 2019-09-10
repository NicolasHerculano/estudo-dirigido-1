#include<iostream>
#include<vector>

using namespace std;

int main () {

    vector<int> numeros;
    int numero;

    string continuar;


    do {

        cout << "digite um numero: " << endl;
        cin>> numero;

        numeros.push_back(numero);

        cout<< "Digite 's' para parar ou 'n' para continuar:" << endl;

        cin >> continuar;

    }while (continuar != "s");

            for(int i: numeros) {
        numeros;
    }

cout<< endl;

return 0;
}
