# My Idobo Keymap

This is a somewhat weird keymap. My Idobo was my first mechanical keyboard, and I got it as a platform to experiment with different ortholinear layouts.

I'm interested in minimal layouts, ergonomics, and reducing hand gymnastics. So my layout is actually something you could use on a 40% board, like a Planck.

## Features
- Home Row Mods, using mod-tap
- Navigation layer, with cursors and Mouse Keys
- Added a Colemak layer to experiment with it

## Changelog

### 2020-09-27

- Added a few shortcuts for daily tools
- Added a couple of proof of concept combos, to see how they feel in preparation for the 3x5 Corne

### 2020-09-26

- Tweaking tapping term values per key
- Added Unicode layer for accented keys and other stuff

### 2020-09-09
- Enable dynamic macros, to record login information
- Added `e` on left thumb (on a mod tap with the Number layer). I've removed the form the top layer, otherwise I'll never get used to it...
- Added enter on tap on middle right thumb

### 2020-09-08
- enabled VIA again, to play with some switches in the middle of the keyboard -> turns out that's a stupid idea, since VIA only supports 4 layers...
- trying to make the keyboard wake up the computer, using KC_WAKE -> doesn't seem to work...

### 2020-09-06
- added a few multimedia control keys on the MOVE layer, so I can control volume and play/pause using a layer (I have the media control keycode on the left shift key at the moment, but I think I'm going to use it for something else eventually, like switching to another layer...)

### 2020-09-03
- duplicate cmd shortcuts in left home row in Numbers layer, so I don't have to move my fingers to trigger them

### 2020-09-01
- iOS-like media play key, thanks @zigotica
- added numbers to base layer

### 2020-08-31
- Code cleanup. Removed unused stuff to reduce firmware size.
- Renamed LINK_TIME_OPTIMIZATION_ to LTO_, as per 92385b3fb617326b129609726020453c8949c7f8
- Added Caps Lock to left thumb key, while I figure out how to enable tap dance to use Esc for that...
- Turns out I am an idiot, and Tap Dance works fine if you don't make a typo trying to enable it on `rules.mk` :grimacing:
- Removing caps lock from thumb key and using that to switch to layer 4, because I don't really like how backspace works when you try to make it do two things using mod tap.

### 2020-08-30

- Adding back latest changes from VIA
- Tweaking tap-hold values (#define PERMISSIVE_HOLD in `config.h`). We'll see how that works in the coming days.
- Removed Leader key from keymap because I don't use it (leader key support still enabled, will be removed at some point)
- Added navigation keys for left side of keyboard on layer 4, which doesn't seem to work... Removing VIA support seemed to work, so I'm assuming layers higher than 3 are ignored by default (although I seem to recall that the limit can be lifted in VIA somehow)
- Added a LT on the backspace to use it to toggle layer 4. Not sure I like the behavior, because half the time I want to delete a letter backspace doesn't fire. This might be because I hit Space faster than Backspace, so it wasn't a problem there. Apparently `#define RETRO_TAPPING` should fix this, so let's try...
- Added `#define RETRO_TAPPING`


## TODO

- Experiment with tap dance for accented vowels
- Hold home thumbs for layer swap
- Move Colemak switch to somewhere a bit more hidden than the third thumb key


