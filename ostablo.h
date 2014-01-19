#include <iostream>
using namespace std;
bool use;
struct node
{
 char label;
 int firstChild, nextSibling;
 bool use;
};

struct tree
{
 node element[10000];
 int first;
};

int pom;
bool nadjen = false;

int ParentT(int n, tree *T)
{
    if(n == T->first)
    {
         nadjen = true;
         return -1;
    };
    for(int i=0; i<10000; i++)
    {
            if(T->element[i].firstChild==n && T->element[i].use == true)
            {
                                            nadjen = true;
                                            cout << "Roditelj cvora: " << i << endl;
                                            return i;
            }
            else if(T->element[i].nextSibling==n && T->element[i].use == true)
            {
                 ParentT(i,T);
            };
    };
    if(nadjen == false)
    {
                cout << "Nije nadjen (ili ste unijeli korijen)!" << endl;
                return -1;
    }
};

int FirstChildT(int n,tree *T)
{
    pom = T->element[n].firstChild;
    if(T->element[n].firstChild!=-1 && T->element[pom].use == true) return T->element[n].firstChild;
    else
    {
        return -1;
    };
};

int NextSiblingT(int n, tree *T)
{
    pom = T->element[n].nextSibling;
    if(T->element[n].nextSibling!=-1 && T->element[pom].use == true) return T->element[n].nextSibling;
    else
    {
        return -1;
    };
};

void LabelT(int n, tree *T)
{
     if(T->element[n].use == false)
     {
                            cout << "Taj cvor ne postoji!" << endl;
                            return;
     }
     else
     {
         cout << "Label: ";
         cout << T->element[n].label << endl;
     }
};

int RootT(tree *T)
{
    if(T->element[T->first].use)
                               return T->first;
    else
        cout << "Korijen ne postoji!" << endl;
};

void CreateT(int x, int n, tree *T)
{
     int i;
     if(T->element[n].firstChild==-1)
     {
                                     T->element[n].firstChild=x;
                                     T->element[x].firstChild=-1;
                                     T->element[x].nextSibling=-1;
                                     T->element[x].use = true;
                                     cout << "Label: ";
                                     cin >> T->element[x].label;
     }
     else
     {
         i=T->element[n].firstChild;
         while(T->element[i].nextSibling!=-1)
         {
                                             i=T->element[i].nextSibling;
         };
         T->element[i].nextSibling=x;
         T->element[x].firstChild=-1;
         T->element[x].nextSibling=-1;
         T->element[x].use = true;
         cout << "Label: ";
         cin >> T->element[x].label;
     };
};

void ChangeLabelT(char x, int n, tree *T)
{
     T->element[n].label = x;
};

void InitT(int x, tree *T)
{
     T->first = x;
     cout << "Label: ";
     cin >> T->element[x].label;
     T->element[x].firstChild = -1;
     T->element[x].nextSibling = -1;
     T->element[x].use = true;
};

void DeleteT(int n, tree *T)
{
     if(T->element[n].firstChild!=-1 && T->element[n].use==true)
     {
                                pom = T->element[n].firstChild;
                                T->element[n].firstChild = -1;
                                DeleteT(pom,T);
     }
     if(T->element[n].firstChild == -1 && T->element[n].nextSibling != -1)
     {
                                 pom = T->element[n].nextSibling;
                                 T->element[n].nextSibling = -1;
                                 DeleteT(pom,T);
                                 
     }
     T->element[n].use = false;
};
