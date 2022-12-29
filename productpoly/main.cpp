#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=2005;
struct node{
    int ex;
    double co; 
}NodeA[maxn],NodeB[maxn];

double c[maxn];

int main(){
    fill(c,c+maxn,0);
    int NA,NB;
    cin>>NA;
    for(int i=0;i<NA;i++){
        cin>>NodeA[i].ex>>NodeA[i].co;
    }
    cin>>NB;
    for(int i=0;i<NB;i++){
        cin>>NodeB[i].ex>>NodeB[i].co;
    }
    for(int i=0;i<NA;i++){
        for(int j=0;j<NB;j++){
            int x=NodeA[i].ex+NodeB[j].ex;
            double y=NodeA[i].co*NodeB[j].co;
            c[x]+=y;
        }
    }
    int num=0;
    for(int i=0;i<maxn;i++){
        if(c[i]!=0)num++;
    }
    cout<<num<<" ";int t=0;
    if(num==0)printf("0");
    else{
    for(int i=maxn-1;i>=0;i--){
        if(c[i]!=0){
            printf("%d %.1f",i,c[i]);
            if(t!=num-1)cout<<" ";
            else cout<<endl;
            t++;
        }
    }
    }
    return 0;
}
