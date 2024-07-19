#include <bits/stdc++.h>
using namespace std;

int functionh(string value){
    map<char, int> mapping = {};
    int res = 0;
    mapping['I'] = 1;
    mapping['V'] = 5;
    for(int i = 0; i < value.length(); i++){
        if(mapping[value[i]] < mapping[value[i+1]]){
            res -= mapping[value[i]];
        }else{
            res += mapping[value[i]];
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ma = functionh("IV");
    cout << ma << endl;
    return 0;
}