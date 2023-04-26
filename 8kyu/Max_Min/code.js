var min = function (list) {
  let min = list[0];
  for (let x = 0; x < list.length; x++) {
    min = Math.min(min, list[x]);
  }
  return min;
};

var max = function (list) {
  let max = list[0];
  for (let x = 0; x < list.length; x++) {
    max = Math.max(max, list[x]);
  }
  return max;
};
