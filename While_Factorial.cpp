#include <iostream>
using namespace std;

int main()
{

	int i;
	int factorial=1;
	
	cout<<"i:";
	cin>>i;
	
	while(i>0){
		factorial=factorial*i;
		i--;
	}

	cout<<"Factorial:  "<<factorial<<endl;
	
	return 0;
}
