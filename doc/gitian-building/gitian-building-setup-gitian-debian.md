Table of Contents
------------------

- [Setting up Ubuntu for Gitian building](#setting-up-debian-for-gitian-building)
- [Installing Gitian](#installing-gitian)


Setting up Ubuntu for Gitian building
--------------------------------------

Install [Docker CE](https://docs.docker.com/engine/install/ubuntu/)

Installing Gitian
------------------

Re-login as the user `gitianuser` that was created during installation.
The rest of the steps in this guide will be performed as that user.

**Note**: When sudo asks for a password, enter the password for the user `gitianuser` not for `root`.

Clone the git repositories for fujicoin and Gitian.

```bash
git clone https://github.com/devrandom/gitian-builder.git
git clone https://github.com/fujicoin/fujicoin
git clone https://github.com/bitcoin-core/gitian.sigs.git
git clone https://github.com/bitcoin-core/bitcoin-detached-sigs.git
```

