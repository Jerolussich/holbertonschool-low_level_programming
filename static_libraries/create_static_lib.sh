#!/bin/bash
find .c | gcc -c *.c | ar rc liball.a
