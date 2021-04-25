//swapping two numbers without using third one
#include <iostream>  
using namespace std;  
  
int main()  
{  
   int a,b;
   
   cout<<"enter first number:";
   cin>>a;
   cout<<"enter second number:";
   cin>>b;
         
    cout<<"Before swap a= "<<a;
	cout<<"\n b= "<<b<<endl; 
	      
    a=a*b;    
    b=a/b;     
    a=a/b;     

    cout<<"After swap a= "<<a;
	cout<<" b= "<<b<<endl;      
    
	return 0;  
}  
