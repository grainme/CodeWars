def divisors(n)
    return (1..n).count{|x| n%x == 0}
  end

puts divisors(10)  