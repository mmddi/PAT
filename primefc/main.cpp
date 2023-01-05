#include<cstdio>
#include<math.h>

const int maxn=100010;
int prime[maxn];
int pn=0;
int p[maxn]={0};
void find_prime(){
    for(int i=2;i<100010;i++){
        if(p[i]==false){
            prime[pn++]=i;
            for(int j=i+i;j<10010;j+=i) p[j]=true;
        }
    }
}
struct node{
    int x,num;
}fun[10];
int k=0;
int main(){
    find_prime();
     int N;
    scanf("%d",&N);
    int M=N;
    if(N==1) printf("1=1");
    else{
    int sqr=(int)sqrt(1.0*N);
    for(int i=0;i<pn&&prime[i]<=sqr;i++){
        if(N%prime[i]==0){
            fun[k].x=prime[i];
            int y=0;
            while(N%prime[i]==0){
                N=N/prime[i];
                y++;
            }
            fun[k++].num=y;
            if(N==1) break;
        }
    }
    if(N!=1){
        fun[k].x=N;
        fun[k++].num=1;
    }
    printf("%d=",M);
    for(int i=0;i<k;i++){
        int j=fun[i].num;
        if(i!=k-1){
            if(j>1)printf("%d^%d*",fun[i].x,j);
            else printf("%d*",fun[i]);
            }
        else {
             if(j>1)printf("%d^%d\n",fun[i].x,j);
            else printf("%d\n",fun[i]);
        }
    }
    }
    return 0;
}
