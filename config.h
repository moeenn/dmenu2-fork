static int topbar = 0;
static int fuzzy = 1;
static const char *fonts[] = { "JetBrains Mono:size=10" };
static const char *prompt = NULL;
static const char *colors[SchemeLast][2] = {
									/* fg       bg       */
	[SchemeNorm] = { "#F7F7F7", "#232323" },
	[SchemeSel] = { "#FDA53B", "#303030" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 45;
static unsigned int min_lineheight = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
