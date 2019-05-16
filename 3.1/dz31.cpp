#include "stdafx.h"
#include "DLL.h"
#include <stdio.h>
#include <iostream>


using namespace std;


extern "C" __declspec(dllexport) void read_complex(struct complex *a)
{
	
	cout << "Vvedite znachenie a.x: ";
	cin >> (*a).x;

	cout << "Vvedite znachenie a.y: ";
	cin >> (*a).y;
}