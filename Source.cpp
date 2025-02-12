#include <iostream>
using namespace std;

// Krijimi i një strukture për Studentin
struct Student {
    string emri;
    int mosha;
    float nota;
};

// Funksioni për të shtuar një student
void shtoStudentin(Student studentet[], int& numriStudenteve) {
    if (numriStudenteve < 5) {  // Lejojmë maksimumi 5 studentë
        cout << "Jepni emrin e studentit: ";
        cin >> studentet[numriStudenteve].emri;

        cout << "Jepni moshen e studentit: ";
        cin >> studentet[numriStudenteve].mosha;

        cout << "Jepni noten e studentit: ";
        cin >> studentet[numriStudenteve].nota;

        numriStudenteve++;
        cout << "Studenti u shtua me sukses!" << endl;
    }
    else {
        cout << "Keni arritur numrin maksimal te studenteve (5)." << endl;
    }
}
// Funksioni per te shfaqur te dhenat e te gjithe studenteve
void shfaqTeGjitheStudentet(const Student studentet[], int numriStudenteve) {
    if (numriStudenteve ==0) //Ne rast se nuk ka te dhena per asnje student, shfaqet ky mesazh.
    {
        cout<<"Nuk ka studente."<<endl;
    }
else {
     cout<<"Lista e studenteve: "<< endl;
     for (int i=0; i<numriStudenteve; i++) {
        cout<<"Emri: "<<studentet[i].emri<<endl;
        cout<<"Mosha: "<<studentet[i].mosha<<endl;
        cout<<"Nota: "<<studentet[i].nota<<endl;
        cout<<"---------------------------"<<endl;
     }
}

    


