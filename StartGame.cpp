//
// Created by Administrator on 2019/11/27.
//
#include "StartGame.h"
void StartGame () {
  Game game;
  game.init();
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
  int size;
  game.Draw(cout, str);
  cout << "input your size(>3&&<11):" << endl;
  cin >> size;
  if (size < 3 || size > 10) {
    cout << "Game Over!" << endl;
    cout << "your score:" << game.getScore() << endl;
    return ;
  }
  game.setSize(size);
  while (game.generate()) {
    game.Draw(cout);
    game.move();
  }
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
  cout << "Game Over!" << endl;
  cout << "your score:" << game.getScore() << endl;
}