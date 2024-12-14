const matrix = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9]
]

const sarrus = (mat) => {
  let result = 0;
  const plus =
    (mat[0][0] *
      mat[1][1] *
      mat[2][2]) +
    (mat[1][0] *
      mat[2][1] *
      mat[0][2]) +
    (mat[2][0] *
      mat[0][1] *
      mat[1][2]);
  const minus =
    (mat[0][2] *
      mat[1][1] *
      mat[2][0]) +
    (mat[1][2] *
      mat[2][1] *
      mat[0][0]) +
    (mat[2][2] *
      mat[0][1] *
      mat[1][0]);
  console.log(plus);
  console.log(minus);
  result = plus - minus;
  console.log(result);
  return result;
}

sarrus(matrix);
