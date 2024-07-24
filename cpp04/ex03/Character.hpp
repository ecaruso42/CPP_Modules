#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter{
	private:
		std::string _name;
		AMateria* _slots[4];
	public:
		Character();
		Character(const Character& other);
		Character& operator = (const Character& other);
		virtual ~Character();

		Character(std::string name);
		std::string const & getName() const = 0;
		void equip(AMateria* m) = 0;
		void unequip(int idx) = 0;
		void use(int idx, ICharacter& target) = 0;
};