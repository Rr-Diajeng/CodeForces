#include <cstdio>
using namespace std;

int main(){
  int p, q, r, s;
  scanf("%d %d %d %d", &p, &q, &r, &s);

  int mx;
  if (p >= q && p >= r && p >= s) printf("%d %d %d", p - q, p - r, p - s);

  else if (q >= p && q >= r && q >= s) printf("%d %d %d", q - p, q - r, q - s);

  else if (r >= p && r >= q && r >= s) printf("%d %d %d", r - p, r - q, r - s);

  else if (s >= p && s >= q && s >= r) printf("%d %d %d", s - p,  s - q, s - r);
  
  return 0;
}
