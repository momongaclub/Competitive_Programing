# coding: utf-8
# Your code here!
def main():
    S = input()
    min_num = 1000000
    for i in range(0,len(S)-2):
        num = int(S[i:i+3:1])
        if min_num >= abs(num-753):
            min_num = abs(num-753)
    print(min_num)
        
main()
