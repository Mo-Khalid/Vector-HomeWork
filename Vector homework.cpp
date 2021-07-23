
#include "stdafx.h"
#include "Interface.h"
#include <iostream>
using namespace std;



int main()
{
	int size,digit,steps,delete_idx,search_value;
	int operation;
	
	cout << "Enter size of array : " << endl;
	cin >> size;
	vector vector1(size);
	cout << "Enter array : " << endl;
	for (int i = 0; i < size; i++){
		cin >> digit;
		vector1.set(i, digit);
	}
	cout << "Choose Operation : " << endl;
	cout << "[1] Right Rotate ." << endl;
	cout << "[2] Right Rotate with steps ." << endl;
	cout << "[3] Delete index ." << endl;
	cout << "[4] Improved Search ." << endl;
	cin >> operation;
	
	switch (operation)
	{
	case 1 : 
		vector1.right_rotate();
		break;
	case 2:
		cout << "Enter steps : " << endl;
		cin >> steps;
		vector1.right_rotate_Steps(steps);
		break;
	case 3:
		cout << "Enter deleted index : " << endl;
		cin >> delete_idx;
		cout << vector1.delete_position(delete_idx) << endl;
		break;
	case 4:
		cout << "Enter value : " << endl;
		cin >> search_value;
		vector1.improved_search(search_value);
		break;
	}
	vector1.print();
	system("Pause");
    return 0;
}

