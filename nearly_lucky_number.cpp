#include <cstdio>
using namespace std;
typedef long long ll;

int main(){
  ll a;
  scanf("%lld", &a);

  ll b, count = 0;
  while (a != 0){
    b = a % 10;
    if(b == 4 || b == 7) count++;

    a /= 10;
  }

  if (count == 4 || count == 7) puts("YES");
  else puts("NO");

  return 0;
}
