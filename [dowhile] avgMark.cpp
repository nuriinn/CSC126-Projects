#include <iostream>

using namespace std;

int main()
{
    double mark, totMark, totAll;
    int counter = 1, studID;
    
    char proceed;
    do {
    int counter = 1;
    totAll=0;       
    
    while(counter <= 3){
        totMark = 0;
        cout<<"Enter student ID: ";
        cin>>studID;
        for(int subject=1; subject<=2; subject++){
            cout<<"Enter mark " <<subject <<": ";
            cin>>mark;
            totMark += mark;
        }
        counter++;
        cout<<"Total mark for ID " <<studID <<": " <<totMark <<endl;
        totAll += totMark;
        cout<<endl;
        
    }
    cout<<"\nTotal all: " <<totAll <<endl;
    cout<<"Average: " <<totAll/3 <<endl;
        
    cout<<"Press Y to continue: ";
    cin>>proceed;
    }while(toupper(proceed) == 'Y');
    
    cout<<"End of Program";
    return 0;
}
