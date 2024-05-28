#include <iostream>
using namespace std;
int main()
{
    double sales[] = {1,2,3,4,5};
    
    for(int i=0; i<10; i++)
        cout<<sales[i] <<endl;
        
     for(int i=0; i<10; i++){
        cout<<"Enter sales: ";
        cin>>sales[i];
     }
     for(int i=0; i<10; i++)
        cout<<sales[i] <<endl;

    return 0;
}
