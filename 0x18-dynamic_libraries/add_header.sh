#!/bin/bash

header="#!/bin/bash"

for file in *.c; do
    if [ "$file" != "main.c" ]; then
        tmpfile=$(mktemp)
        echo "$header" > "$tmpfile"
        cat "$file" >> "$tmpfile"
        mv "$tmpfile" "$file"
        echo "Added $header to $file"
    fi
done

