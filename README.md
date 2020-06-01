# M1522.002400 Principles and Practices of Software Development

- Instructor: Prof. [Chung-Kil Hur](http://sf.snu.ac.kr/gil.hur)
- TA: [Juneyoung Lee](http://sf.snu.ac.kr/juneyoung.lee/)(@aqjune), [Sung-Hwan Lee](http://sf.snu.ac.kr/sunghwan.lee/)(@Sung-HwanLee)
    + Email address: swpp@sf.snu.ac.kr. 
        * In the case of sending TA an email, specify sender's name and student ID.  
    + Place: Bldg 302 Rm 312-2 

## Announcements 

- Mar. 17: To build LLVM, please follow [BuildLLVM.md](BuildLLVM.md). If it doesn't work due to insufficient memory / free space, please contact TA to request a laptop for a class. EDIT: please use this form to request a laptop: https://forms.gle/jDV6K4sD61WEZKh99 *until: Mar. 25 Wed*

- May. 26: Creational patterns in LLVM is described at [pattern-creational.pdf](pattern-creational.pdf)

## Projects

- Apr. 13: Check the [issue](https://github.com/snu-sf-class/swpp202001/issues/3) for making up project teams.

- Apr. 19: On Apr. 28, you're going to have an idea presentation session.
Each team should come up with an optimization that will be helpful for the project.
Each team will have a presentation for 3 minutes and get feedback for 2 minutes.
For the specification of backend assembly as well as the restrictions on the
input programs, see [project/spec.pdf](project/spec.pdf).

- Apr. 20: To ask questions about the assembly & source programs, please use [issue #6](https://github.com/snu-sf-class/swpp202001/issues/6) and [#7](https://github.com/snu-sf-class/swpp202001/issues/7).

- Apr. 23: The way how a program inputs/outputs is updated. See [project/spec.pdf](project/spec.pdf).

- Apr. 28: On Thursday, we'll upload a video+document about optimizations. This video+document will contain:

    - More optimizations that might be helpful

    - LLVM libraries that can be helpful for implementing the existing optimizations

    You can implement optimizations that already exist in LLVM, but it should not be just blind copy-and-paste; On Thursday, we'll give you a guideline on how to use existing LLVM libraries to implement them. For each sprint, one person (who is different from the previous sprint) in a team can be dedicated to implementing the existing optimizations.

- Apr. 28: Assembly syntax (correct function/block name, comment, assert\_eq) and semantics (memory initialization) is updated.
See [project/spec.pdf](project/spec.pdf).

- Apr. 28: Please read [project/document.pdf](project/document.pdf) to see the
documents that you need to submit before/during the team project.

- Apr. 30: Binary operators / Integer comparisons now take the size of bitwidth of inputs (needed for correct evaluation of signed operations).
The result is zero-extended. See [project/spec.pdf](project/spec.pdf).

- Apr. 30: The skeleton for team project is announced: https://github.com/snu-sf-class/swpp202001-compiler.git .

- Apr. 30: Add some guidline for documentation. See update in [project/document.pdf](project/document.pdf).

- Apr. 30: Please make a team repository and add TAs as collaborators. see [issue 11](https://github.com/snu-sf-class/swpp202001/issues/11).

- Apr. 30: [project/optList.md](project/optList.md) contains the list of optimizations discussed so far & LLVM passes that will be helpful for their implementation.

- May. 1: We made a FAQ list for the team project document here: [issue 12](https://github.com/snu-sf-class/swpp202001/issues/12)

- May. 4: We announce the assembly interpreter, tests, and bug fixes in compiler: [issue 13](https://github.com/snu-sf-class/swpp202001/issues/13)

- May. 11: We announce a policy for asking questions via e-mail to TAs: [issue 15](https://github.com/snu-sf-class/swpp202001/issues/15)

- May. 11: We share a few (anonymized) reviews from assignment 5 submissions. It is at practice/5.reviews.zip .

- May. 12: The total cost is updated to include the maximum heap usage. See [issue 17](https://github.com/snu-sf-class/swpp202001/issues/17).
Also, [project/spec.pdf](project/spec.pdf) is updated so it contains answers to the questions from issue 6 and 7.

- May. 14: We'll not count pull requests satisfying specific criteria: see [issue 12](https://github.com/snu-sf-class/swpp202001/issues/12#issuecomment-628568099)

- May. 18: Our interpreter now logs the cost for each function call - see [issue 13](https://github.com/snu-sf-class/swpp202001/issues/13#issuecomment-630203491)

- May. 26: To set continuous integration for your project (which is optional), see [ci.pdf](practice/ci.pdf) as well as the video at ETL.

- May. 27: The benchmark set is updated - see [issue 13](https://github.com/snu-sf-class/swpp202001/issues/13#issuecomment-634546168)

## Assignments

- Mar. 19: Assignment 1 is announced. See here: https://github.com/aqjune/swpp202001-assn1

    * If you cannot compile word.cpp, please check whether your `g++` supports c++17. `g++ -version` should print version 7 or upper.

- Mar. 27: Assignment 2 is announced. Deadline is Apr. 1, midnight.
See here: https://github.com/snu-sf-class/swpp202001/tree/master/practice/2.assn

    * NOTE: The goal of assignment 2 is to write a simple function using IR by your own.
Please don't simply create .ll file using `clang -emit-llvm ..` and submit it.
Such .ll file has idioms/variable namings that are generated by compiler optimizations, such as a zero-extended induction variable (variable `i` in `for (i=0; ..)`).

- Apr. 3: Assignment 3 is announced. Deadline is Apr. 12, midnight.

    * NOTE: The `Failed to load passes from ...` error at `3.materials/run-passes.sh` was fixed.
Special thanks to Woosung Song.

    * NOTE 2: N in `polygon` is not larger than 100. input5.txt's answer was incorrect and fixed (thanks to Jeyeon Si). Block names in `unreachable`'s inputs are always lower-case alphabets.

- Apr. 14: Assignment 4 is announced. Deadline is Apr. 21, midnight. Late penalty is 10% per day.

    * NOTE: `fillundef.cpp` had bugs regarding the type of undef value / the way how
uses are iterated. Now fixed.

    * NOTE 2: Added [FAQ.md](practice/4.assn/FAQ.md) (Updated: Apr. 20).

    * NOTE 3: If you compiled LLVM with release and seeing `This analysis pass was not registered prior to being queried` error, please use this code to get DominatorTree:
`DominatorTree DT(F);`

    * NOTE 4: IMPORTANT: We have one more constraint to guarantee that there is only one
possible output. Please see the updated README.md of assignment 4.

- Apr. 22: We'll accept late submissions of assignment 4 by this Thursday (Apr. 23). 

- Apr. 24: Assignment 5 is announced. Deadline is May. 5 (11:59 pm). You can use
[issue 8](https://github.com/snu-sf-class/swpp202001/issues/8) and
[issue 9](https://github.com/snu-sf-class/swpp202001/issues/9) to ask questions.

- Jun. 1: Scores of assignment 3, 4 is here: [issue 19](https://github.com/snu-sf-class/swpp202001/issues/19), [issue 20](https://github.com/snu-sf-class/swpp202001/issues/20)
