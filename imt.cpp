#include <iostream>
using namespace std;
int main()
{
	float height;
	float weight;
	cout << "Enter your height:";
	cin >> height;
	cout << "Enter your weigth:";
	cin >> weight;
	float m = height/100;
	float result = weight/(m*m);
	cout << "----------\n";
	if (result < 18.5)
	{
		cout << "You are underweight";
	}
	if (result > 18.5 && result < 24.9)
	{
		cout << "You have a normal weight";
	}
	if (result > 29.9 && result < 29.9)
	{
		cout << "You have a overweight";
	}
	if (result > 29.9)
	{
		cout << "You are obese";
	}
}