#include "steepest_descent.hh"

SteepestDescent::SteepestDescent(Function& fct) {
    this->m_fct = fct;
}

void SteepestDescent::set_x0(double x) {
    this->m_x = x;
}

double const SteepestDescent::x() {
    return this->m_x;
}

int SteepestDescent::solve(double& x0, double eps, double n) {
   this->set_x0(x0);
   double x = x0;
   double f = 0;
   double df = 0; 
   this->m_fct.eval(x,f,df);
   int iter = 0;

   for(; iter < n+1; ++iter) {
       x = this->x();
       this->m_x = x - df;
       this->m_fct.eval(x, f, df);

       if( abs(df) < eps) {
           break;
       }
   }
   return iter;
}
