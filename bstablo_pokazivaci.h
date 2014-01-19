#include <iostream>
using namespace std;

struct element
{
       int label;
       element *left, *right;
};

typedef element node;
typedef element btree;

node RootB(btree *BT)
{
     if(BT)
               return BT;
     else
         return -1;
};

node LeftChildB(node n, btree *BT)
{
     if(n->lijevo!=NULL)
        return n->lijevo;
     else
         return -1;
};

node RightChildB(node n, btree *BT)
{
     if(n->desno!=NULL)
        return n->desno;
     else
         return -1;
};

node LabelB(node n, btree *BT)
{
     if(RootB(n)!=-1)
        return n->vrijednost;
     else
         return -1;
};

void ChangeLabelB(int x, node n, btree *BT)
{
     if(RootB(n)!=-1)
        n->vrijednost = x;
     else
         std::cout<<"node ne postoji!"<<std::endl;
};

node ParentB(node n, btree *BT) // dovrsiti
{
     
};

void CreateLeftB(int x, node n, binarnoStavlo *BT)
{
     node l;
     if(n->lijevo==NULL)
     {
        l = new node;
        l->lijevi = NULL;
        l->desni = NULL;
        l->vrijednost = x;
        n->lijevi = l;
     }
     else
         std::cout<<"Lijevo dijete vec postoji!"<<std::endl;
};

void CreateRightB(int x, node n, binarnoStavlo *BT)
{
     node r;
     if(n->desno==NULL)
     {
        r = new node;
        r->lijevi = NULL;
        r->desni = NULL;
        r->vrijednost = x;
        n->lijevi = r;
     }
     else
         std::cout<<"Desno dijete vec postoji!"<<std::endl;
};

void DeleteB(node n, btree *BT)
{
     if(LeftChildB(n, BT) != -1)
        DeleteB(n->lijevi, BT);
     if(RightChildB(n, BT) != -1)
        DeleteB(n->desni, BT);
     delete n;
};

void InitB(int x, btree *BT)
{
     BT->lijevo = NULL;
     BT->desno = NULL;
     BT->vrijednost = x;
};
