#include<iostream>
#include<vector>

using namespace std;

int main () {

    // vp == valor procurado
    // nc == numero comprações
    vector<string> cachorros = {"Chica", "Teacher", "Vaquinha", "Scooby", "Pacholo"};
    string vp = "Pikachu";
    int nc = 0;

    cachorros.push_back("Milu");
    cachorros.push_back("Pikachu");

            for(int i = 0; i < cachorros.size(); i++) {
        nc++;

        if (cachorros[i] == vp){

   cout<< "Cachorro encontrado na posição " << i << endl;
    break;

}
}

cout<< "Foram necessarias " << nc << " comparações" << endl;

return 0;
}
