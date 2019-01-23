# C++ Poker Game Server

In this project you'll build an autonomous, multi-processor, multi-threaded game server! Start by forking this repository and following the instructions below.

## Step 1: Run bash scripts 
At the terminal, type the following commands to create your project:

```sh
cd CppND-Game-Server
bash bash/make_cmake.sh game_project
```
Next, run the following command to generate placeholder classes for the simulated physical objects (only doing Hand, Deck and Player here. Later you will create more).

```sh
bash bash/make_class.sh Card Hand Deck Player Dealer Table Chip Seat Bank Pot
```

Finally, you'll create your `main()` using the following command:

```sh
bash bash/make_main.sh game_server
```

## Step 3: Investigate the output

Follow along with Robin as we investigate the output of these bash scripts!

## Step 4: Build and test your project
Run the following commands to build and test your project:

```
mkdir build
cd build
cmake
make
ctest
```

## Step 5: Investigate the output

Follow along with Robin as we investigate the output of these commands!
