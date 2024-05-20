#include <iostream>
#include <string.h>
using namespace std;
int calculate(int quiz, int test);
void compare(int totMarkA , int totMarkB);

int totMarkA = 0, totMarkB = 0;
char group[50];
int main()
{
    const int STUDENT_NO = 3;
    int matricA[STUDENT_NO] , matricB[STUDENT_NO];
    int quizA [STUDENT_NO] , quizB[STUDENT_NO], testA[STUDENT_NO], testB[STUDENT_NO];
    
    //for Group A
    cout<<"Enter mark for group A  " <<endl;
    for(int i=0; i<STUDENT_NO; i++){
        cout<<"Enter matric no: ";
        cin>>matricA[i];
        cout<<"\tEnter Quiz: ";
        cin>>quizA[i];
        cout<<"\tEnter Test: ";
        cin>>testA[i];
        totMarkA = calculate(quizA[i], testA[i]);
    }
    
    //for Group B
    cout<<"Enter mark for group B  " <<endl;
    for(int i=0; i<STUDENT_NO; i++){
        cout<<"Enter matric no: ";
        cin>>matricB[i];
        cout<<"\tEnter Quiz: ";
        cin>>quizB[i];
        cout<<"\tEnter Test: ";
        cin>>testB[i];
        totMarkB = calculate(quizB[i], testB[i]);
    }
    cout<<"Total Mark A: " <<totMarkA <<endl;
    cout<<"Total Mark B: " <<totMarkB <<endl;
    compare(totMarkA , totMarkB);
    cout<<"Winner is from group: " <<group <<endl;
    return 0;
}

//calc mark
int calculate(int quiz, int test){
    return quiz * test;
}

//compare between A and B
void compare(int markA, int markB){
    if(markA > markB)
        strcpy(group, "A");
    else if (markA < markB)
        strcpy(group,"B");
    else{
        strcpy(group, "DRAW");
    }
}
