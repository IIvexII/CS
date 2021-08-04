/*
Q.3. Declare a class of GPA in which user can store his/her total marks, 
obtained marks, Total marks in each course, Obtained marks in every 
course, Course name, Credit hrs and number of courses. Perform the following
task using constructors:

1. Calculate gpa obtained in each course when One course marks are passed.
2. Calculate overall gpa when total marks and number of courses are passed.
3. Define destructors in the GPA class.
*/
#include <iostream>
using namespace std;
class GPA{
    private:
        float totalMarks, obtainedMarks, totalCoures;
        string courseName;
    public:
        GPA(float cTMarks, float obMarks) {
            cout << "Course GPA: " << calculateGrade(cTMarks, obMarks) << endl;
        }
        GPA(float tMarks, float obMarks,int totalCourses){
            cout << "GPA: " << calculateGrade(tMarks, obMarks) << endl;
        }

        int calculateGrade(int totalMarks, float obtainedMarks){
            int percentage = (obtainedMarks/totalMarks)*100;
            int points;
            if(percentage<=60){
                points=0;
            }
            else if(percentage<70){
                points=1;
            }
            else if(percentage<80){
                points=2;
            }
            else if(percentage<90){
                points=3;
            }
            else if(percentage<=100){
                points=4;
            }
            return points;
        }
        ~GPA(){
            cout << "Destroyed Object." << endl;
        }
};
int main(){
    GPA g1(500, 500,6);
    GPA g2(500, 420,3);
    return 0;
}