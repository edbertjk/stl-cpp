#include <bits/stdc++.h>
using namespace std;

string convert(string dna){
    string rna;
    for (int i =0; i < dna.length(); i++){
        if(dna[i] == 'T'){
            rna += "U";
        }else{
            rna += dna[i];
        }
    }
    return rna;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << convert("GCAT") << endl;
    return 0;
}