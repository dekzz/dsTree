#include <iostream>
#include "ostablo.h"
#include "bstablo_polje.h"
using namespace std;

int main()
{
    tree *T = new tree;
    btree *BT = new btree;
    bool pom;
    int odabir, n, x;
    char l;
    do{
        pom = true;
          cout << "=========================IZBORNIK=========================" << endl;
          cout << "1. Rad sa opcenitim stablom" << endl;
          cout << "2. Rad sa binarnim stablom" << endl;
          cout << "9. Izlaz iz programa" << endl;
          cout << "==========================================================" << endl;
          cout << "> ";
          cin >> odabir;
          switch(odabir)
          {
                        case 1:
                             {
                                 do{
                                    cout << "\nOpcenito stablo: " << endl;
                                    cout << "-----------------" << endl;
                                    cout << "1. Init" << endl;
                                    cout << "2. Root" << endl;
                                    cout << "3. Create" << endl;
                                    cout << "4. ChangeLabel" << endl;
                                    cout << "5. Delete" << endl;
                                    cout << "6. FirstChild" << endl;
                                    cout << "7. NextSibling" << endl;
                                    cout << "8. Lable" << endl;
                                    cout << "9. Parent" << endl;
                                    cout << "0. Napusti izbornik" << endl;
                                    cin >> odabir;
                                    cout << endl;
                                    switch(odabir)
                                    {
                                                  break;
                                                  case 1:
                                                       {
                                                                  cout << "Korijen: ";
                                                                  cin >> x;
                                                                  InitT(x, T);
                                                                  break;
                                                       }
                                                  case 2:
                                                       {
                                                                  cout << "Korijen: " << RootT(T) << endl;
                                                                  break;
                                                       }
                                                  case 3:
                                                       {
                                                                  cout << "Vrijednost: ";
                                                                  cin >> x;
                                                                  cout << "Djete cvora: ";
                                                                  cin >> n;
                                                                  CreateT(x,n,T);
                                                                  break;
                                                       }
                                                  case 4:
                                                       {
                                                                  cout << "Nova labela: ";
                                                                  cin >> l;
                                                                  cout << "Cvor: ";
                                                                  cin >> n;
                                                                  ChangeLabelT(l,n,T);
                                                                  break;
                                                       }
                                                  case 5:
                                                       {
                                                                  cout << "Cvor: ";
                                                                  cin >> n;
                                                                  DeleteT(n,T);
                                                                  break;
                                                       }
                                                  case 6:
                                                       {
                                                                 cout << "Cvor: ";
                                                                 cin >> n;
                                                                 cout << "Prvo dijete: " << FirstChildT(n,T) << endl;
                                                                 break;
                                                       }
                                                  case 7:
                                                       {
                                                                 cout << "Cvor: ";
                                                                 cin >> n;
                                                                 cout << "Sljedeci brat: " << NextSiblingT(n,T) << endl;
                                                                 break;
                                                       }
                                                  case 8:
                                                       {
                                                                 cout << "Cvor: ";
                                                                 cin >> n;
                                                                 LabelT(n,T);
                                                                 break;
                                                       }
                                                  case 9:
                                                       {
                                                                 cout << "Cvor: ";
                                                                 cin >> n;
                                                                 ParentT(n,T);
                                                                 break;
                                                       }
                                                  case 0:
                                                       {
                                                                 pom= false;
                                                                 break;
                                                       }
                                                  default: cout << "Odabrali ste nepostojecu opciju!" << endl;
                                    }
                                 }while(pom);
                                 break;
                             }
                        case 2:
                             {
                                    do{
                                       cout << "\nBinarno stablo: " << endl;
                                       cout << "-----------------" << endl;
                                       cout << "1. Init" << endl;
                                       cout << "2. Root" << endl;
                                       cout << "3. CreateLeft" << endl;
                                       cout << "4. CreateRight" << endl;
                                       cout << "5. Delete" << endl;
                                       cout << "6. LeftChild" << endl;
                                       cout << "7. RightChild" << endl;
                                       cout << "8. Lable" << endl;
                                       cout << "9. ChangeLable" << endl;
                                       cout << "10. Parent" << endl;
                                       cout << "0. Napusti izbornik" << endl;
                                       cin >> odabir;
                                       cout << endl;
                                       switch(odabir)
                                       {
                                                     case 1:
                                                          {
                                                                     cout << "Vrijednost: ";
                                                                     cin >>n;
                                                                     InitB(n,BT);                                                                     
                                                                     break;
                                                          }
                                                     case 2:
                                                          {
                                                                     cout << "Korijen: " << RootB(BT) << endl;
                                                                     break;
                                                          }
                                                     case 3:
                                                          {
                                                                     cout << "Vrijednost: ";
                                                                     cin >> x;
                                                                     cout << "Dijete cvora: ";
                                                                     cin >> n;
                                                                     CreateLeftB(x,n,BT);
                                                                     break;
                                                          }
                                                     case 4:
                                                          {
                                                                     cout << "Vrijednost: ";
                                                                     cin >> x;
                                                                     cout << "Dijete cvora: ";
                                                                     cin >> n;
                                                                     CreateRightB(x,n,BT);
                                                                     break;
                                                          }
                                                     case 5:
                                                          {
                                                                     cout << "Cvor: ";
                                                                     cin >> n;
                                                                     DeleteB(n,BT);
                                                                     break;
                                                          }
                                                     case 6:
                                                          {
                                                                     cout << "Cvor: ";
                                                                     cin >> n;
                                                                     cout << "Lijevo dijete: " << LeftChildB(n,BT) << endl;
                                                                     break;
                                                          }
                                                     case 7:
                                                          {
                                                                     cout << "Cvor: ";
                                                                     cin >> n;
                                                                     cout << "Desno dijete: " << RightChildB(n,BT) << endl;
                                                                     break;
                                                          }
                                                     case 8:
                                                          {
                                                                     cout << "Cvor: ";
                                                                     cin >> n;
                                                                     cout << "Lablel: " << LabelB(n,BT) << endl;
                                                                     break;
                                                          }
                                                     case 9:
                                                          {
                                                                     cout << "Vrijednost: ";
                                                                     cin >> x;
                                                                     cout << "Cvor: ";
                                                                     cin >> n;
                                                                     ChangeLabelB(x,n,BT);                                                                     
                                                                     break;
                                                          }
                                                     case 10:
                                                          {
                                                                     cout << "Cvor: ";
                                                                     cin >> n;
                                                                     cout << "Roditelj: " << ParentB(n,BT) << endl;
                                                                     break;
                                                          }
                                                     case 0:
                                                          {
                                                                 pom= false;
                                                                 break;
                                                          }
                                                     default: cout << "Odabrali ste nepostojecu opciju!" << endl;
                                       }
                                    }while(pom);
                                    break;
                             }
                        case 9:
                             return 0;
                        default: cout << "Odabrali ste nepostojecu opciju!" << endl;
          }
    }while(1);
    return 0;
}
