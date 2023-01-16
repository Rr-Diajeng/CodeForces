#include <cstdio>
using namespace std;
char a[55];

int main(){
  int t;
  scanf("%d", &t);

  scanf("%s", a);

  int count = 0;
  for(int i = 0; i < t; i++){
    if (a[i] == a[i+1]){
      count++;
    }
  }

  printf("%d", count);

  return 0;
}
