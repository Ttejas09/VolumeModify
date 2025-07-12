# 🎧 VolumeModify (C Language)

NOTE: The wav file should be 44bytes and download it from good sources, not some shady websites.

A simple C program that modifies the volume of an uncompressed `.wav` audio file by a scaling factor. Built as a first hands-on project to learn file I/O, binary data manipulation, and audio processing.

## How It Works :-

- Reads the first 44 bytes (WAV header) and copies it to a new file.
- Reads each 16-bit (2 bytes) audio sample, multiplies it by a volume factor, and writes the modified sample to the output file.

## Usage :-

If you are modifying the code first compile it( considering that, you know this)

1.To run, write '.\a.exe Input.wav Output.wav Factor' in terminal.[Make sure the Input.wav is in the same folder as the code]
 //END//

## Important Instructions

✅ Do’s
Use uncompressed 16-bit PCM WAV files only.

Make sure the input file exists in the same folder where you run the program.

Open files in binary mode (rb, wb), well it is already handled in the code.

Use a scaling factor like 0.5, 1.5, 2.0, etc. to reduce or increase volume.

❌ Don’ts
Don’t use .mp3, .flac, or compressed audio it will likey break.

Avoid using extremely large volume factors like 100 or 100000 etc — it may cause distortion.


## Test File :- 
[Download test file](https://github.com/Ttejas09/VolumeModify/raw/refs/heads/main/raw.wav)

