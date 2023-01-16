#include <cstdio>
using namespace std;
int a[105], b[105];

int main(){
  int t;
  scanf("%d", &t);

  for (int i = 1; i <= t; i++){
    scanf("%d", &a[i]);
  }

  for (int i = 1; i <= t; i++){
    for (int j = 1; j <= t; j++){

      if (a[i] == j){
        b[j] = i;
        continue;
      }

    }
  }

  for (int i = 1; i <= t; i++){
    printf("%d ", b[i]);
  }

  return 0;
}
