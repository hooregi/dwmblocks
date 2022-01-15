// Blocks for the statusbar (they appear in order)
static const Block blocks[] = {
// icon, command, update interval, update signal
	{"", "cat /tmp/recordingicon 2>/dev/null", 0, 9},
//{"", "~/.local/bin/statusbar/sb-media", 0, 11},
	{"", "~/.local/bin/statusbar/sb-cpu", 10, 18},
//{"", "~/.local/bin/statusbar/sb-mailbox", 180, 12},
  {"", "~/.local/bin/statusbar/sb-wifi", 5, 4},
	{"", "~/.local/bin/statusbar/sb-volume", 0, 10},
	{"", "~/.local/bin/statusbar/sb-battery", 5, 3},
	{"", "~/.local/bin/statusbar/sb-time", 60, 1},
	{"", "~/.local/bin/statusbar/sb-date", 18000, 1},
	{"", "~/.local/bin/statusbar/sb-update", 90, 8},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";
