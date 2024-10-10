#include <bits/stdc++.h>
using namespace std;
class Laptop
{
private:
    int laptopID;
    string LPName;

public:
    Laptop()
    {
        laptopID = 0;
        LPName = "No Name";
    }
    Laptop(int laptopID, string LPName)
    {
        this->laptopID = laptopID;
        this->LPName = LPName;
    }

    void setLPName(string LPName)
    {
        this->LPName = LPName;
    }
    void setLaptopID(int laptopID)
    {
        this->laptopID = laptopID;
    }
    string getLPName()
    {
        return this->LPName;
    }
    int getLaptopID()
    {
        return this->laptopID;
    }
    void display()
    {
        cout << "\n\nLaptop ID : " << this->laptopID;
        cout << "\tLaptop Name : " << this->LPName << endl;
    }
};

class Person
{
private:
    int id;
    string name;
    Laptop PC;

public:
    Person()
    {
        id = 0;
        name = "No Name";
        // PC.setLaptopID(0);
        PC.setLPName("No Laptop");
    }
    Person(int id, string name)
    {
        this->id = id;
        this->name = name;
        // PC.setLaptopID(0);
        PC.setLPName("No Laptop");
    }
    Person(int id, string name, Laptop PC)
    {
        this->id = id;
        this->name = name;
        this->PC = PC;
    }

    void setID(int id) { this->id = id; }
    void setName(string name) { this->name = name; }
    void setPC(Laptop PC) { this->PC = PC; }

    int getID() { return this->id; }
    string getName() { return this->name; }
    Laptop getPC() { return this->PC; }
};

class Chair
{
private:
    int chairID;
    string color;
    Person person;

public:
    Chair()
    {
        chairID = 0;
        color = "UnKnown";
    }
    Chair(int chairID, string color, Person person)
    {
        this->chairID = chairID;
        this->color = color;
        this->person = person;
    }
    Chair(int chairID, string color)
    {
        this->chairID = chairID;
        this->color = color;
        this->person.setID(0);
        this->person.setName("Empty");
        // this->person.setPC(Laptop PC);
    }
    // Setters
    void setChairID(int chairID) { this->chairID = chairID; }
    void setColor(string color) { this->color = color; }
    void setChairID(Person person) { this->person = person; }
    // Getters
    int getChairID() { return this->chairID; }
    string getColor() { return this->color; }
    Person getPerson() { return this->person; }
};

class HallManagement
{
private:
    int hallID;
    string hallName;
    Chair *chairs;

public:
    HallManagement()
    {
        hallID = 0;
        hallName = "Un-Titled Hall";
        chairs = NULL;
    }
    HallManagement(int hallID, string hallName, Chair *chairs)
    {
        this->hallID = hallID;
        this->hallName = hallName;
        this->chairs = chairs;
    }
    Chair *getChairs()
    {
        return this->chairs;
    }
};


int main() 
{ // Laptops
    Laptop *laptops = new Laptop[7];
    laptops[0] = Laptop(101, "MacBook Pro");
    laptops[1] = Laptop(102, "Dell XPS");
    laptops[2] = Laptop(103, "HP Spectre");
    laptops[3] = Laptop(104, "Lenovo ThinkPad");
    laptops[4] = Laptop(105, "Acer Predator");
    laptops[5] = Laptop(106, "Asus ROG");
    laptops[6] = Laptop(107, "Microsoft Surface");
    // persons
    Person *persons = new Person[10];
    persons[0] = Person(1, "Bhagvat", laptops[1]);
    persons[1] = Person(2, "Pinto", laptops[0]);
    persons[2] = Person(3, "Nana", laptops[3]);
    persons[3] = Person(4, "Teja", laptops[5]);
    persons[4] = Person(5, "Developer", laptops[4]);
    persons[5] = Person(6, "Dada", laptops[6]);
    persons[6] = Person(7, "Chintu", laptops[2]);
    persons[7] = Person(8, "Heidi");
    persons[8] = Person(9, "Ivan");
    persons[9] = Person(10, "Judy");
    // Chairs
    Chair *chairs = new Chair[20];
    chairs[0] = Chair(101, "Red", persons[0]);
    chairs[1] = Chair(115, "Red");
    chairs[2] = Chair(102, "Red", persons[1]);
    chairs[3] = Chair(103, "Blue", persons[2]);
    chairs[4] = Chair(104, "Red", persons[3]);
    chairs[5] = Chair(105, "Red", persons[5]);
    chairs[6] = Chair(106, "Red", persons[4]);
    chairs[7] = Chair(107, "Red", persons[6]);
    chairs[8] = Chair(108, "Blue");
    chairs[9] = Chair(109, "Red");
    chairs[10] = Chair(110, "Red");
    chairs[11] = Chair(111, "Red", persons[7]);
    chairs[12] = Chair(112, "Red", persons[8]);
    chairs[13] = Chair(113, "Red", persons[9]);
    chairs[14] = Chair(114, "Red");
    // Hallmanagement Hall
    HallManagement hallManagement(123, "Game of Thrones", chairs);
    // cout << chairs[0].getPerson().getPC().getLPName();
    cout << "\nChair Id : " << hallManagement.getChairs()[0].getChairID();
    cout << "\nName of person on chair : " << hallManagement.getChairs()[0].getPerson().getName();
    cout << "\nLaptop name : " << hallManagement.getChairs()[0].getPerson().getPC().getLPName();
    // cout << "Hello";
    return 0;
}