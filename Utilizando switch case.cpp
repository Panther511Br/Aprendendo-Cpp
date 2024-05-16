#include <iostream>
int main(){
	using namespace std;
	
	int num;
	
	cout<<"Insira um valor de 1 a 7:\n";
	cin>>num;
	
	switch(num){
		case 1:
			cout<<"Domingo.\n";
			break;
		case 2:
			cout<<"Segunda-feira.\n";
			break;
		case 3:
			cout<<"Terca-feira.\n";
			break;
		case 4:
			cout<<"Quarta-feira.\n";
			break;
		case 5:
			cout<<"Quinta-feira.\n";
			break;
		case 6:
			cout<<"Sexta-feira.\n";
			break;
		case 7:
			cout<<"Sabado.\n";
			break;
		default:
			cout<<"Valor invalido.\n";
	}
}
