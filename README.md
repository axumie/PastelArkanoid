# Pastel Arkanoid 🎀

A work-in-progress Arkanoid-inspired game built with C++ and the Chili Framework.

The project combines classic brick-breaker gameplay with a soft pastel aesthetic, custom pixel-art sprites, and a development setup adapted for Visual Studio Code and CMake.

> 🚧 **Work in Progress** — currently focused on core game objects, movement, collision handling, and visual design.

## 🎮 Gameplay

<img width="977" height="741" alt="image" src="https://github.com/user-attachments/assets/c314d79e-64ef-4e8a-a4ce-c34f18d1b404" />

*Custom pastel sprites, designed and implemented in code.*

## ✨ Visual Design

The goal is to give a classic arcade game a softer, more playful visual identity without losing its recognizable gameplay.

- 🎨 **Pastel color palette** — soft pink, purple, and blue tones throughout the game.
- 🧱 **Custom brick sprite** — pixel-art detailing with pastel color variations.
- 🩷 **Ball sprite** — a pink design with highlights and a dark outline.
- 🪽 **Winged paddle** — a custom arcade-inspired paddle with layered colors and a distinctive silhouette.
- 🖌️ **Code-drawn graphics** — sprites are rendered pixel by pixel rather than loaded as external image assets.

## 🛠️ Tech Stack

- **Language:** C++
- **Graphics framework:** Chili Framework
- **Build system:** CMake
- **IDE:** Visual Studio Code
- **Platform:** Windows
- **Rendering:** DirectX-based graphics through the framework

## ⚙️ Development

This project started from a Chili Framework template and has been adapted to support a different development workflow.

- Manually migrated the project from Visual Studio to Visual Studio Code.
- Integrated CMake for project configuration and building.
- Adapted shader files for the migrated setup.
- Adjusted audio-related files to work with the new project configuration.
- Implemented custom sprite rendering for the brick, ball, and paddle.
- Developed rectangle-based game-object geometry and paddle movement with wall-boundary handling.

The project is also an opportunity to explore C++ game architecture, collision detection, graphics programming, and build-system configuration.

## 🚧 Current Status

The project is actively being developed.

**Implemented so far**
- Custom brick, ball, and paddle sprites.
- Pastel visual theme.
- Rectangle-based geometry for game objects.
- Paddle movement and screen-boundary handling.
- CMake-based project setup in Visual Studio Code.

**Planned**
- Continue developing the core Arkanoid gameplay loop.
- Implement and refine ball movement and collision response.
- Add brick destruction and game-state management.
- Polish the visual presentation and add gameplay feedback.

## 🚀 Building the Project

The project is configured to use CMake with Visual Studio Code on Windows.

1. Clone this repository.
2. Open the project folder in Visual Studio Code.
3. Install the required C++ compiler, CMake, and VS Code CMake Tools extension.
4. Configure the project using the available CMake configuration.
5. Build and run the game using the configured launch target.

Additional setup may be required for the DirectX environment and framework dependencies.

## 🙌 Credits

Built using the [Chili Framework](https://github.com/planetchili) and its associated learning resources.

The framework and original tutorial code provided the starting point; project migration, build configuration changes, and custom sprite development are part of this project's ongoing work.

---

*Made with C++, pixel art, and a little pastel energy.* 💗
