#include <cstdio>
#include <algorithm>
using namespace std;
int a[1005], b[1005], d[1005];

int main(){
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++){
    scanf("%d %d", &a[i], &b[i]);
  }

  d[0] = a[0] + b[0];
  int c = b[0] - a[1];
  for(int i =  1; i <= t+1; i++){
    d[i] = c + b[i];
    c = d[i] - a[i+1];
  }

  int maximum = -1;
  for(int i = 0; i < t; i++){
    maximum = max(d[i], maximum);
  }

  printf("%d", maximum);

  return 0;
}
