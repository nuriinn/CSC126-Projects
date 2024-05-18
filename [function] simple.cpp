#include <iostream>
using namespace std;

void change(int, int);

int main()
{
    int no1 = 10, no2 = 35;
    
    change(no1, no2);
    
    cout<<"no1 in main(): " <<no1 <<endl;
    cout<<"no2 in main(): " <<no2 <<endl;

    return 0;
}
void change(int no1, int no2){
    no1 = no1 + 100;
    no2 = no2 + 100;
    cout<<"no1 in change(): " <<no1 <<endl;
    cout<<"no2 in change(): " <<no2 <<endl;
}