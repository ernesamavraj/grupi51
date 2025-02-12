#include <iostream>
using namespace std;

// Krijimi i një strukture për Studentin
struct Student {
    string emri;
    int mosha;
    float nota;
};

// Funksioni për të shtuar një student
void shtoStudentin(Student studentet[], int& numriStudentëve) {
    if (numriStudentëve < 5) {  // Lejojmë maksimumi 5 studentë
        cout << "Jepni emrin e studentit: ";
        cin >> studentet[numriStudentëve].emri;

        cout << "Jepni moshen e studentit: ";
        cin >> studentet[numriStudentëve].mosha;

        cout << "Jepni noten e studentit: ";
        cin >> studentet[numriStudentëve].nota;

        numriStudentëve++;
        cout << "Studenti u shtua me sukses!" << endl;
    }
    else {
        cout << "Keni arritur numrin maksimal te studenteve (5)." << endl;
    }
}
