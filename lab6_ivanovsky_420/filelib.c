#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "filelib.h"

void save_message(const char *filename, const char *message) {
    int fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0644);
    write(fd, message, strlen(message));
    close(fd);
}
