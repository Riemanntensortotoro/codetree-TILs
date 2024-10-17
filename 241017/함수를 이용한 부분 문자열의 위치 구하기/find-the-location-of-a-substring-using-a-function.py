input_string = input().strip()
target_string = input().strip()

def find_substring(input_str, target_str):
    index = input_str.find(target_str)
    return index if index != -1 else -1

print(find_substring(input_string, target_string))