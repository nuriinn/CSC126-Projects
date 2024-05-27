#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 15; // more easier to change value everytime
    int array[SIZE], positive=0, negative=0;
    for(int i=0; i<SIZE; i++){
        cout<<"Enter no " <<(i+1)<<": ";
        cin>>array[i];
    }
    // to count even and odd
    for (int i=0; i<SIZE; i++){
        if(array[i] > 0)
            positive++;
        if(array[i] < 0){
             negative++;
        }
    }
    cout<<"Number of positive: "<<positive<<endl;
    cout<<"Number of negative: "<<negative <<endl;

    return 0;
}
