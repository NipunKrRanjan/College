import argparse
import random
import sys


def generate_binary_matrix_simple(m, n, p_one=0.7, seed=42):
    rng = random.Random(seed)
    matrix = []
    for i in range(m):
        row = []
        for j in range(n):
            random_value = rng.random()
            if random_value < p_one:
                row.append(1)
            else:
                row.append(0)
        matrix.append(row)
    return matrix


def find_paths(matrix, n, sr, sc, er, ec):
    paths = []
    # Early exit if start or end blocked
    if matrix[sr][sc] == 0 or matrix[er][ec] == 0:
        return paths

    def dfs(i, j, path):
        # If reached end
        if i == er and j == ec:
            paths.append(path.copy())
            return
        # Move right
        if j + 1 < n and matrix[i][j + 1] == 1:
            path.append((i, j + 1))
            dfs(i, j + 1, path)
            path.pop()
        # Move down
        if i + 1 < n and matrix[i + 1][j] == 1:
            path.append((i + 1, j))
            dfs(i + 1, j, path)
            path.pop()

    dfs(sr, sc, [(sr, sc)])
    return paths


def main(argv=None):
    argv = argv or sys.argv[1:]
    parser = argparse.ArgumentParser(description='Debug Q2 matrix path finder')
    parser.add_argument('--n', type=int, help='matrix size (n x n)')
    parser.add_argument('--sr', type=int, help='start row')
    parser.add_argument('--sc', type=int, help='start col')
    parser.add_argument('--er', type=int, help='end row')
    parser.add_argument('--ec', type=int, help='end col')
    parser.add_argument('--p', type=float, default=0.7, help='probability of 1')
    parser.add_argument('--seed', type=int, default=42, help='random seed')
    args = parser.parse_args(argv)

    # Defaults
    n = args.n if args.n is not None else 5
    sr = args.sr if args.sr is not None else 0
    sc = args.sc if args.sc is not None else 0
    er = args.er if args.er is not None else n - 1
    ec = args.ec if args.ec is not None else n - 1

    # Validate indices
    if not (0 <= sr < n and 0 <= sc < n and 0 <= er < n and 0 <= ec < n):
        print('Error: start/end indices must be within matrix bounds')
        return 2

    matrix = generate_binary_matrix_simple(n, n, p_one=args.p, seed=args.seed)
    # ensure start/end are open
    matrix[sr][sc] = 1
    matrix[er][ec] = 1

    print('Matrix Generated')
    for row in matrix:
        print(' '.join(map(str, row)))

    all_paths = find_paths(matrix, n, sr, sc, er, ec)
    print('\nPaths found:')
    if not all_paths:
        print('No path found')
    else:
        for pth in all_paths:
            print(', '.join(f'({r},{c})' for r, c in pth))
        print('Total paths:', len(all_paths))


if __name__ == '__main__':
    raise SystemExit(main())
