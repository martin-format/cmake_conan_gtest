#pragma once

#include "person.hpp"
#include <vector>
#include <string>
#include <optional>

class person_repository {
public:
    virtual void save(person p) = 0;

    virtual void update(person p) = 0;

    virtual void remove(person p) = 0;

    virtual std::vector<person> find_all() const = 0;

    virtual std::optional<person> find_by_id(std::string id) const = 0;

};
