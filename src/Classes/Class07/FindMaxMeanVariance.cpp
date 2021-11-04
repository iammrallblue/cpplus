#include <iostream>

using namespace std;

double max(double a[], int);      // The max value
double ave(double a[], int);      // Mean/Average
double min(double a[], int);      // Midian
double variance(double a[], int); // Variance


// max function for finding the max value of an array
double max(double a[], int n)
{
    double max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
} // max


// ave function for finding the mean/average
double ave(double a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum / n;
} // ave

// mid function for finding midian / mid-value
double mid(double a[], int n)
{
    int mid;
    if (n % 2 == 0)
        mid = (a[n / 2 - 1] + a[n / 2]) / 2;
    else
        mid = a[(n - 1) / 2];
} // mid

// variance function for finding variance, the mean value is required
double variance(double a[], int n)
{
    double sum = 0;
    double average = ave(a, n); //函数调用！！不准有【】！！！不准有int和double ！！
    for (int i = 0; i < n; i++)
        sum = (a[i] - average) * (a[i] - average);
    return sum / n;
} // variance 


int main()
{
} // main