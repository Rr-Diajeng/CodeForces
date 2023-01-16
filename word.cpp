#include <cstdio>
#include <string.h>
using namespace std;
char a[111];

int main(){
  scanf("%s", a);

  int t = strlen(a);
  int upper = 0, lower = 0;
  for(int i = 0; i <= t; i++){
    if(a[i] >= 'A' && a[i] <= 'Z') upper++;
    else if(a[i] >= 'a' && a[i] <= 'z') lower++;
  }

  if (upper > lower) printf("%s", strupr(a));
  else if (upper <= lower) printf("%s", strlwr(a));

  return 0;
}
