// #include<iostream>
 #include<bits/stdc++.h> 
 using namespace std;
class student
{
string passcode;
// int, char, string, float..
public:
string name;
int id;
student(){
}
student(string passcode, string name, int id)
 {
this->name= name;
this->id = id; this->passcode;
}
void into(){
cout<<passcode;
cout<<"My name is "<<name<<" , my id is "<<id<<"passcord is "<<passcode<<endl;
}
void setPass(string s) {
passcode = s;
}
};

int main(){
     student s1; 
     student s2("10", "Mohit", 1);
      student s3;
s3 = s2; 
s3.into();
// int a = 10;
// int ptri&a;
// student *ptrs - &$2;
return 0;
}
