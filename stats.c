#include <sys/stat.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(){
  struct stat * file = malloc(sizeof(struct stat));
  stat("stats.c",file);
  printf("File Size of current file: %ld \n", file->st_size);
  printf("File permissions of current file: %d \n", file->st_mode);
  printf("Time file was last accessed: %s", ctime(&(file->st_atime)));
  return 0;
}
