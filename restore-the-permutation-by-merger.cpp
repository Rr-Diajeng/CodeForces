#include <iostream>
#include <set>
#include <queue>
using namespace std;

int main(){

    int t;
    cin>> t;

    while(t--){
        int n;
        cin>> n;

        set<int> st;
        queue<int> q;

        n *= 2;
        while(n--){
            int a;
            cin>> a;

            if(st.count(a) == 0){
                st.insert(a);
                q.push(a);
            }
        }

        while(q.size() != 0){
            printf("%d ", q.front());
            q.pop();
        }
        puts("");
    }
    return 0;
}