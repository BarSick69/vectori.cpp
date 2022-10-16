// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
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
    // Write C++ code here
    cout << "Hello world!"<<endl;
    vector<int> v={1,-1,954,23,-215,-66,512,632,-123,-14124,63,22,767,-13,11111,0};
    sort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
