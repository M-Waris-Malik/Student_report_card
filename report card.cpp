#include <iostream>
#include <vector>
using namespace std;
class Student{
	private:
		string name; 
		int rollNo;
	public:
		Student (string Name, int RollNo){
			name= Name;
			rollNo= RollNo;
		}
	string getName(){
		return name;
	}
	int getRollNo(){
		return rollNo;
	}
};

class Report{
	private:
		vector<Student> ve;
	public:
		add(string Name, int RollNo){
			Student student(Name, RollNo);
			ve.push_back(student);
		}
	reportCard(){
		int rn;
		cout<<"Enter RollNo: "; cin>>rn;
	for(int i=0; i<ve.size(); i++){
		if(rn==ve[i].getRollNo()){
	int subj1, subj2, subj3,total;
	cout<<"Enter numbers of subject1: "; cin>>subj1;
	cout<<"Enter numbers of subject2: "; cin>>subj2;
	cout<<"Enter numbers of subject3: "; cin>>subj3;
	cout<<"Enter total numbers: "; cin>>total;
	int totalNo= subj1+subj2+subj3;
	int avg = totalNo/3;
	int per = 100 * totalNo/total;
cout<<"Total number of student: "<<totalNo<<" out of: "<<total<<endl;
cout<<"Average Number of student: "<<avg<<endl;
cout<<"Percentage of numbers: "<<per<<"%"<<endl<<endl;
		}
	}
	}
};
int main(){
	Report report;
	string Name; int RollNo;
	cout<<"<<<<< Report Card >>>>>"<<endl;
	int value;
	while(true){
		cout<<"Enter '1' for add student"<<endl;
		cout<<"Enter '2' for report card"<<endl;
		cout<<"Enter '0' for exit from program"<<endl;
		cout<<"Enter choice: "; cin>>value;
		
		if(value==1){system("cls");
		cout<<"Enter name of student: "; cin>>Name;
		cout<<"Enter RollNo of student: "; cin>>RollNo;
	report.add(Name,RollNo);
		}
	else if(value==2){system("cls");
		report.reportCard();
	}
	else if(value==0){
		exit(0);
	}
	else{system("cls");
		cout<<"Invalid input"<<endl<<endl;
	}
	}//while
}//main
