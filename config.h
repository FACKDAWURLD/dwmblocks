//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/									/*Update Interval*/	/*Update Signal*/
	/* {"⌨", 	"~/.repos/dwmblocks/statusbar/sb-kbselect", 					0,			30}, */
	/* {"",		"~/.repos/dwmblocks/statusbar/sb-tasks",					10,			26}, */
	/* {"",		"~/.repos/dwmblocks/statusbar/sb-music",					0,			11}, */
	/* {"",		"~/.repos/dwmblocks/statusbar/sb-news",					0,			6}, */
	/* {"",		"~/.repos/dwmblocks/statusbar/sb-price lbc \"LBRY Token\" 📚",			9000,			22}, */
	/* {"",		"~/.repos/dwmblocks/statusbar/sb-price bat \"Basic Attention Token\" 🦁",	9000,			20}, */
	/* {"",		"~/.repos/dwmblocks/statusbar/sb-price link \"Chainlink\" 🔗",			300,			25}, */
	/* {"",		"~/.repos/dwmblocks/statusbar/sb-price xmr \"Monero\" 🔒",			9000,			24}, */
	/* {"",		"~/.repos/dwmblocks/statusbar/sb-price eth Ethereum 🍸",			9000,			23}, */
	/* {"",		"~/.repos/dwmblocks/statusbar/sb-price btc Bitcoin 💰",			9000,			21}, */
	/* {"",		"~/.repos/dwmblocks/statusbar/sb-torrent",					20,			7}, */
	/* {"",		"~/.repos/dwmblocks/statusbar/sb-moonphase",					18000,			17}, */
	/* {"",		"~/.repos/dwmblocks/statusbar/sb-memory",					10,			14}, */
	/* {"",		"~/.repos/dwmblocks/statusbar/sb-cpu",						10,			18}, */
	/* {"",		"~/.repos/dwmblocks/statusbar/sb-forecast",					18000,			5}, */
	/* {"",		"~/.repos/dwmblocks/statusbar/sb-nettraf",					1,			16}, */
	/* {"",		"~/.repos/dwmblocks/statusbar/sb-pacpackages",					0,			8}, */
	{" ",		"~/.repos/dwmblocks/statusbar/sb-mailbox",					180,			12},
	{"",		"~/.repos/dwmblocks/statusbar/sb-internet",					5,			4},
	{"",		"~/.repos/dwmblocks/statusbar/sb-volume",					0,			10},
	{"",		"~/.repos/dwmblocks/statusbar/sb-battery",					5,			3},
	{"",		"~/.repos/dwmblocks/statusbar/sb-clock",					60,			1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks.repos.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
