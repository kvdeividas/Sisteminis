#include "student.h"

Student::Student() {
    name = "null";
    lastname = "null";
    grades = { 0 };
    exam = 0;
}
Student::~Student() {
    name = "null";
    lastname = "null";
    grades = { 0 };
    exam = 0;
    exam = 0;
    average = 0;
    median = 0;
    std::cout << "istrtynem. \n";
}
//Student(const Student& original_object) {
    //cout << "Kopijavimo konstruktorius" << endl;
//}

void Student::input() {
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    int grade = 0, i = 1; int check = 0;
    grades.clear();
    std::cout << "Iveskite studento varda \n";
    std::cin >> name;
    std::cout << "Iveskite studento pavarde \n";
    std::cin >> lastname;
    SetConsoleTextAttribute(color, 12);
    std::cout << "*****Noredami nutraukti pazymiu ivedima - iveskite didesni skaiciu uz 10*****" << std::endl;
    SetConsoleTextAttribute(color, 7);
    std::cout << "Iveskite studento namu darbu pazymius \n";
    while (grade < 11) {
        // i++;
        std::cout << i << "-as pazimys: \n";
        std::cin >> grade;
        if (grade <= 10 && grade >= 0) {
            i++;
            grades.push_back(grade);
        }
        if (grade < 0) {
            SetConsoleTextAttribute(color, 12);
            std::cout << "***KLAIDA*** Ivedete neigiama ivertinima \n";
            SetConsoleTextAttribute(color, 7);
            grade = 0;
        };
        if (grade > 10) {
            std::cout << "Namu darbu ivertinimu ivedimas baigtas \n";
        }
    };
    while (check < 1) {
        std::cout << "Iveskite studento egzamino ivetrtinima \n";
        std::cin >> exam;
        if (exam < 11 && exam > 0) {
            check = 1;
        }
    }
}
void Student::countAverage() {
    double gradeSum = 0;
    for (const auto& elem : grades) {
        gradeSum = gradeSum + elem;
    }
    average = (gradeSum + exam) / (grades.size() + 1);
}
void Student::countMedian()
{
    std::vector<int> gradesCopy;
    gradesCopy.push_back(exam);
    gradesCopy = grades;
    sort(gradesCopy.begin(), gradesCopy.end());
    if (gradesCopy.size() % 2 == 0)
        median = (gradesCopy[gradesCopy.size() / 2 - 1] + gradesCopy[gradesCopy.size() / 2]) / 2;
    else
        median = gradesCopy[gradesCopy.size() / 2];
}
void Student::print(char x) {
    a = x;
    
    if (!(a != 'Y' && a != 'y'))
    {
        std::cout << name << " " << lastname << " ";
        std::cout << average << "\n";
    }
    else if (!(a != 'N' && a != 'n'))
    {
        std::cout << name << " " << lastname << " ";
        std::cout << median << "\n";
    }
}
