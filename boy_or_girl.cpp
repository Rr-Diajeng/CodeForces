#include <cstdio>
#include <ctype.h>
#include <string.h>
using namespace std;
char a[105];

int main(){
  scanf("%s", a);

  int t = strlen(a);

  int count = 0;
  for(int i = 0; i < t; i++){
    for(int j = i + 1; j < t; j++){
      if (!isalpha(a[i]) || !isalpha(a[j])) continue;

      // isalpha buat ngecek dia tu merupakan alphabet atau engga
      // continue itu buat lanjut ke perulangan berikutnya
      // break itu buat memberhentikan semua perulangan

      if (a[i] == a[j]) {
        count++;
        a[j] = '*';
      }

    }
  }

  int b = t - count;

  if (b & 1) puts("IGNORE HIM!");
  else puts("CHAT WITH HER!");

  return 0;
}
