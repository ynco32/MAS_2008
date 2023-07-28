//
//  assign11-1.h
//  assign11
//
//  Created by Yunji Choe on 2020/06/03.
//  Copyright © 2020 Yunji Choe. All rights reserved.
//

#ifndef assign11_1_h
#define assign11_1_h

class Polynomial{
public:
    Polynomial(int d = 0); // default value for d
    ~Polynomial(); //destructor
    void set(int i, double v); //set elems
    double get(int i) const; // get elems
    int degree() const; //int d를 읽어오는 function n+1
    double evaluate(double x) const; //x값을 주면 위의 식의 값을 구하는 func xn = pow(x, 3.0)
    void operator=(Polynomial& pol);
    Polynomial(Polynomial& pol);
    void print(std::ostream* os);
private:
    double *a;
    int d;
    int n;
};

Polynomial::Polynomial(int d){
    this->a = (double *)malloc( d * sizeof(double));
    if (d == 0){
        this->a[0] = 1;
    }
    n = d+1;
}

Polynomial::~Polynomial(){
    a = new double;
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

void Polynomial::operator=(Polynomial& pol){
        if (this == &pol) return;
        d = pol.d;
        n = pol.n;
        a = pol.a;
    };

Polynomial::Polynomial(Polynomial& pol){
    d = pol.d;
    n = pol.n;
    a = pol.a;
}

void Polynomial::print(std::ostream* os){
    *os <<"Degree is" << " " << (n+1);
}

#endif /* assign11_1_h */
