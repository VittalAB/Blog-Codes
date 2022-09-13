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

void print_reverse(N start){
    stack<N>stk;

    N t = start;
    while(t){
        stk.push(t);
        t=t->next;
    } 

    while(!stk.empty()){
        cout << stk.top()->data << endl;
        stk.pop();
    }
}

int main(){
    N start = NULL;

    for(int i=1;i<=5;i++){
        start = insert(start, i);
    }

    cout << "Print reverse of SLL:- " << endl;
    
    print_reverse(start);

    return 0;
}



/* This code is contributed by Vittal AB*/