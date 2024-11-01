#include <iostream>
#include <vector>
#include <string>

class Observer;

class Subject {
private:
	std::vector<Observer*> observers;  // 관찰자들을 저장하는 벡터
	int state;  // Subject의 상태

public:
	int getState() {
		return state;
	}

	void setState(int newState) {
		state = newState;
		notifyAllObservers();
	}

	void attach(Observer* observer) {
		observers.push_back(observer);
	}

	void notifyAllObservers();
};

class Observer {
protected:
	Subject* subject;

public:
	Observer(Subject* sub) : subject(sub) {
		subject->attach(this);  // Observer를 Subject에 등록
	}

	virtual void update() = 0;  // 순수 가상 함수, 각 관찰자에서 구현 필요
};

void Subject::notifyAllObservers() {
	for (Observer* observer : observers) {
		observer->update();
	}
}

class BinaryObserver : public Observer {
public:
	BinaryObserver(Subject* sub) : Observer(sub) {}

	void update() override {
		std::cout << "Binary String: " << std::bitset<8>(subject->getState()) << std::endl;
	}
};

class OctalObserver : public Observer {
public:
	OctalObserver(Subject* sub) : Observer(sub) {}

	void update() override {
		std::cout << "Octal String: " << std::oct << (subject->getState()) << std::endl;
	}
};


class HexObserver : public Observer {
public:
	HexObserver(Subject* sub) : Observer(sub) {}

	void update() override {
		std::cout << "Hex String: " << std::uppercase << std::hex << subject->getState() << std::endl;
	}
};

int main() {
	Subject* subject = new Subject();

	new HexObserver(subject);
	new OctalObserver(subject);
	new BinaryObserver(subject);

	std::cout << "First state change: 15" << std::endl;
	subject->setState(15);

	std::cout << "Second state change: 10" << std::endl;
	subject->setState(10);

	delete subject;  // 동적 할당 해제

	return 0;
}
