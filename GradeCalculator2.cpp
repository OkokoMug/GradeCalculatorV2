#include <iostream>
#include <vector>
#include <cstring>

int main(){

    std::vector<double> grades;

    double grade; //Input for the grade of the subject
    char subjects[50]; //Input for the subject

    std::cout << "Type subject. When finished typing all subjects, write 'done' to procede." << std::endl;
    
    while(true){ //While the condition is true
        std::cout << "Subjects: ";
        std::cin >> subjects; //Input the grade
        if(std::strcmp(subjects, "done") == 0){ //Comparison for the subject string and the keyword "done" 
            break;                              //If subject is equal to 0 (false("done")) break the statement and continue 
        }                                       //Otherwise, repeats.
        std::cout << "Grade for " << subjects << ": ";
        std::cin >> grade;
        grades.push_back(grade); //push_back references to grades since it is an object class

    }

    //Sum of grades 
    double sumGrade{};
    for(double g : grades){ //Range based for loop doing the sum
        sumGrade += g; //taking the value of g and storing it in sumGrade
    }

    //Total sum
    std::cout << "Total sum: " << sumGrade << std::endl;

    //Average of grades
    double avgGrade = sumGrade / grades.size(); //Divide by the number of subjects inside 'grades'
    std::cout << "Average grade: " << avgGrade << std::endl;
 
}