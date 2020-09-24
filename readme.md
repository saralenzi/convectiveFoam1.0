<p>Solver for the Navier Stokes equations for the infinite Prandtl case in the Boussinesq approximation.</p>

<p><em><strong>General non dimensional problem:</strong></em></p>

<a href="https://www.codecogs.com/eqnedit.php?latex=\newline&space;\nabla&space;p&space;-&space;\text{Ra}T&space;\mathbf{\hat{z}}&space;-&space;\nabla^2&space;\mathbf{u}&space;=&space;0&space;\newline&space;\newline&space;\frac{\partial&space;T}{\partial&space;t}&space;&plus;&space;(\mathbf{u}&space;\cdot&space;\nabla)T&space;=&space;\nabla^2&space;T&space;\newline&space;\newline&space;\nabla&space;\cdot&space;\mathbf{u}=0" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\newline&space;\nabla&space;p&space;-&space;\text{Ra}T&space;\mathbf{\hat{z}}&space;-&space;\nabla^2&space;\mathbf{u}&space;=&space;0&space;\newline&space;\newline&space;\frac{\partial&space;T}{\partial&space;t}&space;&plus;&space;(\mathbf{u}&space;\cdot&space;\nabla)T&space;=&space;\nabla^2&space;T&space;\newline&space;\newline&space;\nabla&space;\cdot&space;\mathbf{u}=0" title="\newline \nabla p - \text{Ra}T \mathbf{\hat{z}} - \nabla^2 \mathbf{u} = 0 \newline \newline \frac{\partial T}{\partial t} + (\mathbf{u} \cdot \nabla)T = \nabla^2 T \newline \newline \nabla \cdot \mathbf{u}=0" /></a>

<p>&nbsp;</p>

<p>The model is developed on the OpenFOAM platform, based on <em>pimpleFoam</em> and <em>buoyantBoussinesqPimpleFoam</em> (See www.openfoam.org.) by Matteo Cerminara (https://github.com/cerminara) and Sara Lenzi.</p>

<p>The buoyancy term is written explicitly, no subgrid model is adopted.</p>

<p>&nbsp;</p>

<p><em><strong>Model equations of this code (OpenFOAM):</strong></em></p>

<a href="https://www.codecogs.com/eqnedit.php?latex=\newline&space;\frac{\mathbf{u}^m_n-\mathbf{u}^{m-1}_n}{\Delta&space;t}&space;=&space;-\frac{1}{\rho_0}\nabla&space;p&space;&plus;&space;g&space;\beta&space;\Delta&space;T&space;\mathbf{\hat{z}}&space;&plus;&space;\nu&space;\nabla^2&space;\mathbf{u}&space;\hspace{0.5cm}&space;\text{with}&space;\hspace{0.5cm}&space;n,m&space;\in&space;\mathbb{N}&space;\newline&space;\newline&space;\frac{\partial&space;T}{\partial&space;t}&space;&plus;&space;(\mathbf{u}&space;\cdot&space;\nabla)&space;T&space;=&space;\kappa&space;\nabla^2&space;T&space;\newline&space;\newline&space;\nabla&space;\cdot&space;\mathbf{u}&space;=&space;0" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\newline&space;\frac{\mathbf{u}^m_n-\mathbf{u}^{m-1}_n}{\Delta&space;t}&space;=&space;-\frac{1}{\rho_0}\nabla&space;p&space;&plus;&space;g&space;\beta&space;\Delta&space;T&space;\mathbf{\hat{z}}&space;&plus;&space;\nu&space;\nabla^2&space;\mathbf{u}&space;\hspace{0.5cm}&space;\text{with}&space;\hspace{0.5cm}&space;n,m&space;\in&space;\mathbb{N}&space;\newline&space;\newline&space;\frac{\partial&space;T}{\partial&space;t}&space;&plus;&space;(\mathbf{u}&space;\cdot&space;\nabla)&space;T&space;=&space;\kappa&space;\nabla^2&space;T&space;\newline&space;\newline&space;\nabla&space;\cdot&space;\mathbf{u}&space;=&space;0" title="\newline \frac{\mathbf{u}^m_n-\mathbf{u}^{m-1}_n}{\Delta t} = -\frac{1}{\rho_0}\nabla p + g \beta \Delta T \mathbf{\hat{z}} + \nu \nabla^2 \mathbf{u} \hspace{0.5cm} \text{with} \hspace{0.5cm} n,m \in \mathbb{N} \newline \newline \frac{\partial T}{\partial t} + (\mathbf{u} \cdot \nabla) T = \kappa \nabla^2 T \newline \newline \nabla \cdot \mathbf{u} = 0" /></a>
<p><br />
where <em>n</em> indicates the n-th PIMPLE iteration and <em>m</em> the m-th PISO iteration.</p>

<p>A tutorial folder is provided, to simulate a simplified (isoviscous, 3D) convection problem at infinite Prandtl number .</p>

<p>BCs: fixed temperature and free slip velocity on top and bottom, periodicity along horizontal directions.</p>

<p><br />
<br />
<strong>How to use convectiveFoam1.0 :</strong></p>

<ul>
	<li>Installation</li>
</ul>

<ol>
	<li>Download the source files</li>
	<li>Make everything executable if necessary
	<ol>
		<li>chmod -R +x *</li>
	</ol>
	</li>
	<li>Be sure the environment variables of OpenFoam 4.x have been loaded in your terminal window</li>
	<li>&nbsp;Enter in the convectiveFoam1.0 folder and install it running the script:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
	<ol>
		<li>./Allwmake</li>
	</ol>
	</li>
</ol>

<p>&nbsp;</p>

<ul>
	<li>Run the tutorial</li>
</ul>

<ol>
	<li>Enter in the PrInfRa3e6 folder and run:&nbsp;
	<ol>
		<li>./Allclean&nbsp;</li>
		<li>./Allrun</li>
	</ol>
	</li>
</ol>
