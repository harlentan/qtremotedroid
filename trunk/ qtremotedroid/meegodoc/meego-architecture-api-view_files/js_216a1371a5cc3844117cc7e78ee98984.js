(function(){var s=true,t=false,aa=window,u=undefined,v=Math,ba="push",fa="slice",ga="cookie",y="charAt",z="indexOf",A="gaGlobal",ha="getTime",ja="toString",B="window",D="length",E="document",F="split",G="location",ka="href",H="substring",I="join",L="toLowerCase";var la="_gat",ma="_gaq",na="4.8.6",oa="_gaUserPrefs",pa="ioo",M="&",N="=",O="__utma=",qa="__utmb=",ra="__utmc=",sa="__utmk=",ta="__utmv=",ua="__utmz=",va="__utmx=",wa="GASO=";var xa=function(){var j=this,h=[],k="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";j.uc=function(m){h[m]=s};j.Nb=function(){for(var m=[],i=0;i<h[D];i++)if(h[i])m[v.floor(i/6)]^=1<<i%6;for(i=0;i<m[D];i++)m[i]=k[y](m[i]||0);return m[I]("")}},ya=new xa;function Q(j){ya.uc(j)};var za=function(j,h){var k=this;k.window=j;k.document=h},R=new za(aa,document);var Aa=function(j){return function(h,k,m){j[h]=function(){Q(k);return m.apply(j,arguments)};return m}},S=function(j){return u==j||"-"==j||""==j},T=function(j,h,k){var m="-",i;if(!S(j)&&!S(h)&&!S(k)){i=j[z](h);if(i>-1){k=j[z](k,i);if(k<0)k=j[D];m=j[H](i+h[z](N)+1,k)}}return m},Ba=function(j){var h=t,k=0,m,i;if(!S(j)){h=s;for(m=0;m<j[D];m++){i=j[y](m);k+="."==i?1:0;h=h&&k<=1&&(0==m&&"-"==i||".0123456789"[z](i)>-1)}}return h},U=function(j,h){var k=encodeURIComponent;if(k instanceof Function)return h?
encodeURI(j):k(j);else{Q(68);return escape(j)}},Ca=function(j,h){var k=decodeURIComponent,m;j=j[F]("+")[I](" ");if(k instanceof Function)try{m=h?decodeURI(j):k(j)}catch(i){Q(97);m=unescape(j)}else{Q(68);m=unescape(j)}return m},V=function(j,h){return j[z](h)>-1};function Da(j){if(!j||""==j)return"";for(;j[y](0)[D]>0&&" \n\r\t"[z](j[y](0))>-1;)j=j[H](1);for(;j[y](j[D]-1)[D]>0&&" \n\r\t"[z](j[y](j[D]-1))>-1;)j=j[H](0,j[D]-1);return j}
var X=function(j,h){j[ba]||Q(94);j[j[D]]=h},Ea=function(j){var h=1,k=0,m;if(!S(j)){h=0;for(m=j[D]-1;m>=0;m--){k=j.charCodeAt(m);h=(h<<6&268435455)+k+(k<<14);k=h&266338304;h=k!=0?h^k>>21:h}}return h},Fa=function(){return v.round(v.random()*2147483647)},Ga=function(){};var Ha=function(j,h){this.Na=j;this.$a=h},Ia=function(){function j(k){var m=[];k=k[F](",");for(var i,p=0;p<k[D];p++){i=k[p][F](":");m[ba](new Ha(i[0],i[1]))}return m}var h=this;h.ta="utm_campaign";h.ua="utm_content";h.va="utm_id";h.wa="utm_medium";h.xa="utm_nooverride";h.ya="utm_source";h.za="utm_term";h.Aa="gclid";h.U=0;h.v=0;h.Ea=15768E6;h.kb=18E5;h.u=63072E6;h.ia=[];h.ka=[];h.fc="cse";h.gc="q";h.bb=5;h.M=j("daum:q,eniro:search_word,naver:query,images.google:q,google:q,yahoo:p,msn:q,bing:q,aol:query,aol:encquery,lycos:query,ask:q,altavista:q,netscape:query,cnn:query,about:terms,mamma:query,alltheweb:q,voila:rdata,virgilio:qs,live:q,baidu:wd,alice:qs,yandex:text,najdi:q,aol:q,mama:query,seznam:q,search:q,wp:szukaj,onet:qt,szukacz:q,yam:k,pchome:q,kvasir:q,sesam:q,ozu:q,terra:query,mynet:q,ekolay:q,rambler:words");
h.f="/";h.O=100;h.ga="/__utm.gif";h.Y=1;h.Z=1;h.t="|";h.W=1;h.Fa=1;h.Da=1;h.a="auto";h.B=1;h.Dc=10;h.Fb=10;h.Ec=0.2;h.l=u};var Ja=function(j){function h(a,c,f,d){var e="",q=0;e=T(a,"2"+c,";");if(!S(e)){a=e[z]("^"+f+".");if(a<0)return["",0];e=e[H](a+f[D]+2);if(e[z]("^")>0)e=e[F]("^")[0];f=e[F](":");e=f[1];q=parseInt(f[0],10);if(!d&&q<i.q)e=""}if(S(e))e="";return[e,q]}function k(a,c){return"^"+[[c,a[1]][I]("."),a[0]][I](":")}function m(a){var c=new Date;a=new Date(c[ha]()+a);return"expires="+a.toGMTString()+"; "}var i=this,p=j;i.q=(new Date)[ha]();var l=[O,qa,ra,ua,ta,va,wa];i.h=function(){var a=R[E][ga];return p.l?i.Ob(a,
p.l):a};i.Ob=function(a,c){for(var f=[],d,e=0;e<l[D];e++){d=h(a,l[e],c)[0];S(d)||(f[f[D]]=l[e]+d+";")}return f[I]("")};i.k=function(a,c,f){var d=f>0?m(f):"";if(p.l){c=i.bc(R[E][ga],a,p.l,c,f);a="2"+a;d=f>0?m(p.u):""}a=a+c;d=d;if(a[D]>2E3){Q(69);a=a[H](0,2E3)}d=a+"; path="+p.f+"; "+d+i.Qa();R[E].cookie=d};i.bc=function(a,c,f,d,e){var q="";e=e||p.u;d=k([d,i.q+e*1],f);q=T(a,"2"+c,";");if(!S(q)){a=k(h(a,c,f,s),f);q=q[F](a)[I]("");return q=d+q}return d};i.Qa=function(){return S(p.a)?"":"domain="+p.a+";"}};var Ka=function(j){function h(b){b=b instanceof Array?b[I]("."):"";return S(b)?"-":b}function k(b,g){var o=[],n;if(!S(b)){o=b[F](".");if(g)for(n=0;n<o[D];n++)Ba(o[n])||(o[n]="-")}return o}function m(b,g,o){var n=e.F,r,w;for(r=0;r<n[D];r++){w=n[r][0];w+=S(g)?g:g+n[r][4];n[r][2](T(b,w,o))}}var i,p,l,a,c,f,d,e=this,q,x=j;e.g=new Ja(j);e.Xa=function(){return u==q||q==e.I()};e.h=function(){return e.g.h()};e.ea=function(){return c?c:"-"};e.nb=function(b){c=b};e.ma=function(b){q=Ba(b)?b*1:"-"};e.da=function(){return h(f)};
e.na=function(b){f=k(b)};e.Mb=function(){e.g.k(ta,"",-1)};e.cc=function(){return q?q:"-"};e.Qa=function(){return S(x.a)?"":"domain="+x.a+";"};e.ba=function(){return h(i)};e.lb=function(b){i=k(b,1)};e.z=function(){return h(p)};e.la=function(b){p=k(b,1)};e.ca=function(){return h(l)};e.mb=function(b){l=k(b,1)};e.fa=function(){return h(a)};e.ob=function(b){a=k(b);for(b=0;b<a[D];b++)if(b<4&&!Ba(a[b]))a[b]="-"};e.Xb=function(){return d};e.xc=function(b){d=b};e.Ib=function(){i=[];p=[];l=[];a=[];c=u;f=[];
q=u};e.I=function(){for(var b="",g=0;g<e.F[D];g++)b+=e.F[g][1]();return Ea(b)};e.ja=function(b){var g=e.h(),o=t;if(g){m(g,b,";");e.ma(e.I());o=s}return o};e.qc=function(b){m(b,"",M);e.ma(T(b,sa,M))};e.Bc=function(){var b=e.F,g=[],o;for(o=0;o<b[D];o++)X(g,b[o][0]+b[o][1]());X(g,sa+e.I());return g[I](M)};e.Hc=function(b,g){var o=e.F,n=x.f;e.ja(b);x.f=g;for(var r=0;r<o[D];r++)S(o[r][1]())||o[r][3]();x.f=n};e.xb=function(){e.g.k(O,e.ba(),x.u)};e.qa=function(){e.g.k(qa,e.z(),x.kb)};e.yb=function(){e.g.k(ra,
e.ca(),0)};e.sa=function(){e.g.k(ua,e.fa(),x.Ea)};e.zb=function(){e.g.k(va,e.ea(),x.u)};e.ra=function(){e.g.k(ta,e.da(),x.u)};e.Kc=function(){e.g.k(wa,e.Xb(),0)};e.F=[[O,e.ba,e.lb,e.xb,"."],[qa,e.z,e.la,e.qa,""],[ra,e.ca,e.mb,e.yb,""],[va,e.ea,e.nb,e.zb,""],[ua,e.fa,e.ob,e.sa,"."],[ta,e.da,e.na,e.ra,"."]]};var La=function(){var j=this;j.jb=function(h,k,m,i,p){if(!p&&k[D]>2037)k=m+"&err=len&max=2037&len="+k[D];j.Kb(h+k,i)};j.Kb=function(h,k){var m=new Image(1,1);m.src=h;m.onload=function(){m.onload=null;(k||Ga)()}}};var Ma=function(j){var h=this,k=j,m=new Ka(k),i=new La,p=!Y.Ic(),l=function(){};h.$c=function(a){var c=a[F](".");if(!c||c[D]<5)return a;if((a=c[fa](4)[I]("."))&&a[z]("=")==-1)a=Ca(a);c=c[fa](0,4);X(c,a);return c[I](".")};h.$b=function(){return"https:"==R[E][G].protocol?"https://ssl.google-analytics.com/__utm.gif":"http://www.google-analytics.com/__utm.gif"};h.P=function(a,c,f,d,e,q){var x=k.B,b=R[E][G];m.ja(f);var g=m.z()[F](".");if(g[1]<500||d){if(e){g=g;var o=(new Date)[ha](),n;n=(o-g[3])*(k.Ec/
1E3);if(n>=1){g[2]=v.min(v.floor(g[2]*1+n),k.Fb);g[3]=o}g=g}if(d||!e||g[2]>=1){if(!d&&e)g[2]=g[2]*1-1;g[1]=g[1]*1+1;e="?utmwv="+na;o="&utmn="+Fa();d=e+"e"+o;a=e+o+(S(b.hostname)?"":"&utmhn="+U(b.hostname))+(k.O==100?"":"&utmsp="+U(k.O))+a;if(0==x||2==x){b=2==x?l:q||l;p&&i.jb(k.ga,a,d,b,s)}if(1==x||2==x){c="&utmac="+c;d+=c;a+=c+"&utmcc="+h.Tb(f);if(Y.Ma){f="&aip=1";d+=f;a+=f}a+="&utmu="+ya.Nb();p&&i.jb(h.$b(),a,d,q)}}}m.la(g[I]("."));m.qa()};h.Tb=function(a){for(var c=[],f=[O,ua,ta,va],d=m.h(),e,q=
0;q<f[D];q++){e=T(d,f[q]+a,";");if(!S(e)){if(f[q]==ta){e=e[F](a+".")[1][F]("|")[0];if(S(e))continue;e=a+"."+e}X(c,f[q]+e+";")}}return U(c[I]("+"))}};var Na=function(){var j=this;j.S=[];j.Va=function(h){for(var k,m=j.S,i=0;i<m[D];i++)k=h==m[i].n?m[i]:k;return k};j.Eb=function(h,k,m,i,p,l,a,c){var f=j.Va(h);if(u==f){f=new Na.Bb(h,k,m,i,p,l,a,c);X(j.S,f)}else{f.Ca=k;f.tb=m;f.sb=i;f.qb=p;f.Ha=l;f.rb=a;f.Ka=c}return f}};Na.Ab=function(j,h,k,m,i,p){var l=this;l.wb=j;l.oa=h;l.o=k;l.Ga=m;l.db=i;l.eb=p;l.pa=function(){return"&"+["utmt=item","tid="+U(l.wb),"ipc="+U(l.oa),"ipn="+U(l.o),"iva="+U(l.Ga),"ipr="+U(l.db),"iqt="+U(l.eb)][I]("&utm")}};
Na.Bb=function(j,h,k,m,i,p,l,a){var c=this;c.n=j;c.Ca=h;c.tb=k;c.sb=m;c.qb=i;c.Ha=p;c.rb=l;c.Ka=a;c.K=[];c.Db=function(f,d,e,q,x){var b=c.Yb(f),g=c.n;if(u==b)X(c.K,new Na.Ab(g,f,d,e,q,x));else{b.wb=g;b.oa=f;b.o=d;b.Ga=e;b.db=q;b.eb=x}};c.Yb=function(f){for(var d,e=c.K,q=0;q<e[D];q++)d=f==e[q].oa?e[q]:d;return d};c.pa=function(){return"&"+["utmt=tran","id="+U(c.n),"st="+U(c.Ca),"to="+U(c.tb),"tx="+U(c.sb),"sp="+U(c.qb),"ci="+U(c.Ha),"rg="+U(c.rb),"co="+U(c.Ka)][I]("&utmt")}};var Oa=function(j){function h(){var c=i;try{var f=l.awt.Toolkit.getDefaultToolkit().getScreenSize();c=f.width+"x"+f.height}catch(d){}return c}function k(){var c,f,d;f="ShockwaveFlash";var e="$version",q=R[B].navigator;if((q=q?q.plugins:u)&&q[D]>0)for(c=0;c<q[D]&&!d;c++){f=q[c];if(V(f.name,"Shockwave Flash"))d=f.description[F]("Shockwave Flash ")[1]}else{f=f+"."+f;try{c=new ActiveXObject(f+".7");d=c.GetVariable(e)}catch(x){}if(!d)try{c=new ActiveXObject(f+".6");d="WIN 6,0,21,0";c.Lc="always";d=c.GetVariable(e)}catch(b){}if(!d)try{c=
new ActiveXObject(f);d=c.GetVariable(e)}catch(g){}if(d){d=d[F](" ")[1][F](",");d=d[0]+"."+d[1]+" r"+d[2]}}return d?d:i}var m=this,i="-",p=R[B].screen,l=R[B].pd,a=R[B].navigator;m.ib=p?p.width+"x"+p.height:l?h():i;m.hb=p?p.colorDepth+"-bit":i;m.Hb=U(R[E].characterSet?R[E].characterSet:R[E].charset?R[E].charset:i);m.ab=(a&&a.language?a.language:a&&a.browserLanguage?a.browserLanguage:i)[L]();m.Za=a&&a.javaEnabled()?1:0;m.Qb=j?k():i;m.Cc=function(){return M+"utm"+["cs="+U(m.Hb),"sr="+m.ib,"sc="+m.hb,
"ul="+m.ab,"je="+m.Za,"fl="+U(m.Qb)][I]("&utm")};m.Sb=function(){var c=R[B].navigator,f=R[B].history[D];c=c.appName+c.version+m.ab+c.platform+c.userAgent+m.Za+m.ib+m.hb+(R[E][ga]?R[E][ga]:"")+(R[E].referrer?R[E].referrer:"");for(var d=c[D];f>0;)c+=f--^d++;return Ea(c)}};var Z=function(j,h,k,m){function i(a){var c="";c=a[F]("://")[1][L]();if(V(c,"/"))c=c[F]("/")[0];return c}var p=m,l=this;l.b=j;l.fb=h;l.q=k;l.Ua=function(a){var c=l.aa();return new Z.r(T(a,p.va+N,M),T(a,p.ya+N,M),T(a,p.Aa+N,M),l.J(a,p.ta,"(not set)"),l.J(a,p.wa,"(not set)"),l.J(a,p.za,c&&!S(c.C)?Ca(c.C):u),l.J(a,p.ua,u))};l.Wa=function(a){var c=i(a),f;f=a;var d="";f=f[F]("://")[1][L]();if(V(f,"/")){f=f[F]("/")[1];if(V(f,"?"))d=f[F]("?")[0]}f=d;if(V(c,"google")){a=a[F]("?")[I](M);if(V(a,M+p.gc+N))if(f==
p.fc)return s}return t};l.aa=function(){var a,c=l.fb,f,d=p.M;if(!(S(c)||"0"==c||!V(c,"://")||l.Wa(c))){a=i(c);for(var e=0;e<d[D];e++){f=d[e];if(V(a,f.Na[L]())){c=c[F]("?")[I](M);if(V(c,M+f.$a+N)){a=c[F](M+f.$a+N)[1];if(V(a,M))a=a[F](M)[0];return new Z.r(u,f.Na,u,"(organic)","organic",a,u)}}}}};l.J=function(a,c,f){a=T(a,c+N,M);return f=!S(a)?Ca(a):!S(f)?f:"-"};l.mc=function(a){var c=p.ia,f=t;if(a&&"organic"==a.L){a=Ca(a.C)[L]();for(var d=0;d<c[D];d++)f=f||c[d][L]()==a}return f};l.Sa=function(){var a=
"",c="";a=l.fb;if(!(S(a)||"0"==a||!V(a,"://")||l.Wa(a))){a=a[F]("://")[1];if(V(a,"/")){c=a[H](a[z]("/"));c=c[F]("?")[0];a=a[F]("/")[0][L]()}if(0==a[z]("www."))a=a[H](4);return new Z.r(u,a,u,"(referral)","referral",u,c)}};l.Pa=function(a){var c="";if(p.U){c=a&&a.hash?a[ka][H](a[ka][z]("#")):"";c=""!=c?c+M:c}c+=a.search;return c};l.Vb=function(){return new Z.r(u,"(direct)",u,"(direct)","(none)",u,u)};l.nc=function(a){var c=t,f=p.ka;if(a&&"referral"==a.L){a=U(a.Q)[L]();for(var d=0;d<f[D];d++)c=c||V(a,
f[d][L]())}return c};l.i=function(a){return u!=a&&a.Ya()};l.od=function(a){a=T(a,ua+l.b+".",";");var c=a[F](".");a=new Z.r;a.cb(c[fa](4)[I]("."));if(!l.i(a))return s;c=R[E][G];c=l.Pa(c);c=l.Ua(c);if(!l.i(c)){c=l.aa();l.i(c)||(c=l.Sa())}return l.i(c)&&a.D()[L]()!=c.D()[L]()};l.Ub=function(a,c){if(p.Fa){var f="",d="-",e,q=0,x,b,g=l.b;if(a){b=a.h();f=l.Pa(R[E][G]);if(p.v&&a.Xa()){d=a.fa();if(!S(d)&&!V(d,";")){a.sa();return}}d=T(b,ua+g+".",";");e=l.Ua(f);if(l.i(e)){f=T(f,p.xa+N,M);if("1"==f&&!S(d))return}if(!l.i(e)){e=
l.aa();if(!S(d)&&l.mc(e))return}if(!l.i(e)&&c){e=l.Sa();if(!S(d)&&l.nc(e))return}if(!l.i(e))if(S(d)&&c)e=l.Vb();if(l.i(e)){if(!S(d)){q=d[F](".");x=new Z.r;x.cb(q[fa](4)[I]("."));x=x.D()[L]()==e.D()[L]();q=q[3]*1}if(!x||c){b=T(b,O+g+".",";");x=b.lastIndexOf(".");b=x>9?b[H](x+1)*1:0;q++;b=0==b?1:b;a.ob([g,l.q,b,q,e.D()][I]("."));a.sa()}}}}}};
Z.r=function(j,h,k,m,i,p,l){var a=this;a.n=j;a.Q=h;a.V=k;a.o=m;a.L=i;a.C=p;a.Ja=l;a.D=function(){var c=[],f=[["cid",a.n],["csr",a.Q],["gclid",a.V],["ccn",a.o],["cmd",a.L],["ctr",a.C],["cct",a.Ja]],d,e;if(a.Ya())for(d=0;d<f[D];d++)if(!S(f[d][1])){e=f[d][1][F]("+")[I]("%20");e=e[F](" ")[I]("%20");X(c,"utm"+f[d][0]+N+e)}return c[I]("|")};a.Ya=function(){return!(S(a.n)&&S(a.Q)&&S(a.V))};a.cb=function(c){var f=function(d){return Ca(T(c,"utm"+d+N,"|"))};a.n=f("cid");a.Q=f("csr");a.V=f("gclid");a.o=f("ccn");
a.L=f("cmd");a.C=f("ctr");a.Ja=f("cct")}};var Pa=function(j,h,k,m){var i=this,p=h,l=N,a=j,c=m;i.H=k;i.ha="";i.m={};i.kc=function(){var f;f=T(i.H.h(),ta+p+".",";")[F](p+".")[1];if(!S(f)){f=f[F]("|");var d=i.m,e=f[1],q;if(!S(e)){e=e[F](",");for(var x=0;x<e[D];x++){q=e[x];if(!S(q)){q=q[F](l);if(q[D]==4)d[q[0]]=[q[1],q[2],1]}}}i.ha=f[0];i.T()}};i.T=function(){i.Gb();var f=i.ha,d,e,q="";for(d in i.m)if((e=i.m[d])&&1===e[2])q+=d+l+e[0]+l+e[1]+l+1+",";S(q)||(f+="|"+q);if(S(f))i.H.Mb();else{i.H.na(p+"."+f);i.H.ra()}};i.yc=function(f){i.ha=f;i.T()};
i.wc=function(f,d,e,q){if(1!=q&&2!=q&&3!=q)q=3;var x=t;if(d&&e&&f>0&&f<=a.bb){d=U(d);e=U(e);if(d[D]+e[D]<=64){i.m[f]=[d,e,q];i.T();x=s}}return x};i.ec=function(f){if((f=i.m[f])&&1===f[2])return f[1]};i.Lb=function(f){var d=i.m;if(d[f]){delete d[f];i.T()}};i.Gb=function(){c.w(8);c.w(9);c.w(11);var f=i.m,d,e;for(e in f)if(d=f[e]){c.p(8,e,d[0]);c.p(9,e,d[1]);(d=d[2])&&3!=d&&c.p(11,e,""+d)}}};var Qa=function(){function j(n,r,w,J){if(u==l[n])l[n]={};if(u==l[n][r])l[n][r]=[];l[n][r][w]=J}function h(n,r,w){if(u!=l[n]&&u!=l[n][r])return l[n][r][w]}function k(n,r){if(u!=l[n]&&u!=l[n][r]){l[n][r]=u;var w=s,J;for(J=0;J<f[D];J++)if(u!=l[n][f[J]]){w=t;break}if(w)l[n]=u}}function m(n){var r="",w=t,J,P;for(J=0;J<f[D];J++){P=n[f[J]];if(u!=P){if(w)r+=f[J];r=r;P=P;w=[];var ia=void 0,C=void 0;for(C=0;C<P[D];C++)if(u!=P[C]){ia="";if(C!=o&&u==P[C-1])ia+=C[ja]()+x;var K;K=P[C];var W="",ca=void 0,da=void 0,
ea=void 0;for(ca=0;ca<K[D];ca++){da=K[y](ca);ea=g[da];W+=u!=ea?ea:da}K=W;ia+=K;X(w,ia)}P=d+w[I](q)+e;r=r+P;w=t}else w=s}return r}var i=this,p=Aa(i),l={},a="k",c="v",f=[a,c],d="(",e=")",q="*",x="!",b="'",g={};g[b]="'0";g[e]="'1";g[q]="'2";g[x]="'3";var o=1;i.ic=function(n){return u!=l[n]};i.N=function(){var n="",r;for(r in l)if(u!=l[r])n+=r[ja]()+m(l[r]);return n};i.rc=function(n){if(n==u)return i.N();var r=n.N(),w;for(w in l)if(u!=l[w]&&!n.ic(w))r+=w[ja]()+m(l[w]);return r};i.p=p("_setKey",89,function(n,
r,w){if(typeof w!="string")return t;j(n,a,r,w);return s});i.pb=p("_setValue",90,function(n,r,w){if(typeof w!="number"&&(u==Number||!(w instanceof Number))||v.round(w)!=w||w==NaN||w==Infinity)return t;j(n,c,r,w[ja]());return s});i.Zb=p("_getKey",87,function(n,r){return h(n,a,r)});i.dc=p("_getValue",88,function(n,r){return h(n,c,r)});i.w=p("_clearKey",85,function(n){k(n,a)});i.Ia=p("_clearValue",86,function(n){k(n,c)})};var Ra=function(j,h){var k=this,m=Aa(k);k.rd=h;k.pc=j;k.ub=m("_trackEvent",91,function(i,p,l){return h.ub(k.pc,i,p,l)})};var $=function(){};$.Pb=function(j){var h="gaso=",k=R[E][G].hash;if(k&&1==k[z](h))j=T(k,h,M);else j=(k=R[B].name)&&0<=k[z](h)?T(k,h,M):T(j.h(),wa,";");return j};$.oc=function(j,h){var k=(h||"www")+".google.com";k="https://"+k+"/analytics/reporting/overlay_js?gaso="+j+M+Fa();var m="_gasojs",i=R[E].createElement("script");i.type="text/javascript";i.src=k;if(m)i.id=m;(R[E].getElementsByTagName("head")[0]||R[E].getElementsByTagName("body")[0]).appendChild(i)};
$.load=function(j,h){if(!$.lc){var k=$.Pb(h),m=k&&k.match(/^(?:\|([-0-9a-z.]{1,30})\|)?([-.\w]{10,1200})$/i);if(m){h.xc(k);h.Kc();Y._gasoDomain=j.a;Y._gasoCPath=j.f;$.oc(m[2],m[1])}$.lc=s}};var Sa=function(j,h,k){function m(){if("auto"==d.a){var b=R[E].domain;if("www."==b[H](0,4))b=b[H](4);d.a=b}d.a=d.a[L]()}function i(){m();var b=d.a,g=b[z]("www.google.")*b[z](".google.")*b[z]("google.");return g||"/"!=d.f||b[z]("google.org")>-1}function p(b,g,o){if(S(b)||S(g)||S(o))return"-";b=T(b,O+a.b+".",g);if(!S(b)){b=b[F](".");b[5]=""+(b[5]?b[5]*1+1:1);b[3]=b[4];b[4]=o;b=b[I](".")}return b}function l(){return"file:"!=R[E][G].protocol&&i()}var a=this,c=Aa(a),f=u,d=new Ia,e=d.a,q=t,x=u;a.o=j;a.q=
v.round((new Date)[ha]()/1E3);a.s=h||"UA-XXXXX-X";a.La=R[E].referrer;a.$=u;a.d=u;a.A=t;a.G=u;a.e=u;a.Oa=u;a.b=u;a.j=u;d.l=k?U(k):u;a.ac=function(){return Fa()^a.G.Sb()&2147483647};a.Wb=function(){if(!d.a||""==d.a||"none"==d.a){d.a="";return 1}m();return d.Da?Ea(d.a):1};a.Rb=function(b,g){if(S(b))b="-";else{g+=d.f&&"/"!=d.f?d.f:"";var o=b[z](g);b=o>=0&&o<=8?"0":"["==b[y](0)&&"]"==b[y](b[D]-1)?"-":b}return b};a.gb=function(b){var g="";g+=d.W?a.G.Cc():"";g+=d.Y&&!S(R[E].title)?"&utmdt="+U(R[E].title):
"";g=g;var o;o=u;if(R[B]&&R[B][A]&&R[B][A].hid)o=R[B][A].hid;else{o=Fa();R[B].gaGlobal=R[B][A]?R[B][A]:{};R[B][A].hid=o}o=o;return g=g+("&utmhid="+o+"&utmr="+U(a.$)+"&utmp="+U(a.sc(b)))};a.sc=function(b){var g=R[E][G];return b=u!=b&&""!=b?U(b,s):U(g.pathname+g.search,s)};a.Fc=function(b){if(a.R()){var g="";if(a.e!=u&&a.e.N()[D]>0)g+="&utme="+U(a.e.N());g+=a.gb(b);f.P(g,a.s,a.b)}};a.Jb=function(){var b=new Ka(d);return b.ja(a.b)?b.Bc():u};a.Ra=c("_getLinkerUrl",52,function(b,g){var o=b[F]("#"),n=b,
r=a.Jb();if(r)if(g&&1>=o[D])n+="#"+r;else if(!g||1>=o[D])if(1>=o[D])n+=(V(b,"?")?M:"?")+r;else n=o[0]+(V(b,"?")?M:"?")+r+"#"+o[1];return n});a.hc=function(){var b=a.q,g=a.j,o=g.h(),n=a.b+"",r=R[B]?R[B][A]:u,w,J=V(o,O+n+"."),P=V(o,qa+n),ia=V(o,ra+n),C,K=[],W="",ca=t;o=S(o)?"":o;if(d.v){w=R[E][G]&&R[E][G].hash?R[E][G][ka][H](R[E][G][ka][z]("#")):"";if(d.U&&!S(w))W=w+M;W+=R[E][G].search;if(!S(W)&&V(W,O)){g.qc(W);g.Xa()||g.Ib();C=g.ba()}w=g.ea;var da=g.nb,ea=g.zb;if(!S(w())){da(Ca(w()));V(w(),";")||ea()}w=
g.da;da=g.na;ea=g.ra;if(!S(w())){da(w());V(w(),";")||ea()}}if(S(C))if(J)if(!P||!ia||0){C=p(o,";",b);a.A=s}else{C=T(o,O+n+".",";");K=T(o,qa+n,";")[F](".")}else{C=[n,a.ac(),b,b,b,1][I](".");ca=a.A=s}else if(S(g.z())||S(g.ca())){C=p(W,M,b);a.A=s}else{K=g.z()[F](".");n=K[0]}C=C[F](".");if(R[B]&&r&&r.dh==n&&!d.l){C[4]=r.sid?r.sid:C[4];if(ca){C[3]=r.sid?r.sid:C[4];if(r.vid){b=r.vid[F](".");C[1]=b[0];C[2]=b[1]}}}g.lb(C[I]("."));K[0]=n;K[1]=K[1]?K[1]:0;K[2]=u!=K[2]?K[2]:d.Dc;K[3]=K[3]?K[3]:C[4];g.la(K[I]("."));
g.mb(n);S(g.cc())||g.ma(g.I());g.xb();g.qa();g.yb()};a.jc=function(){f=new Ma(d)};a.getName=c("_getName",58,function(){return a.o});a.c=c("_initData",2,function(){var b;if(!q){if(!a.G)a.G=new Oa(d.Z);a.b=a.Wb();a.j=new Ka(d);a.e=new Qa;x=new Pa(d,a.b,a.j,a.e);a.jc()}if(l()){if(!q){a.$=a.Rb(a.La,R[E].domain);b=new Z(a.b,a.$,a.q,d)}a.hc(b);x.kc()}if(!q){l()&&b.Ub(a.j,a.A);a.Oa=new Qa;$.load(d,a.j);q=s}});a.Jc=c("_visitCode",54,function(){a.c();var b=T(a.j.h(),O+a.b+".",";");b=b[F](".");return b[D]<
4?"":b[1]});a.Vc=c("_cookiePathCopy",30,function(b){a.c();a.j&&a.j.Hc(a.b,b)});a.R=function(){return a.Jc()%1E4<d.O*100};a.de=c("_trackPageview",1,function(b){if(l()){a.c();a.Fc(b);a.A=t}});a.ee=c("_trackTrans",18,function(){var b=a.b,g=[],o,n,r;a.c();if(a.d&&a.R()){for(o=0;o<a.d.S[D];o++){n=a.d.S[o];X(g,n.pa());for(r=0;r<n.K[D];r++)X(g,n.K[r].pa())}for(o=0;o<g[D];o++)f.P(g[o],a.s,b,s)}});a.Zd=c("_setTrans",20,function(){var b,g,o,n;b=R[E].getElementById?R[E].getElementById("utmtrans"):R[E].utmform&&
R[E].utmform.utmtrans?R[E].utmform.utmtrans:u;a.c();if(b&&b.value){a.d=new Na;n=b.value[F]("UTM:");d.t=!d.t||""==d.t?"|":d.t;for(b=0;b<n[D];b++){n[b]=Da(n[b]);g=n[b][F](d.t);for(o=0;o<g[D];o++)g[o]=Da(g[o]);if("T"==g[0])a.Ba(g[1],g[2],g[3],g[4],g[5],g[6],g[7],g[8]);else"I"==g[0]&&a.Cb(g[1],g[2],g[3],g[4],g[5],g[6])}}});a.Ba=c("_addTrans",21,function(b,g,o,n,r,w,J,P){a.d=a.d?a.d:new Na;return a.d.Eb(b,g,o,n,r,w,J,P)});a.Cb=c("_addItem",19,function(b,g,o,n,r,w){var J;a.d=a.d?a.d:new Na;(J=a.d.Va(b))||
(J=a.Ba(b,"","","","","","",""));J.Db(g,o,n,r,w)});a.ae=c("_setVar",22,function(b){if(b&&""!=b&&i()){a.c();x.yc(U(b));a.R()&&f.P("&utmt=var",a.s,a.b)}});a.Kd=c("_setCustomVar",10,function(b,g,o,n){a.c();return x.wc(b,g,o,n)});a.Zc=c("_deleteCustomVar",35,function(b){a.c();x.Lb(b)});a.ld=c("_getVisitorCustomVar",50,function(b){a.c();return x.ec(b)});a.Sd=c("_setMaxCustomVariables",71,function(b){d.bb=b});a.link=c("_link",12,function(b,g){if(d.v&&b){a.c();R[E][G].href=a.Ra(b,g)}});a.qd=c("_linkByPost",
13,function(b,g){if(d.v&&b&&b.action){a.c();b.action=a.Ra(b.action,g)}});a.be=c("_setXKey",83,function(b,g,o){a.e.p(b,g,o)});a.ce=c("_setXValue",84,function(b,g,o){a.e.pb(b,g,o)});a.md=c("_getXKey",76,function(b,g){return a.e.Zb(b,g)});a.nd=c("_getXValue",77,function(b,g){return a.e.dc(b,g)});a.Tc=c("_clearXKey",72,function(b){a.e.w(b)});a.Uc=c("_clearXValue",73,function(b){a.e.Ia(b)});a.Yc=c("_createXObj",75,function(){a.c();return new Qa});a.tc=c("_sendXEvent",78,function(b){var g="";a.c();if(a.R()){g+=
"&utmt=event&utme="+U(a.e.rc(b))+a.gb();f.P(g,a.s,a.b,t,s)}});a.Xc=c("_createEventTracker",74,function(b){a.c();return new Ra(b,a)});a.ub=c("_trackEvent",4,function(b,g,o,n){a.c();var r=a.Oa;if(u!=b&&u!=g&&""!=b&&""!=g){r.w(5);r.Ia(5);(b=r.p(5,1,b)&&r.p(5,2,g)&&(u==o||r.p(5,3,o))&&(u==n||r.pb(5,1,n)))&&a.tc(r)}else b=t;return b});a.dd=function(){return d};a.Nd=c("_setDomainName",6,function(b){e=d.a=b});a.Oc=c("_addOrganic",14,function(b,g,o){d.M.splice(o?0:d.M[D],0,new Ha(b,g))});a.Sc=c("_clearOrganic",
17,function(){d.M=[]});a.Mc=c("_addIgnoredOrganic",15,function(b){X(d.ia,b)});a.Qc=c("_clearIgnoredOrganic",16,function(){d.ia=[]});a.Nc=c("_addIgnoredRef",31,function(b){X(d.ka,b)});a.Rc=c("_clearIgnoredRef",32,function(){d.ka=[]});a.ud=c("_setAllowHash",8,function(b){d.Da=b?1:0});a.Fd=c("_setCampaignTrack",36,function(b){d.Fa=b?1:0});a.Gd=c("_setClientInfo",66,function(b){d.W=b?1:0});a.cd=c("_getClientInfo",53,function(){return d.W});a.Hd=c("_setCookiePath",9,function(b){d.f=b});a.$d=c("_setTransactionDelim",
82,function(b){d.t=b});a.Jd=c("_setCookieTimeout",25,function(b){a.vc(b*1E3)});a.vc=c("_setCampaignCookieTimeout",29,function(b){d.Ea=b});a.Ld=c("_setDetectFlash",61,function(b){d.Z=b?1:0});a.ed=c("_getDetectFlash",65,function(){return d.Z});a.Md=c("_setDetectTitle",62,function(b){d.Y=b?1:0});a.fd=c("_getDetectTitle",56,function(){return d.Y});a.Pd=c("_setLocalGifPath",46,function(b){d.ga=b});a.gd=c("_getLocalGifPath",57,function(){return d.ga});a.Rd=c("_setLocalServerMode",92,function(){d.B=0});
a.Vd=c("_setRemoteServerMode",63,function(){d.B=1});a.Qd=c("_setLocalRemoteServerMode",47,function(){d.B=2});a.hd=c("_getServiceMode",59,function(){return d.B});a.Wd=c("_setSampleRate",45,function(b){d.O=b});a.Xd=c("_setSessionTimeout",27,function(b){a.zc(b*1E3)});a.zc=c("_setSessionCookieTimeout",26,function(b){d.kb=b});a.vd=c("_setAllowLinker",11,function(b){d.v=b?1:0});a.td=c("_setAllowAnchor",7,function(b){d.U=b?1:0});a.Cd=c("_setCampNameKey",41,function(b){d.ta=b});a.yd=c("_setCampContentKey",
38,function(b){d.ua=b});a.zd=c("_setCampIdKey",39,function(b){d.va=b});a.Ad=c("_setCampMediumKey",40,function(b){d.wa=b});a.Bd=c("_setCampNOKey",42,function(b){d.xa=b});a.Dd=c("_setCampSourceKey",43,function(b){d.ya=b});a.Ed=c("_setCampTermKey",44,function(b){d.za=b});a.xd=c("_setCampCIdKey",37,function(b){d.Aa=b});a.ad=c("_getAccount",64,function(){return a.s});a.sd=c("_setAccount",3,function(b){a.s=b});a.Td=c("_setNamespace",48,function(b){d.l=b?U(b):u});a.kd=c("_getVersion",60,function(){return na});
a.wd=c("_setAutoTrackOutbound",79,Ga);a.Yd=c("_setTrackOutboundSubdomains",81,Ga);a.Od=c("_setHrefExamineLimit",80,Ga);a.Ud=c("_setReferrerOverride",49,function(b){a.La=b});a.Id=c("_setCookiePersistence",24,function(b){a.Ac(b)});a.Ac=c("_setVisitorCookieTimeout",28,function(b){d.u=b})};var Ta=function(){var j=this,h=Aa(j);j.Ma=t;j.vb={};j.Gc=0;j._gasoDomain=u;j._gasoCPath=u;j.jd=h("_getTracker",0,function(k,m){return j.X(k,u,m)});j.X=h("_createTracker",55,function(k,m,i){m&&Q(23);i&&Q(67);if(m==u)m="~"+Y.Gc++;return Y.vb[m]=new Sa(m,k,i)});j.Ta=h("_getTrackerByName",51,function(k){k=k||"";return Y.vb[k]||Y.X(u,k)});j.Ic=function(){var k=aa[oa];return k&&k[pa]&&k[pa]()};j.Pc=h("_anonymizeIp",70,function(){j.Ma=s})};var Ua=t,Wa=function(){var j=this,h=Aa(j);j.Wc=h("_createAsyncTracker",33,function(k,m){return Y.X(k,m||"")});j.bd=h("_getAsyncTracker",34,function(k){return Y.Ta(k)});j.push=function(){Q(5);var k=arguments,m=0;Ua=s;for(var i=0;i<k[D];i++)try{if(typeof k[i]==="function")k[i]();else{var p="",l=k[i][0],a=l.lastIndexOf(".");if(a>0){p=l[H](0,a);l=l[H](a+1)}var c=p==la?Y:p==ma?Va:Y.Ta(p);c[l].apply(c,k[i][fa](1))}}catch(f){m++}return m}};var Y=new Ta;var Xa=aa[la];if(Xa&&typeof Xa._getTracker=="function")Y=Xa;else aa[la]=Y;var Va=new Wa;a:{var Ya=aa[ma],Za=t;if(Ya&&typeof Ya[ba]=="function"){Za=Ya.constructor==Array;if(!Za)break a}aa[ma]=Va;Za&&Va[ba].apply(Va,Ya)};})()
;
// $Id: googleanalytics.js,v 1.3.2.8 2009/03/04 07:25:47 hass Exp $

Drupal.behaviors.gaTrackerAttach = function(context) {

  // Attach onclick event to all links.
  $('a', context).click( function() {
    var ga = Drupal.settings.googleanalytics;
    // Expression to check for absolute internal links.
    var isInternal = new RegExp("^(https?):\/\/" + window.location.host, "i");
    // Expression to check for special links like gotwo.module /go/* links.
    var isInternalSpecial = new RegExp("(\/go\/.*)$", "i");
    // Expression to check for download links.
    var isDownload = new RegExp("\\.(" + ga.trackDownloadExtensions + ")$", "i");

    try {
      // Is the clicked URL internal?
      if (isInternal.test(this.href)) {
        // Is download tracking activated and the file extension configured for download tracking?
        if (ga.trackDownload && isDownload.test(this.href)) {
          // Download link clicked.
          var extension = isDownload.exec(this.href);
          pageTracker._trackEvent("Downloads", extension[1].toUpperCase(), this.href.replace(isInternal, ''));
        }
        else if (isInternalSpecial.test(this.href)) {
          // Keep the internal URL for Google Analytics website overlay intact.
          pageTracker._trackPageview(this.href.replace(isInternal, ''));
        }
      }
      else {
        if (ga.trackMailto && $(this).is("a[href^=mailto:]")) {
          // Mailto link clicked.
          pageTracker._trackEvent("Mails", "Click", this.href.substring(7));
        }
        else if (ga.trackOutgoing) {
          // External link clicked.
          pageTracker._trackEvent("Outgoing links", "Click", this.href);
        }
      }
    } catch(err) {}
  });
}
;
/* $Id: lightbox.js,v 1.5.2.6.2.136 2010/09/24 08:39:40 snpower Exp $ */

/**
 * jQuery Lightbox
 * @author
 *   Stella Power, <http://drupal.org/user/66894>
 *
 * Based on Lightbox v2.03.3 by Lokesh Dhakar
 * <http://www.huddletogether.com/projects/lightbox2/>
 * Also partially based on the jQuery Lightbox by Warren Krewenki
 *   <http://warren.mesozen.com>
 *
 * Permission has been granted to Mark Ashmead & other Drupal Lightbox2 module
 * maintainers to distribute this file via Drupal.org
 * Under GPL license.
 *
 * Slideshow, iframe and video functionality added by Stella Power.
 */

var Lightbox = {
  auto_modal : false,
  overlayOpacity : 0.8, // Controls transparency of shadow overlay.
  overlayColor : '000', // Controls colour of shadow overlay.
  disableCloseClick : true,
  // Controls the order of the lightbox resizing animation sequence.
  resizeSequence: 0, // 0: simultaneous, 1: width then height, 2: height then width.
  resizeSpeed: 'normal', // Controls the speed of the lightbox resizing animation.
  fadeInSpeed: 'normal', // Controls the speed of the image appearance.
  slideDownSpeed: 'slow', // Controls the speed of the image details appearance.
  minWidth: 240,
  borderSize : 10,
  boxColor : 'fff',
  fontColor : '000',
  topPosition : '',
  infoHeight: 20,
  alternative_layout : false,
  imageArray : [],
  imageNum : null,
  total : 0,
  activeImage : null,
  inprogress : false,
  disableResize : false,
  disableZoom : false,
  isZoomedIn : false,
  rtl : false,
  loopItems : false,
  keysClose : ['c', 'x', 27],
  keysPrevious : ['p', 37],
  keysNext : ['n', 39],
  keysZoom : ['z'],
  keysPlayPause : [32],

  // Slideshow options.
  slideInterval : 5000, // In milliseconds.
  showPlayPause : true,
  autoStart : true,
  autoExit : true,
  pauseOnNextClick : false, // True to pause the slideshow when the "Next" button is clicked.
  pauseOnPrevClick : true, // True to pause the slideshow when the "Prev" button is clicked.
  slideIdArray : [],
  slideIdCount : 0,
  isSlideshow : false,
  isPaused : false,
  loopSlides : false,

  // Iframe options.
  isLightframe : false,
  iframe_width : 600,
  iframe_height : 400,
  iframe_border : 1,

  // Video and modal options.
  enableVideo : false,
  flvPlayer : '/flvplayer.swf',
  flvFlashvars : '',
  isModal : false,
  isVideo : false,
  videoId : false,
  modalWidth : 400,
  modalHeight : 400,
  modalHTML : null,


  // initialize()
  // Constructor runs on completion of the DOM loading.
  // The function inserts html at the bottom of the page which is used
  // to display the shadow overlay and the image container.
  initialize: function() {

    var s = Drupal.settings.lightbox2;
    Lightbox.overlayOpacity = s.overlay_opacity;
    Lightbox.overlayColor = s.overlay_color;
    Lightbox.disableCloseClick = s.disable_close_click;
    Lightbox.resizeSequence = s.resize_sequence;
    Lightbox.resizeSpeed = s.resize_speed;
    Lightbox.fadeInSpeed = s.fade_in_speed;
    Lightbox.slideDownSpeed = s.slide_down_speed;
    Lightbox.borderSize = s.border_size;
    Lightbox.boxColor = s.box_color;
    Lightbox.fontColor = s.font_color;
    Lightbox.topPosition = s.top_position;
    Lightbox.rtl = s.rtl;
    Lightbox.loopItems = s.loop_items;
    Lightbox.keysClose = s.keys_close.split(" ");
    Lightbox.keysPrevious = s.keys_previous.split(" ");
    Lightbox.keysNext = s.keys_next.split(" ");
    Lightbox.keysZoom = s.keys_zoom.split(" ");
    Lightbox.keysPlayPause = s.keys_play_pause.split(" ");
    Lightbox.disableResize = s.disable_resize;
    Lightbox.disableZoom = s.disable_zoom;
    Lightbox.slideInterval = s.slideshow_interval;
    Lightbox.showPlayPause = s.show_play_pause;
    Lightbox.showCaption = s.show_caption;
    Lightbox.autoStart = s.slideshow_automatic_start;
    Lightbox.autoExit = s.slideshow_automatic_exit;
    Lightbox.pauseOnNextClick = s.pause_on_next_click;
    Lightbox.pauseOnPrevClick = s.pause_on_previous_click;
    Lightbox.loopSlides = s.loop_slides;
    Lightbox.alternative_layout = s.use_alt_layout;
    Lightbox.iframe_width = s.iframe_width;
    Lightbox.iframe_height = s.iframe_height;
    Lightbox.iframe_border = s.iframe_border;
    Lightbox.enableVideo = s.enable_video;
    if (s.enable_video) {
      Lightbox.flvPlayer = s.flvPlayer;
      Lightbox.flvFlashvars = s.flvFlashvars;
    }

    // Make the lightbox divs.
    var layout_class = (s.use_alt_layout ? 'lightbox2-alt-layout' : 'lightbox2-orig-layout');
    var output = '<div id="lightbox2-overlay" style="display: none;"></div>\
      <div id="lightbox" style="display: none;" class="' + layout_class + '">\
        <div id="outerImageContainer"></div>\
        <div id="imageDataContainer" class="clearfix">\
          <div id="imageData"></div>\
        </div>\
      </div>';
    var loading = '<div id="loading"><a href="#" id="loadingLink"></a></div>';
    var modal = '<div id="modalContainer" style="display: none;"></div>';
    var frame = '<div id="frameContainer" style="display: none;"></div>';
    var imageContainer = '<div id="imageContainer" style="display: none;"></div>';
    var details = '<div id="imageDetails"></div>';
    var bottomNav = '<div id="bottomNav"></div>';
    var image = '<img id="lightboxImage" alt="" />';
    var hoverNav = '<div id="hoverNav"><a id="prevLink" href="#"></a><a id="nextLink" href="#"></a></div>';
    var frameNav = '<div id="frameHoverNav"><a id="framePrevLink" href="#"></a><a id="frameNextLink" href="#"></a></div>';
    var hoverNav = '<div id="hoverNav"><a id="prevLink" title="' + Drupal.t('Previous') + '" href="#"></a><a id="nextLink" title="' + Drupal.t('Next') + '" href="#"></a></div>';
    var frameNav = '<div id="frameHoverNav"><a id="framePrevLink" title="' + Drupal.t('Previous') + '" href="#"></a><a id="frameNextLink" title="' + Drupal.t('Next') + '" href="#"></a></div>';
    var caption = '<span id="caption"></span>';
    var numberDisplay = '<span id="numberDisplay"></span>';
    var close = '<a id="bottomNavClose" title="' + Drupal.t('Close') + '" href="#"></a>';
    var zoom = '<a id="bottomNavZoom" href="#"></a>';
    var zoomOut = '<a id="bottomNavZoomOut" href="#"></a>';
    var pause = '<a id="lightshowPause" title="' + Drupal.t('Pause Slideshow') + '" href="#" style="display: none;"></a>';
    var play = '<a id="lightshowPlay" title="' + Drupal.t('Play Slideshow') + '" href="#" style="display: none;"></a>';

    $("body").append(output);
    $('#outerImageContainer').append(modal + frame + imageContainer + loading);
    if (!s.use_alt_layout) {
      $('#imageContainer').append(image + hoverNav);
      $('#imageData').append(details + bottomNav);
      $('#imageDetails').append(caption + numberDisplay);
      $('#bottomNav').append(frameNav + close + zoom + zoomOut + pause + play);
    }
    else {
      $('#outerImageContainer').append(bottomNav);
      $('#imageContainer').append(image);
      $('#bottomNav').append(close + zoom + zoomOut);
      $('#imageData').append(hoverNav + details);
      $('#imageDetails').append(caption + numberDisplay + pause + play);
    }

    // Setup onclick handlers.
    if (Lightbox.disableCloseClick) {
      $('#lightbox2-overlay').click(function() { Lightbox.end(); return false; } ).hide();
    }
    $('#loadingLink, #bottomNavClose').click(function() { Lightbox.end('forceClose'); return false; } );
    $('#prevLink, #framePrevLink').click(function() { Lightbox.changeData(Lightbox.activeImage - 1); return false; } );
    $('#nextLink, #frameNextLink').click(function() { Lightbox.changeData(Lightbox.activeImage + 1); return false; } );
    $('#bottomNavZoom').click(function() { Lightbox.changeData(Lightbox.activeImage, true); return false; } );
    $('#bottomNavZoomOut').click(function() { Lightbox.changeData(Lightbox.activeImage, false); return false; } );
    $('#lightshowPause').click(function() { Lightbox.togglePlayPause("lightshowPause", "lightshowPlay"); return false; } );
    $('#lightshowPlay').click(function() { Lightbox.togglePlayPause("lightshowPlay", "lightshowPause"); return false; } );

    // Fix positioning.
    $('#prevLink, #nextLink, #framePrevLink, #frameNextLink').css({ 'paddingTop': Lightbox.borderSize + 'px'});
    $('#imageContainer, #frameContainer, #modalContainer').css({ 'padding': Lightbox.borderSize + 'px'});
    $('#outerImageContainer, #imageDataContainer, #bottomNavClose').css({'backgroundColor': '#' + Lightbox.boxColor, 'color': '#'+Lightbox.fontColor});
    if (Lightbox.alternative_layout) {
      $('#bottomNavZoom, #bottomNavZoomOut').css({'bottom': Lightbox.borderSize + 'px', 'right': Lightbox.borderSize + 'px'});
    }
    else if (Lightbox.rtl == 1 && $.browser.msie) {
      $('#bottomNavZoom, #bottomNavZoomOut').css({'left': '0px'});
    }

    // Force navigation links to always be displayed
    if (s.force_show_nav) {
      $('#prevLink, #nextLink').addClass("force_show_nav");
    }

  },

  // initList()
  // Loops through anchor tags looking for 'lightbox', 'lightshow' and
  // 'lightframe', etc, references and applies onclick events to appropriate
  // links. You can rerun after dynamically adding images w/ajax.
  initList : function(context) {

    if (context == undefined || context == null) {
      context = document;
    }

    // Attach lightbox to any links with rel 'lightbox', 'lightshow' or
    // 'lightframe', etc.
    $("a[rel^='lightbox']:not(.lightbox-processed), area[rel^='lightbox']:not(.lightbox-processed)", context).addClass('lightbox-processed').click(function(e) {
      if (Lightbox.disableCloseClick) {
        $('#lightbox').unbind('click');
        $('#lightbox').click(function() { Lightbox.end('forceClose'); } );
      }
      Lightbox.start(this, false, false, false, false);
      if (e.preventDefault) { e.preventDefault(); }
      return false;
    });
    $("a[rel^='lightshow']:not(.lightbox-processed), area[rel^='lightshow']:not(.lightbox-processed)", context).addClass('lightbox-processed').click(function(e) {
      if (Lightbox.disableCloseClick) {
        $('#lightbox').unbind('click');
        $('#lightbox').click(function() { Lightbox.end('forceClose'); } );
      }
      Lightbox.start(this, true, false, false, false);
      if (e.preventDefault) { e.preventDefault(); }
      return false;
    });
    $("a[rel^='lightframe']:not(.lightbox-processed), area[rel^='lightframe']:not(.lightbox-processed)", context).addClass('lightbox-processed').click(function(e) {
      if (Lightbox.disableCloseClick) {
        $('#lightbox').unbind('click');
        $('#lightbox').click(function() { Lightbox.end('forceClose'); } );
      }
      Lightbox.start(this, false, true, false, false);
      if (e.preventDefault) { e.preventDefault(); }
      return false;
    });
    if (Lightbox.enableVideo) {
      $("a[rel^='lightvideo']:not(.lightbox-processed), area[rel^='lightvideo']:not(.lightbox-processed)", context).addClass('lightbox-processed').click(function(e) {
        if (Lightbox.disableCloseClick) {
          $('#lightbox').unbind('click');
          $('#lightbox').click(function() { Lightbox.end('forceClose'); } );
        }
        Lightbox.start(this, false, false, true, false);
        if (e.preventDefault) { e.preventDefault(); }
        return false;
      });
    }
    $("a[rel^='lightmodal']:not(.lightbox-processed), area[rel^='lightmodal']:not(.lightbox-processed)", context).addClass('lightbox-processed').click(function(e) {
      $('#lightbox').unbind('click');
      // Add classes from the link to the lightbox div - don't include lightbox-processed
      $('#lightbox').addClass($(this).attr('class'));
      $('#lightbox').removeClass('lightbox-processed');
      Lightbox.start(this, false, false, false, true);
      if (e.preventDefault) { e.preventDefault(); }
      return false;
    });
    $("#lightboxAutoModal:not(.lightbox-processed)", context).addClass('lightbox-processed').click(function(e) {
      Lightbox.auto_modal = true;
      $('#lightbox').unbind('click');
      Lightbox.start(this, false, false, false, true);
      if (e.preventDefault) { e.preventDefault(); }
      return false;
    });
  },

  // start()
  // Display overlay and lightbox. If image is part of a set, add siblings to
  // imageArray.
  start: function(imageLink, slideshow, lightframe, lightvideo, lightmodal) {

    Lightbox.isPaused = !Lightbox.autoStart;

    // Replaces hideSelectBoxes() and hideFlash() calls in original lightbox2.
    Lightbox.toggleSelectsFlash('hide');

    // Stretch overlay to fill page and fade in.
    var arrayPageSize = Lightbox.getPageSize();
    $("#lightbox2-overlay").hide().css({
      'width': '100%',
      'zIndex': '10090',
      'height': arrayPageSize[1] + 'px',
      'backgroundColor' : '#' + Lightbox.overlayColor
    });
    // Detect OS X FF2 opacity + flash issue.
    if (lightvideo && this.detectMacFF2()) {
      $("#lightbox2-overlay").removeClass("overlay_default");
      $("#lightbox2-overlay").addClass("overlay_macff2");
      $("#lightbox2-overlay").css({'opacity' : null});
    }
    else {
      $("#lightbox2-overlay").removeClass("overlay_macff2");
      $("#lightbox2-overlay").addClass("overlay_default");
      $("#lightbox2-overlay").css({'opacity' : Lightbox.overlayOpacity});
    }
    $("#lightbox2-overlay").fadeIn(Lightbox.fadeInSpeed);


    Lightbox.isSlideshow = slideshow;
    Lightbox.isLightframe = lightframe;
    Lightbox.isVideo = lightvideo;
    Lightbox.isModal = lightmodal;
    Lightbox.imageArray = [];
    Lightbox.imageNum = 0;

    var anchors = $(imageLink.tagName);
    var anchor = null;
    var rel_parts = Lightbox.parseRel(imageLink);
    var rel = rel_parts["rel"];
    var rel_group = rel_parts["group"];
    var title = (rel_parts["title"] ? rel_parts["title"] : imageLink.title);
    var rel_style = null;
    var i = 0;

    if (rel_parts["flashvars"]) {
      Lightbox.flvFlashvars = Lightbox.flvFlashvars + '&' + rel_parts["flashvars"];
    }

    // Set the title for image alternative text.
    var alt = imageLink.title;
    if (!alt) {
      var img = $(imageLink).find("img");
      if (img && $(img).attr("alt")) {
        alt = $(img).attr("alt");
      }
      else {
        alt = title;
      }
    }

    if ($(imageLink).attr('id') == 'lightboxAutoModal') {
      rel_style = rel_parts["style"];
      Lightbox.imageArray.push(['#lightboxAutoModal > *', title, alt, rel_style, 1]);
    }
    else {
      // Handle lightbox images with no grouping.
      if ((rel == 'lightbox' || rel == 'lightshow') && !rel_group) {
        Lightbox.imageArray.push([imageLink.href, title, alt]);
      }

      // Handle other items with no grouping.
      else if (!rel_group) {
        rel_style = rel_parts["style"];
        Lightbox.imageArray.push([imageLink.href, title, alt, rel_style]);
      }

      // Handle grouped items.
      else {

        // Loop through anchors and add them to imageArray.
        for (i = 0; i < anchors.length; i++) {
          anchor = anchors[i];
          if (anchor.href && typeof(anchor.href) == "string" && $(anchor).attr('rel')) {
            var rel_data = Lightbox.parseRel(anchor);
            var anchor_title = (rel_data["title"] ? rel_data["title"] : anchor.title);
            img_alt = anchor.title;
            if (!img_alt) {
              var anchor_img = $(anchor).find("img");
              if (anchor_img && $(anchor_img).attr("alt")) {
                img_alt = $(anchor_img).attr("alt");
              }
              else {
                img_alt = title;
              }
            }
            if (rel_data["rel"] == rel) {
              if (rel_data["group"] == rel_group) {
                if (Lightbox.isLightframe || Lightbox.isModal || Lightbox.isVideo) {
                  rel_style = rel_data["style"];
                }
                Lightbox.imageArray.push([anchor.href, anchor_title, img_alt, rel_style]);
              }
            }
          }
        }

        // Remove duplicates.
        for (i = 0; i < Lightbox.imageArray.length; i++) {
          for (j = Lightbox.imageArray.length-1; j > i; j--) {
            if (Lightbox.imageArray[i][0] == Lightbox.imageArray[j][0]) {
              Lightbox.imageArray.splice(j,1);
            }
          }
        }
        while (Lightbox.imageArray[Lightbox.imageNum][0] != imageLink.href) {
          Lightbox.imageNum++;
        }
      }
    }

    if (Lightbox.isSlideshow && Lightbox.showPlayPause && Lightbox.isPaused) {
      $('#lightshowPlay').show();
      $('#lightshowPause').hide();
    }

    // Calculate top and left offset for the lightbox.
    var arrayPageScroll = Lightbox.getPageScroll();
    var lightboxTop = arrayPageScroll[1] + (Lightbox.topPosition == '' ? (arrayPageSize[3] / 10) : Lightbox.topPosition) * 1;
    var lightboxLeft = arrayPageScroll[0];
    $('#frameContainer, #modalContainer, #lightboxImage').hide();
    $('#hoverNav, #prevLink, #nextLink, #frameHoverNav, #framePrevLink, #frameNextLink').hide();
    $('#imageDataContainer, #numberDisplay, #bottomNavZoom, #bottomNavZoomOut').hide();
    $('#outerImageContainer').css({'width': '250px', 'height': '250px'});
    $('#lightbox').css({
      'zIndex': '10500',
      'top': lightboxTop + 'px',
      'left': lightboxLeft + 'px'
    }).show();

    Lightbox.total = Lightbox.imageArray.length;
    Lightbox.changeData(Lightbox.imageNum);
  },

  // changeData()
  // Hide most elements and preload image in preparation for resizing image
  // container.
  changeData: function(imageNum, zoomIn) {

    if (Lightbox.inprogress === false) {
      if (Lightbox.total > 1 && ((Lightbox.isSlideshow && Lightbox.loopSlides) || (!Lightbox.isSlideshow && Lightbox.loopItems))) {
        if (imageNum >= Lightbox.total) imageNum = 0;
        if (imageNum < 0) imageNum = Lightbox.total - 1;
      }

      if (Lightbox.isSlideshow) {
        for (var i = 0; i < Lightbox.slideIdCount; i++) {
          window.clearTimeout(Lightbox.slideIdArray[i]);
        }
      }
      Lightbox.inprogress = true;
      Lightbox.activeImage = imageNum;

      if (Lightbox.disableResize && !Lightbox.isSlideshow) {
        zoomIn = true;
      }
      Lightbox.isZoomedIn = zoomIn;


      // Hide elements during transition.
      $('#loading').css({'zIndex': '10500'}).show();
      if (!Lightbox.alternative_layout) {
        $('#imageContainer').hide();
      }
      $('#frameContainer, #modalContainer, #lightboxImage').hide();
      $('#hoverNav, #prevLink, #nextLink, #frameHoverNav, #framePrevLink, #frameNextLink').hide();
      $('#imageDataContainer, #numberDisplay, #bottomNavZoom, #bottomNavZoomOut').hide();

      // Preload image content, but not iframe pages.
      if (!Lightbox.isLightframe && !Lightbox.isVideo && !Lightbox.isModal) {
        $("#lightbox #imageDataContainer").removeClass('lightbox2-alt-layout-data');
        imgPreloader = new Image();
        imgPreloader.onerror = function() { Lightbox.imgNodeLoadingError(this); };

        imgPreloader.onload = function() {
          var photo = document.getElementById('lightboxImage');
          photo.src = Lightbox.imageArray[Lightbox.activeImage][0];
          photo.alt = Lightbox.imageArray[Lightbox.activeImage][2];

          var imageWidth = imgPreloader.width;
          var imageHeight = imgPreloader.height;

          // Resize code.
          var arrayPageSize = Lightbox.getPageSize();
          var targ = { w:arrayPageSize[2] - (Lightbox.borderSize * 2), h:arrayPageSize[3] - (Lightbox.borderSize * 6) - (Lightbox.infoHeight * 4) - (arrayPageSize[3] / 10) };
          var orig = { w:imgPreloader.width, h:imgPreloader.height };

          // Image is very large, so show a smaller version of the larger image
          // with zoom button.
          if (zoomIn !== true) {
            var ratio = 1.0; // Shrink image with the same aspect.
            $('#bottomNavZoomOut, #bottomNavZoom').hide();
            if ((orig.w >= targ.w || orig.h >= targ.h) && orig.h && orig.w) {
              ratio = ((targ.w / orig.w) < (targ.h / orig.h)) ? targ.w / orig.w : targ.h / orig.h;
              if (!Lightbox.disableZoom && !Lightbox.isSlideshow) {
                $('#bottomNavZoom').css({'zIndex': '10500'}).show();
              }
            }

            imageWidth  = Math.floor(orig.w * ratio);
            imageHeight = Math.floor(orig.h * ratio);
          }

          else {
            $('#bottomNavZoom').hide();
            // Only display zoom out button if the image is zoomed in already.
            if ((orig.w >= targ.w || orig.h >= targ.h) && orig.h && orig.w) {
              // Only display zoom out button if not a slideshow and if the
              // buttons aren't disabled.
              if (!Lightbox.disableResize && Lightbox.isSlideshow === false && !Lightbox.disableZoom) {
                $('#bottomNavZoomOut').css({'zIndex': '10500'}).show();
              }
            }
          }

          photo.style.width = (imageWidth) + 'px';
          photo.style.height = (imageHeight) + 'px';
          Lightbox.resizeContainer(imageWidth, imageHeight);

          // Clear onLoad, IE behaves irratically with animated gifs otherwise.
          imgPreloader.onload = function() {};
        };

        imgPreloader.src = Lightbox.imageArray[Lightbox.activeImage][0];
        imgPreloader.alt = Lightbox.imageArray[Lightbox.activeImage][2];
      }

      // Set up frame size, etc.
      else if (Lightbox.isLightframe) {
        $("#lightbox #imageDataContainer").addClass('lightbox2-alt-layout-data');
        var src = Lightbox.imageArray[Lightbox.activeImage][0];
        $('#frameContainer').html('<iframe id="lightboxFrame" style="display: none;" src="'+src+'"></iframe>');

        // Enable swf support in Gecko browsers.
        if ($.browser.mozilla && src.indexOf('.swf') != -1) {
          setTimeout(function () {
            document.getElementById("lightboxFrame").src = Lightbox.imageArray[Lightbox.activeImage][0];
          }, 1000);
        }

        if (!Lightbox.iframe_border) {
          $('#lightboxFrame').css({'border': 'none'});
          $('#lightboxFrame').attr('frameborder', '0');
        }
        var iframe = document.getElementById('lightboxFrame');
        var iframeStyles = Lightbox.imageArray[Lightbox.activeImage][3];
        iframe = Lightbox.setStyles(iframe, iframeStyles);
        Lightbox.resizeContainer(parseInt(iframe.width, 10), parseInt(iframe.height, 10));
      }
      else if (Lightbox.isVideo || Lightbox.isModal) {
        $("#lightbox #imageDataContainer").addClass('lightbox2-alt-layout-data');
        var container = document.getElementById('modalContainer');
        var modalStyles = Lightbox.imageArray[Lightbox.activeImage][3];
        container = Lightbox.setStyles(container, modalStyles);
        if (Lightbox.isVideo) {
          Lightbox.modalHeight =  parseInt(container.height, 10) - 10;
          Lightbox.modalWidth =  parseInt(container.width, 10) - 10;
          Lightvideo.startVideo(Lightbox.imageArray[Lightbox.activeImage][0]);
        }
        Lightbox.resizeContainer(parseInt(container.width, 10), parseInt(container.height, 10));
      }
    }
  },

  // imgNodeLoadingError()
  imgNodeLoadingError: function(image) {
    var s = Drupal.settings.lightbox2;
    var original_image = Lightbox.imageArray[Lightbox.activeImage][0];
    if (s.display_image_size !== "") {
      original_image = original_image.replace(new RegExp("."+s.display_image_size), "");
    }
    Lightbox.imageArray[Lightbox.activeImage][0] = original_image;
    image.onerror = function() { Lightbox.imgLoadingError(image); };
    image.src = original_image;
  },

  // imgLoadingError()
  imgLoadingError: function(image) {
    var s = Drupal.settings.lightbox2;
    Lightbox.imageArray[Lightbox.activeImage][0] = s.default_image;
    image.src = s.default_image;
  },

  // resizeContainer()
  resizeContainer: function(imgWidth, imgHeight) {

    imgWidth = (imgWidth < Lightbox.minWidth ? Lightbox.minWidth : imgWidth);

    this.widthCurrent = $('#outerImageContainer').width();
    this.heightCurrent = $('#outerImageContainer').height();

    var widthNew = (imgWidth  + (Lightbox.borderSize * 2));
    var heightNew = (imgHeight  + (Lightbox.borderSize * 2));

    // Scalars based on change from old to new.
    this.xScale = ( widthNew / this.widthCurrent) * 100;
    this.yScale = ( heightNew / this.heightCurrent) * 100;

    // Calculate size difference between new and old image, and resize if
    // necessary.
    wDiff = this.widthCurrent - widthNew;
    hDiff = this.heightCurrent - heightNew;

    $('#modalContainer').css({'width': imgWidth, 'height': imgHeight});
    // Detect animation sequence.
    if (Lightbox.resizeSequence) {
      var animate1 = {width: widthNew};
      var animate2 = {height: heightNew};
      if (Lightbox.resizeSequence == 2) {
        animate1 = {height: heightNew};
        animate2 = {width: widthNew};
      }
      $('#outerImageContainer').animate(animate1, Lightbox.resizeSpeed).animate(animate2, Lightbox.resizeSpeed, 'linear', function() { Lightbox.showData(); });
    }
    // Simultaneous.
    else {
      $('#outerImageContainer').animate({'width': widthNew, 'height': heightNew}, Lightbox.resizeSpeed, 'linear', function() { Lightbox.showData(); });
    }

    // If new and old image are same size and no scaling transition is necessary
    // do a quick pause to prevent image flicker.
    if ((hDiff === 0) && (wDiff === 0)) {
      if ($.browser.msie) {
        Lightbox.pause(250);
      }
      else {
        Lightbox.pause(100);
      }
    }

    var s = Drupal.settings.lightbox2;
    if (!s.use_alt_layout) {
      $('#prevLink, #nextLink').css({'height': imgHeight + 'px'});
    }
    $('#imageDataContainer').css({'width': widthNew + 'px'});
  },

  // showData()
  // Display image and begin preloading neighbors.
  showData: function() {
    $('#loading').hide();

    if (Lightbox.isLightframe || Lightbox.isVideo || Lightbox.isModal) {
      Lightbox.updateDetails();
      if (Lightbox.isLightframe) {
        $('#frameContainer').show();
        if ($.browser.safari || Lightbox.fadeInSpeed === 0) {
          $('#lightboxFrame').css({'zIndex': '10500'}).show();
        }
        else {
          $('#lightboxFrame').css({'zIndex': '10500'}).fadeIn(Lightbox.fadeInSpeed);
        }
      }
      else {
        if (Lightbox.isVideo) {
          $("#modalContainer").html(Lightbox.modalHTML).click(function(){return false;}).css('zIndex', '10500').show();
        }
        else {
          var src = unescape(Lightbox.imageArray[Lightbox.activeImage][0]);
          if (Lightbox.imageArray[Lightbox.activeImage][4]) {
            $(src).appendTo("#modalContainer");
            $('#modalContainer').css({'zIndex': '10500'}).show();
          }
          else {
            // Use a callback to show the new image, otherwise you get flicker.
            $("#modalContainer").hide().load(src, function () {$('#modalContainer').css({'zIndex': '10500'}).show();});
          }
          $('#modalContainer').unbind('click');
        }
        // This might be needed in the Lightframe section above.
        //$('#modalContainer').css({'zIndex': '10500'}).show();
      }
    }

    // Handle display of image content.
    else {
      $('#imageContainer').show();
      if ($.browser.safari || Lightbox.fadeInSpeed === 0) {
        $('#lightboxImage').css({'zIndex': '10500'}).show();
      }
      else {
        $('#lightboxImage').css({'zIndex': '10500'}).fadeIn(Lightbox.fadeInSpeed);
      }
      Lightbox.updateDetails();
      this.preloadNeighborImages();
    }
    Lightbox.inprogress = false;

    // Slideshow specific stuff.
    if (Lightbox.isSlideshow) {
      if (!Lightbox.loopSlides && Lightbox.activeImage == (Lightbox.total - 1)) {
        if (Lightbox.autoExit) {
          Lightbox.slideIdArray[Lightbox.slideIdCount++] = setTimeout(function () {Lightbox.end('slideshow');}, Lightbox.slideInterval);
        }
      }
      else {
        if (!Lightbox.isPaused && Lightbox.total > 1) {
          Lightbox.slideIdArray[Lightbox.slideIdCount++] = setTimeout(function () {Lightbox.changeData(Lightbox.activeImage + 1);}, Lightbox.slideInterval);
        }
      }
      if (Lightbox.showPlayPause && Lightbox.total > 1 && !Lightbox.isPaused) {
        $('#lightshowPause').show();
        $('#lightshowPlay').hide();
      }
      else if (Lightbox.showPlayPause && Lightbox.total > 1) {
        $('#lightshowPause').hide();
        $('#lightshowPlay').show();
      }
    }

    // Adjust the page overlay size.
    var arrayPageSize = Lightbox.getPageSize();
    var arrayPageScroll = Lightbox.getPageScroll();
    var pageHeight = arrayPageSize[1];
    if (Lightbox.isZoomedIn && arrayPageSize[1] > arrayPageSize[3]) {
      var lightboxTop = (Lightbox.topPosition == '' ? (arrayPageSize[3] / 10) : Lightbox.topPosition) * 1;
      pageHeight = pageHeight + arrayPageScroll[1] + lightboxTop;
    }
    $('#lightbox2-overlay').css({'height': pageHeight + 'px', 'width': arrayPageSize[0] + 'px'});

    // Gecko browsers (e.g. Firefox, SeaMonkey, etc) don't handle pdfs as
    // expected.
    if ($.browser.mozilla) {
      if (Lightbox.imageArray[Lightbox.activeImage][0].indexOf(".pdf") != -1) {
        setTimeout(function () {
          document.getElementById("lightboxFrame").src = Lightbox.imageArray[Lightbox.activeImage][0];
        }, 1000);
      }
    }
  },

  // updateDetails()
  // Display caption, image number, and bottom nav.
  updateDetails: function() {

    $("#imageDataContainer").hide();

    var s = Drupal.settings.lightbox2;

    if (s.show_caption) {
      var caption = Lightbox.filterXSS(Lightbox.imageArray[Lightbox.activeImage][1]);
      if (!caption) caption = '';
      $('#caption').html(caption).css({'zIndex': '10500'}).show();
    }

    // If image is part of set display 'Image x of x'.
    var numberDisplay = null;
    if (s.image_count && Lightbox.total > 1) {
      var currentImage = Lightbox.activeImage + 1;
      if (!Lightbox.isLightframe && !Lightbox.isModal && !Lightbox.isVideo) {
        numberDisplay = s.image_count.replace(/\!current/, currentImage).replace(/\!total/, Lightbox.total);
      }
      else if (Lightbox.isVideo) {
        numberDisplay = s.video_count.replace(/\!current/, currentImage).replace(/\!total/, Lightbox.total);
      }
      else {
        numberDisplay = s.page_count.replace(/\!current/, currentImage).replace(/\!total/, Lightbox.total);
      }
      $('#numberDisplay').html(numberDisplay).css({'zIndex': '10500'}).show();
    }
    else {
      $('#numberDisplay').hide();
    }

    $("#imageDataContainer").hide().slideDown(Lightbox.slideDownSpeed, function() {
      $("#bottomNav").show();
    });
    if (Lightbox.rtl == 1) {
      $("#bottomNav").css({'float': 'left'});
    }
    Lightbox.updateNav();
  },

  // updateNav()
  // Display appropriate previous and next hover navigation.
  updateNav: function() {

    $('#hoverNav').css({'zIndex': '10500'}).show();
    var prevLink = '#prevLink';
    var nextLink = '#nextLink';

    // Slideshow is separated as we need to show play / pause button.
    if (Lightbox.isSlideshow) {
      if ((Lightbox.total > 1 && Lightbox.loopSlides) || Lightbox.activeImage !== 0) {
        $(prevLink).css({'zIndex': '10500'}).show().click(function() {
          if (Lightbox.pauseOnPrevClick) {
            Lightbox.togglePlayPause("lightshowPause", "lightshowPlay");
          }
          Lightbox.changeData(Lightbox.activeImage - 1); return false;
        });
      }
      else {
        $(prevLink).hide();
      }

      // If not last image in set, display next image button.
      if ((Lightbox.total > 1 && Lightbox.loopSlides) || Lightbox.activeImage != (Lightbox.total - 1)) {
        $(nextLink).css({'zIndex': '10500'}).show().click(function() {
          if (Lightbox.pauseOnNextClick) {
            Lightbox.togglePlayPause("lightshowPause", "lightshowPlay");
          }
          Lightbox.changeData(Lightbox.activeImage + 1); return false;
        });
      }
      // Safari browsers need to have hide() called again.
      else {
        $(nextLink).hide();
      }
    }

    // All other types of content.
    else {

      if ((Lightbox.isLightframe || Lightbox.isModal || Lightbox.isVideo) && !Lightbox.alternative_layout) {
        $('#frameHoverNav').css({'zIndex': '10500'}).show();
        $('#hoverNav').css({'zIndex': '10500'}).hide();
        prevLink = '#framePrevLink';
        nextLink = '#frameNextLink';
      }

      // If not first image in set, display prev image button.
      if ((Lightbox.total > 1 && Lightbox.loopItems) || Lightbox.activeImage !== 0) {
        // Unbind any other click handlers, otherwise this adds a new click handler
        // each time the arrow is clicked.
        $(prevLink).css({'zIndex': '10500'}).show().unbind().click(function() {
          Lightbox.changeData(Lightbox.activeImage - 1); return false;
        });
      }
      // Safari browsers need to have hide() called again.
      else {
        $(prevLink).hide();
      }

      // If not last image in set, display next image button.
      if ((Lightbox.total > 1 && Lightbox.loopItems) || Lightbox.activeImage != (Lightbox.total - 1)) {
        // Unbind any other click handlers, otherwise this adds a new click handler
        // each time the arrow is clicked.
        $(nextLink).css({'zIndex': '10500'}).show().unbind().click(function() {
          Lightbox.changeData(Lightbox.activeImage + 1); return false;
        });
      }
      // Safari browsers need to have hide() called again.
      else {
        $(nextLink).hide();
      }
    }

    // Don't enable keyboard shortcuts so forms will work.
    if (!Lightbox.isModal) {
      this.enableKeyboardNav();
    }
  },


  // enableKeyboardNav()
  enableKeyboardNav: function() {
    $(document).bind("keydown", this.keyboardAction);
  },

  // disableKeyboardNav()
  disableKeyboardNav: function() {
    $(document).unbind("keydown", this.keyboardAction);
  },

  // keyboardAction()
  keyboardAction: function(e) {
    if (e === null) { // IE.
      keycode = event.keyCode;
      escapeKey = 27;
    }
    else { // Mozilla.
      keycode = e.keyCode;
      escapeKey = e.DOM_VK_ESCAPE;
    }

    key = String.fromCharCode(keycode).toLowerCase();

    // Close lightbox.
    if (Lightbox.checkKey(Lightbox.keysClose, key, keycode)) {
      Lightbox.end('forceClose');
    }
    // Display previous image (p, <-).
    else if (Lightbox.checkKey(Lightbox.keysPrevious, key, keycode)) {
      if ((Lightbox.total > 1 && ((Lightbox.isSlideshow && Lightbox.loopSlides) || (!Lightbox.isSlideshow && Lightbox.loopItems))) || Lightbox.activeImage !== 0) {
        Lightbox.changeData(Lightbox.activeImage - 1);
      }

    }
    // Display next image (n, ->).
    else if (Lightbox.checkKey(Lightbox.keysNext, key, keycode)) {
      if ((Lightbox.total > 1 && ((Lightbox.isSlideshow && Lightbox.loopSlides) || (!Lightbox.isSlideshow && Lightbox.loopItems))) || Lightbox.activeImage != (Lightbox.total - 1)) {
        Lightbox.changeData(Lightbox.activeImage + 1);
      }
    }
    // Zoom in.
    else if (Lightbox.checkKey(Lightbox.keysZoom, key, keycode) && !Lightbox.disableResize && !Lightbox.disableZoom && !Lightbox.isSlideshow && !Lightbox.isLightframe) {
      if (Lightbox.isZoomedIn) {
        Lightbox.changeData(Lightbox.activeImage, false);
      }
      else if (!Lightbox.isZoomedIn) {
        Lightbox.changeData(Lightbox.activeImage, true);
      }
      return false;
    }
    // Toggle play / pause (space).
    else if (Lightbox.checkKey(Lightbox.keysPlayPause, key, keycode) && Lightbox.isSlideshow) {

      if (Lightbox.isPaused) {
        Lightbox.togglePlayPause("lightshowPlay", "lightshowPause");
      }
      else {
        Lightbox.togglePlayPause("lightshowPause", "lightshowPlay");
      }
      return false;
    }
  },

  preloadNeighborImages: function() {

    if ((Lightbox.total - 1) > Lightbox.activeImage) {
      preloadNextImage = new Image();
      preloadNextImage.src = Lightbox.imageArray[Lightbox.activeImage + 1][0];
    }
    if (Lightbox.activeImage > 0) {
      preloadPrevImage = new Image();
      preloadPrevImage.src = Lightbox.imageArray[Lightbox.activeImage - 1][0];
    }

  },

  end: function(caller) {
    var closeClick = (caller == 'slideshow' ? false : true);
    if (Lightbox.isSlideshow && Lightbox.isPaused && !closeClick) {
      return;
    }
    // To prevent double clicks on navigation links.
    if (Lightbox.inprogress === true && caller != 'forceClose') {
      return;
    }
    Lightbox.disableKeyboardNav();
    $('#lightbox').hide();
    $("#lightbox2-overlay").fadeOut();
    Lightbox.isPaused = true;
    Lightbox.inprogress = false;
    // Replaces calls to showSelectBoxes() and showFlash() in original
    // lightbox2.
    Lightbox.toggleSelectsFlash('visible');
    if (Lightbox.isSlideshow) {
      for (var i = 0; i < Lightbox.slideIdCount; i++) {
        window.clearTimeout(Lightbox.slideIdArray[i]);
      }
      $('#lightshowPause, #lightshowPlay').hide();
    }
    else if (Lightbox.isLightframe) {
      $('#frameContainer').empty().hide();
    }
    else if (Lightbox.isVideo || Lightbox.isModal) {
      if (!Lightbox.auto_modal) {
        $('#modalContainer').hide().html("");
      }
      Lightbox.auto_modal = false;
    }
  },


  // getPageScroll()
  // Returns array with x,y page scroll values.
  // Core code from - quirksmode.com.
  getPageScroll : function() {

    var xScroll, yScroll;

    if (self.pageYOffset || self.pageXOffset) {
      yScroll = self.pageYOffset;
      xScroll = self.pageXOffset;
    }
    else if (document.documentElement && (document.documentElement.scrollTop || document.documentElement.scrollLeft)) {  // Explorer 6 Strict.
      yScroll = document.documentElement.scrollTop;
      xScroll = document.documentElement.scrollLeft;
    }
    else if (document.body) {// All other Explorers.
      yScroll = document.body.scrollTop;
      xScroll = document.body.scrollLeft;
    }

    arrayPageScroll = [xScroll,yScroll];
    return arrayPageScroll;
  },

  // getPageSize()
  // Returns array with page width, height and window width, height.
  // Core code from - quirksmode.com.
  // Edit for Firefox by pHaez.

  getPageSize : function() {

    var xScroll, yScroll;

    if (window.innerHeight && window.scrollMaxY) {
      xScroll = window.innerWidth + window.scrollMaxX;
      yScroll = window.innerHeight + window.scrollMaxY;
    }
    else if (document.body.scrollHeight > document.body.offsetHeight) { // All but Explorer Mac.
      xScroll = document.body.scrollWidth;
      yScroll = document.body.scrollHeight;
    }
    else { // Explorer Mac...would also work in Explorer 6 Strict, Mozilla and Safari.
      xScroll = document.body.offsetWidth;
      yScroll = document.body.offsetHeight;
    }

    var windowWidth, windowHeight;

    if (self.innerHeight) { // All except Explorer.
      if (document.documentElement.clientWidth) {
        windowWidth = document.documentElement.clientWidth;
      }
      else {
        windowWidth = self.innerWidth;
      }
      windowHeight = self.innerHeight;
    }
    else if (document.documentElement && document.documentElement.clientHeight) { // Explorer 6 Strict Mode.
      windowWidth = document.documentElement.clientWidth;
      windowHeight = document.documentElement.clientHeight;
    }
    else if (document.body) { // Other Explorers.
      windowWidth = document.body.clientWidth;
      windowHeight = document.body.clientHeight;
    }
    // For small pages with total height less than height of the viewport.
    if (yScroll < windowHeight) {
      pageHeight = windowHeight;
    }
    else {
      pageHeight = yScroll;
    }
    // For small pages with total width less than width of the viewport.
    if (xScroll < windowWidth) {
      pageWidth = xScroll;
    }
    else {
      pageWidth = windowWidth;
    }
    arrayPageSize = new Array(pageWidth,pageHeight,windowWidth,windowHeight);
    return arrayPageSize;
  },


  // pause(numberMillis)
  pause : function(ms) {
    var date = new Date();
    var curDate = null;
    do { curDate = new Date(); }
    while (curDate - date < ms);
  },


  // toggleSelectsFlash()
  // Hide / unhide select lists and flash objects as they appear above the
  // lightbox in some browsers.
  toggleSelectsFlash: function (state) {
    if (state == 'visible') {
      $("select.lightbox_hidden, embed.lightbox_hidden, object.lightbox_hidden").show();
    }
    else if (state == 'hide') {
      $("select:visible, embed:visible, object:visible").not('#lightboxAutoModal select, #lightboxAutoModal embed, #lightboxAutoModal object').addClass("lightbox_hidden");
      $("select.lightbox_hidden, embed.lightbox_hidden, object.lightbox_hidden").hide();
    }
  },


  // parseRel()
  parseRel: function (link) {
    var parts = [];
    parts["rel"] = parts["title"] = parts["group"] = parts["style"] = parts["flashvars"] = null;
    if (!$(link).attr('rel')) return parts;
    parts["rel"] = $(link).attr('rel').match(/\w+/)[0];

    if ($(link).attr('rel').match(/\[(.*)\]/)) {
      var info = $(link).attr('rel').match(/\[(.*?)\]/)[1].split('|');
      parts["group"] = info[0];
      parts["style"] = info[1];
      if (parts["style"] != undefined && parts["style"].match(/flashvars:\s?(.*?);/)) {
        parts["flashvars"] = parts["style"].match(/flashvars:\s?(.*?);/)[1];
      }
    }
    if ($(link).attr('rel').match(/\[.*\]\[(.*)\]/)) {
      parts["title"] = $(link).attr('rel').match(/\[.*\]\[(.*)\]/)[1];
    }
    return parts;
  },

  // setStyles()
  setStyles: function(item, styles) {
    item.width = Lightbox.iframe_width;
    item.height = Lightbox.iframe_height;
    item.scrolling = "auto";

    if (!styles) return item;
    var stylesArray = styles.split(';');
    for (var i = 0; i< stylesArray.length; i++) {
      if (stylesArray[i].indexOf('width:') >= 0) {
        var w = stylesArray[i].replace('width:', '');
        item.width = jQuery.trim(w);
      }
      else if (stylesArray[i].indexOf('height:') >= 0) {
        var h = stylesArray[i].replace('height:', '');
        item.height = jQuery.trim(h);
      }
      else if (stylesArray[i].indexOf('scrolling:') >= 0) {
        var scrolling = stylesArray[i].replace('scrolling:', '');
        item.scrolling = jQuery.trim(scrolling);
      }
      else if (stylesArray[i].indexOf('overflow:') >= 0) {
        var overflow = stylesArray[i].replace('overflow:', '');
        item.overflow = jQuery.trim(overflow);
      }
    }
    return item;
  },


  // togglePlayPause()
  // Hide the pause / play button as appropriate.  If pausing the slideshow also
  // clear the timers, otherwise move onto the next image.
  togglePlayPause: function(hideId, showId) {
    if (Lightbox.isSlideshow && hideId == "lightshowPause") {
      for (var i = 0; i < Lightbox.slideIdCount; i++) {
        window.clearTimeout(Lightbox.slideIdArray[i]);
      }
    }
    $('#' + hideId).hide();
    $('#' + showId).show();

    if (hideId == "lightshowPlay") {
      Lightbox.isPaused = false;
      if (!Lightbox.loopSlides && Lightbox.activeImage == (Lightbox.total - 1)) {
        Lightbox.end();
      }
      else if (Lightbox.total > 1) {
        Lightbox.changeData(Lightbox.activeImage + 1);
      }
    }
    else {
      Lightbox.isPaused = true;
    }
  },

  triggerLightbox: function (rel_type, rel_group) {
    if (rel_type.length) {
      if (rel_group && rel_group.length) {
        $("a[rel^='" + rel_type +"\[" + rel_group + "\]'], area[rel^='" + rel_type +"\[" + rel_group + "\]']").eq(0).trigger("click");
      }
      else {
        $("a[rel^='" + rel_type +"'], area[rel^='" + rel_type +"']").eq(0).trigger("click");
      }
    }
  },

  detectMacFF2: function() {
    var ua = navigator.userAgent.toLowerCase();
    if (/firefox[\/\s](\d+\.\d+)/.test(ua)) {
      var ffversion = new Number(RegExp.$1);
      if (ffversion < 3 && ua.indexOf('mac') != -1) {
        return true;
      }
    }
    return false;
  },

  checkKey: function(keys, key, code) {
    return (jQuery.inArray(key, keys) != -1 || jQuery.inArray(String(code), keys) != -1);
  },

  filterXSS: function(str, allowed_tags) {
    var output = "";
    $.ajax({
      url: Drupal.settings.basePath + 'system/lightbox2/filter-xss',
      data: {
        'string' : str,
        'allowed_tags' : allowed_tags
      },
      type: "POST",
      async: false,
      dataType:  "json",
      success: function(data) {
        output = data;
      }
    });
    return output;
  }

};

// Initialize the lightbox.
Drupal.behaviors.initLightbox = function (context) {
  $('body:not(.lightbox-processed)', context).addClass('lightbox-processed').each(function() {
    Lightbox.initialize();
    return false; // Break the each loop.
  });

  // Attach lightbox to any links with lightbox rels.
  Lightbox.initList(context);
  $('#lightboxAutoModal', context).triggerHandler('click');
};

;
