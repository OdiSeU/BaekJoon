date = input().zfill(2)+input().zfill(2)
if date > '0218':
    print('After')
elif date < '0218':
    print('Before')
else:
    print('Special')