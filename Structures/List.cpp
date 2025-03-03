#include<iostream>

class CNode{
    public:
    int info;
    CNode *Pnext=NULL;
};

class CList{
    public:
    CNode *head = NULL;
    CNode *tail = NULL;

    CList(){//constructor
        head=tail=NULL;
    }

    ~CList(){//destructor
        while(head != NULL){
            CNode *tmp = head->Pnext;
            delete head;
            head=tmp;
        }
    }

    void attach(CNode *pnn){
        pnn->Pnext=NULL;
        if(head == NULL){
            // head=tail=pnn;
            head=pnn;
            tail=pnn;
        }else{
            tail->Pnext = pnn;
            tail=pnn;
            // CNode *trav = head;
            // while(trav->Pnext != NULL){
            //     trav=trav->Pnext;
            // }//wsltny ll tail
            // trav->Pnext = pnn;

        }
    }

};