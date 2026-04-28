# GAD2006 - Avatar System

A third-person character system built with Unreal Engine 5 and C++, developed as part of the GAD2006 course.

## Features

- **Base Character (`ACOABaseCharacter`)** — Core character logic including health regeneration and stamina management.
- **Player Avatar (`ACOAAvatar`)** — Third-person camera setup, movement input, and sprint handling.
- **Stamina System** — Stamina drains while sprinting and regenerates while idle. Sprinting is disabled until stamina fully recovers.
- **HUD** — On-screen stamina and health progress bars built with Widget Blueprints.

## Project Structure

```
Source/
└── demoGame1/
    ├── Public/
    │   ├── COABaseCharacter.h   # Base character with health & stamina
    │   └── COAAvatar.h          # Player character with camera & input
    └── Private/
        ├── COABaseCharacter.cpp
        └── COAAvatar.cpp
Config/
└── DefaultInput.ini             # Input mappings (WASD, Mouse, Shift to sprint)
Content/
└── ...                          # Blueprints, Widgets, Maps
```

## Gameplay Controls

| Key | Action |
|-----|--------|
| W / A / S / D | Move |
| Mouse | Look Around |
| Left Shift | Sprint (drains stamina) |
| Space | Jump |

## Stamina Mechanics

- Stamina starts at **100** and drains at **20/sec** while sprinting.
- Stamina regenerates at **10/sec** when not sprinting.
- Once stamina reaches **0**, the player cannot sprint again until it fully recovers to **100**.

## How to Run

1. Open `demoGame1.uproject` with **Unreal Engine 5**.
2. Click **Compile** (Live Coding) in the editor.
3. Create a Blueprint inheriting from `COAAvatar` (or reparent `BP_ThirdPersonCharacter`).
4. Set the Blueprint as the **Default Pawn Class** in your GameMode.
5. Press **Play**.

## Requirements

- Unreal Engine 5.x
- Visual Studio 2022 with C++ Game Development workload

## Course

**GAD2006** — Game Development  
Assignment: Simple Avatar & Stamina System
