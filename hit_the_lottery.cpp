#include <cstdio>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);

  int count = 0;
  while(t != 0){

    if (t >= 100) {
      t -= 100;
      count++;
    }

    else if (t <= 100 && t >= 20) {
      t -= 20;
      count++;
    }

    else if (t <= 20 && t >= 10) {
      t -= 10;
      count++;
    }

    else if (t <= 10 && t >= 5){
      t -= 5;
      count++;
    }

    else if (t <= 5 && t >= 1){
      t -= 1;
      count++;
    }

  }

  printf("%d", count);

  return 0;
}
