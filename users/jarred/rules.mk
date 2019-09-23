SRC += jarred.c

ifneq (,$(findstring planck,$(KEYBOARD)))
  # Enable backlight for rev4 planck only
  ifneq (,$(findstring rev4,$(KEYBOARD)))
    BACKLIGHT_ENABLE = yes
    CONSOLE_ENABLE = no
  else
    BACKLIGHT_ENABLE = no
  endif
  
  AUDIO_ENABLE = yes
endif

MOUSEKEY_ENABLE = no
