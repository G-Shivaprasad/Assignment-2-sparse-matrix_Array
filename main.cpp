#include <iostream>

#define ROWS 5
#define COLUMNS 5

int main() {

  int sparseMatrix[ROWS][COLUMNS] = {
    { 0, 0, 6, 0, 0  },
    { 0, 0, 9, 0, 0  },
    { 0, 0, 0, 2, 0  },
    { 0, 10, 4, 0, 0  },
    { 0, 7, 0, 0, 8  },
  };

  int size = 0;
  for (int i = 0; i < ROWS; i++)
    for (int j = 0; j < COLUMNS; j++) 
      if (sparseMatrix[i][j] != 0)
        size++;

  int compactMatrix[3][size];

  int k = 0;
  for (int i = 0; i < ROWS; i++)
    for (int j = 0; j < COLUMNS; j++)
      if (sparseMatrix[i][j] != 0) {
        compactMatrix[0][k] = i;
        compactMatrix[1][k] = j;
        compactMatrix[2][k] = sparseMatrix[i][j];
        k++;
      }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < size; j++) {
      std::cout << " " << compactMatrix[i][j];
    }

    std::cout << "\n";
  }
  
  return 0;
}
