#include <cstdio>
#include <string.h>

using namespace std;

int main(){
  int t;
  scanf("%d", &t);

  int x = 0; char a[5];
  while(t--){
    scanf("%s", a);

    if((strcmp(a,"X++") == 0) || (strcmp(a,"++X") == 0)){
      x++;
    }

    else if((strcmp(a,"X--") == 0) || (strcmp(a,"--X") == 0)){
      x--;
    }

    x = x;
  }

  printf("%d", x);

  return 0;
}
