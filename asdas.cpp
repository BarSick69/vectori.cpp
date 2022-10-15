// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int cmmdiv(int numar);
int main() {
    int temp;
    int divizorul;
    int n=5;
    vector<int>numere;
    vector<int>divizori;
    int numar;
    for(int i=0;i<n;i++){
        cout<<"Dati elementul: "<<i<<" ";
        cin>>numar;
        numere.push_back(numar);
    }
    for(int i=0;i<n;i++){
        cout<<numere[i]<<" ";
    }
    divizori.pushback(cmmdiv(numere[0]));
    for(int i=0;i<n;i++){
        divizorul=cmmdiv(numere[i]);
        for(int i=0;i<divizori.size()){
            if(divizorul>divizori[i]){
                temp=divizori[i];
                divizori[i]=divizorul;
                divizori.push_back(temp);
            }
            
        }
    }
    /*divizori.push_back(cmmdiv(numere[0]));
    cout<<divizori[0];*/
    return 0;
}

int cmmdiv(int numar){
    for(int i=numar-1;i>0;i--){
        if(numar%i==0){
            return i;
        }
    }
            
}
