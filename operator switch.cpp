#include<iostream>
using namespace std;

int main()
{
	int a, b;
	float c;
	char s;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"\n Enter the second number:";
	cin>>b;
	cout<<"Enter the arithmatic operator:";
	cin>>s;
	
	switch(s)
	{
		case '+':
			{
				c=a+b;
				cout<<"the sum of two numbers is:"<<c;
				break;
			}
		case '-':
		    {
		    	c=a-b;
		    	cout<<"the difference of two numbers is:"<<c;
		    	break;
			}
		case '*':
		    {
		    	c=a*b;
		    	cout<<"the product of two numbers is:"<<c;
		    	break;
			}
		case '/':
	        {
	        	c=a/b;
	        	cout<<"the division of two numbers is:"<<c;
	        	break;
			}
		case '%':
		    {
		    	c=a%b;
		    	cout<<"the modulo of two numbwers is:"<<c;
		    	break;
			}
		default:
		    {
		    	cout<<"Enter a valid operator.";
		    	break;
			}						
	}
	
	return 0;
}
