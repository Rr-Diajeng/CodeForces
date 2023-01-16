#include <cstdio>
using namespace std;
int a[100005];

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++){
    scanf("%d", &a[i]);
  }

  int count = 0, hasil = 0;
  for (int i = 0; i < t; i++){
    if (a[i] > 0) count += a[i];

    else if (a[i] < 0) {
      if (count > 0) count--;
      else if (count <= 0) hasil++;
    }
  }

  printf("%d", hasil);

  return 0;
}
