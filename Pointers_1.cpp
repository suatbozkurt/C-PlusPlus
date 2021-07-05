#include <iostream>
using namespace std;

int main(){
	
	int i = 20;
	
	int *adress_of_i = &i;
	
	cout<<"Adress of i :"<<adress_of_i<<endl; 
	cout<<"Value in the address indicated:"<<*adress_of_i<<endl;
	cout<<"Value in the address indicated:"<<adress_of_i+1<<endl;
	cout<<"Value in the address indicated:"<<*adress_of_i+1<<endl;
	cout<<"Value in the address indicated:"<<adress_of_i+2<<endl;
	cout<<"Value in the address indicated:"<<adress_of_i+3<<endl;

	return 0;
	
}
