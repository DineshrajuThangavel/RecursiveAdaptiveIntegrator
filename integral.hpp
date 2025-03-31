#ifndef INTEGRAL_HPP_INCLUDED
#define INTEGRAL_HPP_INCLUDED
double trapezoidalRule (double a, double b, double (*f) (double));

double trapezoidalRuleAdaptive (double a, double b, double lambda, double (*f) (double));


#endif // INTEGRAL_HPP_INCLUDED
