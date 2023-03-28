#include<iostream>
using namespace std;
#include"studentuse.cpp"
int main(){
	student s1;
	student s2;
	student *s3=new student;
	s3->age=21;
	s3->rollnumber=104;
	s3.rollnumber=79;
	s1.age=34;
	s1.rollnumber=101;
	s2.age=102;
	s2.rollnumber=302;
	cout<<s1.age<<endl;
	cout<<s2.rollnumber<<endl;
	cout<<s3->age<<endl;
	cout<<s3->rollnumber<<endl;
	cout<<s1.rollnumber<<endl;
}
