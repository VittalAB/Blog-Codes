#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    struct node *right;
    struct node *left;
};

typedef struct node *N;

N getnode(int x){
    N t=(struct node *)malloc(sizeof(struct node));
    t->data =x;
    t->right = NULL;
    t->left = NULL;
    return t;
}

N insert(N start,int x){
    N t,c;
    t = getnode(x);

    if(!start){
        start=t;
        return start;
    }
    c= start;

    while(c->right!=NULL){
        c=c->right;
    }
    c->right = t;
    t->left = c;
    return start;
}

void display(N start){
    N t=start;
    while(t!=NULL){
        cout << t->data << " ";
        t=t->right;
    }
}

int main(){
    N start =NULL;
    int n ;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        start = insert(start,x);
    }
    display(start);
    return 0;
}