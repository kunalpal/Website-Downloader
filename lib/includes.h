#ifndef WEBSITE_DOWNLOADER_INCLUDES_H_H
#define WEBSITE_DOWNLOADER_INCLUDES_H_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void notify_error(const char* msg) {
    printf("ERROR: %s\n", msg);
    exit(EXIT_FAILURE);
}
#endif //WEBSITE_DOWNLOADER_INCLUDES_H_H
