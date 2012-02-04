#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int
write_temp_file (char *buffer, size_t length)
{
  char temp_filename[] = "/tmp/my_temp_file.XXXXXX";
  int fd = mkstemp (temp_filename);
  unlink (temp_filename);
  printf ("Generált filenév: %s\n", temp_filename);
  write (fd, &length, sizeof (length));
  write (fd, buffer, length);
  return fd;
}

char *
read_temp_file (int temp_file, size_t * length)
{
  char *buffer;
  int fd = temp_file;
  lseek (fd, 0, SEEK_SET);
  read (fd, length, sizeof (*length));
  buffer = (char *) malloc (*length + 1);
  buffer[*length] = '\0';
  read (fd, buffer, *length);
  close (fd);
  return buffer;
}

int
main (void)
{
  char *write_buf, *read_buf;
  int temp_fd;
  size_t read_length;

  write_buf = calloc (100, sizeof (char));

  strcpy (write_buf, "teszt");
  temp_fd = write_temp_file (write_buf, strlen (write_buf));

  read_buf = read_temp_file (temp_fd, &read_length);
  printf ("Visszaolvasva: %s\n", read_buf);

  free (write_buf);
  free (read_buf);

  return (0);
}
