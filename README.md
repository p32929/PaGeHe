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

Contributions are very welcome, thank you! Before you start on a pull request, please open an issue and tell me what you would like to add or change. That way we can agree on it first, and your time is not wasted on something that might not fit. Thanks for helping make PaGeHe better.

## You might also like

<p><a href="https://openstore.pfay.workers.dev/more/p32929/_/0"><picture><source media="(prefers-color-scheme: dark)" srcset="https://openstore.pfay.workers.dev/more/p32929/_/0-dark.svg"><img src="https://openstore.pfay.workers.dev/more/p32929/_/0-light.svg" width="50%" align="top" alt="More apps by p32929 on OpenStore (1)"></picture></a><a href="https://openstore.pfay.workers.dev/more/p32929/_/1"><picture><source media="(prefers-color-scheme: dark)" srcset="https://openstore.pfay.workers.dev/more/p32929/_/1-dark.svg"><img src="https://openstore.pfay.workers.dev/more/p32929/_/1-light.svg" width="50%" align="top" alt="More apps by p32929 on OpenStore (2)"></picture></a><br><a href="https://openstore.pfay.workers.dev/more/p32929/_/2"><picture><source media="(prefers-color-scheme: dark)" srcset="https://openstore.pfay.workers.dev/more/p32929/_/2-dark.svg"><img src="https://openstore.pfay.workers.dev/more/p32929/_/2-light.svg" width="50%" align="top" alt="More apps by p32929 on OpenStore (3)"></picture></a><a href="https://openstore.pfay.workers.dev/more/p32929/_/3"><picture><source media="(prefers-color-scheme: dark)" srcset="https://openstore.pfay.workers.dev/more/p32929/_/3-dark.svg"><img src="https://openstore.pfay.workers.dev/more/p32929/_/3-light.svg" width="50%" align="top" alt="More apps by p32929 on OpenStore (4)"></picture></a></p>

<p><a href="https://p32929.github.io/share/?repo=PaGeHe"><picture><source media="(prefers-color-scheme: dark)" srcset="https://p32929.github.io/readme/footer-share-dark.svg"><img src="https://p32929.github.io/readme/footer-share-light.svg" width="50%" align="top" alt="Share this project with your friends in one click"></picture></a><a href="https://p32929.github.io/support/"><picture><source media="(prefers-color-scheme: dark)" srcset="https://p32929.github.io/readme/footer-support-dark.svg"><img src="https://p32929.github.io/readme/footer-support-light.svg" width="50%" align="top" alt="If you like my work and want to support me, feel free to support"></picture></a><br><a href="https://openstore.pfay.workers.dev/add"><picture><source media="(prefers-color-scheme: dark)" srcset="https://p32929.github.io/readme/footer-join-dark.svg"><img src="https://p32929.github.io/readme/footer-join-light.svg" width="100%" align="top" alt="Put your own apps on OpenStore: free, your listing lives in your own repo"></picture></a></p>
