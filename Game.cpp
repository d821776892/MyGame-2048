//
// Created by Administrator on 2019/11/27.
//
#include "Game.h"

void Game::moveUp() {
  for (int k = 0; k < 4; ++k) {
    for (int i = 0; i < 4; ++i) {
      for (int j = i + 1; j < 4; ++j) {
        if (array1[i][k]==0) {
          array1[i][k] = array1[j][k];
          array1[j][k] = 0;
        }
        if (array1[i][k]== array1[j][k])
        {
          array1[i][k] *= 2;
          addScore(array1[i][k]);
          array1[j][k] = 0;
        }
      }
    }
  }
}


void Game::moveDown() {
  for (int k = 0; k < 4; ++k) {
    for (int i = 3; i >= 0; --i) {
      for (int j = i - 1; j >= 0 ; --j) {
        if (array1[i][k]==0) {
          array1[i][k] = array1[j][k];
          array1[j][k] = 0;
        }
        if (array1[i][k]== array1[j][k])
        {
          array1[i][k] *= 2;
          addScore(array1[i][k]);
          array1[j][k] = 0;
        }
      }
    }
  }
}

void Game::moveRight() {
  for (int k = 0; k < 4; ++k) {
    for (int i = 3; i >= 0; --i) {
      for (int j = i - 1; j >= 0 ; --j) {
        if (array1[k][i]==0) {
          array1[k][i] = array1[k][j];
          array1[k][j] = 0;
        }
        if (array1[k][i]== array1[k][j])
        {
          array1[k][i] *= 2;
          addScore(array1[k][i]);
          array1[k][j] = 0;
        }
      }
    }
  }
}

void Game::moveLeft() {
  for (int k = 0; k < 4; ++k) {
    for (int i = 0; i < 4; ++i) {
      for (int j = i + 1; j < 4; ++j) {
        if (array1[k][i]==0) {
          array1[k][i] = array1[k][j];
          array1[k][j] = 0;
        }
        if (array1[k][i]== array1[k][j])
        {
          array1[k][i] *= 2;
          addScore(array1[k][i]);
          array1[k][j] = 0;
        }
      }
    }
  }
}

bool Game::generate() {
  if (isFully())
    return false;
  x = rand() % 4;
  y = rand() % 4;
  while (array1[x][y] != 0) {
    x = rand() % 4;
    y = rand() % 4;
  }
  array1[x][y] = 2;
  return true;
}

void Game::move () {
  char c;
  getControl(c);
  switch (c)
  {
  case 'W':
    moveUp();
    break;
  case 'S':
    moveDown();
    break;
  case 'D':
    moveRight();
    break;
  case 'A':
    moveLeft();
    break;
  }
}

void Game::getControl(char &c) {
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
  cout << "Press the keys to start and continue." << endl;
  cout << "W => Up" << endl << "S => Down" << endl << "A => Left" << endl << "D => Right" << endl;
  while (cin >> c && !(c == 'A'||c == 'S'||c == 'D'||c == 'W'))
  {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    cout << "please input right instruction" << endl;
  };
}

void Game::Draw(ostream &os) {
  cout << endl;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE|FOREGROUND_RED);
  cout << "===================================================================================" << endl;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
  cout << "your score:" << getScore() << endl;
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
      if (i == x && j == y)
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN|FOREGROUND_RED);
      cout << setw(4) << array1[i][j];
    }
    cout << endl;
  }
}

void Game::Draw(ostream &os, std::string f) {
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
  os << f;
}

bool Game::isFully() {
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      if (array1[i][j]==0)
        return false;
    }
  }
  return true;
}

void Game::init() {
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      array1[i][j] = 0;
    }
  }
  score = 0;
}

int Game::getScore() {
  return score;
}

void Game::addScore(int score_) {
  score += score_;
}