#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"enter the no. b/w 1 to 7:";
	cin>>a;
	
	switch(a)
	{
		case 1:
			{
				cout<<"Sunday";
				break;
			}
		case 2:
		    {
			    cout<<"Monday";
			    break;
			}	
		case 3:
		    {
		    	cout<<"Tuesday";
		    	break;
			}	
		case 4:
			{
				cout<<"Wednesday";
				break;
			}
		case 5:
		    {
		    	cout<<"Thursday";
		    	break;
			}	
		case 6:
		    {
		    	cout<<"Friday";
		    	break;
			}	
		case 7:
		    {
		    	cout<<"Saturday";
		    	break;
			}	
		default:
		    {
		    	cout<<"enter a number btwn 1 to 7";
		    	break;
			}	
	}
	return 0;
}
