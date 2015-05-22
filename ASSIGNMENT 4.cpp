#include <iostream>

using namespace std;

int main()
{
	cout <<"Oham Rex Obioma \n;" << "enter an integer of five digit";
	char inputNumber[5];
	cin >> inputNumber;
	
	cout<< "-----------------\n" << " your number is ";
	for ( int i=0; i<5; i++)
	{
		if ( i==4)
		cout << inputNumber [i] <<endl;
		
		else
		
		cout << inputNumber[i] << " ";
	}

char a;
cin >> a;

return 0;
}
