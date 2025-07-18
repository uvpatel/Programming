list = ["Make a lot of money", "buy now ", "subscribe this", "click this"]

message = input("Enter Message: ").lower()
i = 0
# for list[i] in message:
if(list[i].split() in message):
    print("This is a spam")
    # break;
    i += 1
