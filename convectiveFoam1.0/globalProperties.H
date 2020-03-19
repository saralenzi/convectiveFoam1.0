    Info << "----------" << endl;
    scalar Tave = fvc::domainIntegrate(T).value();
    Info << "Tave = " << Tave << endl;

    volVectorField gradT("gradT", fvc::grad(T));
    
    forAll(mesh.C().boundaryField(), patchi)
    {   
        if( mesh.C().boundaryField()[patchi].patch().name() == "floor" )
        {   
            const scalarField& dn = mesh.C().boundaryField()[patchi].patch().deltaCoeffs();
            const scalarField& Ap = mesh.magSf().boundaryField()[patchi];
            const scalar Ag = gSum(Ap);
            scalarField dzT = mag(gradT.boundaryField()[patchi].component(2));
            //vectorField dzTcv = gradT.boundaryField()[patchi].patchInternalField();
            //scalarField dzTc = dzTcv.component(2);
            scalarField dzTn = mag(T.boundaryField()[patchi].patchInternalField() - T.boundaryField()[patchi])*dn;
            scalar Qfloor = gSum(dzT*Ap)/Ag;
            scalar Qfloor2 = gSum(dzTn*Ap)/Ag;
            Info << "Qfloor = " << Qfloor << endl;   
            //Info << gSum(dzTc*Ap) << endl;
            Info << " Qfloor2 = " << Qfloor2 << endl;
        }   
        if( mesh.C().boundaryField()[patchi].patch().name() == "ceiling" )
        {   
            const scalarField& dn = mesh.C().boundaryField()[patchi].patch().deltaCoeffs();
            const scalarField& Ap = mesh.magSf().boundaryField()[patchi];
            const scalar Ag = gSum(Ap);
            scalarField dzT = mag(gradT.boundaryField()[patchi].component(2));
            scalarField dzTn = mag(T.boundaryField()[patchi].patchInternalField() - T.boundaryField()[patchi])*dn;
            scalar Qceiling = gSum(dzT*Ap)/Ag;
            scalar Qceiling2 = gSum(dzTn*Ap)/Ag;
            Info << "Qceiling = " << Qceiling << endl;   
            Info << "Qceiling2 = " << Qceiling2 << endl;   
        }
    }
    Info << "----------" << endl;
