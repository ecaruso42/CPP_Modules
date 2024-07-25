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
		~Character();

		Character(std::string name);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};