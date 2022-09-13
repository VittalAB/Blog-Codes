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

N insert(N start,int x){
    N t = getnode(x);

    if(!start){
        return t;
    }

    N c = start;

    while(c->next!=NULL){
        c=c->next;
    }

    c->next = t;
    return start;
}

void display(N start){
    N t=start;

    while(t){
        cout << t->data << endl;
        t=t->next;
    }

}

int find_kth_node(N start,int k){
    N temp,kth_node;
    temp=start;
    kth_node = start;

    for(int i=0;i<k-1;i++){
        temp=temp->next;
    }

    while(temp->next!=NULL){
        temp = temp->next;
        kth_node=kth_node->next;
    }

    if(kth_node)
        return kth_node->data;

    return -1;
}

int main(){
    N start = NULL;

    for(int i=0;i<5;i++){
        start = insert(start, i);
    }

    display(start);

    int k;
    cout << "Enter the vaue for k :- ";
    cin >> k;
    cout << "Kth node from end is :- " << find_kth_node(start,k);

    return 0;
}

