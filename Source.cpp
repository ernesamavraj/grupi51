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
}
//Funksioni per te perditesuar informacionin e nje studenti
void perditesoStudentin(Student studentet [], int numriStudenteve){
    int id;
cout<<"Jepni id-ne e studentit qe deshironi te perditesoni (0 deri ne 4): ";
cin>>id ;
    
//Kontrollo nese id eshte valid
if (id >=0 &&  id < numriStudenteve) {
cout << "Perditesoni informacionin per studentin " <<studentet[id].emri<<endl;
cout << "Jepni emrin e ri: ";
cin >> studentet[id].emri;

cout <<"Jepni moshen e re:";
cin >> studentet[id].mosha;
    
    cout<<"Jepni noten e re: ";
    cin>> studentet[id].nota;

cout<< "Studenti u perditesua me sukses!" << endl;
}
else{
cout << "ID-ja e dhene nuk eshte e vlefshme." <<endl;
}
}
    //Funksioni Kryesor
    int main() {
        //Krijimi i nje vargu per studentet
        Student studentet[5];
        int numriStudenteve = 0;
        int zgjedhja;

        do {
            cout << "1.Shto student." << endl;
            cout << "2.Shfaq te gjithe studentet." << endl;
            cout << "3.Perditeso informacionin e nje studenti." << endl;
            cout << "0.Dil." << endl;
            cout << "Numri i studenteve te shtuar deri tani: " << numriStudenteve << endl;
            cin >> zgjedhja;

            switch (zgjedhja) {
            case 1:
                shtoStudentin(studentet, numriStudenteve);
                break;
            case 2:
                shfaqTeGjitheStudentet(studentet, numriStudenteve);
                break;
            case 3:
                perditesoStudentin(studentet, numriStudenteve);
                break;
            case 0:
                cout << "Po dalim nga programi..." << endl;
                break;
            default:
                cout << "Opsion i pavlefshem. Provoni perseri." << endl;
            }
        } while (zgjedhja != 0);

        return 0;
    }




