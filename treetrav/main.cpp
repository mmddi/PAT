#include<cstdio>
#include<queue>
using namespace std;
const int maxn=50;
int post[maxn];
int in[maxn];
int n;
struct node{
    int data;
    node *lchild,*rchild;
}root;
node* creat(int postl,int postr,int inl,int inr){
    if(postl>postr)return NULL;
    int pos;
    node* root=new node;
    root->data=post[postr];
    for(pos=inl;pos<=inr;pos++){
        if(in[pos]==post[postr]) break;
    }
    int k=pos-inl;
    root->lchild=creat(postl,postl+k-1,inl,pos-1);
    root->rchild=creat(postl+k,postr-1,pos+1,inr);
    return root;
}
int k=0;
int main(){
    
    
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&post[i]);
    }
        for(int i=0;i<n;i++){
        scanf("%d",&in[i]);
    }
    
    node* root=creat(0,n-1,0,n-1);
   // printf("%d\n",root->rchild->data);
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp=new node;
        temp=q.front();
        q.pop();k++;
        printf("%d",temp->data);
        if(k<n)printf(" ");
        if(temp->lchild!=NULL) q.push(temp->lchild);
        if(temp->rchild!=NULL) q.push(temp->rchild);
    }
    return 0;
}
