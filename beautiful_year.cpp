#include <cstdio>
using namespace std;

int main() {
  int x, y;
  scanf("%d", &y);

  bool status = true;
  int a, b, c, d;
  while (status == true){ //1987
    y++;
    x = y;
    a = x % 10; //7
    x /= 10; // 198
    b = x % 10; // 8
    x /= 10; // 19
    c = x % 10; // 9
    d = x / 10; // 1

    if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
      status = false;
    }

  }

  printf("%d", y);

  return 0;
}
