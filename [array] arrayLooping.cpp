#include <iostream>
using namespace std;

int main()
{
    double total=0, average;
    int sales [10];
    for (int i=0; i<10; i++){
        cout<<"Enter sales: ";
        cin>>sales[i];
    }
    for (int i=0; i<10; i++){
        total += sales[i];
    }
    average = total/10;
    cout<<endl;
    cout<<endl;
    cout<<"Total: "<<total<<endl;
    cout<<"Average: "<<average<<endl;

    return 0;
}
