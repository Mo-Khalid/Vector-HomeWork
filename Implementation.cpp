#include "stdafx.h"
#include "Interface.h"
#include <iostream>

using namespace std;

//Constructor 
vector::vector() : vector(0) {
}
vector::vector(int size) : size(size) {
	capacity = size * 2;
	arr = new int[capacity];
}
//Functions 
void vector::set(int idx, int val) {
	arr[idx] = val;
}
int vector::get(int idx) {
	return arr[idx];
}
void vector::right_rotate() {
	int temp = arr[size - 1];
	for (int i = size - 2; i >=0 ; i--) {
		arr[i + 1] = arr[i];
	}
	arr[0] = temp;
}
void vector::right_rotate_Steps(int rot) {
	int *arr2 = new int[size];
	for (int i = 0; i < size; i++)arr2[i] = 0;
	int count = 0;
	for (int i = rot; i < size; i++) {
		arr2[count] = arr[i];
		count++;
	}
	for (int i = 0; i < rot; i++) {
		arr2[count] = arr[i];
		count++;
	}
	swap(arr, arr2);
	delete[] arr2;
	cout << endl;
}
int vector::delete_position(int idx) {
	int deleted = arr[idx];
	int *arr2 = new int[capacity];
	int j = 0;
	for (int i = 0; i < size; i++) {
		if (i != idx) {
			arr2[j] = arr[i];
			j++;
		}
	}
	swap(arr, arr2);
	delete[] arr2;
	size--;
	cout << endl;
	return deleted;
}
void vector::improved_search(int value) {
	int temp;
	for (int i = 0; i < size; i++) {
		if (arr[i] == value) {
			temp = value;
			arr[i] = arr[i - 1];
			arr[i - 1] = temp;
		}
	}
}
void vector::print() {
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
vector::~vector() {
	delete[] arr;
}
