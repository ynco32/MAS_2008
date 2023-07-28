//
//  main.cpp
//  assign9
//
//  Created by Yunji Choe on 2020/05/20.
//  Copyright © 2020 Yunji Choe. All rights reserved.
//
#include <stdio.h>
#include <iostream>
class IntArray {
    public:
        void init (); //
        void cleanup();
        void setSize(int value); //
        int getSize();
        void setElem(int index, int value);
        int getElem(int index); //
    
        bool IsEmpty() const; // return true if empty
        int Length() const; //return the length
        bool Find(int k, int* x) const; //return k'th element in *x
    
    private:
        int *elems;
        int numElems;
};
void IntArray::init(){
    this->numElems = 0;
    this->elems = 0;
}
void IntArray::cleanup(){
    if (this->elems !=0)
        free(this->elems);
}
void IntArray::setSize(int value){
    if (this->elems !=0)
        free (this->elems);
    this->numElems = value;
    this->elems = (int *)malloc(value * sizeof(int));
}
int IntArray::getSize(){
    int i =0;
    while (1){
        i++;
        if (this->elems == 0) break;
    }
    return i;
}
void IntArray::setElem(int index, int value){
    this->elems[index] = value;
};

int IntArray::getElem(int index){
    if (index >= this->numElems) std::cout << "bad index";
    return this->elems[index];}

bool IntArray::IsEmpty() const{
    if (this->elems == 0)
        return true;
    else
        return false;
}

int IntArray::Length() const{
    if (elems == 0)
        return 0;
    else
        return numElems;
}
bool IntArray::Find(int k, int* x) const{
    if (k > numElems)
        return false;
    else
    {
        *x = this->elems[k];
        return true;
    }
}
int main(){
    IntArray powersOf2;
    IntArray *ppow = &powersOf2;
    powersOf2.init();
    std::cout << "IsEmpty = " << powersOf2.IsEmpty() <<std::endl;
    std::cout << "Length = " << powersOf2.Length() <<std::endl;
    ppow ->setSize(4);
    ppow->setElem(0,1);
    ppow->setElem(1,2*ppow->getElem(0));
    ppow->setElem(2,2*ppow->getElem(1));
    ppow->setElem(3,2*ppow->getElem(2));
    std::cout << "IsEmpty = " << powersOf2.IsEmpty() <<std::endl;
    std::cout << "Length = " << powersOf2.Length() <<std::endl;
    int z;
    if( powersOf2.Find(0, &z) )
        std::cout << "First element is " << z << std::endl;
    if( powersOf2.Find(powersOf2.Length()-1, &z) )
        std::cout << "Last element is " << z << std::endl;

    return 0;
 }
