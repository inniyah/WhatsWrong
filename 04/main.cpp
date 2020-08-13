#include <iostream>

class printable {
public:
	virtual std::ostream &write(std::ostream &dest) const = 0;
};

class time : public printable {
public:
	int m_hours;
	int m_minutes;
	time(int h, int m=0) : m_hours(h), m_minutes(m) {}
	virtual std::ostream& write(std::ostream& os) const {
		os << m_hours << ':' << m_minutes;
		return os;
	}
};

std::ostream &operator<<(std::ostream &os, const printable &p) { 
	return p.write(os);
}

int main() {
	std::cout << time(0) << std::endl;
}

// Result: 1597329325
