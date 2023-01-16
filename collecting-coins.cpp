#include <cstdio>
#include <queue>
using namespace std;
 
int main(){
 
    int t;
    scanf("%d", &t);
 
    priority_queue<int> pq;
    int a, b, c, n;
    int x, y;
    while(t--){
        priority_queue<int> pq;
        scanf("%d %d %d %d", &a, &b, &c, &n);
 
        pq.push(a); pq.push(b); pq.push(c); 
 
        a = pq.top() ; pq.pop();
        b = pq.top(); pq.pop();
        c = pq.top(); pq.pop();
 
        x = a - b;
        y = a - c;
 
		int m = n - (x + y);
        if(m >= 0){
        	if(m % 3 == 0) puts("YES") ;
        	else puts("NO");
        }
        else puts("NO");
    }
    return 0;
}