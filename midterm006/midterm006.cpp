#include<iostream>
using namespace std;
int main() {


	int salary, bonus;
	char permissionForNextYear;
	cout << "Enter Salary: ";
	cin >> salary;
	do
	{
		
		int rating = 2; // Rating 0-5 
		cout << "Employee Rating is: " << rating << endl;
		if (rating >= 3)
			bonus = salary * 0.02;
		else bonus = 0;
		salary = salary + salary * 0.05;

		cout << "Incremented Salary is: " << salary << endl;
		cout << "Your    bonus	    is:" << bonus;

		cout << endl << endl;

		cout << "\nDo you want to calculate for Next Year: y/n= ";
		cin >> permissionForNextYear;

		cout << endl;
	} while (permissionForNextYear == 'y' || permissionForNextYear == 'Y');
	
	cout << endl << endl;
	system("pause");
	return 0;

}