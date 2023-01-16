#include <cstdio>
using namespace std;
typedef long long ll;

ll a[10005], b[10005], c[10005];

int main() {
  int t;
  scanf("%d", &t);

  for(int i = 0; i < t; i++){
    scanf("%lld %lld", &a[i], &b[i]);
  }

  for(int i = 0; i < t; i++){
    if(a[i] % b[i] != 0) c[i] = b[i] - (a[i] % b[i]);

    printf("%d\n", c[i]);
  }

  return 0;
}
