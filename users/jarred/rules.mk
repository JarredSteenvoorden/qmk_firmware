SRC += jarred.c

ifneq (,$(findstring planck,$(KEYBOARD)))
  # Enable backlight for rev4 planck only
  ifneq (,$(findstring rev4,$(KEYBOARD)))
    BACKLIGHT_ENABLE = yes
    BACKLIGHT_BREATHING = yes
  else
    BACKLIGHT_ENABLE = no
    BACKLIGHT_BREATHING = no
  endif
  
  CONSOLE_ENABLE = no
  AUDIO_ENABLE = yes
endif

COMBO_ENABLE = yes
MOUSEKEY_ENABLE = no
