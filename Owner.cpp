#include "Owner.hpp"

Owner::Owner(std::string name, std::string identification): name(std::move(name)),
                                                              identification(std::move(identification)) {
}

std::string Owner::getIdentification() {
    return this->identification;
}

std::string Owner::getName() {
    return this->name;
}
