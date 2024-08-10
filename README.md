# Solution

The solution will be docuemented in this readme file

### 1. `ls` - List Directory Contents
- **Command:** `ls`
- **Description:** This command lists all files and directories in the current directory.
- **Example:**
  ```bash
  $ ls
  Documents  Downloads  Music  Pictures  Videos
  ```

### 2. `cd` - Change Directory
- **Command:** `cd`
- **Description:** This command changes the current directory to the specified directory.
- **Example:**
  ```bash
  $ cd Documents
  $ pwd
  /home/user/Documents
  ```

### 3. `pwd` - Print Working Directory
- **Command:** `pwd`
- **Description:** This command prints the full path of the current directory.
- **Example:**
  ```bash
  $ pwd
  /home/user/Documents
  ```

### 4. `mkdir` - Make Directory
- **Command:** `mkdir`
- **Description:** This command creates a new directory.
- **Example:**
  ```bash
  $ mkdir new_folder
  $ ls
  Documents  Downloads  Music  new_folder  Pictures  Videos
  ```

### 5. `rm` - Remove Files or Directories
- **Command:** `rm`
- **Description:** This command removes files or directories.
- **Example:**
  ```bash
  $ rm -r new_folder
  $ ls
  Documents  Downloads  Music  Pictures  Videos
  ```

### 6. `cp` - Copy Files or Directories
- **Command:** `cp`
- **Description:** This command copies files or directories from one location to another.
- **Example:**
  ```bash
  $ cp file.txt /home/user/Documents
  ```

### 7. `mv` - Move or Rename Files or Directories
- **Command:** `mv`
- **Description:** This command moves or renames files or directories.
- **Example:**
  ```bash
  $ mv file.txt newfile.txt
  ```

### 8. `cat` - Concatenate and Display Files
- **Command:** `cat`
- **Description:** This command displays the contents of a file.
- **Example:**
  ```bash
  $ cat file.txt
  This is the content of the file.
  ```

### 9. `nano` - Text Editor
- **Command:** `nano`
- **Description:** This command opens the Nano text editor.
- **Example:**
  ```bash
  $ nano file.txt
  ```
  *(After editing, press `CTRL+O` to save and `CTRL+X` to exit.)*


### 10. `timeshift` - System Backup and Restore
- **Command:** `sudo timeshift --create --comments "Backup before update" --tags D`
- **Description:** Timeshift is used for creating and restoring system snapshots. The command above creates a new snapshot tagged as a daily backup with a comment.
- **Example:**
  ```bash
  $ sudo timeshift --create --comments "Backup before update" --tags D
  [Snapshot created successfully]
  ```

- **Configuration File:** You can configure Timeshift by editing the configuration file located at `/etc/timeshift.json`. Here's an example of what this file might look like:

  ```json
  {
      "backup_device_uuid": "abcd-1234-efgh-5678",
      "parent_device_uuid": "",
      "do_first_run": "false",
      "btrfs_mode": "false",
      "schedule_monthly": "false",
      "schedule_weekly": "false",
      "schedule_daily": "true",
      "schedule_hourly": "false",
      "schedule_boot": "false",
      "count_monthly": "2",
      "count_weekly": "3",
      "count_daily": "5",
      "count_hourly": "6",
      "count_boot": "5",
      "snapshot_size": 0,
      "exclude": [],
      "exclude-applications": []
  }
  ```

### 11. `man` - Manual Page Viewer
- **Command:** `man ls`
- **Description:** The `man` command displays the manual page for a specific command. The example shows the manual for the `ls` command.
- **Example:**
  ```bash
  $ man ls
  (Displays the manual for the ls command)
  ```

### 12. `apt update` - Update Package Lists
- **Command:** `sudo apt update`
- **Description:** The `apt update` command updates the package lists for upgrades and new package installations.
- **Example:**
  ```bash
  $ sudo apt update
  Get:1 http://archive.ubuntu.com/ubuntu focal InRelease [265 kB]
  Get:2 http://archive.ubuntu.com/ubuntu focal-updates InRelease [265 kB]
  ...
  Reading package lists... Done
  ```

### 13. `apt upgrade` - Upgrade Installed Packages
- **Command:** `sudo apt upgrade`
- **Description:** The `apt upgrade` command installs the newest versions of all installed packages.
- **Example:**
  ```bash
  $ sudo apt upgrade
  Reading package lists... Done
  Building dependency tree       
  Reading state information... Done
  Calculating upgrade... Done
  The following packages will be upgraded:
    bash libc-bin libc6 libpam-modules
  Do you want to continue? [Y/n] y
  ...
  ```

### 14. `apt install` - Install New Packages
- **Command:** `sudo apt install btop`
- **Description:** The `apt install` command installs a new package, in this case, `btop`.
- **Example:**
  ```bash
  $ sudo apt install btop
  Reading package lists... Done
  Building dependency tree       
  Reading state information... Done
  The following NEW packages will be installed:
    btop
  0 upgraded, 1 newly installed, 0 to remove and 3 not upgraded.
  Need to get 80.0 kB of archives.
  After this operation, 220 kB of additional disk space will be used.
  Do you want to continue? [Y/n] y
  ...
  ```

### 15. `redshift` - Adjust Screen Color Temperature
- **Command:** `redshift -O 4000`
- **Description:** The `redshift` command adjusts the color temperature of your screen. The example sets the temperature to 4000K, which is a warmer color suitable for night time use.
- **Example:**
  ```bash
  $ redshift -O 4000
  Screen color temperature set to 4000K
  ```

- **Configuration File:** You can configure `redshift` using a configuration file typically located at `~/.config/redshift/redshift.conf`. Below is an example configuration file:

  ```ini
  ; Global settings for redshift
  [redshift]
  temp-day=6500
  temp-night=3500
  gamma=0.8:0.7:0.8
  adjustment-method=randr

  ; Configuration for RandR
  [randr]
  screen=0
  ```

  - **temp-day:** Sets the color temperature during the day (6500K in this case, which is a neutral white light).
  - **temp-night:** Sets the color temperature at night (3500K for a warmer, amber light).
  - **gamma:** Adjusts the gamma correction for red, green, and blue channels.
  - **adjustment-method:** Specifies the method used to adjust the screen color (e.g., `randr` or `vidmode`).
  - **screen:** Indicates which screen to apply the changes to, in a multi-monitor setup.

- **Running with Configuration:**
  ```bash
  $ redshift -c ~/.config/redshift/redshift.conf
  Using configuration file ~/.config/redshift/redshift.conf
  ```

### Uploading the Markdown File to a Git Branch

1. **Create a New Branch:**
   ```bash
   git checkout -b task_7
   ```

2. **Add the Markdown File:**
   ```bash
   git add readme.md
   ```

3. **Commit the Changes:**
   ```bash
   git commit -m "Document Linux commands practice"
   ```

4. **Push the Branch to the Repository:**
   ```bash
   git push origin task_7
   ```
