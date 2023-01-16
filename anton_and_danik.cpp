#include <cstdio>
#include <string.h>
using namespace std;
char a[100005];

int main(){
  int n;
  scanf("%d\n%s", &n, a);

  int count1 = 0, count2 = 0;
  for (int i = 0; i < n; i++){
    if (a[i] == 'A') count1++;
    else count2++;
  }

  if (count1 > count2) puts("Anton");
  else if (count1 < count2) puts("Danik");
  else if (count1 == count2) puts("Friendship");

  return 0;
}
