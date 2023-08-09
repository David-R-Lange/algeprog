#include "steepest_descent.hh"

SteepestDescent::SteepestDescent(Function& fct) {
    this->m_fct = fct;
}

void SteepestDescent::set_x0(double x) {
    this->m_x = x;
    this->m_f = this->m_fct.f(x);
    this->m_df = this->m_fct.df(x);
}

double const SteepestDescent::x() {
    return this->m_x;
}

int SteepestDescent::solve(double& x0, double eps, double n) {
   this->set_x0(x0);
   double x = x0;
   int iter = 0;
   for(; iter < n+1; ++iter) {
       x = this->x();
       this->m_x = x - this->m_fct.df(x);

       if( abs(this->m_fct.df(x)) < eps) {
           break;
       }
   }
   return iter;
}
