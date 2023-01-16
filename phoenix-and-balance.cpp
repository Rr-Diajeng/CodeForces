#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main(){

    int t;
    cin>> t;

    int input;
    while(t--){
        cin>> input;

        int bagi = input / 2; //2
        int pengurangan = (input - 1) - (bagi - 1); //3 - 1 = 2

        ll sum = 0, hasil_pangkat;
        for(int i = (input - 1); i >= pengurangan; i--){
            hasil_pangkat = pow(2, i);
            sum += hasil_pangkat;
        }

        ll sum2 = 0, hasil_pangkat2;
        for(int i = 1; i < pengurangan; i++){
            hasil_pangkat2 = pow(2, i);
            sum2 += hasil_pangkat2;
        }

        ll result = abs(sum - (sum2 + (pow(2, input))));
        cout<< result<< endl;
    }
    return 0;
}