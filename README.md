# Flag Reaction Test (FRT)

**Senior Capstone Project - Penn State Football**

## Project Overview

The Flag Reaction Test is an electromagnet-controlled reaction testing device designed for Penn State Football to measure athlete reaction times and agility. This system replicates the NFL's Flag Reaction Test with custom features tailored to Penn State's training goals.

### Key Features
- **10-channel electromagnet control** via custom PCB design
- **Raspberry Pi 5** microcontroller with GPIO interface
- **Touchscreen UI** with React.js frontend and Python Qt6 backend
- **SQLite database** for player performance tracking
- **Cloud storage integration** (OneDrive) for CSV data export/import
- **Real-time leaderboard** system with scoring algorithm
- **Customizable difficulty levels** with adjustable drop timing
- **Robust mechanical housing** with steel halo frame

## System Architecture

### Hardware
- **Raspberry Pi 5**: Main controller with GPIO control
- **Custom PCB**: 10-channel electromagnet driver circuit
  - MOSFET-based switching (3.3V GPIO compatible)
  - Schottky flyback diodes for protection
  - Stable 4.75V supply to each magnet (3.9A total draw)
- **5V Electromagnets**: Flag release mechanism
- **Mechanical Frame**: Steel halo structure with 3D-printed flag components

### Software
- **UI/UX**: React.js with CSS styling
- **Backend**: Python Qt6
- **Database**: SQLite for local storage
- **Cloud Sync**: OneDrive integration
- **Data Analysis**: External Streamlit app with matplotlib

### Circuit Design
- NMOS transistors for electromagnet switching
- Pull-down resistors for stable GPIO control
- Flyback diodes for inductive load protection
- Decoupling capacitors for noise reduction

## My Contributions

As part of the **Mechanical Team**, I contributed to:
- Flag design and 3D printing iterations
- CAD modeling in Fusion 360
- Material selection and user testing
- Cross-subsystem integration with electrical and software teams
- Assembly and testing of the complete system

## Technical Skills Demonstrated
- **Circuit Design**: PCB layout, electromagnet control circuits
- **Embedded Systems**: Raspberry Pi GPIO programming
- **Mechanical Design**: 3D printing, CAD modeling (Fusion 360)
- **Cross-functional Collaboration**: Mechanical, Electrical, and Software integration
- **Testing & Debugging**: System validation and user testing

## Project Status

Completed: December 2025

**Outcomes:**
- Fully functional reaction testing device
- Portable and maintainable design
- User-friendly interface with cloud connectivity
- Ready for deployment with Penn State Football

## Team

**Mechanical**: Jared Karabinos, Isaac J Carson, Colleen Adams, Tyler Khee-Yee Ng, Riya Rawal  
**Electrical**: Ian Richardson, Brian Landes, Daniel Beaton, Vraj Patel, Kuria Mbatia  
**Software**: Sami Ozdogan, Ryan Carnaxide, Dipal Patel, Nayl Mohd Faiz, Alexander Hoare

**Sponsor**: Penn State Football  
**Contact**: Andrew Nelson  
**Instructor**: Jared Butler

## Documentation

Project presentations and detailed documentation available in the repository.

---

*Developed as part of Penn State's Senior Capstone program in partnership with Penn State Football.*
