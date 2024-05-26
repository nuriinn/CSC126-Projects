#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 5; // more easier to change value everytime
    int list[SIZE], min=99999, max=0;
    //to input
    for(int i=0; i<SIZE; i++){
        cout<<"Enter number " <<(i+1)<<": ";
        cin>>list[i];
    }
    // to find max and min
    for (int i=0; i<SIZE; i++){
        if(list[i] > max)
            max = list[i];
        if(list[i] < min){
            min = list[i];
        }
    }
    cout<<"The maximum is: "<<max <<endl;
    cout<<"The minimum is: "<<min <<endl;

    return 0;
}
