import time
import sys
import os

if len(sys.argv) < 2:
    print("Usage: python compile.py <problem_id>")
    sys.exit(1)
    
problem_id = sys.argv[1]
filepath = os.getcwd() + "/solutions/" + problem_id + ".cc"

if not os.path.exists(filepath):
    print("File not found")
    sys.exit(1)
    
os.system("g++ " + filepath + " -o a.out")
print("\033c")
os.system("./a.out")
os.remove("a.out")
