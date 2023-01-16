#include <cstdio>
using namespace std;
int main(){
  int w;
  scanf("%d",&w);

  if(w>2 && w%2==0){
    puts("YES\n");
  }
  else {
    puts("NO\n");
  }

  return 0;
}
