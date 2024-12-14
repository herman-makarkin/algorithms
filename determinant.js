const matrix = [
  [6, 2, 0, 1],
  [0, 3, 5, 5],
  [1, 2, -2, 4],
  [-1, 3, 3, 0]
]

const determinant = (mat, n = mat.length) => {

  if (n === 1) return mat[0][0];

  if (n === 2) return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];

  let result = 0;
  for (let col = 0; col < n; col++) {
    let sub = Array.from({ length: n - 1 }, () => new Array(n - 1));
    for (let i = 1; i < n; i++) {
      let subcol = 0;
      for (let j = 0; j < n; j++)
        if (j !== col) sub[i - 1][subcol++] = mat[i][j];
    }

    result += ((col % 2 === 0) ? 1 : -1) * mat[0][col] * determinant(sub, n - 1);
  }

  return result;
}

console.log(determinant(matrix));
