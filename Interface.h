#ifndef Interface
#define Interface

#include <iostream>
using namespace std;

class vector 
{
private:
	int *arr = nullptr;
	int size = 0;
	int capacity = 0;
public :
	vector();
	vector(int size); 
	~vector();
	void set(int idx, int val);
	int get(int idx);
	void right_rotate();
	void right_rotate_Steps(int rot);
	int delete_position(int idx);
	void improved_search(int value);
	void print();
};
#endif 
