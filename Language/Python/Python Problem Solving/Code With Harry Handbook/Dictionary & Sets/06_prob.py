lang_dict = {}

for i in range(4):
    name = input("Enter Name: ")
    lang = input(f"Enter Language which is used by {name}: ")
    lang_dict[f'{name}'] = lang


print(lang_dict)


