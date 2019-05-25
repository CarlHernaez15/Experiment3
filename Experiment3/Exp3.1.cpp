#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int num_of_elements = 10, smallest, largest;
	double average = 0.0;
	int num[num_of_elements];
	
	for(int i=0; i<num_of_elements; i++)
	{
		cout<<"Value for number "<<i+1<<": "; cin>> num[i];
		
		if(i == 0)
		{
			smallest = num[i];
			
			largest = num[i];
			
			average += num[i]/num_of_elements;
		}
		else
		{
			if(smallest > num[i])
			{
				smallest = num[i];
			}
			if(largest < num[i] )
			{
				largest = num[i];
			}
			average += num[i]/num_of_elements;
		}
	}
	
	cout<<"Smallest Number: "<<smallest<<endl;
	
	cout<<"Largest Number: "<<largest<<endl;
	
	cout<<"the Average is: "<<average<<endl;
	
	_getch();
	return 0;
}
