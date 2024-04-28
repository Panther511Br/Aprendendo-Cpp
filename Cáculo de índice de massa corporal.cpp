#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int peso;
	float altura, IMC;
	
	cout<<"Calculo de IMC. \nQuantos quilos voce pesa?\n";
	cin>>peso;
	
	cout<<"Qual a sua altura?\n";
	cin>>altura;
	
	IMC = peso/pow(altura, 2);
//Calculando o IMC

	cout<<"O seu indice de massa corporal: "<<IMC<<endl;
	
	if (IMC < 18.5){
		cout<<"Esta com baixo peso"<<endl;
} else if(IMC >= 18.5 && IMC < 25){
		cout<<"Peso normal"<<endl;
} else{
		cout<<"Esta com obesidade"<<endl;
	}
	return 0;
}
