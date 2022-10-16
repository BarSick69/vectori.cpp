// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int cmmdiv(int numar);
void sort(vector<int> &v){
    int temp;
    int i=0;
    while(i<v.size()-1){
        if(v[i]>v[i+1]){
            temp=v[i];
            v[i]=v[i+1];
            v[i+1]=temp;
            i=0;
        }
        else{
            i++;
        }
    }
}
int main() {
    vector<int> v={15,20,14,18,226,32};
    vector<int> divizorii;
    for(int i=0;i<v.size();i++){
        divizorii.push_back(cmmdiv(v[i]));
    }
    sort(divizorii);
    for(int i=divizorii.size()-1;i>=0;i--){
        cout<<divizorii[i]<<" ";
    }
    
    return 0;
}

int cmmdiv(int numar){
    for(int i=numar-1;i>0;i--){
        if(numar%i==0){
            return i;
        }
    }
            
}
