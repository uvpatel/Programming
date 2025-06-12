import os

# Set your base path where the folders like 'check_Even_odd' exist
base_path = "."

for dir_name in os.listdir(base_path):
    full_path = os.path.join(base_path, dir_name)
    
    # Check if it's a directory
    if os.path.isdir(full_path):
        # Extract meaningful part (after 'check_' or 'Check_')
        if dir_name.lower().startswith("check_"):
            name_part = dir_name.split("_", 1)[1]
        else:
            name_part = dir_name

        # Define filenames
        file_base = name_part.strip()
        filenames = [f"{file_base}.py", f"{file_base}.c", f"{file_base}.md"]

        for fname in filenames:
            file_path = os.path.join(full_path, fname)
            # Create the file only if it doesn't exist
            if not os.path.exists(file_path):
                with open(file_path, "w") as f:
                    f.write(f"# {fname} created inside {dir_name}\n")
                print(f"Created: {file_path}")
            else:
                print(f"Already exists: {file_path}")
