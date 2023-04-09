
#include <iostream>
#include <cassert>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator) {
        assert(denominator != 0);
        assert((typeid(numerator) == typeid(int)) && (typeid(denominator) == typeid(int)));
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void reduce() {
        int gcd = getGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    Fraction operator+(const Fraction &other) const {
        int new_numerator = numerator * other.denominator + denominator * other.numerator;
        int new_denominator = denominator * other.denominator;
        Fraction result(new_numerator, new_denominator);
        result.reduce();
        return result;
    }

    friend ostream& operator<<(ostream &os, const Fraction &f) {
        os << f.numerator << "/" << f.denominator;
        return os;
    }

    string repr() const {
        return "Fraction(" + to_string(numerator) + ", " + to_string(denominator) + ")";
    }

private:
    int getGCD(int a, int b) const {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main() {
    Fraction f1(2, 3);
    Fraction f2(3, 4);

    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;

    Fraction f3 = f1 + f2;
    cout << "f3 = " << f3 << endl;

    cout << "repr of f3 = " << f3.repr() << endl;

    return 0;
}
