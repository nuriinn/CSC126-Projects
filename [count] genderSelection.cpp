#include <iostream>
using namespace std;

int main()
{
    char gender, proceed;
    int merit, count=0, countMale=0, countFemale=0;
	
		cout<<"Residential College Application" <<endl;
        cout<<"Enter gender (M-male, F-female, other character to stop) : ";
        cin >> gender;
        cout<<"Enter merit points: ";
        cin>>merit;
		
        do{
            if (gender == 'M' && merit > 60){
                countMale++;
            }
            else if (gender == 'F' && merit > 60){
                countFemale++;
            }
        }while(proceed != 'X');
    
    cout<<"The number of male students who are succesful: " <<countMale <<endl;
    cout<<"The number of female students who are successful: " <<countFemale <<endl;
        

    return 0;
}
