#include "question1.h"

using std::string; using std::cout;

double get_sales_commission(double sales)
{
    double num = 0.0;

    if(sales >= 0.0 && sales <= 499.0)
    {
        num = 5.0;
    }
    else if(sales >= 500.0 && sales <= 999.0)
    {
        num = 6.0;
    }
    else if(sales >= 1000.0 && sales <= 1499.0)
    {
        num = 7.0;
    }

    else if(sales >= 1500.0)
    {
        num = 8.0;
    }
    else
    {
        num = 0.0;
    }
    
    return sales * (num/100.0);
}