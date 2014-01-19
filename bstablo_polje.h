#include <iostream>
using namespace std;

struct element
{
       int label;
       bool use;
};

struct btree
{
       element node[10000];
};

int ParentB(int n, btree *BT)
{
    if(!BT->node[1].use || !BT->node[n].use) return -1;
    if(n/2 != 0) return n/2;
};

int LeftChildB(int n,btree *BT)
{
    if(!BT->node[1].use || !BT->node[n].use || !BT->node[2*n].use) return -1;
    return 2*n;
};

int RightChildB(int n, btree *BT)
{
    if(!BT->node[1].use || !BT->node[n].use || !BT->node[2*n+1].use) return -1;
    return 2*n + 1;
};

int LabelB(int n, btree *BT)
{
    if(!BT->node[1].use || !BT->node[n].use) return -1;
    return BT->node[n].label;
};

void ChangeLabelB(int x, int n, btree *BT)
{
     BT->node[n].label = x;
};

int RootB(btree *BT)
{
    if(!BT->node[1].use) return -1;
    return BT->node[1].label;
};

void CreateLeftB(int x, int n, btree *BT)
{
     if(!BT->node[1].use || !BT->node[n].use)
     {
         cout << "Roditelj ne postoji!" << endl;
         return;
     }
     if(BT->node[2*n].use)
     {
         cout << "Dijete vec postoji!" << endl;
         return;
     }
     BT->node[2*n].label = x;
     BT->node[2*n].use = true;
};

void CreateRightB(int x, int n, btree *BT)
{
     if(!BT->node[1].use || !BT->node[n].use)
     {
         cout << "Roditelj ne postoji!" << endl;
         return;
     }
     if(BT->node[2*n + 1].use)
     {
         cout << "Dijete vec postoji!" << endl;
         return;
     }
     BT->node[2*n + 1].label = x;
     BT->node[2*n + 1].use = true;
};

void DeleteB(int n, btree *BT)
{
     if(BT->node[n*2].use)
          DeleteB(n*2, BT); 
     if(BT->node[n*2+1].use)
          DeleteB(n*2+1, BT);
     if(!BT->node[n*2].use && !BT->node[n*2+1].use )
          BT->node[n].use = false;
};

void InitB(int x, btree *BT)
{
     for(int i=0; i<10000; i++)
          BT->node[i].use = false;
     BT->node[1].label = x;
     BT->node[1].use = true;
};
