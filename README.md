# demo

On Linux:
Open Terminal: You can use any terminal emulator.

Generate the SSH Key:

ssh-keygen -t rsa -b 4096 -C "your_email@example.com"
This command generates a new SSH key using the RSA algorithm with 4096-bit encryption.
When prompted, you can press Enter to accept the default file location (/home/your_username/.ssh/id_rsa).
You can also set a passphrase for added security.
Add the SSH Key to the SSH Agent:

eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_rsa
Copy the Public Key:

cat ~/.ssh/id_rsa.pub
Copy the output and add it to your GitHub/GitLab/Bitbucket account under SSH keys.

-------------------------------------------------------------------------------------------------------------------
On Windows:
Open Git Bash: This comes with Git for Windows.

Generate the SSH Key:

ssh-keygen -t rsa -b 4096 -C "your_email@example.com"
Similar to Linux, this command generates a new SSH key.
Accept the default file location (/c/Users/your_username/.ssh/id_rsa) by pressing Enter.
Optionally, set a passphrase.
Add the SSH Key to the SSH Agent:

eval "$(ssh-agent -s)"
ssh-add /c/Users/your_username/.ssh/id_rsa
Copy the Public Key:

cat /c/Users/your_username/.ssh/id_rsa.pub
Copy the output and add it to your GitHub/GitLab/Bitbucket account under SSH keys.
For more detailed instructions, you can refer to the https://git-scm.com/book/en/v2/Git-on-the-Server-Generating-Your-SSH-Public-Key
