# Instructions to Push LeetCode to GitHub

I have already initialized the repository in `C:\coding\leetcode` and created `.gitignore` and `README.md`.

## Step 1: Create the Repository on GitHub

1.  Go to [GitHub.com](https://github.com/new).
2.  Create a new repository named `leetcode`.
3.  Do **not** initialize with README, .gitignore, or License (we already have them).
4.  Click "Create repository".

## Step 2: Push Local Code to GitHub

Open your terminal in `C:\coding\leetcode` and run these commands:

```powershell
# Add all files
git add .

# Commit
git commit -m "Initial setup with README and .gitignore"

# Link to GitHub (Replace 'milangarg901' with your username if different)
git remote add origin https://github.com/milangarg901/leetcode.git

# Rename branch to main
git branch -M main

# Push
git push -u origin main
```

## Step 3: Adding New Solutions

When you solve a problem (e.g., Two Sum):

1.  Create a file `1-Two-Sum.cpp` in `C:\coding\leetcode`.
2.  Run:
    ```powershell
    git add .
    git commit -m "Added solution for Two Sum"
    git push
    ```
