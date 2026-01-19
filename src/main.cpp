#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(PlayerObject) {
    void destroyPlayer(bool p0, GameObject* p1) {
        // Проверяем настройку через Mod::get()
        bool noclipEnabled = Mod::get()->getSettingValue<bool>("noclip-switch");
        
        if (!noclipEnabled) {
            PlayerObject::destroyPlayer(p0, p1);
        }
    }
};
