#include<iostream>
using namespace std;
//#include<conio.h>
int main()
{
	int i,n,fact=1;
	//clrscr();
	cout<<"enter any number:";
	cin>>n;
	for(i=1;i<=n;i++)
	 {
	 	fact=fact*i;
	  }
	cout<<"factorial of a number:"<<fact<<endl;
	return 0; 
}

