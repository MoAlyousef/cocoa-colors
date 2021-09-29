#pragma once

#ifndef COCOA_COLOR_DEFINITION

#define COLOR_GET(color)                                                       \
  void get_##color(double *r, double *g, double *b, double *a);

#else

#define COLOR_GET(color)                                                       \
  void get_##color(double *r, double *g, double *b, double *a) {                \
    NSColor *i = [NSColor color];                                              \
    NSColor *c = [i colorUsingColorSpace:[NSColorSpace genericRGBColorSpace]]; \
    [c getRed:r green:g blue:b alpha:a];                                       \
  }

#endif

COLOR_GET(windowBackgroundColor)

COLOR_GET(labelColor)

COLOR_GET(controlBackgroundColor)

COLOR_GET(secondaryLabelColor)

COLOR_GET(tertiaryLabelColor)

COLOR_GET(quaternaryLabelColor)

COLOR_GET(textColor)

COLOR_GET(placeholderTextColor)

COLOR_GET(selectedTextColor)

COLOR_GET(textBackgroundColor)

COLOR_GET(selectedTextBackgroundColor)

COLOR_GET(keyboardFocusIndicatorColor)

COLOR_GET(unemphasizedSelectedTextColor)

COLOR_GET(unemphasizedSelectedTextBackgroundColor)

COLOR_GET(linkColor)

COLOR_GET(separatorColor)

COLOR_GET(selectedContentBackgroundColor)

COLOR_GET(unemphasizedSelectedContentBackgroundColor)

COLOR_GET(selectedMenuItemTextColor)

COLOR_GET(gridColor)

COLOR_GET(headerTextColor)

COLOR_GET(controlAccentColor)

COLOR_GET(controlColor)

COLOR_GET(controlTextColor)

COLOR_GET(disabledControlTextColor)

COLOR_GET(selectedControlColor)

COLOR_GET(selectedControlTextColor)

COLOR_GET(alternateSelectedControlTextColor)

COLOR_GET(scrubberTexturedBackgroundColor)

COLOR_GET(windowFrameTextColor)

COLOR_GET(underPageBackgroundColor)

COLOR_GET(findHighlightColor)

COLOR_GET(highlightColor)

COLOR_GET(shadowColor)

COLOR_GET(systemBrownColor)

COLOR_GET(systemGrayColor)

COLOR_GET(systemGreenColor)

COLOR_GET(systemIndigoColor)

COLOR_GET(systemOrangeColor)

COLOR_GET(systemPinkColor)

COLOR_GET(systemPurpleColor)

COLOR_GET(systemRedColor)

COLOR_GET(systemTealColor)

COLOR_GET(systemYellowColor)

COLOR_GET(systemBlueColor)

// COLOR_GET(systemCyanColor) // beta!



