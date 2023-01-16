#include <cstdio>
#include <cmath>
using namespace std;

int main(){
  int n,t,sum=0;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    scanf("%d",&n);
    sum += n;
  }
  printf("%lf",(double)sum/t);

  return 0;
}
