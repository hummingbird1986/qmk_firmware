#ifndef USERSPACE_CONFIG_H
#define USERSPACE_CONFIG_H


//#ifdef TAPPING_TERM
//#undef TAPPING_TERM
//#endif // TAPPING_TERM
#ifndef TAPPING_TERM
#define TAPPING_TERM 130
#endif

#ifndef BOOTMAGIC_KEY_SALT
#define BOOTMAGIC_KEY_SALT KC_LSFT
#endif 

#ifndef TAPPING_TOGGLE
#define TAPPING_TOGGLE 3
#endif
#endif
