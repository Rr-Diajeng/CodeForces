#include <cstdio>
using namespace std;

int main(){
  int t, a, b, c, d(0);
  scanf("%d", &t);

  while(t--){
    scanf("%d %d %d", &a, &b, &c);
    if(a + b + c >= 2){
      d += 1;
    }
  }
  printf("%d",d);


  return 0;
}
