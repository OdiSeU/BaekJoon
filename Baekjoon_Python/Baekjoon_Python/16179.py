import datetime

d = datetime.datetime.utcnow().date()
print(str(d).replace('-', '\n'))