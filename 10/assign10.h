//
//  assign10.h
//  assign10
//
//  Copyright © 2020 Yunji Choe. All rights reserved.
//

#ifndef assign10_h
#define assign10_h

class Polynomial{
public:
    Polynomial(int d = 0); // default value for d
    ~Polynomial(); //destructor
    void set(int i, double v); //set elems
    double get(int i) const; // get elems
    int degree() const; //int d를 읽어오는 function n+1
    double evaluate(double x) const; //x값을 주면 위의 식의 값을 구하는 func xn = pow(x, 3.0)
private:
    double *a;
    int d;
    int n;
};

Polynomial::Polynomial(int d){
    if (this -> a !=0)
        free (this -> a);
    this->a = (double *)malloc( d * sizeof(double));
    if (d == 0){
        this->a[0] = 1;
    }
    n = d+1;
}

Polynomial::~Polynomial(){
    if (this -> a !=0)
        free (this -> a);
}

void Polynomial::set(int i, double v){
    if (i > n) std::cout <<"ERROR";
    this-> a[i] = v;
}

double Polynomial::get(int i) const{
//    if (i > n) std::cout << "ERROR";
    return a[i];
}

int Polynomial::degree() const{
    return (n+1);
}

double Polynomial::evaluate(double x) const{
    int sum = a[0];
    for (int j = 1; j < n; j++){
        sum += a[j] * pow(x, (double)j);
    };
    return sum;
}


#endif /* assign10_h */
