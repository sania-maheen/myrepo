#Secret Message Encoder in Python
#I took each character, converted it to its ASCII value using ord(), added a number to shift it, and changed it back using chr().
#  code to make secret message

msg = input("Enter message: ")
code = ""

for letter in msg:
    num = ord(letter)
    num = num + 2
    new_letter = chr(num)
    code = code + new_letter

print("Secret message is:", code)



# Secret Message Decoder in Python
# This program changes the coded message back to the original
# by moving each letter back by 2 positions.

msg = input("Enter the secret message: ")
original = ""

for letter in msg:
    num = ord(letter)       # change letter to number
    num = num - 2           # move back by 2
    real_letter = chr(num)  # change number back to letter
    original = original + real_letter

print("Original message is:", original)
