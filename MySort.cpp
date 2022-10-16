// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int recquicksort(vector<int> &v,int upperbound,int lowerbound){
    bool change=false;
    int temp =0;
    if(upperbound<=lowerbound){
        return 0;
    }
    for(int i = lowerbound;i<upperbound;i++){
        if(v[upperbound]<v[i]){
            temp=v[upperbound];
            v[upperbound] =v[i];
            v[i] = temp;
            change = true;
            break;
        }
    }
    if(change){
        recquicksort(v,upperbound,lowerbound);
    }
    else if(!change){
        upperbound-=1;
        recquicksort(v,upperbound,lowerbound);
    }
    return 0;
}
int main() {
    // Write C++ code here
    cout << "Hello world!";
    cout <<endl;
    vector<int> v={3,2,1,62,85,123,-23};
    recquicksort(v,v.size()-1,0);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}
