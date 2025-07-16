import os

# Walk through all directories and subdirectories
for root, dirs, files in os.walk("."):
    for filename in files:
        # Skip hidden files and files that already have an extension
        if '.' not in filename:
            old_path = os.path.join(root, filename)
            new_path = old_path + ".cpp"
            os.rename(old_path, new_path)
            print(f"Renamed: {old_path} → {new_path}")
