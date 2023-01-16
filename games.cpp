#include <cstdio>
using namespace std;
int a[33];
int b[33];
int main(){
  int t,count=0;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    scanf("%d %d",&a[i],&b[i]);
  }
  for(int i=0;i<t;i++){
    for(int j=0;j<t;j++){
      if(a[i]==b[j]) count++;
    }
  } printf("%d",count);
  return 0;
}
