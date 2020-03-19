Solver for the incompressible Bounssinesq equation, based on pimpleFoam and
buoyantBoussinesqPimpleFoam. See www.openfoam.org.

In this solver, the buoyancy term is written explicitly in his original
formulation.

The test case is analogous to the convective plume
described in Whitehead et al. 2013, doi:10.1017/jfm.2013.330.

/* ---- *\
Equations:

div(U) = 0              ---- (PISO algorithm)
ddt(U) + div( U x U ) = -grad(p) + div(stress) - beta(T-TRef) g
ddt(T) + div(U T) = div(diffusion)

where beta is the thermal expansion coefficient.
\* ---- */


How to use convectiveFoam1.0 :

- Download the source files in your preferred directory

- Be sure the environment variables of OpenFoam 4.x have been
  loaded in your terminal window

- Enter in the convectiveFoam1.0 folder and install it running 
  the script:
    ./Allwmake
    
- Enter in the PrInfRa3e6 folder and run:
./Allclean
./Allrun
