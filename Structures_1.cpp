#include <iostream>
using namespace std;

struct Student{
	string name;
	string surname;
	int age;
};
int main()
{
	Student s_1 = {"Suat","Bozkurt",23};
	
	cout<<s_1.name<<endl;
	cout<<s_1.surname<<endl;
	cout<<s_1.age<<endl;
	
	Student s_2 ;
	cin>>s_2.name;
	cin>>s_2.surname;
	cin>>s_2.age;
	
	cout<<s_2.name<<endl;
	cout<<s_2.surname<<endl;
	cout<<s_2.age<<endl;
	
	return 0;
}
