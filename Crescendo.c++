#include <iostream>

void imprimeCrescendo(int a, int b){
	std::cout << a << ", " << b << std::endl;
}

bool veSeCresce(int a, int b){
	if(a < b)
		return true;
	else
	 return false;
}

void veComoCresce(int a, int b){
	bool x = veSeCresce(a, b);
	if(!x)
		imprimeCrescendo(b, a);
	else
		imprimeCrescendo(a, b);
}

int main(){
	veComoCresce(10, 100);
	return 0;
}
