#!/bin/bash

# Remove the shebang line from all .c files
for file in *.c; do
    if [ -f "$file" ]; then
        sed -i '1{/^#!/d;}' "$file"
    fi
done

