//When class member is declared as private and can be accessed only by the members functions inside the class

#include<iostream>
using namespace std;

class Circle
{
	// private data member
	private:
		double radius;
	
	// public member function
	public:
		double compute_area()
			return 3.14*radius*radius;
		}
	};
int main()
{
	Circle obj;
	
obj.radius = 1.5;
	
	cout << "Area is:" << obj.compute_area();
	return 0;
}
