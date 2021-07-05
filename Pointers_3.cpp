#include <iostream>
using namespace std;
int main()
{
	string name = "Suat";
	string surname = "Bozkurt";
	
	string *name_Address = &name;
	string *surname_Address = &surname;
	
	cout<<name_Address<<endl;
	cout<<*name_Address<<endl;
	
	cout<<surname_Address<<endl;
	cout<<*surname_Address<<endl;
		
	return 0;
}
