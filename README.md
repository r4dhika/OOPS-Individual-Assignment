# Home Theater System with Facade Pattern

## Overview

This project implements a home theater system, showcasing the application of the Facade Design Pattern. The home theater system comprises several components, including a DVD player, projector, screen, amplifier, and speakers. The Facade pattern simplifies user interaction by providing a unified interface to control the entire home theater system, abstracting away the complexities of individual components.

## Components

### DVD Player
- Responsible for playing DVDs.

### Projector
- Projects video onto a screen.

### Screen
- Displays the video content.

### Amplifier
- Amplifies audio signals.

### Speakers
- Output audio.

## Usage

### Without Facade
Controlling each component individually can be complex. Users would need to understand the details of turning on/off, setting up input sources, adjusting volume, etc., for each component.

### With Facade (HomeTheaterFacade)
- Acts as a unified interface.
- Users interact with the home theater system through the facade.
- Facade internally coordinates actions with individual components.

## Benefits

- **Simplicity:** Users don't need to worry about intricate details of each component.
- **Abstraction:** The facade provides a clear abstraction layer, simplifying user interactions and managing the complexities of the underlying subsystem.
