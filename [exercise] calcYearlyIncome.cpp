#include <iostream>
using namespace std;

int main()
{
    double salary, bonus, totSalary, yearlyInc;
    int year;
    cout<<"Enter your monthly salary: RM ";
    cin>>salary;
    cout<<"Enter year of service: ";
    cin>>year;
    
    if(year > 10)
        bonus = 1500.00;
    else if (year > 6 || year < 10)
        bonus = 800.00;
    else if (year > 3 || year < 5)
        bonus = 500.00;
    else
        bonus = 150.00;
        
    totSalary += salary * 12;
    yearlyInc = totSalary + bonus;
    cout<<"The total yearly income is RM " <<yearlyInc <<endl;
    return 0;
}
