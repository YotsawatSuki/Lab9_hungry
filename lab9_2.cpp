#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


char findGrade(double g){
    char m;
	if(g>90){
		m = 'A';
	}else if(g>75 && g<=90){
		m = 'B';
	}else if(g>60 && g<=75){
		m = 'C';
	}else if(g>45 && g<=60){
		m = 'D';
	}else if(g<=45){
		m = 'F';
	}
	return m;
}


int main(){
	

	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin,name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
		i++;
	}
	
	
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
