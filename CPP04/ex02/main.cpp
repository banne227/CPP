#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Création des animaux ===" << std::endl;
    const Animal* cat1 = new Cat();
    const Animal* dog1 = new Dog();

    std::cout << cat1->getType() << " fait : ";
    cat1->makeSound();
    std::cout << dog1->getType() << " fait : ";
    dog1->makeSound();

    delete cat1;
    delete dog1;

	return 0;
}
