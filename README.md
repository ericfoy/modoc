# Modoc

Designed with the use of tables and blocks in mind. When you need to optimize screen real estate utilization.

## Documentation

Full documentation will be developed as time and resources permit. Meanwhile, some tips:
- You may edit the file 'globals.css' (found in the themes/modoc/css folder) to easily change the page width, base font-size, and typefaces.
- Particularly useful for side menus and blocks: you may add the css class 'hide-overflow' to any block through the UI (see below). this will truncate the contents rather than having them bleed into the body of the next layout column to the right.
- The easiest way to get rid of all the block borders is to set the block border color the same as the page background color.
- You may also add the following css classes to any block through the admin UI (configure block | style | default -> additional css classes):
  - border-0 (no border)
  - border-2 (2px)
  - border-3 (3px...)
  - border-5   .
  - border-7   .
  - border-10 (10px)
  - combine any of the above with 'hide-overflow' (separated by a space)
- The logo image is not scaled in css, thus it must be pre-scaled prior to uploading. I have found an image height of 75 to 125 pixels to work well.

## Caveats

- The color schemes are not fully refined yet - some work is still required. They should be useful, however, as a starting point.
- For vertical menus, be sure to set the Menu Style to 'Dropdown Menu' in order to make them look good. More work on this is pending.
### To-Do
- Move the type-face and page-width configurations into the Settings UI.
- Put the color selections into fieldsets in the UI for an easier user experience.
- Other stuff that comes up as issues come in.
- Establish a documentation portal, and put stuff in it!
- Continue the never-ending process of refining and cleaning up the css.

## Installation

- Install this theme using the official [Backdrop CMS instructions](https://backdropcms.org/guide/themes)


## Issues

Bugs and Feature requests should be reported in the [Issue Queue](https://github.com/backdrop-contrib/modoc/issues)


## Current Maintainers

- [ericfoy](https://github.com/ericfoy)


## Credits

Inspired by the Monochrome theme, adapted and refactored by ericfoy.
Thanks, [Indigoxela](https://github.com/indigoxela), for the springboard.

The Lekton font was designed at [ISIA Urbino.](https://isiaurbino.net/istituto/english)

The News Cycle font is Copyright (c) 2010-2011, Nathan Willis (nwillis@glyphography.com),
with Reserved Font Name “News Cycle.” 

The Benchnine font is Copyright (c) 2012, Vernon Adams (vern@newtypography.co.uk), 
with Reserved Font Name ‘BenchNine.’ 

The Montserrat font is Copyright (c) 2011, The [Montserrat Project Authors](https://github.com/JulietaUla/Montserrat). 

All fonts are licensed under the SIL Open Font License, Version 1.1.
All font licenses are available at: http://scripts.sil.org/OFL

## License

This project is GPL v2 software. See the LICENSE.txt file in this directory for the complete text.
---
![screenshot6](https://user-images.githubusercontent.com/60248933/231640507-8b8fc690-e65d-43f0-9d11-275621226bfd.png)
---
![screenshot4](https://user-images.githubusercontent.com/60248933/231575264-6b935fdf-2c6e-47ea-855a-9ed9250bad3e.png)
---
![screenshot5](https://user-images.githubusercontent.com/60248933/231575203-13fe669f-b5d4-4a4e-a56d-1bd60ec4c504.png)
---
