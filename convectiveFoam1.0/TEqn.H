{
    dimensionedScalar alpha("alpha", nu/Pr); 
    //Info<< "alpha = " << alpha << nl << endl;
    //Info<< "Pr = " << Pr << nl << endl;

    fvScalarMatrix TEqn
    (
        fvm::ddt(T)
      + fvm::div(phi, T)
      - fvm::laplacian(alpha, T)
     ==
        fvOptions(T)
    );

    TEqn.relax();

    fvOptions.constrain(TEqn);

    TEqn.solve();

    fvOptions.correct(T);
}
