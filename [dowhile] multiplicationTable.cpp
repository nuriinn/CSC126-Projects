#include <iostream>

using namespace std;

int main()
{
    int num;
    
    char proceed;
    do{
        cout<<"Enter multiplication table: ";
        cin>>num;
        
        for(int i=1; i<=12; i++){
            cout<<i <<" x " <<num <<" = " <<(i*num) <<endl;
        }
        cout<<"Press Y to continue: ";
        cin>>proceed;
    }while(tolower (proceed) == 'y');
    

    return 0;
}
