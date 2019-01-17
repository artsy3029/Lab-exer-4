#include <iostream>
using namespace std;
int main() 
{
	int num[5];
	int* ptr = num;
	
	cout << "Input 5 numbers: " << endl;
	
	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];
	
	cout << "Your input numbers are: " << endl;

	for(int x = 1; x <= 5; x++);
	{
	cout << *ptr <<endl;
	
	ptr++;
	}

}
