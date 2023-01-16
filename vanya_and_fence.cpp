#include <cstdio>
using namespace std;
int a[1005];

int main(){
  int n, h;
  scanf("%d %d", &n, &h);

  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  int count1 = 0, count2 = 0;
  for (int i = 0; i < n; i++){
    if (a[i] <= h) count1++;
    else count2++;
  }

  printf("%d", ((1 * count1) + (2 * count2)));

  return 0;
}
