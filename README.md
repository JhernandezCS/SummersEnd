# Project Title: Summer's End

Welcome! This repository holds the source code and logic for an Indie 2D RPG currently under development in **Unreal Engine 5.4+**.

The project uses a hybrid architecture of **C++** and **Blueprints**. Feel free to explore the codebase, though please keep in mind that this is a work-in-progress.

## Tech Stack
* **Engine:** Unreal Engine 5
* **Logic:** C++ (Core Systems) & Blueprints (Gameplay & UI)
* **Perspective:** 2D / PaperZD

### Why PaperZD over Paper2D?
PaperZD offers animation callbacks and state machines that are significantly more robust than the engine's default Paper2D.

## Dependencies
To properly view and interact with the assets in the Unreal Editor, you will need the following plugins installed:
* **[PaperZD](https://www.criticalfailure-studio.com/paper-zd/)**: Required for animation state machines and event handling.

## Repository Structure
* **`/Source`**: Contains all C++ classes.
* **`/Content`**: Contains Blueprints, Widgets, and Animation Graphs.

## Important Note on Cloning
**This project will not run "out of the box."** To respect licensing and protect proprietary work, the Art Assets (Sprites, Tilesets, Audio) have been privatized and are excluded from this public repository.

* **For MSVC Users:** You can generate project files and compile the source normally, though you will encounter missing asset references.
* **For Non-MSVC Users:** Pre-compiled **DLLs** are provided in the Binaries folder to allow for exploration of the project structure without a full local build environment.

## Project Status
**Current State:** Early Development / Prototyping.  
The focus is currently on core combat mechanics and the dialogue system. You are welcome to browse the code for educational purposes or to see how a modern 2D pipeline is handled in UE5.
