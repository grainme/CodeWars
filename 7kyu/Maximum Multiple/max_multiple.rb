def max_multiple(divisor, bound)
  return (1..bound).select{|x| x%divisor == 0}.max
end
