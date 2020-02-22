# Company-Advertising-Strategy
Problem Statement:
- There are N players present in IPL cricket (reserved, benched, past players and playing 11
combined). All players have a level denoting their cricketing excellence which is a positive
integer. We know that each player of level L has at most 2 friends of level L+1 and at most 1
friend of level L-1, such that their level value is inversely proportional to their excellence
(Say, a player with level 1 is the best cricketer). There is only one player with a maximum
level. Each of the players have some integer value denoting their marketing potential (
combination of performance, looks and behaviour). A Cosmetics Company decided to take
bunch of players for starring in their range of advertisements, from time to time in a periodic
basis. Naturally the company would want a set of players such that their sum of marketing
potential is maximum so that they have maximum chance of properly selling their product.
Also, the set of sportsmen that Company takes cannot have any possible pairs of friends
together because then there will be professionalism issues. Also, if the marketing potential
sum is negative, then the Company will not take anybody as they may be at a loss. You are
allowed to calculate the maximum sum of Marketing potential of players that Company takes
without taking any possible pairs of friends together. Help the Company do their objective by
writing a code to do so.Also, Input of players’ marketing potential is done level wise.(First
level 1,then level 2 and so on).Assume that the Company can take any number of players. It
does not have any monetary constraints.
-Input Format :
First line contains the number of players in a cricket Team(N). Second line denotes the
marketing values of players such in level wise order and we enter such that first entry
denotes marketing value of Player 1 which has maximum level (Level 1), then the next 2
entries are marketing values of Players 2 and 3 (in level 2) who are friends of Player 1. Then
the next 2 entries are marketing values of Players 4 and 5 (in Level 3 ) who are friends of
Player 2. Then the next 2 entries are marketing values of players 6 and 7(in Level 3) who are
friends of player 3. And so on, the pattern is followed for other inputs.
- Constraints:
- 1<=N<=10000
- 10^4 <=marketing values<=10^6
- Output:
- Print the maximum sum of Marketing potential of players that the company takes without
taking any possible pairs of friends together. If the sum is not positive , Print -1.
