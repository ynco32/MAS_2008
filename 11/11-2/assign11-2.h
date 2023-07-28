//
//  assign11-2.h
//  assign11-2
//
//  Created by Yunji Choe on 2020/06/03.
//  Copyright © 2020 Yunji Choe. All rights reserved.
//

#ifndef assign11_2_h
#define assign11_2_h
#include <string.h>
#include <iostream>
using namespace std;

class my_string{
public:
    my_string();
    my_string(const char* s);
    ~my_string();
    my_string& operator=(const my_string& cs);
    my_string& operator+(const my_string& cs);
    my_string(my_string& cs);
    char * getString() {return cstring;}
    void print(ostream* os);
    
private:
    char* cstring;
    int clength;
};

my_string::my_string(){
    this->cstring = (char *)malloc(clength * sizeof(char));
}

my_string::my_string(const char* s){
    clength = (int) strlen(s);
    this->cstring = (char *)malloc(clength * sizeof(char));
    strcpy(cstring, s);
}

my_string::~my_string(){
    delete[] cstring;
    cstring =new char;
    clength = 0;
}

my_string& my_string::operator=(const my_string& cs){
    if (this == &cs) return *this;
    clength = cs.clength;
    
    delete[] cstring;
    if(cs.cstring !=0){
    cstring = new char[strlen(cs.cstring)+1];
    strcpy(cstring, cs.cstring);
        return *this;
    }
else {
    cstring = 0;
    return *this;
}
}

my_string& my_string::operator+(const my_string& cs){
    if (cs.cstring !=0){
        if (cstring!= 0){
            char* cstring = new char[clength+strlen(cs.cstring)+1];
            strcat(cstring, cs.cstring);
            return *this;
            
    }
        else{
            delete[] cstring;
            cstring = new char[strlen(cs.cstring)+1];
            strcpy(cstring, cs.cstring);
            return *this;
        }
    }

    else{
        if (cstring != 0){
            delete[] cstring;
            cstring = new char[strlen(cstring)+1];
            strcpy(cstring, cs.cstring);
            return *this;
        }
        else{
            cstring = 0;
            return *this;
        }
    }
}

my_string::my_string(my_string& cs){
        clength = cs.clength;
    
        delete[] cstring;
        if(cs.cstring !=0){
        cstring = new char[strlen(cs.cstring)+1];
        strcpy(cstring, cs.cstring);
        }
    else {
        cstring = 0;
    }
}

void my_string::print(ostream* os){
    *os << "" << cstring;
}

ostream& operator<< (ostream& os, my_string& cs){
    cs.print(&os);
    return os;
}

#endif /* assign11_2_h */
