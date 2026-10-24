#pragma once
#include <cstdint>
#include <string>
#include <unordered_map>
#include "src/godhand/module_registry.h"

namespace godhand {

class AndroidSnr2Registry {
public:
    static AndroidSnr2Registry& instance() {
        static AndroidSnr2Registry reg;
        return reg;
    }

    void registerModule(const ModulePack* pack) {
        if (!pack || !pack->imageName) return;
        modules_[pack->imageName] = pack;
        by_base_[pack->base] = pack;
    }

    const ModulePack* findByName(const std::string& name) const {
        auto it = modules_.find(name);
        if (it != modules_.end()) return it->second;
        return nullptr;
    }

    const ModulePack* findByBase(uint32_t base) const {
        auto it = by_base_.find(base);
        if (it != by_base_.end()) return it->second;
        return nullptr;
    }

private:
    std::unordered_map<std::string, const ModulePack*> modules_;
    std::unordered_map<uint32_t, const ModulePack*> by_base_;
};

void initModuleRegistry();

} // namespace godhand
