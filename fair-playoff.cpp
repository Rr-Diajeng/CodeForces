#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int a[6];

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        
        priority_queue <int> pq;
        for(int i = 1; i <= 4; i++){
            scanf("%d", &a[i]);
            pq.push(a[i]);
        }

        int x = pq.top(); pq.pop();
        int y = pq.top(); pq.pop();

        int p, q;
        for(int i = 1; i <= 4; i++){
            if(a[i] == x) p = i;
            if(a[i] == y) q = i;
        }

        if((abs(p-q)) == 1){
            if(p == 2 && q == 3) puts("YES");
            else if(p == 3 && q == 2) puts("YES"); 
            else puts("NO");
        }     
        else puts("YES");         
    }
    return 0;
}