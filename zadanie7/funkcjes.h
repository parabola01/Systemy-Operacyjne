#ifndef FUNKCJES_H
#define FUNKCJES_H

#include<stdlib.h>
#include<semaphore.h>

void semCreate(const char *name, int val);

void semRemove(const char *name);

sem_t *semOpen(const char *name);

void semClose(sem_t *semaphore);

void semV(sem_t *semaphore);

void semP(sem_t *semaphore);

int semInfo(sem_t *semaphore);

void my_handler(int sig);

#endif
