#include <iostream>
#include <cmath>
#include "integral.hpp"
#include "cases.hpp"
#include "intro.hpp"

double trapezoidalRule (double a, double b, double (*f) (double))
{
    return 0.5 * (b-a) * (f(a) + f(b));

}


double trapezoidalRuleAdaptive (double a, double b, double lambda, double (*f) (double))
{
    double Trap = 0;
    double var_lambda =(b-a)*lambda;
    double var_a=a;
    double var_b=a+var_lambda;
    while(var_b<=b)
    {
        Trap = Trap + (0.5 * (var_b-var_a) * (f(var_a) + f(var_b)));
        var_a = var_b;
        var_b=var_a+var_lambda;
    }
    return Trap;
}
