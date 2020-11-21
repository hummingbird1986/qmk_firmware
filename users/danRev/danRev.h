#ifndef USERSPACE
#define USERSPACE

#include "quantum.h"
#include "quantum.h"
#include "action.h"
#include "version.h"
  enum customer_keycodes {
    _BL = 0,
    _NORM,
    _VIML,
    _NL,
    _HHKB,
    _MCO,
    _BRKT,
/*    _LBRC,
    _RBRC,
	_MINS,
	_EQL*/
  };

  enum customer_key{

    _LCBRKT=SAFE_RANGE,
    _RCBRKT,
	_LBRKT,
	_RBRKT,
	_MINS,
	_EQL,
    _TEST,
  };
bool process_record_user(uint16_t keycode, keyrecord_t *record);
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt);

#endif
