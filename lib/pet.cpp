import std.core;
module pets.pet;

export class Pet
{
public:
    virtual char const* pet() = 0;
};
