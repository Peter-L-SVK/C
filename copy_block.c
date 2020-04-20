#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
    char block[1024]; 
    int in, out; 
    int nread;

    in = open("file.in", O_RDONLY); 
    out = open("file.out", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);
    while((nread = read(in,block,sizeof(block))) > 0) {
      if ((write(out, block, nread)) != nread) {
	write(2, "Error while writing data to the file.\n", 38);
	exit(1);
      }
    }

    if (nread == -1) {
	write(2, "Error while reading data from the file!\n", 40);
	exit(1);
      }

    write(1, "Operation sucssesfull!\n", 3);

    exit(0);
}
