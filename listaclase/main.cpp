#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

class Nod{
public:
    int data;
    Nod *next;

    Nod(){
        next = 0;
    }

    Nod(int data, Nod* next){
        this->data = data;
        this->next = next;
    }

    Nod(Nod* next){
        this->next = next;
    }

    Nod(int data){
        this->data = data;
    }

    inline int getInfo(){
        return data;
    }
    inline int setInfo(int info){
        this->data = info;
    }

    inline Nod* getNext(){
        return next;
    }

};

class Lista{
public:
    Nod *prim, *ultim;

    Lista(){
        prim = ultim = 0;
    }
    ~Lista(){
        Nod *p = prim;
        Nod *q;

        while(p!=NULL){
            q = p;
            p = p->next;
            delete q;
        }
        prim = ultim = 0;
    }

    inline int isEmpty(){
        return prim == 0;
    }
    //adauga nod la inceput

    void addElementFirst(){
        Nod *p;
        p = new Nod(10);
        //cin>>p->data;

        prim = ultim = p;
    }

    void addElementtofirst(){
        Nod *p;
        p = new Nod(7);
        //cin>>p->data;
        p->next = prim;
        prim = p;
    }
    //adauga noduri
    void addElement(){
        Nod* p;
        p = new Nod(12);
        //cin>>p->data;

        ultim->next = p;
        ultim = p;

        ultim->next = NULL;
    }

    inline Nod* getFirst(){
        return prim;
    }
    inline Nod* getLast(){
        return ultim;
    }

    void afisare(){
        Nod *p;
        p = prim;
        while (p!=NULL){
            cout<<p->data<<" ";
            p = p->next;
        }
    }
};

int main ()
{
    Lista L;
    L.addElementFirst();
    L.addElement();
    L.addElement();
    L.addElementtofirst();

    L.afisare();
    return 0;

}
