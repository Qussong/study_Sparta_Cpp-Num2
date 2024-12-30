
#include <iostream>

class Animal
{
public:
	virtual void makeSound() = 0;
};

class Cat : public Animal
{
public:
	virtual void makeSound() override
	{
		std::cout << "�ֿ�~_Cat" << std::endl;
	}
};

class Dog : public Animal
{
public:
	virtual void makeSound() override
	{
		std::cout << "�п�~_Dog" << std::endl;
	}
};

class Pig : public Animal
{
public:
	virtual void makeSound() override
	{
		std::cout << "�ܲ�~_Pig" << std::endl;
	}
};

int main()
{
	Animal* zoo[3] = {};
	zoo[0] = new Cat();
	zoo[1] = new Dog();
	zoo[2] = new Pig();

	for (int i = 0; i < 3; i++)
	{
		zoo[i]->makeSound();
	}

	return 0;
}