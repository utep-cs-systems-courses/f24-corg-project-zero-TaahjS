#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

void print_arrow(int leftCol, int size){
  int row = 0;

  int width = size;

  while (size > -1){//constructs tip of arrow

    for(int placer = leftCol; placer > 0; --placer){ //sets leftCol

      putchar(' ');

    }

    for(int placer = (int) size/2; placer > 0; --placer){

      putchar(' ');

    }

    if (size % 2 != 0){

      putchar('*');

    }

    for(int placer = row * 2; placer > 0; --placer){

      putchar('*');

    }

    putchar('\n');

    size = size - 2;

    ++row;

  }
  if (width % 2 == 0){
    --row;
  }
  while(row > 0){

    for(int placer = leftCol; placer > 0; --placer){

      putchar(' ');

    }
    if (width % 2 == 0){
      --width;
    }

    for(int placer = (int) width/2; placer > 0; --placer){

      putchar(' ');

    }

    putchar('*');

    putchar('\n');

    --row;

  }
}
