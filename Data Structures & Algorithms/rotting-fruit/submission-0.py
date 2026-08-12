class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        rows = len(grid)
        cols = len(grid[0])

        fresh = 0
        time = 0
        rottenq = deque()

        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == 1:
                    fresh +=1
                if grid[r][c] == 2:
                    rottenq.append((r,c))
        
        directions = [[0,1], [1,0] , [0,-1], [-1,0]]

        while fresh > 0 and rottenq:
            size = len(rottenq)
            for i in range(size):
                r, c = rottenq.popleft()

                for dr, dc in directions:
                    row, col = r + dr, c + dc
                    if( row in range(rows) and 
                        col in range(cols) and
                        grid[row][col] == 1
                    ):
                        grid[row][col] = 2
                        rottenq.append((row,col))
                        fresh -= 1
            
            time += 1
        
        return time if fresh == 0 else -1
                

