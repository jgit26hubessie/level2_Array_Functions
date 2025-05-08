#include<iostream>
#include<vector>
#include<numeric>

using namespace std ;

int main(){
    int NumofStudents ;
    cout << "Enter the number of students: " ;
    cin >> NumofStudents ;

    vector<vector<int>> StudentsGrades(NumofStudents) ;

    for(int i = 0; i < NumofStudents ; ++i){
        int NumofSubjects ;
        cout << "\nSudents" << i+1 << ":\n" ;
        cout << "Enter the number of subjects: " ;
        cin >> NumofSubjects ;

        cout << "Enter the grades: \n" ;
        for (int j = 0; j < NumofSubjects; ++j){
            int grade ;
            cout << "subject" << j + 1 << ": " ;
            cin >> grade ;
            StudentsGrades[i].push_back(grade) ;
        }

    }
    cout << "Grade analysis\n" ;

    for (int i = 0; i < NumofStudents; ++i) {
        vector<int>& grades = StudentsGrades[i];

        int sum = accumulate(grades.begin(), grades.end(), 0);
        double average = (grades.empty()) ? 0.0 : static_cast<double>(sum) / grades.size();

        cout << "student" << i + 1 << "average: " << average << "\n" ;
    }
    return 0 ;
}

