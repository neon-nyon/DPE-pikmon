import os

# Path to the tm_compatibility directory (relative)
target_dir = os.path.join("src", "tm_compatibility")

# The replacement content
new_content = """BULBORBLARVA
BULBORB
JUMBOBULBORB
"""

# Loop through all files in the target directory
for filename in os.listdir(target_dir):
    if filename.endswith(".txt"):
        file_path = os.path.join(target_dir, filename)
        with open(file_path, "w") as f:
            f.write(new_content)
        print(f"Replaced content in {file_path}")

print("✅ Done! All .txt files updated.")
