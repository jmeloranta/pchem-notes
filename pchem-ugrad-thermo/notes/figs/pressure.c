#include <stdio.h>
#include <math.h>

#define G (9.80665)
#define M (28.97 / 1000.0)
#define R (8.314)
#define T (298.0)

#define N2 0.780
#define O2 0.210

int main(int argc, char **argv) {

  double h, p;

  for (h = 0.0; h < 20000.0; h += 10.0) {
    p = 1.0 * exp(-G*M*h/(R*T));
    printf("%le %le %le %le\n", h, p*O2, p*N2, p);
  }
}
