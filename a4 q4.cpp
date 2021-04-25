//swappinf of two numbers using third one
#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    
    cout<<"Enter 1st Number: "; 
    cin>>a;
    cout<<"Enter 2nd Number: "; 
    cin>>b;

    cout<<"Before Swapping: First Number: "<<a;
	cout<<" \n Second Number: "<<b;
	
    temp=a;
    a=b;
    b=temp;

    cout<<"\n After Swapping: First Number: "<<a;
	cout<<"\n  Second Number: "<<b;
	
    return 0;
}
