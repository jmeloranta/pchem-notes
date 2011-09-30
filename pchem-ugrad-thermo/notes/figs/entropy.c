#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv) {

  FILE *fp;
  double x[2048], y[2048], in;
  int i, n;

  if(argc != 2) {
    fprintf(stderr, "Usage: entropy c-p-datafile\n");
    exit(1);
  }
  if(!(fp = fopen(argv[1], "r"))) {
    fprintf(stderr, "Can't open %s.\n", argv[1]);
    exit(1);
  }
  n = 0;
  while(1) {
    if(fscanf(fp, " %le %le", &x[n], &y[n]) != 2) break;
    n++;
  }
  for (i = 0; i < n; i++)
    y[i] *= 4.1833 / x[i]; /* cal to J & divide by T */

  in = 0.0;
  for (i = 0; i < n-1; i++) {
    in += fabs(x[i+1] - x[i]) * y[i];
    printf("%le %le\n", x[i], in);
  }

  fclose(fp);
}
