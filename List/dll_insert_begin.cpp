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

    t->data = x;
    t->right = NULL;
    t->left = NULL;
    return t;
}

N insert_begin(N start,int x){
    N t,c;
    t= getnode(x);

    if(!start){
        start = t;
        return start;
    }

    c = start;

    t->right = c;
    c->left = t;
    start =t;
    return start;
}

void display(N start){
    N t=start;
    while(t!=NULL){
        cout << t->data;
        cout << " ";
        t=t->right;
    }
}

int main(){
    int n;
    N start=NULL;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        start = insert_begin(start,x);
    }
    display(start);
    return 0;
}




/* This code is contributed by Vittal AB*/