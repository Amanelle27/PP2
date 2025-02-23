import re

text_to_match = "WowItsAlreadyNight"

pattern = r'(?=[A-Z])'

result = re.split(pattern, text_to_match)

print(result)