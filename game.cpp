//Игра в угадай число
#include <experimental/random>
#include <iostream>
#include <unistd.h>
using namespace std;
int main() {
  int x = experimental::randint(0, 11);
  cout << "Game - guess the number from 1 to 10\n";
  sleep(1);
  cout << "Enter a number and see if you can guess:";
  int u;
  cin >> u;
  while (u != x) {
    cout << "You didn't guess right!\n";
    sleep(1);
    cout << "try again, enter the number:";
    cin >> u;
  }
  if (u == x) {
    cout << "You guess right, game over!";
    sleep(3);
  }
}