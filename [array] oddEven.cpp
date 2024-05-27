#include <iostream>
using namespace std;
int main()
{
    int array[10], odd=0, even=0;
    for(int i=0; i<10; i++){
        cout<<"Enter no " <<(i+1)<<": ";
        cin>>array[i];
    }
    // to count even and odd
    for (int i=0; i<10; i++){
        if(array[i] %2 == 0)
            even++;
        if(array[i] %2 != 0){
             odd++;
        }
    }
    cout<<"Number of odd: "<<odd <<endl;
    cout<<"Number of even: "<<even <<endl;

    return 0;
}
