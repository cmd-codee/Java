//Прога для финансов
#include <iostream>
#include <fstream>
using namespace std;
int open()
{
    string t;
    cout << "Your income sheet:\n";
    ifstream sheet("finance.txt");
    //Тут вывод
    while (getline (sheet, t)) 
    {
        cout << "\n" << t;
    }
    sheet.close();
    return 0;
}
int main()
{
    string i;
    string date;
    float income;
    string exit;
    cout << "Add income - a, Income sheet - i\n";
    cout << "Enter the letter:";
    cin >> i;
    if (i == "i")
    {
        ofstream file("finance.txt", ios::app);
        cout << "Enter date:";
        cin >> date;
        file << date << "\n";
        cout << "Enter your income:";
        cin >> income;
        file  << income << "\n";
        file << "---------------\n";
        file.close();
        open();
    }
    if (i == "a")
    {
        open();
    }
    cout << "enter any letter to exit:";
    cin >> exit;
}