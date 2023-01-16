#include <cstdio>
using namespace std;

int main(){
  int a;
  scanf("%d", &a);

  int count = 0;

  if(a > 5){
    while(a > 5){
      a -= 5;
      count++;
    }
    printf("%d", count + 1);
  }
  else puts("1");

  return 0;
}
