#include<iostream>
#include"Structures/List.cpp"

using namespace std;

int main(){
    CList *L = new CList;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        CNode *pnn = new CNode;
        cin >> pnn->info;

        L->attach(pnn);
    }
    

    delete L;
    return 0;
}