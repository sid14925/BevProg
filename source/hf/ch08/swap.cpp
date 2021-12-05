// Chapter 8 - Drill 2
//-------------------------------//

#include "std_lib_facilities.h"

//-------------------------------------------------------------

void swap_v(int a, int b)
{
	int temp;
	temp = a, a = b;
	b = temp;

	cout << "swap_v     x: " << a << "   y: " << b << endl;

}

//-------------------------------------------------------------

void swap_r(int& a, int& b)
{
	int temp;
	temp = a, a = b;
	b = temp;

	cout << "swap_r     x: " << a << "   y: " << b << endl;
}

//-------------------------------------------------------------

//const miatt nem fordul le
//
//
//void swap_cr(const int& a, const int& b)
//{
//	int temp;
//	temp = a, a = b;
//	b = temp;
//
//}

//-------------------------------------------------------------
int main()
{
	cout << "Eredetiek. X = 7   Y = 9" << endl;
	int x = 7;
	int y = 9;

	swap_v(x, y);		//nincs csere, mert csak a helyi v�ltoz�k cser�l�dnek
	cout << "           x: " << x << "   y: " << y << endl;
	swap_r(x, y);		//cser�l�dik
	cout << "           x: " << x << "   y: " << y << endl;
	//swap_cr(x, y);	//nem fordul le
	swap_v(7, 9);		//cser�l�dik, de nem t�r vissza semmivel
	//swap_r(7, 9);		//nem fordul le, mert nincs c�m aminek tov�bbadja
	//swap_cr(7, 9);	//nem fordul le

	cout << "Eredetiek. CX = 7   CY = 9" << endl;
	const int cx = 7;
	const int cy = 9;

	swap_v(cx, cy);		//nincs csere, mert csak a helyi v�ltoz�k cser�l�dnek
	cout << "           x: " << cx << "   y: " << cy << endl;
	//swap_r(cx, cy);	//a const �rt�kek c�m�t nem lehet cser�lni
	//swap_cr(cx, cy);	//nem fordul le
	swap_v(7, 9);		//cser�l�dik, de nem t�r vissza semmivel
	//swap_r(7, 9);		//nem fordul le, mert nincs c�m aminek tov�bbadja
	//swap_cr(7, 9);	//nem fordul le

	cout << "Eredetiek. DX = 7.7   DY = 9.9" << endl;
	double dx = 7.7;
	double dy = 9.9;

	swap_v(dx, dy);		//nincs csere, mert csak a helyi v�ltoz�k cser�l�dnek - valamint narrow casts
	cout << "           x: " << dx << "   y: " << dy << endl;
	//swap_r(dx, dy);	//nem fordul le, mert a c�m nem egy int �rt�k
	//swap_cr(dx, dy);	//nem fordul le
	swap_v(7.7, 9.9);	//cser�l�dik, de nem t�r vissza semmivel
	//swap_r(7.7, 9.9); //nem fordul le, mert nincs c�m aminek tov�bbadja
	//swap_cr(7.7, 9.9);//nem fordul le - valamint narrow casts

	keep_window_open();

	return 0;
}

//-------------------------------------------------------------
//-------------------------------------------------------------
