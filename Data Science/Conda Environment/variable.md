# Adding conda to Environment Variables
When you install Anaconda or Miniconda, the conda command-line tool is available in the terminal or shell where you ran the installation script. However, it may not work in other terminals or shells unless you add it to your environment variables. To add conda to your environment (so it works in any terminal or shell), follow these steps based on your operating system:

You can run this command in Anaconda Prompt to initialize conda for Command Prompt (cmd) or PowerShell:

conda init

This modifies your shell’s configuration to recognize conda.
Restart your terminal after running the command.
The process is automatic and you should be able to use conda from any directory in the terminal.
Manually (If Needed): Add these paths to the System Environment Variables:

Open:

Win + R → Type sysdm.cpl to open system properties → Click Environment Variables.
Find and edit the Path variable in System Variables.

Add these entries:

C:\Users\<YourUsername>\Anaconda3\Scripts
C:\Users\<YourUsername>\Anaconda3\bin
Dont forget to replace "<YourUsername>" with your actual username

To verify:


```bash
conda --version
```

