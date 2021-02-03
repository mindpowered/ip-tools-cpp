
iptools
=======
Tools for working with IP4/IP6 IP Addresses including IPv4, IPv6, CIDR, and Subnet Masks

![Build Status](https://mindpowered.dev/assets/images/github-badges/build-passing.svg)

Contents
========

* [Source Code and Documentation](#source-code-and-documentation)
* [About](#about)
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)
* [Support](#support)
* [Licensing](#licensing)

# Source Code and Documentation
- Source Code: [https://github.com/mindpowered/ip-tools-cpp](https://github.com/mindpowered/ip-tools-cpp)
- Documentation: [https://mindpowered.github.io/ip-tools-cpp](https://mindpowered.github.io/ip-tools-cpp)

# About
IPv4 uses a 32-bit address for its Internet addresses. All IPv4 addresses are now assigned. IPv6 utilizes 128-bit Internet addresses so there are 1028 times more addresses. Mappings exist for converting from an IPv4 address to an IPv6 addresses. This allows interoperability.

An IP address consists of octets delimited by dots (".") for IPv4 or colons (":") for IPv6. We can compress IPv6 addresses by removing extra zeros to make the address shorter. Computers store IP addresses as their corresponding integer values. The number represented by this integer is its decimal representation.

Subnetting is the process of dividing a network into smaller network sections. A part of the IP address is *masked* off to define a network. The remaining part of the address identifies a device on the network. CIDR is an alternative way of representing a subnet mask and IP address range.

# Requirements
- Bazel - https://www.bazel.build/
- Haxe 4.1.1
- Neko
- hxcpp - https://lib.haxe.org/p/hxcpp/
- g++


Third-party dependencies may have additional requirements.

# Installation
Add rules to WORKSPACE file ...

```
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
  name = 'maglev',
  remote = 'https://github.com/mindpowered/maglev-cpp.git',
  branch = 'master',
)
git_repository(
  name = 'haxecpp',
  remote = 'https://github.com/mindpowered/haxecpp-cpp.git',
  branch = 'master',
)
git_repository(
  name = 'iptools',
  remote = 'https://github.com/mindpowered/ip-tools-cpp.git',
  branch = 'master',
)
```

Reference dependency in BUILD file ...

```
    deps = [
        ...
        "@iptools//:iptools"
        ...
    ],
```


# Usage
```cpp
#include <mindpowered/iptools/IPTools.h>

{
    auto ipt = new IPTools();
    auto decimal = ipt->IPToDecimal("192.168.1.1");
    delete ipt;
}

```


# Support
We are here to support using this package. If it doesn't do what you're looking for, isn't working, or you just need help, please [Contact us][contact].

There is also a public [Issue Tracker][bugs] available for this package.

# Licensing
This package is released under the MIT License.



[bugs]: https://github.com/mindpowered/ip-tools-cpp/issues
[contact]: https://mindpowered.dev/support/?ref=ip-tools-cpp/
[docs]: https://mindpowered.github.io/ip-tools-cpp/
[licensing]: https://mindpowered.dev/?ref=ip-tools-cpp
[purchase]: https://mindpowered.dev/purchase/
