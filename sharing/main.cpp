#include<cstdio>
#include<string>
#include<iostream>
#include<map>
using namespace std;
const int maxn=100010;
struct nod{
    char data;
    int next;
    bool flag;
}node[maxn];

int main(){
    for(int i=0;i<maxn;i++)node[i].flag=false;
    int d1,d2,n;
    cin>>d1>>d2>>n;
    int adress,next;
    char data;
    for(int i=0;i<n;i++){
        cin>>adress>>data>>next;
        node[adress].data=data;
        node[adress].next=next;
    }
    int p;
    for(p=d1;p!=-1;p=node[p].next){
        node[p].flag=true;
    }
    for(p=d2;p!=-1;p=node[p].next){
        if(node[p].flag==true) break;
    }
     if(p!=-1)printf("%05d\n",p);
    else printf("-1\n");

   
    return 0;
}
