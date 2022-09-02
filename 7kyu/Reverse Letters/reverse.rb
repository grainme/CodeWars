def reverse_letter(string)
  return string.gsub(/[^a-zA-Z]/,"").reverse
end
