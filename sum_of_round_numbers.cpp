#include <cstdio>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);

  int x, a, b, c, d, e;
  for(int i = 0; i < t; i++){
    scanf("%d", &x);

    if (x < 10){
      puts("1");
      printf("%d\n", x);
    }

    else if (x >= 10 && x < 100){
      if (x % 10 == 0){
        puts ("1");
        printf("%d\n", x);
      }

      else {
        puts("2");
        printf("%d %d\n", (x / 10) * 10, (x % 10));
      }
    }

    else if (x >= 100 && x < 1000){
      if (x % 10 == 0){
        a = x / 10;
        b = a % 10;

        if (b == 0){
          puts("1");
          printf("%d\n", x);
        }
        else{
          puts("2");
          printf("%d %d\n", (a / 10) * 100, b * 10);
        }
      }

      else if (x % 10 != 0){
        a = x / 10;
        b = a % 10;

        if (b == 0){
          puts("2");
          printf("%d %d\n", (a / 10) * 100, x % 10);
        }

        else{
          puts("3");
          printf("%d %d %d\n", (a / 10) * 100, b * 10, x % 10);
        }
      }
    }

    else if (x >= 1000 && x < 10000){
      a = x / 10; // 123
      b = a % 10; // 3
      c = a / 10; // 12
      d = c % 10; // 2
      e = c / 10; // 1

      if (x % 10 == 0){
        if (b != 0){
          if (d != 0){
            puts("3");
            printf("%d %d %d\n", e * 1000, d * 100, b * 10);
          }
          else{
            puts("2");
            printf("%d %d\n", e * 1000, b * 10);
          }
        }

        else if (b == 0){
          if (d != 0){
            puts("2");
            printf("%d %d\n", e * 1000, d * 100);
          }
          else{
            puts("1");
            printf("%d\n", e * 1000);
          }
        }
      }

      else{
        if (b == 0){
          if (d == 0){
            puts("2");
            printf("%d %d\n", e * 1000, x % 10);
          }
          else{
            puts("3");
            printf("%d %d %d\n", e * 1000, d * 100, x % 10);
        }
      }

        else{
          if (d != 0){
            puts("4");
            printf("%d %d %d %d\n", e * 1000, d * 100, b * 10, x % 10);
          }
          else{
            puts("3");
            printf("%d %d %d\n", e * 1000, b * 10, x % 10);
          }
        }
      }
    }

    else if (x == 10000){
      puts("1");
      printf("%d\n", x);
    }
  }
  return 0;
}
