def count_vowels(input_string):
  vowels = 'aeiou'
  d = {}
  for char in input_string:
    if char.lower() in vowels:
      if char.lower() not in d.keys():
        d[char.lower()] = 1
      else:
        d[char.lower()] += 1
  return d
