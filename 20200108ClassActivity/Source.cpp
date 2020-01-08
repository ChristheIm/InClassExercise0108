//Kyungchan Im (Chris)
//This is my own work for in class activiy 1/8/2020
//CST - 210 
//Professor Lydia Fritz

#include <iostream>
using namespace std;

int main()
{
	//1. Write a program that prompts the user to enter a number in pounds, converts it to kilograms
	//and displays the result. One pound is 0.454 kilograms.
	int i;
	cout << "Please enter a number in pounds to convert it to kilograms: ";
	cin >> i;
	cout << "pounds:" << i << endl;
	cout << "kilograms: " << (i * 0.454) << endl;



	//2. Write a program that prompts the user to enter the side of a hexagon and displays its area.
	//The formula for computing the area of a hexagon is 'Area = (3sqrt3 / 2) * s^2', where s is the length of a side.
	int j;
	cout << "Please enter the side of a hexagon: ";
	cin >> j;
	cout << "The Area of hexagon is: " << (3 * sqrt(3) * (j * j)) / 2 << endl;



	//3. Write a program that prompts the user to enter two integer values and displays the larger value.
	int userInput1;
	cout << "Please enter first integer value: ";
	cin >> userInput1;
	
	int userInput2;
	cout << "Please enter second integer value: ";
	cin >> userInput2;
	
	if (userInput1 > userInput2)
	{
		cout << "The bigger number is: " << userInput1;
	}
	else
	{
		cout << "The bigger number is: " << userInput2;
	}
	
	return 0;
}


