#include "danRev.h"


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
	case _LCBRKT:
		if(record->event.pressed){

	register_code(KC_LSFT);
	register_code(KC_LBRC);
      } else {
        unregister_code(KC_LSFT);
		unregister_code(KC_LBRC);
      }
	  break;

	case _RCBRKT:
	   if (record->event.pressed) {
	register_code(KC_RSFT);
	register_code(KC_RBRC);
      } else {
        unregister_code(KC_RSFT);
		unregister_code(KC_RBRC);
      }
	  break;

	case _LBRKT:
	   if (record->event.pressed){
		 register_code(KC_LBRC);
	   }
	   else{
		 unregister_code(KC_LBRC);
	   }
	   break;

	case _RBRKT:
	   if (record->event.pressed){
		 register_code(KC_RBRC);
	   }
	   else{
		 unregister_code(KC_RBRC);
	   }
	   break;


    case _MINS:
	   if (record->event.pressed) {
	    register_code(KC_MINS);
	 	 
      } else {
        
		unregister_code(KC_MINS);
      }
	  break;
	  
    case _EQL:
	   if (record->event.pressed) {
	    register_code(KC_EQL);
	 	 
      } else {
        
		unregister_code(KC_EQL);
      }
	  break;
//code not working
/*	case _TEST:
	  if (record->event.pressed){
		switch(keycode){
           case KC_RSFT:
			if(record->event.pressed)
			{
			  register_code(KC_5);
			  unregister_code(KC_5);
			} else{
			  register_code(KC_6);
			  unregister_code(KC_6);
			}break;
		
		}
	  }*/

  }
  //return false;  // Skip all further processing of this key 
 return true;
};





//old fashine 
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
