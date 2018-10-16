#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//STRUCT DECLARATION BLOCK
 struct Details{
		     	 int ID[5], age[5],score[5];  
				string name[5], id[5],grade[5],gender[5];
			 };
int main()
//VARIABLE DECLARATION BLOCK
         {Details student; 
		 int i,malecount=0,femalecount=0;
		 double averageScore=0,averageAge=0,scores_total=0,ages_total=0;
		 
		  ofstream out_data("filename.txt");
//FOR LOOP FOR INPUT DETAILS
for(i=1;i<5;i++){
	 cout<<"ENTER YOUR ID:"; cin>>student.ID[i];
	 cout<<"ENTER YOUR NAME:";cin>>student.name[i];
	 cout<<"ENTER YOUR AGE:";cin>>student.age[i];
	 cout<<"ENTER YOUR GENDER:";cin>>student.gender[i];
	 cout<<"ENTER YOUR SCORE:";cin>>student.score[i];
	 cout<<endl<<endl<<endl;
if (student.score[i] >=90)
	student.grade[i]="A";
	         else 
if (student.score[i] >= 80)
    student.grade[i]="B";
         else
if (student.score[i] >= 70)
    student.grade[i]="C";
         else
 if (student.score[i]>= 60)
   student.grade[i]="D";
         else
if (student.score[i] >= 50)
   student.grade[i]="E";
          else
   student.grade[i]="F";
//CALCULATION OF AVERAGE SCORES,AVERAGE AGE,MALE COUNT AND FEMALE COUNT
   	scores_total=scores_total+student.score[i];
	ages_total=ages_total+student.age[i];
	averageScore=scores_total/5;
	averageAge=ages_total/5;
	if(student.gender[i]=="M"||student.gender[i]=="m")
	   malecount++;
	 else
	if(student.gender[i]=="F"||student.gender[i]=="f")
	   femalecount++;
	}
//DATA OUTPUT TO FILE
out_data<<"ID         "<<"NAME  "<<"AGE  "<<"GENDER  "<<"SCORE  "<<"GRADE  "<<endl;
out_data<<"*****************************************************"<<endl;
out_data<<student.ID[i]<<"  ";  
out_data<<student.name[i]<<"  ";
out_data<<student.age[i]<<"      ";
out_data<<student.gender[i]<<"     ";
out_data<<student.score[i]<<"       ";
out_data<<student.grade[i]<<"  "<<endl;
out_data<<"*****************************************************"<<endl;
out_data<<"Average Age:"<<averageAge<<endl;
out_data<<"Average Score:"<<averageScore<<endl;
out_data<<"Male Count:"<<malecount<<endl;
out_data<<"Female Count:"<<femalecount<<endl;

		 	return 0;}

         
		
