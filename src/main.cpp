#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(MyPlayLayer, PlayLayer) {
    void destroyPlayer(PlayerObject* player, GameObject* object) {
        
        // Проверяем нашу кнопку
        bool noclipEnabled = Mod::get()->getSettingValue<bool>("noclip-switch");
        
        if (noclipEnabled) {
            // Если включена — не умираем
            return;
        }

        // Если выключена — обычная смерть
        PlayLayer::destroyPlayer(player, object);
    }
};
