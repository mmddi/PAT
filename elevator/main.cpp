#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

vector<int> ve;
int sumtime;
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        ve.push_back(x);
    }
    int x=ve[0];
    sumtime=x*6;
    for(int i=0;i<ve.size()-1;i++){
        int y=ve[i]-ve[i+1];
        if(y<0)sumtime=(-y)*6+sumtime;
        else sumtime=y*4+sumtime;
    }
    sumtime=sumtime+ve.size()*5;
    cout<<sumtime<<endl;
}
