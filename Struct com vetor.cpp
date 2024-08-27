#include <iostream>
#include <string>
using namespace std;

struct Pessoa{
    string NOME;
    float ALTURA;
    int IDADE;
};

int main(){

    Pessoa grupo[5];


int n;
    for(int i=0; i<=4; i++){
        cout<<"\nDigite os dados da pessoa"<<endl;
        cout<<"Nome: ";
        cin>>grupo[i].NOME;
        cout<<"Altura: ";
        cin>>grupo[i].ALTURA;
        cout<<"Idade: ";
        cin>>grupo[i].IDADE;
    }
}
