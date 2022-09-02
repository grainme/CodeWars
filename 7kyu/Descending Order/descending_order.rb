def descending_order(n)
  return n.to_s.split('').sort_by(&:to_i).reverse.join("").to_i
end
