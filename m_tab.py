#!/usr/bin/python3

for i in range(0, 10):
    st = ""
    for j in range(1, i+1):
        st = st + "{0}*{1}={2} ".format(j,i,i*j)

    if st:
        print(st)


