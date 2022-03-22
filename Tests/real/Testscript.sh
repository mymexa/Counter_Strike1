#!/bin/sh

for ((i=1; i<10; i++)) do ./counter_strike < test.00"$i".in.txt | diff -w -s test.00"$i".out.txt - ; done ; ./counter_strike < test.010.in.txt | diff -w -s test.010.out.txt -
