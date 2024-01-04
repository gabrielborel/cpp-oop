#ifndef OWNER_H
#define OWNER_H

#include <string>

class Owner {
private:
    std::string name;
    std::string identification;

public:
    Owner(std::string name, std::string identification);

    [[nodiscard]] std::string getName();

    [[nodiscard]] std::string getIdentification();
};


#endif //OWNER_H
