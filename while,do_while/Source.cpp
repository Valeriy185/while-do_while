#include<iostream>
//#include<conio.h>

using namespace std;
void main()
{
	/*int grid = 10;
	int i = 0;
		//cout << "\t\t";
	while (i < 10)
	{
		cout << " # ";		
		//cout << "\n";
		i++;

	}
	cout << endl;
	cout <<"\t"<< "gotovo";
	*/
	setlocale(LC_ALL, "");
	double a, b;
	char s;
	cout << "Введите арифметическое действие: ";
	cin >> a >> s >> b;
	switch(s)
	{
	case'+':
		cout << a << " + " << b << " = " << a + b; break;
	case'-': 
		cout << a << " - " << b << " = " << a - b; break; 
	case'*': 
		cout << a << " * " << b << " = " << a * b; break; 
	case'/': 
		cout << a << " / " << b << " = " << a / b; break; 
	default: cout << "Error operation";

	}
	



	


}