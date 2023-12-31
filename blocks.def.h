// Blocks for the statusbar (they appear in order)
static const Block blocks[] = {
// icon, command, update interval, update signal
	{"", "cat /tmp/recordingicon 2>/dev/null", 0, 9},
	{"", "~/.local/bin/statusbar/sb-torrent", 20, 7},
	{"", "~/.local/bin/statusbar/sb-cpu", 10, 18},
  {"", "~/.local/bin/statusbar/sb-wifi", 5, 4},
	{"", "~/.local/bin/statusbar/sb-volume", 10, 10},
	{"", "~/.local/bin/statusbar/sb-battery", 5, 3},
	{"", "~/.local/bin/statusbar/sb-time", 60, 1},
	{"", "~/.local/bin/statusbar/sb-date", 60, 1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";
