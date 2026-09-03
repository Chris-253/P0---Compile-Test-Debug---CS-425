# P0 - Compile, Test, Debug

- Name: Chris Shoemaker
- Email: christophershoem@u.boisestate.edu
- Class: CS425

## Known Bugs or Issues

None. I took out the intentional crashes and memory leaks from Task 4 so the GitHub Action would pass.

## Experience

Just fought with environment setup and strict compiler warnings. Since I'm on Bazzite Linux, I had to manually install `gcovr` and `libasan` to get the coverage and debug tools working. It also took me a second to realize Unity tests don't run automatically and you have to manually register them in `main`. Figuring out how to bypass the unused variable warnings for the intentional leak was a bit annoying, but other than that it wasn't too bad.

