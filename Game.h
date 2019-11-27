//
// Created by Administrator on 2019/11/27.
//

#ifndef MYGAME_GAME_H
#define MYGAME_GAME_H
#include <iostream>
#include <iomanip>
#include "windows.h"
using namespace std;
class Game {
public:
  void Draw(ostream &os, std::string f);
  void Draw(ostream &os);
  void move ();
  bool isFully();
  bool generate();
  void init();
  int getScore();
private:
  int array1[4][4];
  int score;
  int x,y;
  void addScore(int score_);
  void moveUp();
  void moveDown();
  void moveRight();
  void moveLeft();
  void getControl(char &c);
};
#endif // MYGAME_GAME_H
