#include <cstdio>
using namespace std;
int a[111];
int main(){
  int t,b=0,c=0;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    scanf("%d",&a[i]);
  }
  for(int i=0;i<t;i++){
    if(a[i]==1) b++;
    else c++;
  }
  if(b>0) puts("HARD");
  else puts("EASY");
  return 0;
}
