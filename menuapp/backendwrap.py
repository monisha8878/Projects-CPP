
# backend_wrapper.py
import subprocess

def call_cpp_program(a, b):
    process = subprocess.Popen(
        ['backend.exe'],               # or use full path if needed
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True
    )
    output, error = process.communicate(f"{a} {b}")
    
    if process.returncode != 0:
        raise Exception(f"C++ error: {error}")
    
    return int(output.strip())

