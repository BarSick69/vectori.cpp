// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Write C++ code here
    cout << "Hello world!";
    int n,p;
    cout<<"Dati n: ";
    cin>>n;
    cout<<"Dati p: ";
    cin>>p;
    vector<int> v;
    int numar;
    for(int i=0;i<n;i++){
        cout<<"Dati elementul "<<i+1<<" ";
        cin>>numar;
        v.push_back(numar);
    }
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+p-1);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    

    return 0;
}
