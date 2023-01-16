#include <cstdio>
using namespace std;

int uji(int p, int q){

  int count = 0, a = 0;
  bool status = true;
  while (status == true){
    a += p;
    count++;

    if (a % 10 == q) status = false;
    else if (a % 10 == 0) status = false;
  }
  return count;
}

int main(){
  int x, y;
  scanf("%d %d", &x, &y);

  int hasil = uji(x, y);
  printf("%d", hasil);

  return 0;
}
