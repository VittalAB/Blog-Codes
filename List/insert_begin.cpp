#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    struct node *next;
};

typedef struct node *N;

N getnode(int x){
    N t= (struct node *)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    return t;
}

N insert_front(N start,int x)
{
    N t,c;
    t = getnode(x);

    if(!start){
        start = t;
        return start;
    }

    c = start;
    t->next = c;
    start = t;
    return start;   
}

void display(N start){
    N t;
    t=start;
    while(t!=NULL){
        cout << t->data << " ";
        t=t->next;
    }
}

int main(){
    int n;
    cout << "Enter number of elements :- \n";
    cin >> n;
    N start =NULL;
    while(n--){
        int x;
        cin >> x;
        start = insert_front(start,x);
    }
    display(start);
    return 0;
}