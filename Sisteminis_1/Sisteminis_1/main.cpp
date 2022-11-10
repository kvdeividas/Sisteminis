#include "student.h"
#include "fast.h"
int main()
{
   // s = new Student[n];
    int i = 0, n = 1; char x;
    std::cout << " 2 - iveskite kiek bus studentu\n";
    std::cin >> n;
    Student* s;
    s = new Student[n];
    //Student s[n];
    //s.print();
    int choice;
    bool programOn = true;
    while (programOn != false) {
        std::cout << "*******************************\n";
        std::cout << " 1 - Studento ivedimas\n";
        std::cout << " 2 - Studentai\n";
        std::cout << " 3 - Uzdaryti\n";
        std::cout << " Iveskite savo pasirinkima ir spauskite Enter: ";

        std::cin >> choice;

        switch (choice)
        {
        case 1:
            
            s[i].input();
            i++;
            break;
        case 2:
            std::cout << "Isvesti vidurki 'Y/y' ar mediana 'N/n'" << "\n";
            std::cin >> x;
            for (i = 0; i < n; i++)
            {
                s[i].countAverage();
                s[i].countMedian();
                s[i].print(x);
            }
            break;
        case 3:
            std::cout << "Darbas su programa baigtas.\n";
            programOn = false;
            break;
        case 4:
            bufer_nusk("studentai1000000.txt", "studentai_copy1000000.txt");
            //i++;
            
            break;
        default:
            std::cout << "Tokio pasirinkimo nera. \n";
            std::cout << "Bandykite dar karta.\n";
            std::cin >> choice;
            break;
        }

    }
    return 0;
}