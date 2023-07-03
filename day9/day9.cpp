
#include <iostream>
using namespace std;

class A {
private:
	int private_variable;

protected:
	int protected_variable;

public:
	A()
	{
		private_variable = 10;
		protected_variable = 99;
	}

	
	friend class F;
};

class F {
public:
	void display(A& t)
	{
		cout << "The value of Private Variable = "
			<< t.private_variable << endl;
		cout << "The value of Protected Variable = "
			<< t.protected_variable;
	}
};

// Driver code
int main()
{
	A g;
	F fri;
	fri.display(g);
	return 0;
}
