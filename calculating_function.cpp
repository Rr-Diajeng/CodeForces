#include <cstdio>
using namespace std;
typedef long long int ll;

int main(){
  ll n,a;
  scanf("%lld",&n);

  if(n % 2 == 0) printf("%lld\n", n/2);
  else if(n % 2 != 0) {
    a = n + 1;
    printf("%lld", a / (-2));
  }

  return 0;
}