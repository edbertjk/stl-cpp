#include <bits/stdc++.h>
using namespace std;

int main(){
    int result = 0;
    vector<int> vektor;
    string input;
    getline(cin, input);
    istringstream iss(input);
    int num;

    while(iss >> num){
        vektor.push_back(num);
    }
    for(int i = 0; i < vektor.size(); i++){
        if(i == 0) result = vektor[i];
        else result *= vektor[i];
    }
    cout << result << endl;
    return 0;
}