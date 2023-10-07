#include <stdio.h>
#include <unistd.h>

/**
 * main - print process ID and Parent PID
 *
 * Return: Always (0)
 */

int main()
{
  pid_t pid, ppid;

  pid = getpid();
  ppid = getppid();

  printf("process ID: %u\n", pid);
  printf("parent pid: %u\n", ppid);
  return (0);
}
