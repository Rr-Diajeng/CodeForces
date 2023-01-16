#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
  int k, w; ll n;
  scanf("%d %lld %d", &k, &n, &w);

  int x = 0; ll m;
  for (int i = 1; i <= w; i++){
    m = i * k;
    x += m;
  }

  if (x <= n) puts("0");
  else printf("%lld", abs(x - n));

  return 0;
}
