# Student Portal

A command-line student portal system implementing core modules: authentication,
profile management, dashboard summary, and settings — built as a Git version
control exercise on a legacy C++ codebase.

## Project Description
 
This project simulates a lightweight student portal backend. Each module is
implemented as a standalone C++ program demonstrating a specific feature:
 
- **Login/Authentication** — validates a username and password against a small
  in-memory user store, with attempt limiting.
- **Profile** — view and update a student's profile details.
- **Dashboard** — displays a summary view (attendance, GPA, enrolled courses).
- **Settings** — toggle user preferences (notifications, theme, language).

## Prerequisites
 
- A C++ compiler supporting C++11 or later (e.g. `g++`, `clang++`)
- Git installed and configured
- A terminal / shell (bash, zsh, or Git Bash on Windows)