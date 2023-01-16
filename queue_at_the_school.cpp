#include <cstdio>
using namespace std;
char c[55];

int main(){
  int n,t;
  scanf("%d %d",&n,&t);
  scanf("%s",c); //gapake c[i] karena ukurannya bisa bebas
  while(t--){
    for(int i=0;i<n;i++){
      if(c[i]=='B' && c[i+1]=='G'){
        c[i] = 'G';
        c[i+1] = 'B';
        i+=1;
      }
    }
  }
  printf("%s",c);
  return 0;
}
