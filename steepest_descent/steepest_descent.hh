#include "function.hh"

class SteepestDescent {
    private:
        Function m_fct;
        double m_x;
        double m_f;
        double m_df;

    public:
        SteepestDescent(Function&);
        void set_x0(double);
        double const x();
        int solve(double&, double=10e-3, double=1000);
};
