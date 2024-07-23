#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {1, 2, 3, 4};
    int val = 3;
    int count = 0;

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != val){
            continue;
        }else{
            nums[count] = nums[i];
            count++;
        }
    }

    cout << count << endl;
    return 0;
}