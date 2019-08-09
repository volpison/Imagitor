/* Copyright (c) 2013 Nick Volpison
 * <volpison@gmail.com>
 *
 * Usage of the works is permitted provided that this instrument is retained
 * with the works, so that any entity that uses the works is notified of this
 * instrument.
 *
 * DISCLAIMER: THE WORKS ARE WITHOUT WARRANTY.
 */

#include <stdio.h>
#include <stdlib.h>
#include <X11/Xlib.h>

/* char *cmdname; */

void usage()
{
	printf("This is the Imagitor, created by Nick Volpison.\n");
}

int main(int argc, char **argv)
{
	/* If the display is not here, then we're out */
	Display *display = XOpenDisplay(NULL);
	if (!display) {
		fprintf(stderr, "The X11 display cannot be opened.\n");
		exit(1);
	}

/*	cmdname = argv[0]; */
	/* Command line */
	if (argc == 1) {
		usage();
		exit(1);
	} else {
		fprintf(stderr, "Please type the \"%s\" command alone, ok?\n", argv[0]);
		exit(1);
	}

	XCloseDisplay(display);

	return 0;
}

