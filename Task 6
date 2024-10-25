//Task 6: A code that takes the number of subjects and their marks, prints out their total, total-grade and total-average
#include<iostream>
using namespace std;
int main()
{
    int sub,marks,total;
    cout<<"Enter the number of subjects: ";
    cin>>sub;
    for(int i=1; i<=sub; i++)
    {
        cout<<"Enter marks of Subject "<<i<<" : ";
        cin>>marks;
        total=total+marks;
    }
    cout<<"The total marks are: "<<total<<endl;
    if(total >= 90)
    cout<<"Grade: A"<<endl;
    else if(total <=89)
    cout<<"Grade: B"<<endl;
    else if(total <= 74)
    cout<<"Grade: C"<<endl;
    else if(total <=50)
    cout<<"Grade: F"<<endl;

    cout<<"The average of total is: "<<total/sub;
}
