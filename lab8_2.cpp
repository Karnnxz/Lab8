#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

#include <iostream>
using namespace std;

char findGrade(double Score) {
    
    if (Score > 90 && Score <= 100) {
        return 'A';
    } else if (Score > 75 && Score <= 90) {
        return 'B';
    } else if (Score > 60 && Score <= 75) {
        return 'C';
    } else if (Score > 45 && Score <= 60) {
        return 'D';
    } else if (Score <= 45) {
        return 'F';
    } else {
        return 'X';
    }
}

int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	//Store names and scores of students into an array 
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin, name[i]);
		cout << "Score of student " << i+1 << ": ";
        cin >> score[i];
		i++;
	}
	
	//Print names scores and grades
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
