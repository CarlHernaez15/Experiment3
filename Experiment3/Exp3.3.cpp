#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char arr[100];
    int s;
    
    cout << "Enter how many arrays: ";
	cin >> s;

    for (int i = 0; i < s; i++)
    {
        cout << "\nEnter any character: ";
        cin >> arr[i];
    }

    for (int i = s; i >= 0; i--)
    {
        cout << arr[i];
    }

	_getch();
    return 0;
} 
