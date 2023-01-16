#include <cstdio>
using namespace std;
long long x[10005];

int main() {
  int t;
  scanf("%d", &t);

  long long a, b;
  while(t--){
    scanf("%lld %lld", &a, &b);

    if(a < b){
      if ((b - a) % 10 != 0) printf("%lld\n",((b - a) / 10) + 1);
      else printf("%lld\n",((b - a) / 10));
    }

    else if (a > b){
      if ((a - b) % 10 != 0) printf("%lld\n",((a - b) / 10) + 1);
      else printf("%lld\n",((a - b) / 10));
    }

    else if (a == b){
      puts("0");
    }
  }

  return 0;
}
