def bubbleSort(num):
    for i in range(len(num)-1, 0, -1):
        for j in range(i):
            #change place if the current value is greater than the next one
            if num[j] > num[j + 1]:
                #swap
                temp = num[j]
                num[j] = num[j + 1]
                num[j + 1] = temp

numbers = [23, 100, 87, 999, 446, 76, 2, 65, 765, 1, 5, 501]

bubbleSort(numbers)
print(numbers)