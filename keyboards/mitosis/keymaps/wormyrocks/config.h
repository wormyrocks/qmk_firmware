
#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PLANCK_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

#define MOUSEKEY_INTERVAL 20
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_TIME_TO_MAX 30
#define MOUSEKEY_MAX_SPEED 4
#define MOUSEKEY_WHEEL_DELAY 0
#define MOUSEKEY_WHEEL_MAX_SPEED 3
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40

#define AUDIO_VOICES
#define C6_AUDIO

// fix iPhone power adapter issue
#define USB_MAX_POWER_CONSUMPTION 50


#endif
