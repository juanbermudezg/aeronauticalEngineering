function[]=mifuncion()

x=1:0.000001:3;
f=(x<=3).*(1./x)+(x>3).*(0);

plot(f)
cylinder(f)
