str1='Umbrlla'
check=0
for i in range(0,len(str1)):
    if(str1[i]=='e'):
        count=1
        break
if(count):
    print('Letter is present')
else:
    print('Letter is not present')
print(str1.find('e'))