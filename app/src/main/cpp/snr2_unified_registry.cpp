#include "snr2_unified_registry.h"

namespace godhand {

void initModuleRegistry() {
    size_t count = 0;
    const ModulePack *const *packs = modulePacks(count);
    for (size_t i = 0; i < count; ++i) {
        if (packs && packs[i]) {
            AndroidSnr2Registry::instance().registerModule(packs[i]);
        }
    }
}

} // namespace godhand
