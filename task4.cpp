#include <iostream>
using namespace std;
main(){
float obtainsubject1;
float obtainsubject2;
float obtainsubject3;
float obtainsubject4;
float obtainsubject5;
float totalsubject1;
float totalsubject2;
float totalsubject3;
float totalsubject4;
float totalsubject5;
float subjectper1;
float subjectper2;
float subjectper3;
float subjectper4;
float subjectper5;
totalsubject1 = 100.0;
totalsubject2 = 100.0;
totalsubject3 = 100.0;
totalsubject4 = 100.0;
totalsubject5 = 100.0;
cout << "Enter obtainsubject1:";
cin >> obtainsubject1;
cout << "Enter obtainsubject2:";
cin >> obtainsubject2;
cout << "Enter obtainsubject3:";
cin >> obtainsubject3;
cout << "Enter obtainsubject4:";
cin >> obtainsubject4;
cout << "Enter obtainsubject5:";
cin >> obtainsubject5;
subjectper1 = (obtainsubject1/totalsubject1)*100.0;
cout << "Subject1 percentage is:" << subjectper1;
subjectper2 = (obtainsubject2/totalsubject2)*100.0;
cout << "Subject2 percentage is:" << subjectper2;
subjectper3 = (obtainsubject3/totalsubject3)*100.0;
cout << "Subject3 percentage is:" << subjectper3;
subjectper4 = (obtainsubject4/totalsubject4)*100.0;
cout << "Subject4 percentage is:" << subjectper4;
subjectper5 = (obtainsubject5/totalsubject5)*100.0;
cout << "Subject5 percentage is:" << subjectper5;
float totalobtain;
float totalper; 
float totalno;
totalno = 500.0;
totalobtain = subjectper1+subjectper2+subjectper3+subjectper4+subjectper5;
cout <<"Total obtain is:" << totalobtain;
totalper = (totalobtain/totalno)*100.0;
cout << "total percentage is:" << totalper;
}

