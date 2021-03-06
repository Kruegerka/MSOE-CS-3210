#include "matrix.h"
#include <iostream>
 
using namespace std;

int main(void)
{
	/*// test our matrix
	
	matrix m1(3,3);
	
	cout << "m1 - should be all zeros" << endl;
	cout << m1 << endl;
	
	matrix m2 = matrix::identity(3);

	cout << "m2 - should be 3 x 3 identity matrix" << endl;
	cout << m2 << endl;

	matrix m3 = m1 + m2;

	cout << "m3 - should be 3 x 3 identity matrix" << endl;
	cout << m3 << endl;
	
	try
	{
		matrix m4(0,0);	// should throw
		cout << "m4 - exception not thrown (but should have)" << endl;
	}
	catch (matrixException me)
	{
		cout << "m4 - exception expected and thrown" << endl;
	}
	
	cout << "M5" << endl;
	matrix m5(3,3);
	m5 = m3;
	cout << m5 << endl;

	cout << "M6" << endl;
	m5.clear();
	cout << m5 << endl;

	cout << "M7" << endl;
	~m3;
	cout << m3 << endl;
	cout << 3*m3 << endl;
	cout << m3[0][0] << endl;
	*/

	matrix m1 = matrix::identity(3);

	cout<<"M1"<<endl;

	cout << m1 << endl;

	matrix m2 = m1 + m1;

	cout <<"M2"<<endl;
	cout << m2 <<endl;

	m2[0][2] = 3;

	cout <<"M2"<<endl;
	cout << m2 <<endl;

	matrix m3 = m2*m2;

	cout <<"M3"<<endl;
	cout << m3 <<endl;

	cout <<"M1[1][5]"<<endl;
	cout << m1[0][4] <<endl;

}
