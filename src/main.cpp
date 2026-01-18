#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(MyPlayLayer, PlayLayer) {
    void destroyPlayer(PlayerObject* player, GameObject* object) {
        // Проверка настройки мода
        auto noclipEnabled = Mod::get()->getSettingValue<bool>("noclip-switch");
        
        if (noclipEnabled) {
            // Если включен — выходим из функции (не умираем)
            return;
        }

        // Если выключен — вызываем стандартную смерть
        PlayLayer::destroyPlayer(player, object);
    }
};
