#include "AAnimal.hpp"

class Dog : public AAnimal{
	private:
		Brain* _brain;
	public:
		Dog();
		Dog(const Dog& other);
		Dog& operator = (const Dog& other);
		virtual ~Dog();

		void makeSound(void) const;
};