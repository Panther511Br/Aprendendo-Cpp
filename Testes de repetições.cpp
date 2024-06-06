#include <iostream>

using namespace std;

int main(){
	
	int a = 0;
	cout<<"Usando While: ";
	while(a<5){
		++a;
		cout<<a;
	}
	
	
	cout<<"\nUsando Do While: ";
	int b = 5;
	
	do {
		cout<<b;
		++b;
	} while(b<5);
	
	
	int i;
	
	cout<<"\nUsando For: ";
	
	for(i = 1; i<=10; i++){
		cout<< i;
	}
}
