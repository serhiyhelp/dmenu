/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int restrict_return = 0;				/* -r option; if 1, disables shift-return and ctrl-return */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Fantasque Sans Mono:size=8",
    "Material Icons:size=10",
    "FontAwesome:size=10",
    "Noto Color Emoji:size=10"
};
static const unsigned int bgalpha = OPAQUE;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                        fg         bg       */
	[SchemeNorm] =          { "#93a1a1", "#073642" },
	[SchemeSel] =           { "#eee8d5", "#2aa198" },
	[SchemeSelHighlight] =  { "#fdf6e3", "#2aa198" },
	[SchemeNormHighlight] = { "#fdf6e3", "#073642" },
	[SchemeOut] =           { "#93a1a1", "#074858" },
	[SchemeOutHighlight] =  { "#fdf6e3", "#074858" },
};
static const unsigned int alphas[SchemeLast][2] = {
	/*                        fgalpha  bgalpha */
	[SchemeNorm] =          { fgalpha, bgalpha },
	[SchemeSel] =           { fgalpha, bgalpha },
	[SchemeSelHighlight] =  { fgalpha, bgalpha },
	[SchemeNormHighlight] = { fgalpha, bgalpha },
	[SchemeOut] =           { fgalpha, bgalpha },
	[SchemeOutHighlight] =  { fgalpha, bgalpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 30;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* -n option; preselected item starting from 0 */
static unsigned int preselected = 0;
