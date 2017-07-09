module pets.dog;
import std.core;
import pets.pet;

export class Dog : public Pet
{
public:
    char const* pet() override;
};

char const* Dog::pet()
{
    return "Woof!";
}