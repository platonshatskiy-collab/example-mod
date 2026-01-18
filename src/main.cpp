#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(MyPlayLayer, PlayLayer) {
    void destroyPlayer(PlayerObject* player, GameObject* object) {
        // Получаем значение переключателя из настроек
        bool noclipEnabled = Mod::get()->getSettingValue<bool>("noclip-switch");
        
        if (noclipEnabled) {
            // Если ноклип включен, мы просто выходим из функции, не вызывая смерть
            return;
        }

        // Если выключен — вызываем оригинальную функцию смерти
        PlayLayer::destroyPlayer(player, object);
    }
};
