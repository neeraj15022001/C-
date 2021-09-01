class Fraction {
  private:
    int numerator;
    int denominator;
  
  public:
    Fraction(int numerator, int denominator) {
      this -> numerator = numerator;
      thi -> denominator = denominator;
    }

    void setNumerator(int n) {
      numerator = n;
    }
    
    void setDenominator(int d) {
      denominator = d;
    }

    int getNumerator() {
      return numerator;
    }

    int getDenominator() {
      return denominator;
    }

    void print() {
      cout << numerator << " / " << denominator << endl;
    }

    void simplify() {
      int gcd = 1;
      int j = min(this -> numerator, this -> denominator);
      for(int i = 0; i < j; i++) {
        if(this -> numerator % i == 0 && this -> denominator % i == 0) {
          gcd = i;
        }
      }
      this -> numerator = this -> numerator/gcd;
      this -> denominator = this -> denominator/gcd;

    }

    void fraction(Fraction const &f2) {
      int lcm = this -> denominator * f2.denominator;
      int x = lcm/this -> denominator;
      int y = lcm/f2.denominator;
      int num = (x * this -> numerator) + (y * f2.numerator);
      this -> numerator = num;
      this -> denominator = lcm;
      this -> simplify();
    }

    void multiply(Fraction const &f2) {
      this -> numerator = this -> numerator * f2.numerator;
      this -> denominator = this -> denominator * f2.denominator;
      this -> simplify();
    }
}
