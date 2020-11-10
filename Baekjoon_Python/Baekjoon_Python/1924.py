days = ['MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT', 'SUN']
dates = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
x, y = map(int, input().split())
print(days[(sum(dates[0:x-1]) + y-1)%7])