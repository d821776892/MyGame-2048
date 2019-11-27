//
// Created by Administrator on 2019/11/27.
//
#include <iostream>
#include <cstdlib>

void moveUp(int arr[][4]) {
  for (int k = 0; k < 4; ++k) {
    for (int i = 0; i < 4; ++i) {
      for (int j = i + 1; j < 4; ++j) {
        if (arr[i][k]==0) {
          arr[i][k] = arr[j][k];
          arr[j][k] = 0;
        }
        if (arr[i][k]==arr[j][k])
        {
          arr[i][k] *= 2;
          arr[j][k] = 0;
        }
      }
    }
  }
}


void moveDown(int arr[][4]) {
  for (int k = 0; k < 4; ++k) {
    for (int i = 3; i >= 0; --i) {
      for (int j = i - 1; j >= 0 ; --j) {
        if (arr[i][k]==0) {
          arr[i][k] = arr[j][k];
          arr[j][k] = 0;
        }
        if (arr[i][k]==arr[j][k])
        {
          arr[i][k] *= 2;
          arr[j][k] = 0;
        }
      }
    }
  }
}

void moveRight(int arr[][4]) {
  for (int k = 0; k < 4; ++k) {
    for (int i = 3; i >= 0; --i) {
      for (int j = i - 1; j >= 0 ; --j) {
        if (arr[k][i]==0) {
          arr[k][i] = arr[k][j];
          arr[k][j] = 0;
        }
        if (arr[k][i]==arr[k][j])
        {
          arr[k][i] *= 2;
          arr[k][j] = 0;
        }
      }
    }
  }
}

void moveLeft(int arr[][4]) {
  for (int k = 0; k < 4; ++k) {
    for (int i = 0; i < 4; ++i) {
      for (int j = i + 1; j < 4; ++j) {
        if (arr[k][i]==0) {
          arr[k][i] = arr[k][j];
          arr[k][j] = 0;
        }
        if (arr[k][i]==arr[k][j])
        {
          arr[k][i] *= 2;
          arr[k][j] = 0;
        }
      }
    }
  }
}

void generate(int array[][4]) {
  int x = rand() % 4;
  int y = rand() % 4;
  while (array[x][y] != 0) {
    x = rand() % 4;
    y = rand() % 4;
  }
  array[x][y] = 2;
  std::cout << "x= " << x << "  y= " << y << std::endl;
}