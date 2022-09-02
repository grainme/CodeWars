def reverse_letter(string)
  return string.gsub(/[^a-zA-Z]/,"").reverse # we can use scan function with same syntax but with no ^
end
