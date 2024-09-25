# Go through each folder and compile the cpp file
for dir in */; do
    if [ -d "$dir" ]; then
        echo "Compiling $dir"
        g++ "$dir/main.cpp" -o "$dir/output"
    fi
done