#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

// ...

const char *filename = "myfile.txt";

int main() {

    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    
    if (fd == -1) {
        perror("Error");
        return 1;
    }


    const char *text = "HELLO! \n";
    write(fd, text, 8);


    close(fd);


    printf("VSE OK!!\n");

    return 0;
}
