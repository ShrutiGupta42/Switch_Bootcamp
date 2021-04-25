//reverse a  3 digit number without using loop
#include<iostream>
using namespace std;

int main()
{
	int a, temp;
	cout<<"Enter the number:";
	cin>>a;
	
	cout<<"the reverse of a number is:";
	temp = a%10;
	cout<<temp;
	temp = a/10;
	temp = temp%10;
	cout<<temp;
	temp = a/10;
	temp = temp/10;
	cout<<temp<<endl;
	
	return 0;
	
	
}
