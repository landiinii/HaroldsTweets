# Harolds Tweets
A simple machine named Harold who has learned from celebrities' social media captions how best to caption your next post.

# Inspiration
I was told a story a little while ago of some MIT students who were so tired of having to write out research study papers to be selected and presented at conferences. So they got together and put together a computer a computer word processing program that read comparisons and common phrases from data input to compute a potential official research paper. They submitted to a conference the paper their machine had written for them and got accepted. I wanted to see what I could do with this same line of machine learning scaled down to my level and my time.

# What it does
I call my amateur machine learning Harold. Harold reads data files taken from twitter and other common speech sources and sorts and compiles them into a new unique phrase or quote that someone can use to post on Twitter or caption photos on other social media. These tweets are produce according to user preference of three styles: 1) Trump 2) Jaden Smith and 3) Scriptures.

# How I built it
I planted input files into a C++ Map with values of a List of strings and corresponding Keys each a vector of strings. Individual words were selected at random, then paired with their respective key which was a randomly selected from all potential following words in the data.

# What's next for Harolds Tweets
Harold has a long way to go, and his tweets are going to be sooo much better in the future. He is currently residing in a linux terminal, but will very soon be moving into a new home, probably starting in a GUI, before moving on to bigger and better domains and apps.
