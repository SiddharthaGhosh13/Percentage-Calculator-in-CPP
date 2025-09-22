#include<iostream>
using namespace std;
int main(){
    int Subject,i=1;
    float Marks,TotalMarks=0,Percentage,MaxMark;
    cout<<"Enter Number Of Subjects: ";
    cin>>Subject;
    cout<<"Enter Maximum Marks: ";
    cin>>MaxMark;
    while(i<=Subject){
        cout<<"Subject"<<i<<" Marks: ";
        cin>>Marks;
        TotalMarks=TotalMarks+Marks;
        i++;
    }
    Percentage=(TotalMarks*100)/(Subject*MaxMark);
    cout<<"Your Percentage is: "<<Percentage<<endl;
    return 0;
}
