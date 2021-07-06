#include <iostream>
using namespace std;

int main()
{

	int i;
	int sum=0;
	
	cout<<"i:"<<endl;
	cin>>i;
	
	while(i>0){
		cout<<i<<endl;
		sum=sum+i;
		i--;
	}

	cout<<"Sum:"<<sum<<endl;
	
	return 0;
}

