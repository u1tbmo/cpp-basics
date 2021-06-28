//Object Functions by u1tbmo
#include <iostream>
using namespace std;

class SH_Student {
    public:
        string name;
        string strand;
        int ID;
        double avg_grade;
        SH_Student(string aName, string aStrand, int aID, double aAvg_grade){
            name = aName;
            strand = aStrand;
            ID = aID;
            avg_grade = aAvg_grade;
        }

        bool has_achievement(){
            if(avg_grade >= 85){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    SH_Student student1("Tom","HUMMS",101012,87.9);
    SH_Student student2("Jake","ABM",172198,84.4);
    SH_Student student3("Nik","STEM",101012,93.7);
    
    cout << student1.name << endl << student1.strand << endl << student1.ID  << endl<< student1.avg_grade << endl << "Achievement: " << student1.has_achievement() << endl << endl;
    cout << student2.name << endl << student2.strand << endl << student2.ID  << endl<< student2.avg_grade << endl << "Achievement: " << student2.has_achievement() << endl << endl;
    cout << student1.name << endl << student3.strand << endl << student3.ID  << endl<< student3.avg_grade << endl << "Achievement: " << student3.has_achievement() << endl << endl;

    return 0;
}