lst = []
result = []
word = input()

word = word.lower()  # 단어 받아서 소문자로
cnt = {}

for i in word:
    if i in cnt:
        cnt[i] += 1
    else:
        cnt[i] = 1

print(cnt)