/*****
	Create a hash table class/struct.
	Define an array that holds 27 elements.
	Define a function called Hash(int)
	-This function returns the modulo of that int by the size of the table (array).
	Define an add function that takes an integer.
	-This function takes the integer, determines the hash of that number by calling the above hash function, then adds it to the table using linear probing for collision resolution.
	Define a function that looks up a value, it takes an integer, return -1 if the value is not in the table.
	Create a main that allows the user to add and lookup items in the table.
*****/

#include <iostream>

using namespace std;

class HashTable
{
	public:
		HashTable();
		void add_val(int & v);
		int search(int & v);
		bool empty() {return size == 27
	
	private:
		int Hash(int & v);
		int hash_array[27] = {};
		int size = 0;
};

HashTable::HashTable()
{
	for(int i = 0; i < 27; i++) hash_array[i] = -1;
}

void HashTable::add_val(int & v)
//-This function takes the integer, determines the hash of that number by calling the above hash function, then adds it to the table using linear probing for collision resolution.
{
	std::cout << __func__ << " test value: " << v << endl;
	std::cout << "Hashed value: " << Hash(v) << endl;
	int hash_val = Hash(v), loop = 0;
	while(hash_array[hash_val] != -1 && )
	{
		if(hash_val == 27)
		{
			hash_val = 0;
			loop = 1;
		}
		else hash_val++;
	}
	hash_array[hash_val] = v;
	size++;
}

int HashTable::search( int & v)
//Define a function that looks up a value, it takes an integer, return -1 if the value is not in the table.
{
	std::cout << __func__ << " test search val: " << v << endl;
	return hash_array[Hash(v)];
}

int HashTable::Hash(int & v)
{
	if(hash_table(Hash(v)] != -1) Hash(v + 1);
	int index = v % 27;
	return index;
}

int main()
{
	std::cout << "...Hash Table Main..." << endl;
	HashTable test;
	int t = 29;
	test.add_val(t);
	std::cout << test.search(t) << "is the index" << endl;
	return 0;
}
