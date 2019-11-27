#include <iostream>
#include <iomanip>
#include "windows.h"
#include "game hpp/moveUp.h"
using namespace std;
void Draw(ostream &os, std::string f) {
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
  os << f;
}

void Draw(ostream &os, int array [][4]) {
  cout << endl;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE|FOREGROUND_RED);
  cout << "===================================================================================" << endl;
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
      cout << setw(4) << array[i][j];
    }
    cout << endl;
  }
}

void getControl(char &c) {
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
  cout << "Press the keys to start and continue." << endl;
  cout << "W => Up" << endl << "S => Down" << endl << "A => Left" << endl << "D => Right" << endl;
  while (cin >> c && !(c == 'A'||c == 'S'||c == 'D'||c == 'W'))
  {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    cout << "please input right instruction" << endl;
  };
}

void move (int array[][4]) {
  char c;
  getControl(c);
  switch (c)
  {
  case 'W':
    moveUp(array);
    break;
  case 'S':
    moveDown(array);
    break;
  case 'D':
    moveRight(array);
    break;
  case 'A':
    moveLeft(array);
    break;
  }


}

int main() {
  string str = R"(
  /\\\\\\\\\          /\\\\\\\                /\\\         /\\\\\\\\\
  /\\\///////\\\      /\\\/////\\\            /\\\\\       /\\\///////\\\
  \///      \//\\\    /\\\    \//\\\         /\\\/\\\      \/\\\     \/\\\
             /\\\/    \/\\\     \/\\\       /\\\/\/\\\      \///\\\\\\\\\/
           /\\\//      \/\\\     \/\\\     /\\\/  \/\\\       /\\\///////\\\
         /\\\//         \/\\\     \/\\\   /\\\\\\\\\\\\\\\\   /\\\      \//\\\
        /\\\/            \//\\\    /\\\   \///////////\\\//   \//\\\      /\\\
       /\\\\\\\\\\\\\\\   \///\\\\\\\/              \/\\\      \///\\\\\\\\\/
       \///////////////      \///////                \///         \/////////
  )";
  Draw(cout, str);
  int array[4][4] = {{0,2},{2,2},{},{}};
  while(1) {
    Draw(cout, array);
    move(array);
    generate(array);
  }
  return 0;
}