#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

//it is supposed to be 7x5, not 5x7 because 5 is the column and 7 is the row
void print_char_5x7(char c)
{
  c -= 0x20;
  for (char col = 0; col < 5; col++) {
    for (char row = 0; row < 7; row++) {
      unsigned short rowBits = font_5x7[c][col];
      unsigned short colMask = 1 << (6-row); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }    
    putchar('\n');
  }
  putchar('\n');
}

void print_char_8x12(char c){
  c -= 0x20;
  for (char col = 0; col < 12; col++){
    for (char row = 0; row < 8; row++){
      unsigned short rowBits = font_8x12[c][col];
      unsigned short colMask = 1 << (7-row);
      putchar((rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}

//11x16 comes flipped so we have to flip it
void print_char_11x16(char c){
  c -= 0x20;
  for (char row = 0; row < 11; row++){
    for (char col = 0; col < 16; col++){
      unsigned short colBits = font_11x16[c][row];
      unsigned short rowMask = 1 << (15-col);
      putchar((colBits & rowMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}
