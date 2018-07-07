#!/usr/bin/python

import random
import json

JSON_FILE = 'data/test_charaindex.json'

def children_num(percentage=0.5):
    """Return children born num
    Args:
        percentage: 0.5
    Returns:
        num: int
    """
    point = random.random()
    num, top, under = 1, 1.0*percentage, 0.0
    while True:
        if (under <= point)and(point < top):
            return num
        else:
            num+=1
            under = top
            top = top + (1.0 - top) * percentage
    
def main():
    with open(JSON_FILE) as file:
        json_object = json.load(file)
        print(json_object['characters'])
    for _ in range(10):
        print(children_num())

if __name__ == '__main__':
    main()
