#include <handy.h>
#include <math.h>
#include <stdio.h>

int main() {
  HgOpen(400, 400);

  double a = 0;

  for (;;) {
    
    a += 0.1;

    HgClear();

    HgCircleFill(200, 200, 1, 1);

    HgCircleFill(200 + cos(a) * 100, 200 + sin(a) * 100, 20, 1);

    HgSleep(0.05);
  }

  HgGetChar();
  HgClose();
  return 0;
}
