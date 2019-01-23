# C++ Poker Game Server

In this project you'll build an autonomous, multi-processor, multi-threaded poker game server! Start by cloning or downloading this repository and following the instructions below.

## Step 1: Investigate bash scripts
In the bash folder you'll find some bash scripts (those ending with a `.sh` suffix). Running these scripts will generate the framework you need to build your game server. Have a look at each of them to see what they are doing.

## Step 2: Run bash scripts 
At the terminal, type the following command to set up your project environment:

```sh
bash make_cmake.sh poker_project
```
Next, run the following command to generate placeholder classes for the simulated physical objects (only doing Hand, Deck and Player here. Later you will create more).

```sh
bash make_class.sh Hand Deck Player
```

Finally, you'll create your `main()` using the following command:

```sh
bash make_main.sh poker_server
```

## Step 3: Investigate the output

Follow along with Robin as we investigate the output of these bash scripts!