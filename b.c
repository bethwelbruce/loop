/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/CTemplate.c to edit this template
 */
#include <stdio.h>

/* Segment patterns for each digit */
const int segment_patterns[] = {0xFF, 0x63, 0x73, 0x77, 0x7E, 0xE7, 0xEF, 0x67, 0xFF, 0xF7};

/* Extracts the digit at the specified position from the given time */
int extract_digit(int time, int position) {
  return (time % (10 * position)) / position;
}

/* Prints the segment pattern for the given digit */
void print_segments(int digit) {
  printf("%d\n", segment_patterns[digit]);
}

int main() {
  int time;

  /* Loop repeatedly until the user enters "9990" */
  while (1) {
    /* Prompt the user for the time */
    printf("Enter the time: ");
    scanf("%d", &time);

    /* Check if the user entered "9990" */
    if (time == 9990) {
      break;
    }

    /* Iterate across the four columns */
    for (int i = 1000; i > 0; i /= 10) {
      /* Extract the digit at the current position */
      int digit = extract_digit(time, i);

      /* Print the segment pattern for the digit */
      print_segments(digit);
    }
  }

  return 0;
}
