#include <iostream>
#include <unistd.h>
using namespace std;
int main() {
  cout << "hour - h, minute - m, second - s\n";
  cout << "enter the letter for start:";
  string i;
  cin >> i;
  if (i == "h") {
    cout << "Enter the time:";
    int h;
    cin >> h;
    int p = h * 3600;
    cout << p;
    sleep(p);
    cout << "Time's up\n";
    sleep(1);
    cout << "To exit, enter the letter\n";
    cin >> h;
  }
  if (i == "m") {
    cout << "Enter the time:";
    int m;
    cin >> m;
    int b = m * 60;
    sleep(b);
    cout << "Time's up\n";
    sleep(1);
    cout << "To exit, enter the letter\n";
    cin >> m;
  }
  if (i == "s") {
    cout << "Enter the time:";
    int s;
    cin >> s;
    sleep(s);
    cout << "Time's up\n";
    sleep(1);
    cout << "To exit, enter the letter\n";
    cin >> s;
  }
}