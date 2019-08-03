//============================================================================
// Name        : bubble.cpp
// Author      : ronak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;
int main()
{
	int number[7];
	int i,j;
	cout<<"Please enter the number:-";
	for(i=0;i<=6;i++)
	{
		cin>>number[i];
	}
	for(i=0;i<=5;i++)
	{
	for(j=i+1;j<=6;j++)
	{
	int temp;
	if(number[i]<number[j])
	{
		temp=number[i];
		number[i]=number[j];
		number[j]=temp;
	     }
}
	}
	for(i=0;i<=6;i++)
	{
		cout<<"=>"<<number[i]<<endl;
	}
	system("pause");
}
