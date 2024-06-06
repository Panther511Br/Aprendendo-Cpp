#include <iostream>
using namespace std;

int main(){
	
	int v[5] = {10, 20, 30, 40, 50};
	int i;
	
	int s = 0;
	
	for (i = 0; i < 5; ++i){
		s += v[i];
	}
	
	cout<<"Resultado: "<<s/5<<endl;
}
