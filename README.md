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

## Share

<a href="https://p32929.github.io/share/?repo=PaGeHe"><picture><source media="(prefers-color-scheme: dark)" srcset="https://p32929.github.io/readme/share-dark.svg"><img src="https://p32929.github.io/readme/share-light.svg" alt="Share this with your friends in just a click" width="420"></picture></a>

## Support

<a href="https://p32929.github.io/support/"><picture><source media="(prefers-color-scheme: dark)" srcset="https://p32929.github.io/readme/support-dark.svg"><img src="https://p32929.github.io/readme/support-light.svg" alt="If you like my works and want to support me, feel free to support" width="420"></picture></a>
