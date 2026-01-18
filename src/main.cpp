#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

// Модифицируем класс PlayLayer (где происходит игра)
class $modify(MyPlayLayer, PlayLayer) {
    
    // Функция, которая вызывается при столкновении с объектом (смерти)
    void destroyPlayer(PlayerObject* player, GameObject* object) {
        // Если мы просто ничего не напишем внутри, 
        // стандартная функция смерти не вызовется.
        // Это и есть самый чистый NoClip.
        
        // Но добавим проверку: если это не шип, а портал или монета,
        // лучше оставить стандартную логику (по желанию).
        // Для простого NoClip оставляем пустым:
    }
};
