#include <stdio.h>

int main() {
    

  // Declare variables
  int r1, r2, r3, r4, r5, n;
  float rp, rq;

  // Prompt user to enter resistor values and number of resistor modules
  printf("Enter R1, R2, R3, R4, R5, and N: ");
  scanf("%d %d %d %d %d %d", &r1, &r2, &r3, &r4, &r5, &n);

  // Check if R1, R2, or N is zero or negative
  if (r1 <= 0 || r2 <= 0 || n <= 0) {
    printf("Error: R1, R2, or N must be positive.\n");
    return 1;
  }
  

  // Calculate RP and RQ
  rp = (float)r1 * r2 / (r1 + r2);
  rq = (float)(r3 + r4 + r5) / n;

  // Display RP and RQ
  printf("RP = %.2f\n", rp);
  printf("RQ = %.2f\n", rq);

  return 0;
  
}


