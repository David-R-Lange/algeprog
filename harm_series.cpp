#include <iostream>
#include <cmath>

using namespace std;

float harm_series_forward(float n)
{
    float s_v = 0;
    for(float k = 1; k <= n; ++k)
    {
        s_v += 1/k;
    }
    return s_v;
}

float harm_series_backward(float n)
{
    float s_r = 0;
    for(float k = n; k >= 1; --k)
    {
        s_r += 1/k;
    }
    return s_r;
}

double harm_series_forward(double n)
{
    double s_v = 0;
    for(double k = 1; k <= n; ++k)
    {
        s_v += 1/k;
    }
    return s_v;
}

double harm_series_backward(double n)
{
    double s_r = 0;
    for(double k = n; k >= 1; --k)
    {
        s_r += 1/k;
    }
    return s_r;
}

template <typename T>
T general_harm_series_forward(T n)
{
    T s_a = 0;
    for(T k = 1; k <= n; ++k)
    {
        s_a += 1/k;
    }
    return s_a;
}

template <typename T>
T general_harm_series_backward(T n)
{
    T s_a = 0;
    for(T k = n; k >= 1; --k)
    {
        s_a += 1/k;
    }
    return s_a;
}


int main()
{
    float s_v, s_r;
    double sd_v, sd_r;

    cout.precision(16);

    cout << "\n\ns_v\t\t\ts_r\t\t\t|s_v - s_r|\n";
    for(int k = 1; k <= 7; ++k)
    {
        s_v = harm_series_forward((float)pow(10,k));
        s_r = harm_series_backward((float)pow(10,k));

        cout << s_v << "\t" << s_r << "\t" << fabs(s_v - s_r) << endl;
    }

    cout << "\n\nsd_v\t\t\tsd_r\t\t\t|sd_v - sd_r|\n";
    for(int k = 1; k <= 7; ++k)
    {
        sd_v = harm_series_forward(pow(10,k));
        sd_r = harm_series_backward(pow(10,k));

        cout << sd_v << "\t" << sd_r << "\t" << fabs(sd_v - sd_r) << endl;
    }

    cout << "\n\ns_v\t\t\ts_r\t\t\t|s_v - s_r|\n";
    for(int k = 1; k <= 7; ++k)
    {
        s_v = general_harm_series_forward<float>((float)pow(10,k));
        s_r = general_harm_series_backward<float>((float)pow(10,k));

        cout << s_v << "\t" << s_r << "\t" << fabs(s_v - s_r) << endl;
    }

    cout << "\n\nsd_v\t\t\tsd_r\t\t\t|sd_v - sd_r|\n";
    for(int k = 1; k <= 7; ++k)
    {
        sd_v = general_harm_series_forward<double>(pow(10,k));
        sd_r = general_harm_series_backward<double>(pow(10,k));

        cout << sd_v << "\t" << sd_r << "\t" << fabs(sd_v - sd_r) << endl;
    }
}