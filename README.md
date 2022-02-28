# z9
Z9 experiments, trading results and production settings

Zorro Trader is a platform for development of algorithimc trading scripts.
Scrits are in Lite-c (a simplification of C).

This project uses double momentum strategy for trading a universe of 40 stocks and indices.
My contribution based on hundreds of tests with Z9 is that it extends the official Z9 algo with:
 1) it trades particular stocks instead of Sector indices.
 2) Universe of stocks is compiled stocks based on the followin filters:
   3)  recommended in the last 3 years by Motley Fool in their paid recommendation service. (https://fool.com)
   4)  have lowest correlation among all Motley Fool companies
   5)  I believe in them
10yrs of Backtesting shows 100%+ Common Annual Growth Rate (CAGR)
