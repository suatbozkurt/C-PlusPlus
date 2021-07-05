#include <iostream>
using namespace std;

int main(){
	
	double i = 20;
	
	double *address_of_i = &i;
	
	cout<<"Address of i :"<<address_of_i<<endl; 
	cout<<"Value in the address indicated:"<<*address_of_i<<endl;
	cout<<"Value in the address indicated:"<<address_of_i+1<<endl;
	cout<<"Value in the address indicated:"<<*address_of_i+1<<endl;
	cout<<"Value in the address indicated:"<<address_of_i+2<<endl;
	cout<<"Value in the address indicated:"<<address_of_i+3<<endl;

	return 0;
	
}
