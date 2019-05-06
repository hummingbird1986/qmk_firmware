#include "danRev.h"

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    switch(id) {
        case 0: {
            if (record->event.pressed) {
                return MACRO( D(LGUI), D(LCTL),D(LSFT),T(4),U(LGUI), U(LCTL),U(LSFT), END  );
            }
            //else {}
            
            
            break;
        }
        case 1: {
            if (record->event.pressed) {
                return MACRO( D(LGUI), D(LSFT), T(4), U(LGUI), U(LSFT), END);
            }
            break;
        }
        case 2: {
            if (record->event.pressed){
                return MACRO( D(LGUI), T(C), U(LGUI), END  );
            } else {
                return MACRO( D(LGUI), T(V), U(LGUI), END  );
            }
            break;
        }
        case 3: {
            if (record->event.pressed) {
                return MACRO( D(LGUI), D(LCTL), T(Q), U(LGUI),  U(LCTL), END);
            }
            break;
        } 
    }
    
    return MACRO_NONE;
};
