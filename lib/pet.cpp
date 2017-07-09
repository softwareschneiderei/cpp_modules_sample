import std.core;

module pets.base;

export class Pet
{
public:
    virtual char const* pet() = 0;
};
