/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "mono:pixelsize=13:antialias=true:autohint=true";
static const char *fonts[] = {
  font,
  "Symbols Nerd Font:pixelsize=14:antialias=true:autohint=true",
  "Noto Color Emoji:pixelsize=12:antialias=true:autohint=true",
  "Noto Sans CJK JP:pixelsize=13:antialias=true:autohint=true",
};

static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeOut]  = { "#000000",   "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",        STRING, &font },
	{ "normfgcolor", STRING, &normfgcolor },
	{ "normbgcolor", STRING, &normbgcolor },
	{ "selfgcolor",  STRING, &selfgcolor },
	{ "selbgcolor",  STRING, &selbgcolor },
	{ "prompt",      STRING, &prompt },
};
