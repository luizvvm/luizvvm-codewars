def solution(number):
    number -= 1
    sum = 0
    if number <= 0:
        return 0
​
    while number > 0:
        sum += number if (number % 3 == 0 or number % 5 == 0) else 0
        number -= 1
    return sum