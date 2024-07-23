#include <bits/stdc++.h>
using namespace std;

int main(){
    array<int, 3> arrayInt = {1,1,2};
    int count = 0;
    for(int i = 0; i < arrayInt.size(); i++){
        if(i+1 != arrayInt.size() && arrayInt[i] == arrayInt[i+1]){
            continue;
        }else{
            arrayInt[count] = arrayInt[i];
            count++;
        }
    }
    cout << count << endl;
    return 0;
}