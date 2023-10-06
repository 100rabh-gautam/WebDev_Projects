# Function to decode and create the battlefield matrix
def decode_war_battlefield(m, n, targets, column_indices, row_pointers):
    # Initialize the battlefield matrix with 'z'
    battlefield = [['z' for _ in range(n)] for _ in range(m)]

    # Loop through the targets and update the battlefield matrix
    for idx, target in enumerate(targets):
        row_start = row_pointers[idx]
        row_end = row_pointers[idx + 1]

        for col_idx in range(row_start, row_end):
            row = idx  # Find the row index
            col = column_indices[col_idx]  # Find the column index
            battlefield[row][col] = target

    return battlefield

# Input: dimensions of the matrix (m, n)
m = int(input())
n = int(input())

# Input: targets, column indices, and row pointers
targets = input().split()
column_indices = list(map(int, input().split()))
row_pointers = list(map(int, input().split()))

result = decode_war_battlefield(m, n, targets, column_indices, row_pointers)

# Display the resulting battlefield matrix
for row in result:
    print(' '.join(row))
