#include <cstdio>
using namespace std;
int a[5];

int main() {
  for(int i = 0; i < 4; i++){
    scanf("%d", &a[i]);
  }

  int count = 0, b;
  for(int i = 0; i < 4; i++){

    if (a[i] != b){
      for (int j = i+1; j < 4; j++){

          if (a[i] == a[j]) {
            count++;
            b = a[i];
          }

        }
    }
  }

  printf("%d", count);

  return 0;
}
