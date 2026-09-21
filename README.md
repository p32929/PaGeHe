# PaGeHe

The C++ sibling of [PaGeHa](https://github.com/p32929/PaGeHa) — password **wordlist** generators. Old university-era code; the name is short for **Pa**ssword **Ge**nerator.

The interesting one is `Min2Max(Fayaz).cpp`: you give it a minimum and maximum length, and it recursively prints every string of every length in that range over the character set. The others each target a fixed character set:

| File | Character set |
|---|---|
| `Min2Max(Fayaz).cpp` | Upper + lower + digits, for every length from min to max you enter |
| `0-9(Fayaz).cpp` | Digits only |
| `A-Z (Shoyeb bhai).cpp` | Uppercase letters only |
| `0-9,A-Z,a-z(Fayaz).cpp` | Digits, upper and lower |

## Prerequisites

A C++ compiler (`g++`, `clang++`, MinGW — anything).

## Build and run

```bash
g++ "Min2Max(Fayaz).cpp" -o pagehe
./pagehe
```

`Min2Max` asks for a minimum and maximum length, then prints every combination. The fixed-set files just run.

> Heads up: the combinations grow exponentially — even length 5 over 62 characters is ~900 million strings. Start with a small max length.

> These are combinatorial wordlist generators for learning and for your own testing. Only ever use a generated list against systems and accounts you own or are explicitly authorised to test.

## Credits

`A-Z (Shoyeb bhai).cpp` was contributed by Shoyeb bhai; the rest are mine.

## Contributing

Contributions are warmly welcomed and greatly appreciated! Whether it's a bug fix, new feature, or improvement, your input helps make this project better for everyone.

Before submitting a pull request, please:

1. Create an issue describing the feature or bug fix you'd like to work on
2. Wait for discussion and approval to ensure alignment with project goals
3. Fork the repository and create your feature branch
4. Submit your pull request with a clear description of changes

This approach helps avoid duplicate efforts and ensures smooth collaboration. Thank you for considering contributing!

## Share

Sharing this repository with your friends is just one click away from here

[![facebook](https://user-images.githubusercontent.com/6418354/179013321-ac1d1452-0689-493f-9066-940cf2302b6e.png)](https://www.facebook.com/sharer/sharer.php?u=https://github.com/p32929/PaGeHe/)
[![twitter](https://user-images.githubusercontent.com/6418354/179013351-7d8d6d1c-4ce2-46ab-bef8-4c4765a1b888.png)](https://twitter.com/intent/tweet?url=https://github.com/p32929/PaGeHe/)
[![tumblr](https://user-images.githubusercontent.com/6418354/179013343-3111f55a-3b90-40c7-8487-9777348672b0.png)](https://www.tumblr.com/share?v=3&u=https://github.com/p32929/PaGeHe/)
[![pocket](https://user-images.githubusercontent.com/6418354/179013334-b095c45f-becf-49f4-9ee1-5a731a9b1f85.png)](https://getpocket.com/save?url=https://github.com/p32929/PaGeHe/)
[![pinterest](https://user-images.githubusercontent.com/6418354/179013331-44cd9206-11b1-4b65-becb-5863b61c828f.png)](https://pinterest.com/pin/create/button/?url=https://github.com/p32929/PaGeHe/)
[![reddit](https://user-images.githubusercontent.com/6418354/179013338-7416ae3f-73ba-4522-86e1-1374d7082d22.png)](https://www.reddit.com/submit?url=https://github.com/p32929/PaGeHe/)
[![linkedin](https://user-images.githubusercontent.com/6418354/179013327-ca7b7102-1da8-4b1c-858f-1a6e5f21bd70.png)](https://www.linkedin.com/shareArticle?mini=true&url=https://github.com/p32929/PaGeHe/)
[![whatsapp](https://user-images.githubusercontent.com/6418354/179013353-f477fa0b-3e6f-4138-a357-c9991b23ff88.png)](https://api.whatsapp.com/send?text=https://github.com/p32929/PaGeHe/)
