           ┌────────────────────────┐
           │        main.c          │
           │  Show menu, wait input │
           └───────────┬────────────┘
                       │
             ┌─────────▼─────────┐
             │  Option == 1 ?    │
             └───────┬───────────┘
                     │Yes
                     ▼
       ┌────────────────────────────┐
       │ cleanText(input, cleaned)  │
       │ → remove punct, lowercases │
       └───────────┬────────────────┘
                   ▼
       ┌────────────────────────────┐
       │ extractWords(cleaned, ...) │
       │   └─> findWord(word, dict) │
       │       └─ returns index/-1  │
       │   └─> addWord(dict, word)  │
       │       └─ updates counts[]  │
       └───────────┬────────────────┘
                   ▼
       ┌────────────────────────────┐
       │ dictionary[] + counts[]    │
       │ now filled & ready to use  │
       └───────────┬────────────────┘
                   │
     ┌─────────────▼─────────────┐
     │ Other menu options (2–4): │
     │ - showDictionary()        │
     │ - searchExact()           │
     │ - searchPartial()         │
     └───────────────────────────┘

