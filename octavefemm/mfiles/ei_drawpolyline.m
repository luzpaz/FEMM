% ActiveFEMM (C)2006 David Meeker, dmeeker@ieee.org

function ei_drawpolyline(p)
	n=length(p);
	for k = 1:(n-1)
		ei_drawline(p(k,1),p(k,2),p(k+1,1),p(k+1,2));
	end

