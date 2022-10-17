#!/bin/bash
find *.c | gcc -c | ar rc liball.a
