#include<iostream>
using namespace std;
struct student
{
    int student_id;
    char  student_name[10]="";
    int marks;
    char subject[8]="Biology";
};
int main()
{
    struct student s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
    cin>>s1.student_id;
    cin>>s1.student_name;
    cin>>s1.marks;

    cin>>s2.student_id;
    cin>>s2.student_name;
    cin>>s2.marks;

    cin>>s3.student_id;
    cin>>s3.student_name;
    cin>>s3.marks;

    cin>>s4.student_id;
    cin>>s4.student_name;
    cin>>s4.marks;

    cin>>s5.student_id;
    cin>>s5.student_name;
    cin>>s5.marks;

    cin>>s6.student_id;
    cin>>s6.student_name;
    cin>>s6.marks;

    cin>>s7.student_id;
    cin>>s7.student_name;
    cin>>s7.marks;

    cin>>s8.student_id;
    cin>>s8.student_name;
    cin>>s8.marks;

    cin>>s9.student_id;
    cin>>s9.student_name;
    cin>>s9.marks;

    cin>>s10.student_id;
    cin>>s10.student_name;
    cin>>s10.marks;

    cout<<"Subject for all students:"<<s1.subject<<endl;

    cout<<"1st student ID:"<<s1.student_id<<endl;
    cout<<"1st student name:"<<s1.student_name<<endl;
    cout<<"1st student marks:"<<s1.marks<<endl;

    cout<<"2nd student ID:"<<s2.student_id<<endl;
    cout<<"2nd student name:"<<s2.student_name<<endl;
    cout<<"2nd student marks:"<<s2.marks<<endl;

    cout<<"3rd student ID:"<<s3.student_id<<endl;
    cout<<"3rd student name:"<<s3.student_name<<endl;
    cout<<"3rd student marks:"<<s3.marks<<endl;

    cout<<"4th student ID:"<<s4.student_id<<endl;
    cout<<"4th student name:"<<s4.student_name<<endl;
    cout<<"4th student marks:"<<s4.marks<<endl;

    cout<<"5th student ID:"<<s5.student_id<<endl;
    cout<<"5th student name:"<<s5.student_name<<endl;
    cout<<"5th student marks:"<<s5.marks<<endl;

    cout<<"6th student ID:"<<s6.student_id<<endl;
    cout<<"6th student name:"<<s6.student_name<<endl;
    cout<<"6th student marks:"<<s6.marks<<endl;

    cout<<"7th student ID:"<<s7.student_id<<endl;
    cout<<"7th student name:"<<s7.student_name<<endl;
    cout<<"7th student marks:"<<s7.marks<<endl;

    cout<<"8th student ID:"<<s8.student_id<<endl;
    cout<<"8th student name:"<<s8.student_name<<endl;
    cout<<"8th student marks:"<<s8.marks<<endl;

    cout<<"9th student ID:"<<s9.student_id<<endl;
    cout<<"9th student name:"<<s9.student_name<<endl;
    cout<<"9th student marks:"<<s9.marks<<endl;

    cout<<"10th student ID:"<<s10.student_id<<endl;
    cout<<"10th student name:"<<s10.student_name<<endl;
    cout<<"10th student marks:"<<s10.marks<<endl;

    int sum,avg;
    sum=s1.marks+s2.marks+s3.marks+s4.marks+s5.marks+s6.marks+s7.marks+s8.marks+s9.marks+s10.marks;
    avg=sum/10;
    cout<<"Average marks of all students:"<<avg<<endl;

    return 0;
}
