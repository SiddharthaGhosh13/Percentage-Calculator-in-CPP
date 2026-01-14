#include<iostream>
using namespace std;
int main(){
    int Subject,i=1;
    float Marks,TotalMarks=0,Percentage,MaxMark;
    cout<<"Enter number of subjects: ";
    cin>>Subject;
    cout<<"Enter maximum marks: ";
    cin>>MaxMark;
    while(i<=Subject){
        cout<<"Subject "<<i<<" marks: ";
        cin>>Marks;
        TotalMarks=TotalMarks+Marks;
        i++;
    }
    Percentage=(TotalMarks*100)/(Subject*MaxMark);
    cout<<"Your percentage is: "<<Percentage<<"%"<<endl;
    return 0;
}
