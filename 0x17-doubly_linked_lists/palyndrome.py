def ispalyndrome(s):
    return str(s) == str(s)[::-1]
def main():
    list = []
    max = 906609
    for s  in range(100,1000):
        for t in range(100,1000):
            if ispalyndrome(s*t):
                if s*t >= max:
                    list.append(s)
                    list.append(t)
                    
    print(f"{max} , {list}")
if __name__ == "__main__":
    main()
     

    
    