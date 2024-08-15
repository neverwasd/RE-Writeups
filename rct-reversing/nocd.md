### Goal
Perform binary analysis to reverse engineer rct.exe and remove the CD protection ("nocd-fix"). This is done for backup purposes of legally-owned media, and is not intended to enable piracy.

### Findings
During initialization, rct.exe reads two keys from registry: Path and SetupPath. The program looks in these paths for the game data. Even if you performed a "Full" install of RCT, some of the game files (e.g., Data/mp.dat) only exist on the CD. This appears to be the only "protection" present. I copied the contents of the CD to my hard drive, pointed the SetupPath key to this path, and started rct.exe. The game started up and I was no longer prompted to insert the CD - no patching required!

Testing revealed that there may be an issue causing a crash back to the main menu when loading games. Further reversing efforts required.

### Commentary
I did some research on the subject and found this forum post ([https://www.nedesigns.com/topic/5781/rct-ll-no-cd-crack-works-for-xp-and-vista/#entry106504](https://www.nedesigns.com/topic/5781/rct-ll-no-cd-crack-works-for-xp-and-vista/#entry106504)) from 2003(!) where someone made this same discovery. It's a weird feeling to know someone traced these exact steps over two decades ago... Crazy.