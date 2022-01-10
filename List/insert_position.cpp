#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};
typedef struct node *N;

N getnode(int x){
    N t=(struct node *)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    return t;
}

N insert_at_pos(N start,int pos,int x){
    N t,c;
    t = getnode(x);

    if(!start){
        start = t;
        return start;
    }

    c = start;
    int count = 1;
    N prev=NULL;
    while(c!=NULL && count!=pos){
        prev = c;
        c=c->next;
        count++;
    }
    prev->next  = t;
    t->next = c;
    return start;
}

N insert(N start,int x){
    N t,c;

    t=getnode(x);

    if(!start){
        start=t;
        return start;
    }

    c = start;

    while(c->next!=NULL){
        c=c->next;
    }
    c->next=t;
    t->next=NULL;
    return start;
}

void display(N start){
    N t=start;
    while(t!=NULL){
        cout << t->data << " ";
        t=t->next;
    }
}

int main(){
    int n;
    cin >> n;
    N start = NULL;
    int pos;
    // cout << "Enter pos and x \n";
    // cin >> pos;
    while(n--){
        int x;
        cin >> x;
        start = insert(start,x);
    }

    cout << "Enter position and value of x :- \n";
    int x;
    cin >> pos >> x;
    start = insert_at_pos(start,pos,x);
    display(start);
    return 0;
}