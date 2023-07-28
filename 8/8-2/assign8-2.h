//
//  assign8-2.h
//  assign8-2.cpp
//
//  Created by Yunji Choe on 2020/05/14.
//  Copyright © 2020 Yunji Choe. All rights reserved.
//

#ifndef assign8_2_h
#define assign8_2_h
class IntArray {
    public:
        void init (); //
        void cleanup();
        void setSize(int value); //
        int getSize();
        void setElem(int index, int value);
        int getElem(int index); //
    
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
    this->numElems = value;
};
int IntArray::getElem(int index){
    if (index >= this->numElems) std::cout << "bad index";
    return this->elems[index];
}


#endif /* assign8_2_h */
