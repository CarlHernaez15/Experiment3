#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int provinceA[7];
	int provinceB[7];
	int provinceC[7];
	int j = 1;
	
	for(int i =0; i<7; i++)
	{
		cout <<"Province A, Day " << i+1 <<": "; 
		cin >> provinceA[i];
	}
	for(int i =0; i<7; i++)
	{
		cout <<"Province B, Day " << i+1 <<": "; 
		cin >> provinceB[i];
	}
	for(int i =0; i<7; i++)
	{
		cout <<"Province C, Day " << i+1 <<": "; 
		cin >> provinceC[i];
	}
	
	cout<< "Displaying Values: ";
	
	for(int i=0; i<7; i++)
	{
		cout<<"Province A, Day = " << j + 1 << provinceA[i]<< endl;
	}
	for(int i=0; i<7; i++)
	{
		cout<<"Province B, Day = " << j + 1 << provinceB[i]<< endl;
	}
	for(int i=0; i<7; i++)
	{
		cout<<"Province C, Day = " << j + 1 << provinceC[i]<< endl;
	}
	
	
	_getch();
	return 0;
}
