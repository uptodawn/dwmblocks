//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "dwmbridge cpu",					1,		0},
	{"", "dwmbridge mem",					1,		0},
	{"", "dwmbridge net",					1,		0},
	{"", "dwmbridge time",					1,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
