#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"
using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;

    Student a("Anna", 30);
    Student b("Bertta", 25);
    Student c("Cecilia", 27);
    Student d("Diana", 28);

    studentList.push_back(a);
    studentList.push_back(b);
    studentList.push_back(c);
    studentList.push_back(d);

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {

        case 1:{
            // Tulosta StudentList vektorin kaikkien opiskelijoiden nimet.

            cout << "Opiskelijoiden nimet: ";
            for (Student &s: studentList){
             s.printStudentinfo();
            }
            cout << endl;
            break;
        }

        case 2:{
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            sort(studentList.begin(), studentList.end(),[](Student &eka, Student &toka){
                return eka.getName() < toka.getName();
            } );

            cout << endl << "Lajiteltu nimen perusteella" << endl;
            for (Student &s: studentList) {
                s.printStudentinfo();
            }
            break;
        }

        case 3:{
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            sort(studentList.begin(), studentList.end(),[](Student &eka, Student &toka){
                return eka.getAge() < toka.getAge();
            } );

            cout << endl << "Lajiteltu ian perusteella" << endl;
            for (Student &s: studentList) {
                s.printStudentinfo();
            }
            break;
        }

        case 4:{  
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.

            cout << "Anna etsittava nimi" << endl;
            string etNimi;
            cin >> etNimi;

            auto it = find_if(studentList.begin(), studentList.end(),
                         [etNimi] (Student & m) -> bool {return m.getName() == etNimi;});
            if(it != studentList.end() ){
                cout << "Nimi loytyi" << "\n" << endl;
                it->printStudentinfo();
            }
            else{
                cout << "Nimea ei loytynyt" << "\n" << endl;
            }
            break;
        }

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
    }
}while(selection < 5);

return 0;
}
