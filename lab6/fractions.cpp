#include <iostream>
#include <vector>

using namespace std;

class fraction
{
private:
    // Internal representation of a fraction as two integers
    int numerator;
    int denominator;

    void simplify(void){
        int a = numerator;
        int b = denominator;
        int temp;
        while (b != 0){
            temp = a % b;
            a = b;
            b = temp;
        }
        numerator = numerator / a;
        denominator = denominator / a;
    }
    

public:
    // Class constructor
    fraction(int n, int d);
    // Methods to update the fraction
    void add(fraction f);
    void mult(fraction f);
    void div(fraction f);
    // Display method
    void display(void);
};

fraction::fraction(int n, int d){
    numerator = n;
    denominator = d;
    simplify();
}

void fraction::add(fraction f){
    numerator = numerator * f.denominator + f.numerator * denominator;
    denominator = denominator * f.denominator;
    simplify();
}

void fraction::mult(fraction f){
    numerator = numerator * f.numerator;
    denominator = denominator * f.denominator;
    simplify();
}

void fraction::div(fraction f){
    numerator = numerator * f.denominator;
    denominator = denominator * f.numerator;
    simplify();
}

void fraction::display(void){
    cout << numerator << " / " << denominator << endl;
}

int main(){

    int n, d;
    string f,op;

    while (true){
        cin >> n >> f >> d;
        fraction frac = fraction(n,d);
        cin >> op;
        cin >> n >> f >> d;
        fraction frac2 = fraction(n,d);
        if (cin.fail()){
            break;
        }
        if (op == "+"){
            frac.add(frac2);
        }
        else if (op == "*"){
            frac.mult(frac2);
        }
        else if (op == "div"){
            frac.div(frac2);
        }
        frac.display();

    }



    
}