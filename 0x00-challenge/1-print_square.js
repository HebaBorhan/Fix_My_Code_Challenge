#!/usr/bin/node

if (process.argv.length <= 2) {
    process.stderr.write("Missing argument\n");
    process.stderr.write("Usage: ./1-print_square.js <size>\n");
    process.stderr.write("Example: ./1-print_square.js 8\n");
    process.exit(1)
}

size = parseInt(process.argv[2])

if (isNaN(size) || size <= 0) {
    // Print error message to stderr
    process.stderr.write("Invalid size argument: Size must be a positive integer.\n");
    // Exit with non-zero exit code
    process.exit(1);
}

for (let i = 0 ; i < size ; i ++) {
    for (let j = 0 ; j < size ; j ++) {
        process.stdout.write("#");
    }
    process.stdout.write("\n");
}
