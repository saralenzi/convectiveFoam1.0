Solver for the incompressible Boussinesq equation, based on pimpleFoam and
buoyantBoussinesqPimpleFoam. See www.openfoam.org. By Matteo Cerminara (https://github.com/cerminara) and Sara Lenzi.

In this solver, the buoyancy term is written explicitly in his original
formulation. No subgrid model adopted.

##Equations:

#div(U) = 0              ---- (PISO algorithm)
#ddt(U) + div( U x U ) = -grad(p) + div(stress) - beta(T-TRef) g
#ddt(T) + div(U T) = div(diffusion)

where beta is the thermal expansion coefficient.


How to use convectiveFoam1.0 :

    Installation

    Download the source files
    Make everything executable if necessary
        ```
        chmod -R +x *
        ```
    Be sure the environment variables of OpenFoam 4.x have been loaded in your terminal window
     Enter in the convectiveFoam1.0 folder and install it running the script:
        ```
        ./Allwmake
        ```
 

    Run the tutorial

    Enter in the PrInfRa3e6 folder and run: 
        ```
        ./Allclean 
        ```
        ```
        ./Allrun
        ```
