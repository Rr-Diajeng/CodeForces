#include <cstdio>
#include <algorithm>
using namespace std;
int a[55];

int main(){
  int t;
  scanf("%d", &t);

  while(t--){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
      scanf("%d", &a[i]);
    }

    sort(a, a+n);

    bool status = 1;
    for(int i = 0; i < n-1; i++){
      if(a[i+1] - a[i] > 1) {
        status = 0;
        break;
      }
    }

    if(status == 1) puts("YES");
    else puts("NO");
    }

  return 0;
}
