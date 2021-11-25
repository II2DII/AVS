#include <iostream>
#include <string>
#include <random>
#include <ctime>

using std::cout;
using std::cin;
using std::string;
using std::endl;

//Cria uma função que manipula arrays e mostrar o uso dela com arrays
//Cria uma função que recebe um ponteiro como argumento

void vetor(int, int);
void troca(int*, int*);

int main(){
    /*int mod, posi;
    cout << "qual numero quer adicionar e sua posicao? " << endl;
    cin >> mod >> posi;
    cout << "======================" << endl;
    vetor(mod, posi);*/

    int x, y;
    cin >> x >> y;
    troca(&x, &y);
    cout << "\n"<< x << "  --  " << y;
    return 0;
}
//troca um valor do vetor na posição indicada
void vetor(int mod, int posi){
    srand(time(0));
    int aux;
    int vet[10];//Array
    for (int i = 0; i < 10; i++){
        vet[i] = (1+(rand())%10);
        if (i == posi){
            aux = vet[posi];
        }
    }
    vet[posi] = mod;//modificação de array
    for (int i = 0; i < 10; i++){
        cout << "\n=====================\n";
        if (i == posi){
            cout << "antes : " << aux << " : depois :";
        }       
        cout << vet[i] << ":" << endl;
    }
}

//troca os valores das variáveis passadas
void troca(int* num1, int* num2){
    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}