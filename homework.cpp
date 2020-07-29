#include <iostream>
using namespace std;
int main()
{
	float q1(0);
	float q2(0);
	float q3(0);
	float mid(0);
	float final(0);
	float quizz(0);
	float all(0);
	cout << "==========QUIZZES==========" << endl;
	cout << "Enter first quizz(10) :";
	cin >> q1;
	cout << "Enter second quizz(10) :";
	cin >> q2;
	cout << "Enter thirdt quizz(10) :";
	cin >> q3;
	cout << "==========MID TERM==========" << endl;
	cout << "Enter mid-term(40) : ";
	cin >> mid ;
	cout << "==========Final TEAM==========" << endl;
	cout << "Enter final(50) :";
	cin >> final;
	quizz = (q1+q2+q3)/3;
	cout << "Quizz total :" << quizz << endl;
	cout << "Mid term :" << mid << endl;
	cout << "Final :" << final << endl;
	
	all = final+mid+quizz;
	cout << "Total :" << all << endl;
	cout << "Your score is : " << ((final+mid)>=50?"PASS" : "FAIL") << endl;
	system ("pause");
	return (0);
}