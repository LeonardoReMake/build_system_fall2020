import os
import sys

file_name = sys.argv[1]

file = open(file_name, 'w+')
file.write(f'int health() {{return 0;}}\n')
file.close()