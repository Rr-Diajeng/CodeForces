#include <cstdio>
using namespace std;
int a[55];
int main(){
  int i,t,k,sum=0;
  scanf("%d %d",&t,&k);
  for(int i=0;i<t;i++){
    scanf("%d",&a[i]);
  }
  for(int i=0;i<t;i++){
    if(a[i]>=a[k-1] && a[i]!=0) sum++;
  }
  printf("%d",sum);
  return 0;
}
