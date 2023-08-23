MOD = 10**9 + 7

def count_paths_with_modulo(n, grid):
    dp = [[0] * n for _ in range(n)]
    
    dp[0][0] = 1 if grid[0][0] == '.' else 0
    
    for j in range(1, n):
        if grid[0][j] == '.':
            dp[0][j] = dp[0][j - 1]
    
    for i in range(1, n):
        if grid[i][0] == '.':
            dp[i][0] = dp[i - 1][0]
    
    for i in range(1, n):
        for j in range(1, n):
            if grid[i][j] == '.':
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD
    
    return dp[n - 1][n - 1]

n = int(input())
grid = [input() for _ in range(n)]
result = count_paths_with_modulo(n, grid)
print(result)
