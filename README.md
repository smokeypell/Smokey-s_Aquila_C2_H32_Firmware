# Smokey-s_Aquila_C2_H32_Firmware
## H32 Firmware for the Aquila C2.


**Firmware was compiled with Keil MDK using the source code provided by Voxelab.
[Voxelab C2 GitHub](https://github.com/Voxelab-64/HD32_C2)**

# Features 
## Acceleration and Jerk settings 
  Adjusted to help with skipped steps using default settings. Settings were too high in Voxelab firmware.

## S-Curve Acceleration enabled
  This option eliminates vibration during printing by fitting a Bezier
  curve to move acceleration, producing much smoother direction changes.

  See https://github.com/synthetos/TinyG/wiki/Jerk-Controlled-Motion-Explained

## Manual Probing, Mesh Bed Leveling, and LCD Bed Leveling enabled
  
  The "Manual Probe" provides a means to do "Auto" Bed Leveling without a probe.
  Use G29 repeatedly, adjusting the Z height at each point with movement commands
  or the LCD controller.

  Mesh Bed Leveling provides a method to perform
  leveling in steps so you can manually adjust the Z height at each grid-point.
  With an LCD controller the process is guided step-by-step.

## Additional Preheat Profiles added
  
  1. Leveling
  2. PLA
  3. PLA+
  4. PETG
  5. ABS

## Scroll Long Filenames in SD card menu

## SD Card Alphabetical Sorting and Long Filename scrolling in SD card menu
