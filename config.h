static int topbar = 1;
static int fuzzy = 1;
static int centered = 1;
static int min_width = 550;
static const char *fonts[] = {"JetBrains Mono:size=10"};
static const char *prompt = NULL;
static const char *colors[SchemeLast][2] = {
                   /* fg       bg       */
    [SchemeNorm] = {"#CBCACB", "#252525"},
    [SchemeSel] =  {"#FBB86C", "#2c2c2c"},
    [SchemeOut] =  {"#000000", "#00ffff"},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 7;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 45;
static unsigned int min_lineheight = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
