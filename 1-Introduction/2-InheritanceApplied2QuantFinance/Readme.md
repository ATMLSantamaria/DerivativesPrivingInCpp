### Inheritance relations that can be applied to Quantitative Finance

Options -> European, american
PDE -> Parabollic, elliptic, hyperbolic
Matrices -> Dense, Sparse, Banded and Block Banded Matrixes.

The classical usage of polymorphism, simply applied to financial structures:

E.g. We create a function that accepts the superclass as parameter, and that can handle subclasses.

In the previous examplea about options we add one function to compute the pay off, but different options have different formula
to compute their price. Also is a good design to encapsulate behavior.

So, we will create a interface (superclass or abstract class with all methods pure virtual) call PayOff. From that class we will create classes like PayOffCall, PayOffPut, PayOffDoubleDigital


