#include <iostream>
#include <cmath>
#include "integral.hpp"
#include "cases.hpp"
#include "intro.hpp"


double f_example1 (double x){ return sin(x);}

void example1() {
    double x1 = 0;
    double x2 = M_PI/2;
    double lambda;

    std::cout << "Example 1";
    std::cout << "\n---------";
    std::cout << "\nEnter your lambda value (between 0 & 1) ";
    std::cin >> lambda;
    std::cout << "\nf = sin x, a=0, b= pi/2, tol = 1e-06. ";
    double integ_f_example1 = -cos(x2) + cos(x1);
    std::cout << "\nExact value is " << "-cos " << x2 << " + " << "cos" << x1 << " = " << integ_f_example1 << "....";
    double Error;
    double Trap_Value;
    Error = fabs(integ_f_example1 - trapezoidalRuleAdaptive (x1, x2, lambda, &f_example1));
    while (Error > 0.000001)
        {
            lambda = lambda * lambda;
            Trap_Value = trapezoidalRuleAdaptive (x1, x2, lambda, &f_example1);
            Error = fabs(integ_f_example1 - Trap_Value);
        }
    std::cout << "\nValue of integral computed by d&c algorithm = " << Trap_Value;
    std::cout << "\nValue of integral computed by trapezoidal rule I = " << trapezoidalRule (x1, x2, &f_example1);
}


double f_example2 (double x){ return cos(x);}

void example2() {
    double x1 = -M_PI/2;
    double x2 = M_PI/2;
    double lambda;

    std::cout << "\n\nExample 2";
    std::cout << "\n---------";
    std::cout << "\nEnter your lambda value (between 0 & 1) ";
    std::cin >> lambda;
    std::cout << "\nf = cos x, a= -pi/2, b= pi/2, tol = 1e-06. ";
    double integ_f_example2 = sin(x2) - sin(x1);
    std::cout << "\nExact value is " << " Sin " << x2 << " - " << "Sin" << x1 << " = " << integ_f_example2 << "....";
    double Error;
    double Trap_Value;
    Error = fabs(integ_f_example2 - trapezoidalRuleAdaptive (x1, x2, lambda, &f_example2));
    while (Error > 0.000001)
        {
            lambda = lambda * lambda;
            Trap_Value = trapezoidalRuleAdaptive (x1, x2, lambda, &f_example2);
            Error = fabs(integ_f_example2 - Trap_Value);
        }
    std::cout << "\nValue of integral computed by d&c algorithm = " << Trap_Value;
    std::cout << "\nValue of integral computed by trapezoidal rule I = " << trapezoidalRule (x1, x2, &f_example2);
}



double f_example3 (double x){ return atan(x);}


void example3() {
    double x1 = 0;
    double x2 = 2;
    double lambda;

    std::cout << "\n\nExample 3";
    std::cout << "\n---------";
    std::cout << "\nEnter your lambda value (between 0 & 1) ";
    std::cin >> lambda;
    std::cout << "\nf = Arctan x, a=0, b=2, tol = 1e-06. ";
    double integ_f_example3 = ( x2 * f_example3(x2) - 0.5 * log(1+pow(x2,2)) ) - ( x1 * f_example3(x1) - 0.5 * log(1+pow(x1,2)) );
    std::cout << "\nExact value is " << x2 << " Arctan " << x2 << " - " << lambda << "* ln(" << 1+pow(x2,2) << ") = " << integ_f_example3 << "....";
    double Error;
    double Trap_Value;
    Error = fabs(integ_f_example3 - trapezoidalRuleAdaptive (x1, x2, lambda, &f_example3));
    while (Error > 0.000001)
        {
            lambda = lambda * lambda;
            Trap_Value = trapezoidalRuleAdaptive (x1, x2, lambda, &f_example3);
            Error = fabs(integ_f_example3 - Trap_Value);
        }
    std::cout << "\nValue of integral computed by d&c algorithm = " << Trap_Value;
    std::cout << "\nValue of integral computed by trapezoidal rule I = " << trapezoidalRule (x1, x2, &f_example3);
}



double f_example4 (double x){ return x*sin(x);}


void example4() {
    double x1 = -1;
    double x2 = 3;
    double lambda;

    std::cout << "\n\nExample 4";
    std::cout << "\n---------";
    std::cout << "\nEnter your lambda value (between 0 & 1) ";
    std::cin >> lambda;
    std::cout << "\nf = xsinx, a= -1, b=3, tol = 1e-06. ";



    double integ_f_example4 = sin(x2) - x2*cos(x2) - (sin(x1) - x1*cos(x1));
    std::cout << "\nExact value is " << " Sin(" << x2 << ") - " << x2 << "Cos(" << x2 << ") - " << "(sin(" << x1 << ") - " << x1 << "acos(" << x1 << ")" << ") = " << integ_f_example4 << "....";
    double Error;
    double Trap_Value;
    Error = fabs(integ_f_example4 - trapezoidalRuleAdaptive (x1, x2, lambda, &f_example4));
    while (Error > 0.000001)
        {
            lambda = lambda * lambda;
            Trap_Value = trapezoidalRuleAdaptive (x1, x2, lambda, &f_example4);
            Error = fabs(integ_f_example4 - Trap_Value);
        }
    std::cout << "\nValue of integral computed by d&c algorithm = " << Trap_Value;
    std::cout << "\nValue of integral computed by trapezoidal rule I = " << trapezoidalRule (x1, x2, &f_example4);
}







double f_example5 (double x){
    if (x < 1)
        return 1;
    else
        return pow(x,2);}


void example5() {
    double x1 = -2;
    double x2 = 2;
    double lambda;

    std::cout << "\n\nExample 5";
    std::cout << "\n---------";
    std::cout << "\nEnter your lambda value (between 0 & 1) ";
    std::cin >> lambda;
    std::cout << "\nf = x^2 when x>=1 ; f = 1 when x<1, a= -2, b=2, tol = 1e-06. ";



    double integ_f_example5 = 5.33337;
    std::cout << "\nExact value is " << "(" << x2 << "^3)" << "/" << "3" << " - " << " (-2) " << " = " << integ_f_example5 << "....";
    double Error;
    double Trap_Value;
    Error = fabs(integ_f_example5 - trapezoidalRuleAdaptive (x1, x2, lambda, &f_example5));
    while (Error > 0.000001)
        {
            lambda = lambda * lambda;
            Trap_Value = trapezoidalRuleAdaptive (x1, x2, lambda, &f_example5);
            Error = fabs(integ_f_example5 - Trap_Value);
        }
    std::cout << "\nValue of integral computed by d&c algorithm = " << Trap_Value;
    std::cout << "\nValue of integral computed by trapezoidal rule I = " << trapezoidalRule (x1, x2, &f_example5);
}
