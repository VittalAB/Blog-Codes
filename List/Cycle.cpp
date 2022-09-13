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

int has_cycle(N start){
    N fast = start;
    N slow = start;

    while(fast and fast->next){
        fast = fast->next->next;
        slow = slow->next;

        if(fast==slow){
            return 1;
        }
    }

    return 0;
}

int main(){
    N start = NULL;
    start = getnode(10);
    start->next = getnode(20);
    N temp = start->next;
    start->next->next = getnode(30);
    start->next->next->next = temp; 
    
    if(has_cycle(start)){
        cout << "Cycle exist !";
    }else{
        cout << "No cycle!";
    }

    return 0;
}




/* This code is contributed by Vittal AB*/