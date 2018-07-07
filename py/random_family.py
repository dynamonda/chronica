#!/usr/bin/python

import random
import json

JSON_FILE = 'data/test_charaindex.json'

def children_num(percentage=0.5):
    point = random.random()
    num, top, under = 1, 1.0, 0.0
    while True:
        if (under < point)and(point < top * percentage):
            return num
        else:
            num+=1
            under = top * percentage
    

def main():
    with open(JSON_FILE) as file:
        json_object = json.load(file)
        print(json_object['characters'])

if __name__ == '__main__':
    main()
