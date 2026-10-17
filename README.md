# COMMAND_LIST

A collection of Linux command reference tools written in C. Each command displays useful Linux commands grouped by category, making it easier to learn, explore, and remember common terminal operations.

## Features

- `fileops` - File and directory operations
- `netops` - Networking commands
- `processops` - Process management commands
- `storageops` - Disk and storage commands
- `sysinfo` - System information commands
- `textops` - Text processing commands

The project uses C to read command reference information from text files and display it directly in the terminal.

Project Structure:
    COMMANDS/
    ├── main.c
    ├── Makefile
    ├── .gitignore
    ├── README.md
    ├── LICENSE
    └── data/
        ├── fileops.txt
        ├── netops.txt
        ├── processops.txt
        ├── storageops.txt
        ├── sysinfo.txt
        └── textops.txt

Requirements

    - Linux operating system
    - GCC compiler
    - GNU Make
    - Git (optional, for cloning the repository)

Build

    Clone the repository:

        git clone https://github.com/Shu123ty/COMMAND_LIST.git
        cd COMMAND_LIST

    Compile all commands:

        make

Run

    Run a command from the project directory:

        ./fileops
        ./netops
        ./processops
        ./storageops
        ./sysinfo
        ./textops

    Each command displays the reference information for its respective category.

Install

    Install the commands for your user:

        make install

    If `~/.local/bin` is not already in your PATH, add it to your Bash configuration:

        echo 'export PATH="$HOME/.local/bin:$PATH"' >> ~/.bashrc
        source ~/.bashrc

    After installation, run the commands from any directory:

        fileops
        netops
        processops
        storageops
        sysinfo
        textops

Uninstall

    From the project directory, run:

        make uninstall

Contributing

    Contributions and suggestions are welcome. You can improve existing command references, add useful Linux commands, fix errors, or propose new categories.

    1. Fork the repository.
    2. Create a branch for your changes.
    3. Make and test your changes.
    4. Submit a pull request.

License

    This project is licensed under the MIT License. See the LICENSE file for details.

    Made for learning, exploring, and working with Linux command-line tools.