#include <iostream>
#include <string>

using namespace std;

int const DEFFAUL_CAPACITY = 5;

class DynamicArray {

	int* elements;
	int size;
	int capacity;

	void resize() {
		/*capacity = capacity * 2;
		int* elements2 = new int[capacity];
		for (int i = 0;i < capacity;i++){
			elements2[i] = elements[i];
		}
		
		remove();
		elements = elements2;*/

		
		if (capacity > size * 2) {
			capacity /= 2;
		}
		if (size == capacity - 1) {
			capacity *= 2;
		}

		int* elements2 = new int[capacity];
		for (int i = 0;i < size;i++) {
			elements2[i] = elements[i];
		}

		remove();
		elements = elements2;
	}

	void add(int newElement) {
		if (size == capacity - 1) {
			resize();
		}
		
		elements[size] = newElement;
		size++;
	}

	void copy(const DynamicArray& other) {
		size = other.size;
		capacity = other.capacity;

		for (int i = 0; i < capacity;i++) {
			elements[i] = other.elements[i];
		}
	}

	void remove() {
		delete[] elements;
		elements = nullptr;
	}

public:
	DynamicArray(): elements(nullptr) {
		size = 0;
		capacity = DEFFAUL_CAPACITY;
		elements = new int[capacity];
	}



	DynamicArray(const DynamicArray& other) {
		copy(other);
	}
	DynamicArray& operator=(const DynamicArray& other) {
		if (this != &other) {
			remove();
		}

		copy(other);
	}

	~DynamicArray() {
		remove();
	}

	int getSize() const { return this->size; }

	int getAt(int index) { return this->elements[index]; }

	void addAtEnd(int element) {
		add(element);
	}

	void removeLast() {
		/*int* elements2 = new int[capacity];
		for (int i = 0;i < capacity - 1;i++) {
			elements2[i] = elements[i];
		}

		remove();
		elements = elements2;*/

		size--;
	}

	void addAt(int element, int index) {
		if (size == capacity - 1) {
			resize();
		}

		for (int i = capacity;i > index;i--){
			elements[i] = elements[i + 1];
		}

		elements[index] = element;
	}
	void removeAt(int index) {
		if (index > size || index < 0) {
			return;
		}

		for (int i = index;i < capacity;i++) {
			elements[i] = elements[i + 1];
		}
		
		size--;
	}
};

void testDynamic() {
	while (true) {
		DynamicArray arr;
	}
}


int main() 
{
	DynamicArray arr;

	arr.addAtEnd(2);
	arr.addAtEnd(2);
	arr.addAtEnd(2);

	arr.removeAt(4);

	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr.getAt(i) << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}