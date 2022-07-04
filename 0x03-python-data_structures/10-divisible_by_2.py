#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    t = []
    for i in my_list:
        if i % 2 == 0:
            t.append(True)
        else:
            t.append(False)
    return t
