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
  game.Draw(cout, str);
  while (game.generate()) {
    game.Draw(cout);
    game.move();
  }
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
  cout << "Game Over!" << endl;
  cout << "your score:" << game.getScore() << endl;
}