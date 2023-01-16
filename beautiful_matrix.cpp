#include <cstdio>
#include <algorithm>
using namespace std;
int a[6][6];

int main(){
  int b, c;

  for(int i = 1; i <= 5; i++){
    for(int j = 1; j <= 5; j++){
      scanf("%d", &a[i][j]);

      if(a[i][j] == 1) {
        b = i;
        c = j;
      }
    }
  }

  b = abs(b - 3);
  c = abs(c - 3);

  printf("%d", b + c);

  return 0;
}
