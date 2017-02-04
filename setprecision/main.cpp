// Using Setprecision & Fixed to Format Currency
#include <iostream> // for std::fixed
#include <iomanip> // added for std::setprecision

using namespace std;

int main()
{
     double myMoney = 1000.50; // print this formatted as currency.
     cout<<"The total amount of money available is $";
     cout
     cout<<fixed<<setprecision(2) << myMoney <<endl;
     return 0;
}
