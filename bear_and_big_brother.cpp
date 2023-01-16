#include <cstdio>
using namespace std;

int main(){
  int l, b;
  scanf("%d %d", &l, &b);

  int count = 0;
  while(l <= b){
    l *= 3;
    b *= 2;

    count++;
  }

  printf("%d", count);

  return 0;
}
