#include <bits/stdc++.h>
using namespace std;

string evenOrOdd(int number){
    if(number & 1 == 1){
        return "even";
    }else{
         return "odd";
         };
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << evenOrOdd(10);
    return 0;
}