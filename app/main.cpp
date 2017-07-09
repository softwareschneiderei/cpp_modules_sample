import pets;
import std.core;
import std.memory;

int main()
{
    std::unique_ptr<Pet> pet = std::make_unique<Dog>();
    std::cout << "Pet says: " << pet->pet() << std::endl;
}