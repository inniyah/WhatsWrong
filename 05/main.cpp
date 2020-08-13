// https://www.learncpp.com/cpp-programming/eight-c-programming-mistakes-the-compiler-wont-catch/

#include <iostream>

class Base {
private:
	int m_nID;
public:
	Base(std::string name) { setName(name); }
	virtual std::string ClassID() { return "Base"; }
	void setName(std::string name) { m_name = name; m_fullname = ClassID() + "/" + name; }
	std::string getFullName() { return m_fullname; }
	std::string m_name, m_fullname;
};

class Derived: public Base {
public:
	Derived(std::string name) : Base(name) {}
	virtual std::string ClassID() { return "Derived"; }
};

int main() {
	Derived cDerived("Test");
	std::cout << cDerived.getFullName() << std::endl;
	return 0;
}

// Result: Base/Test
