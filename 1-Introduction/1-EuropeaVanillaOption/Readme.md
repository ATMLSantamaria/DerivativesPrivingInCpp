### European vanilla option, in a Black-Scholes mdel, is characterised by five parameters.

We will implement them as private members

Strike price, K

Interest Rate (”risk free rate”), r

Expiry time of the option, T

Underlying asset price, S

Volatility of the underlying, σ

European vanilla call and put options are specified by their pay-off functions, f :

• Call: fC (S) = max(S − K, 0)
• Put: fP (S) = max(K − S, 0)

