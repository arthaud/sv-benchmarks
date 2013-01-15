(set-info :origin "SVCOMP13 benchmarks generated by Arie Gurfinkel")
(set-info :status unsat)
(set-logic HORN)
(declare-fun cp-rel-bb.i
             (Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real)
             Bool)
(declare-fun cp-rel-entry () Bool)
(declare-fun cp-rel-bb2.i.i.i.i171.i.i.i.i.i () Bool)
(declare-fun cp-rel-__UFO__0
             (Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real
              Real)
             Bool)
(assert |cp-rel-entry|)
(assert (forall ((?A Real) (?B Real) (?C Real) (?D Real) (?E Real) (?F Real) (?G Real) (?H Real) (?I Real) (?J Real) (?K Real) (?L Real) (?M Real) (?N Real) (?O Real) (?P Real) (?Q Real) (?R Real) (?S Real) (?T Real) (?U Real) (?V Real) (?W Real) (?X Bool) )(let (($x258385 (|cp-rel-bb.i| ?A ?B ?C ?D ?E ?F ?G ?H ?I ?J ?K ?L ?M ?N ?O ?P ?Q ?R ?S ?T ?U ?V ?W)))
(let (($x345349 (= ?X true)))
(let (($x542637 (and |cp-rel-entry| (<= ?W 0.0) (>= ?V 0.0) (<= ?V 0.0) (>= ?U 0.0) (<= ?U 0.0) (>= ?T 0.0) (<= ?T 0.0) (>= ?S 0.0) (<= ?S 0.0) (>= ?R 0.0) (<= ?R 0.0) (>= ?Q 0.0) (<= ?Q 0.0) (>= ?P 0.0) (<= ?P 0.0) (>= ?O 0.0) (<= ?O 0.0) (>= ?N 456.0) (<= ?N 456.0) (>= ?M 123.0) (<= ?M 123.0) (>= ?L 0.0) (<= ?L 0.0) (>= ?K 0.0) (<= ?K 0.0) (>= ?J 0.0) (<= ?J 0.0) (>= ?I 0.0) (<= ?I 0.0) (>= ?H 0.0) (<= ?H 0.0) (>= ?G 0.0) (<= ?G 0.0) (>= ?F 0.0) (<= ?F 0.0) (>= ?E 0.0) (<= ?E 0.0) (>= ?D 0.0) (<= ?D 0.0) (>= ?C 0.0) (<= ?C 0.0) (>= ?B 0.0) (<= ?B 0.0) (>= ?A 0.0) (<= ?A 0.0) $x345349 (>= ?W 0.0))))
(=> $x542637 $x258385)))))
)
(assert (forall ((?A Real) (?B Real) (?C Real) (?D Real) (?E Real) (?F Real) (?G Real) (?H Real) (?I Real) (?J Real) (?K Real) (?L Real) (?M Real) (?N Real) (?O Real) (?P Real) (?Q Real) (?R Real) (?S Real) (?T Real) (?U Real) (?V Real) (?W Real) (?X Real) (?Y Real) (?Z Real) (?A1 Real) (?B1 Real) (?C1 Real) (?D1 Real) (?E1 Real) (?F1 Real) (?G1 Real) (?H1 Real) (?I1 Real) (?J1 Real) (?K1 Real) (?L1 Real) (?M1 Real) (?N1 Real) (?O1 Real) (?P1 Real) (?Q1 Real) (?R1 Real) (?S1 Real) (?T1 Real) (?U1 Bool) (?V1 Bool) (?W1 Bool) (?X1 Bool) (?Y1 Bool) (?Z1 Bool) (?A2 Bool) (?B2 Bool) (?C2 Bool) (?D2 Bool) (?E2 Bool) (?F2 Bool) (?G2 Bool) (?H2 Bool) (?I2 Bool) (?J2 Bool) (?K2 Bool) (?L2 Bool) (?M2 Bool) (?N2 Bool) (?O2 Bool) (?P2 Bool) (?Q2 Bool) (?R2 Bool) (?S2 Bool) (?T2 Bool) (?U2 Bool) (?V2 Bool) (?W2 Bool) (?X2 Bool) (?Y2 Bool) (?Z2 Bool) (?A3 Bool) (?B3 Bool) (?C3 Bool) (?D3 Bool) (?E3 Bool) (?F3 Bool) (?G3 Bool) (?H3 Bool) (?I3 Bool) (?J3 Bool) (?K3 Bool) (?L3 Bool) (?M3 Bool) (?N3 Bool) (?O3 Bool) (?P3 Bool) (?Q3 Bool) (?R3 Bool) (?S3 Bool) (?T3 Bool) (?U3 Bool) (?V3 Bool) (?W3 Bool) (?X3 Bool) (?Y3 Bool) (?Z3 Bool) (?A4 Bool) (?B4 Bool) (?C4 Bool) (?D4 Bool) (?E4 Bool) (?F4 Bool) (?G4 Bool) (?H4 Bool) (?I4 Bool) (?J4 Bool) (?K4 Bool) (?L4 Bool) (?M4 Bool) (?N4 Bool) (?O4 Bool) (?P4 Bool) (?Q4 Bool) (?R4 Bool) (?S4 Bool) (?T4 Bool) (?U4 Bool) (?V4 Bool) (?W4 Real) (?X4 Real) (?Y4 Real) (?Z4 Real) (?A5 Real) (?B5 Real) (?C5 Real) (?D5 Real) (?E5 Real) (?F5 Real) (?G5 Real) (?H5 Real) )(let (($x733939 (|cp-rel-bb.i| ?X ?Y ?Z ?A1 ?B1 ?C1 ?D1 ?E1 ?F1 ?G1 ?H1 ?I1 ?J1 ?K1 ?L1 ?M1 ?N1 ?O1 ?P1 ?Q1 ?R1 ?S1 ?T1)))
(let (($x849205 (not ?Y1)))
(let (($x871992 (or $x849205 ?Z1)))
(let (($x185951 (not ?H2)))
(let (($x663592 (or $x185951 ?I2)))
(let (($x52649 (not ?O2)))
(let (($x289736 (or $x52649 ?P2)))
(let (($x417815 (not ?C3)))
(let (($x526106 (or $x417815 ?D3)))
(let (($x360367 (not ?J3)))
(let (($x873387 (or $x360367 ?K3)))
(let (($x841938 (>= ?S1 ?V)))
(let (($x416918 (<= ?S1 ?V)))
(let (($x872533 (>= ?R1 ?U)))
(let (($x647756 (<= ?R1 ?U)))
(let (($x268240 (>= ?Q1 ?T)))
(let (($x276218 (<= ?Q1 ?T)))
(let (($x611110 (>= ?P1 ?S)))
(let (($x584155 (<= ?P1 ?S)))
(let (($x513037 (>= ?N1 ?Q)))
(let (($x422795 (<= ?N1 ?Q)))
(let (($x574989 (>= ?M1 ?P)))
(let (($x851721 (<= ?M1 ?P)))
(let (($x845752 (>= ?K1 ?N)))
(let (($x574631 (<= ?K1 ?N)))
(let (($x873348 (>= ?J1 ?M)))
(let (($x181810 (<= ?J1 ?M)))
(let (($x171569 (>= ?I1 ?L)))
(let (($x845975 (<= ?I1 ?L)))
(let (($x26994 (>= ?H1 ?K)))
(let (($x889646 (<= ?H1 ?K)))
(let (($x78521 (>= ?G1 ?J)))
(let (($x171586 (<= ?G1 ?J)))
(let (($x235862 (>= ?F1 ?I)))
(let (($x419542 (<= ?F1 ?I)))
(let (($x267514 (>= ?E1 ?H)))
(let (($x696311 (<= ?E1 ?H)))
(let (($x175282 (>= ?D1 ?G)))
(let (($x584160 (<= ?D1 ?G)))
(let (($x338777 (>= ?C1 ?F)))
(let (($x331778 (<= ?C1 ?F)))
(let (($x561957 (>= ?B1 ?E)))
(let (($x578810 (<= ?B1 ?E)))
(let (($x454891 (>= ?A1 ?D)))
(let (($x217007 (<= ?A1 ?D)))
(let (($x495343 (>= ?Z ?C)))
(let (($x573489 (<= ?Z ?C)))
(let (($x851026 (>= ?Y ?B)))
(let (($x867152 (<= ?Y ?B)))
(let (($x526409 (>= ?X ?W4)))
(let (($x583043 (<= ?X ?W4)))
(let (($x512240 (and ?F2 $x583043 $x526409 $x867152 $x851026 $x573489 $x495343 $x217007 $x454891 $x578810 $x561957 $x331778 $x338777 $x584160 $x175282 $x696311 $x267514 $x419542 $x235862 $x171586 $x78521 $x889646 $x26994 $x845975 $x171569 $x181810 $x873348 $x574631 $x845752 (<= ?L1 2.0) (>= ?L1 2.0) $x851721 $x574989 $x422795 $x513037 (<= ?O1 456.0) (>= ?O1 456.0) $x584155 $x611110 $x276218 $x268240 $x647756 $x872533 $x416918 $x841938 (<= ?T1 1.0) (>= ?T1 1.0))))
(let (($x574483 (>= ?T1 ?W)))
(let (($x503212 (<= ?T1 ?W)))
(let (($x849061 (>= ?O1 ?R)))
(let (($x575330 (<= ?O1 ?R)))
(let (($x391682 (>= ?L1 ?O)))
(let (($x334093 (<= ?L1 ?O)))
(let (($x890127 (not ?M2)))
(let (($x844194 (and ?H2 $x890127 $x583043 $x526409 $x867152 $x851026 $x573489 $x495343 $x217007 $x454891 $x578810 $x561957 $x331778 $x338777 $x584160 $x175282 $x696311 $x267514 $x419542 $x235862 $x171586 $x78521 $x889646 $x26994 $x845975 $x171569 $x181810 $x873348 $x574631 $x845752 $x334093 $x391682 $x851721 $x574989 $x422795 $x513037 $x575330 $x849061 $x584155 $x611110 $x276218 $x268240 $x647756 $x872533 (<= ?S1 1.0) (>= ?S1 1.0) $x503212 $x574483)))
(let (($x513958 (not ?T2)))
(let (($x850109 (and ?O2 $x513958 $x583043 $x526409 $x867152 $x851026 $x573489 $x495343 $x217007 $x454891 $x578810 $x561957 $x331778 $x338777 $x584160 $x175282 $x696311 $x267514 $x419542 $x235862 $x171586 $x78521 $x889646 $x26994 $x845975 $x171569 $x181810 $x873348 (<= ?K1 0.0) (>= ?K1 0.0) $x334093 $x391682 $x851721 $x574989 $x422795 $x513037 $x575330 $x849061 $x584155 $x611110 $x276218 $x268240 (<= ?R1 1.0) (>= ?R1 1.0) $x416918 $x841938 $x503212 $x574483)))
(let (($x848967 (not ?A3)))
(let (($x132501 (and ?V2 $x848967 $x583043 $x526409 $x867152 $x851026 $x573489 $x495343 $x217007 $x454891 $x578810 $x561957 $x331778 $x338777 $x584160 $x175282 $x696311 $x267514 (<= ?F1 1.0) (>= ?F1 1.0) $x171586 $x78521 $x889646 $x26994 $x845975 $x171569 $x181810 $x873348 $x574631 $x845752 $x334093 $x391682 (<= ?M1 1.0) (>= ?M1 1.0) $x422795 $x513037 $x575330 $x849061 (<= ?P1 123.0) (>= ?P1 123.0) $x276218 $x268240 $x647756 $x872533 $x416918 $x841938 $x503212 $x574483)))
(let (($x511712 (not ?H3)))
(let (($x209863 (and ?C3 $x511712 $x583043 $x526409 $x867152 $x851026 $x573489 $x495343 $x217007 $x454891 $x578810 $x561957 $x331778 $x338777 $x584160 $x175282 (<= ?E1 1.0) (>= ?E1 1.0) $x419542 $x235862 $x171586 $x78521 $x889646 $x26994 $x845975 $x171569 $x181810 $x873348 $x574631 $x845752 $x334093 $x391682 $x851721 $x574989 (<= ?N1 2.0) (>= ?N1 2.0) $x575330 $x849061 $x584155 $x611110 (<= ?Q1 456.0) (>= ?Q1 456.0) $x647756 $x872533 $x416918 $x841938 $x503212 $x574483)))
(let (($x577759 (not ?O3)))
(let (($x873381 (and ?J3 $x577759 $x583043 $x526409 $x867152 $x851026 $x573489 $x495343 $x217007 $x454891 $x578810 $x561957 $x331778 $x338777 (<= ?D1 1.0) (>= ?D1 1.0) $x696311 $x267514 $x419542 $x235862 $x171586 $x78521 $x889646 $x26994 $x845975 $x171569 $x181810 $x873348 $x574631 $x845752 $x334093 $x391682 $x851721 $x574989 $x422795 $x513037 $x575330 $x849061 $x584155 $x611110 $x276218 $x268240 $x647756 $x872533 $x416918 $x841938 $x503212 $x574483)))
(let (($x250724 (and ?Q3 (not ?V3) $x583043 $x526409 $x867152 $x851026 $x573489 $x495343 $x217007 $x454891 $x578810 $x561957 (<= ?C1 1.0) (>= ?C1 1.0) $x584160 $x175282 $x696311 $x267514 $x419542 $x235862 $x171586 $x78521 $x889646 $x26994 $x845975 $x171569 $x181810 $x873348 (<= ?K1 666.0) (>= ?K1 666.0) $x334093 $x391682 $x851721 $x574989 $x422795 $x513037 $x575330 $x849061 $x584155 $x611110 $x276218 $x268240 $x647756 $x872533 $x416918 $x841938 $x503212 $x574483)))
(let (($x851206 (not ?C4)))
(let (($x846576 (and ?X3 $x851206 $x583043 $x526409 $x867152 $x851026 $x573489 $x495343 $x217007 $x454891 (<= ?B1 1.0) (>= ?B1 1.0) $x331778 $x338777 $x584160 $x175282 $x696311 $x267514 $x419542 $x235862 (<= ?G1 1.0) (>= ?G1 1.0) (<= ?H1 2.0) (>= ?H1 2.0) (<= ?I1 3.0) (>= ?I1 3.0) $x181810 $x873348 $x574631 $x845752 $x334093 $x391682 $x851721 $x574989 $x422795 $x513037 $x575330 $x849061 $x584155 $x611110 $x276218 $x268240 $x647756 $x872533 $x416918 $x841938 $x503212 $x574483)))
(let (($x512426 (not ?J4)))
(let (($x691221 (and ?E4 $x512426 $x583043 $x526409 $x867152 $x851026 $x573489 $x495343 (<= ?A1 1.0) (>= ?A1 1.0) $x578810 $x561957 $x331778 $x338777 $x584160 $x175282 $x696311 $x267514 $x419542 $x235862 $x171586 $x78521 $x889646 $x26994 $x845975 $x171569 $x181810 $x873348 $x574631 $x845752 $x334093 $x391682 $x851721 $x574989 (<= ?N1 1.0) (>= ?N1 1.0) $x575330 $x849061 $x584155 $x611110 (<= ?Q1 123.0) (>= ?Q1 123.0) $x647756 $x872533 $x416918 $x841938 $x503212 $x574483)))
(let (($x584129 (not ?Q4)))
(let (($x644704 (and ?L4 $x584129 $x583043 $x526409 $x867152 $x851026 (<= ?Z 1.0) (>= ?Z 1.0) $x217007 $x454891 $x578810 $x561957 $x331778 $x338777 $x584160 $x175282 $x696311 $x267514 $x419542 $x235862 $x171586 $x78521 $x889646 $x26994 $x845975 $x171569 (<= ?J1 777.0) (>= ?J1 777.0) $x574631 $x845752 $x334093 $x391682 $x851721 $x574989 $x422795 $x513037 $x575330 $x849061 $x584155 $x611110 $x276218 $x268240 $x647756 $x872533 $x416918 $x841938 $x503212 $x574483)))
(let (($x526305 (and ?S4 (not ?V4) $x583043 $x526409 (<= ?Y 1.0) (>= ?Y 1.0) $x573489 $x495343 $x217007 $x454891 $x578810 $x561957 $x331778 $x338777 $x584160 $x175282 $x696311 $x267514 $x419542 $x235862 $x171586 $x78521 $x889646 $x26994 $x845975 $x171569 $x181810 $x873348 $x574631 $x845752 $x334093 $x391682 $x851721 $x574989 (<= ?N1 1.0) (>= ?N1 1.0) $x575330 $x849061 $x584155 $x611110 (<= ?Q1 123.0) (>= ?Q1 123.0) $x647756 $x872533 $x416918 $x841938 $x503212 $x574483)))
(let (($x368053 (|cp-rel-bb.i| ?A ?B ?C ?D ?E ?F ?G ?H ?I ?J ?K ?L ?M ?N ?O ?P ?Q ?R ?S ?T ?U ?V ?W)))
(let (($x215258 (and $x368053 (= ?U4 (= ?B 0.0)) (= ?Q4 (= ?G5 0.0)) (= ?N4 (= ?C 0.0)) (= ?J4 (= ?F5 0.0)) (= ?G4 (= ?D 0.0)) (= ?C4 (= ?E5 0.0)) (= ?Z3 (= ?E 0.0)) (= ?V3 (= ?D5 0.0)) (= ?S3 (= ?F 0.0)) (= ?O3 (= ?C5 0.0)) (= ?L3 (= ?G 0.0)) (= ?H3 (= ?B5 0.0)) (= ?E3 (= ?H 0.0)) (= ?A3 (= ?A5 0.0)) (= ?X2 (= ?I 0.0)) (= ?T2 (= ?Z4 0.0)) (= ?Q2 (= ?U 0.0)) (= ?M2 (= ?Y4 0.0)) (= ?J2 (= ?V 0.0)) (= ?D2 (= ?X4 0.0)) (= ?A2 (= ?W 0.0)) (= ?W4 (+ 1.0 ?A)) (= ?X1 (not (<= ?A 3.0))) (or $x526305 $x644704 $x691221 $x846576 $x250724 $x873381 $x209863 $x132501 $x850109 $x844194 $x512240) (or (not ?S4) ?T4) (or (not ?S4) (and ?O4 ?T4 ?U4)) (or (not ?O4) (and ?P4 (not ?R4)) (and ?R4 (not ?P4))) (or (not ?O4) (and ?L4 ?P4 ?Q4) (and ?H4 ?R4 (not ?N4))) (or (not ?L4) ?M4) (or (not ?L4) (and ?H4 ?M4 ?N4)) (or (not ?H4) (and ?I4 (not ?K4)) (and ?K4 (not ?I4))) (or (not ?H4) (and ?E4 ?I4 ?J4) (and ?A4 ?K4 (not ?G4))) (or (not ?E4) ?F4) (or (not ?E4) (and ?A4 ?F4 ?G4)) (or (not ?A4) (and ?B4 (not ?D4)) (and ?D4 (not ?B4))) (or (not ?A4) (and ?X3 ?B4 ?C4) (and ?T3 ?D4 (not ?Z3))) (or (not ?X3) ?Y3) (or (not ?X3) (and ?T3 ?Y3 ?Z3)) (or (not ?T3) (and ?U3 (not ?W3)) (and ?W3 (not ?U3))) (or (not ?T3) (and ?Q3 ?U3 ?V3) (and ?M3 ?W3 (not ?S3))) (or (not ?Q3) ?R3) (or (not ?Q3) (and ?M3 ?R3 ?S3)) (or (not ?M3) (and ?N3 (not ?P3)) (and ?P3 (not ?N3))) (or (not ?M3) (and ?J3 ?N3 ?O3) (and ?F3 ?P3 (not ?L3))) $x873387 (or $x360367 (and ?F3 ?K3 ?L3)) (or (not ?F3) (and ?G3 (not ?I3)) (and ?I3 (not ?G3))) (or (not ?F3) (and ?C3 ?G3 ?H3) (and ?Y2 ?I3 (not ?E3))) $x526106 (or $x417815 (and ?Y2 ?D3 ?E3)) (or (not ?Y2) (and ?Z2 (not ?B3)) (and ?B3 (not ?Z2))) (or (not ?Y2) (and ?V2 ?Z2 ?A3) (and ?R2 ?B3 (not ?X2))) (or (not ?V2) ?W2) (or (not ?V2) (and ?R2 ?W2 ?X2)) (or (not ?R2) (and ?S2 (not ?U2)) (and ?U2 (not ?S2))) (or (not ?R2) (and ?O2 ?S2 ?T2) (and ?K2 ?U2 (not ?Q2))) $x289736 (or $x52649 (and ?K2 ?P2 ?Q2)) (or (not ?K2) (and ?L2 (not ?N2)) (and ?N2 (not ?L2))) (or (not ?K2) (and ?H2 ?L2 ?M2) (and ?B2 ?N2 (not ?J2))) $x663592 (or $x185951 (and ?B2 ?I2 ?J2)) (or (not ?F2) ?G2) (or (not ?F2) (and ?Y1 ?G2 (not ?D2))) (or (not ?B2) (and ?C2 (not ?E2)) (and ?E2 (not ?C2))) (or (not ?B2) (and ?Y1 ?C2 ?D2) (and ?U1 ?E2 (not ?A2))) $x871992 (or $x849205 (and ?U1 ?Z1 ?A2)) (or (not ?U1) ?W1) (or (not ?U1) (and ?V1 ?W1 (not ?X1))) (= ?V4 (= ?H5 0.0)))))
(=> $x215258 $x733939))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
)
(assert (forall ((?A Real) (?B Real) (?C Real) (?D Real) (?E Real) (?F Real) (?G Real) (?H Real) (?I Real) (?J Real) (?K Real) (?L Real) (?M Real) (?N Real) (?O Real) (?P Real) (?Q Real) (?R Real) (?S Real) (?T Real) (?U Real) (?V Real) (?W Real) (?X Bool) (?Y Bool) (?Z Bool) (?A1 Bool) (?B1 Bool) (?C1 Bool) (?D1 Bool) (?E1 Bool) (?F1 Bool) (?G1 Bool) (?H1 Bool) (?I1 Bool) (?J1 Bool) (?K1 Bool) (?L1 Bool) (?M1 Bool) (?N1 Bool) (?O1 Bool) (?P1 Bool) (?Q1 Bool) (?R1 Bool) (?S1 Bool) (?T1 Bool) (?U1 Bool) (?V1 Bool) (?W1 Bool) (?X1 Bool) (?Y1 Bool) (?Z1 Bool) (?A2 Bool) (?B2 Bool) (?C2 Bool) (?D2 Bool) (?E2 Bool) (?F2 Bool) (?G2 Bool) (?H2 Bool) (?I2 Bool) (?J2 Bool) (?K2 Bool) (?L2 Bool) (?M2 Bool) (?N2 Bool) (?O2 Bool) (?P2 Bool) (?Q2 Bool) (?R2 Bool) (?S2 Bool) (?T2 Bool) (?U2 Bool) (?V2 Bool) (?W2 Bool) (?X2 Bool) (?Y2 Bool) (?Z2 Bool) (?A3 Bool) (?B3 Bool) (?C3 Bool) (?D3 Bool) (?E3 Bool) (?F3 Bool) (?G3 Bool) (?H3 Bool) (?I3 Bool) (?J3 Bool) (?K3 Bool) (?L3 Bool) (?M3 Bool) (?N3 Bool) (?O3 Bool) (?P3 Bool) (?Q3 Bool) (?R3 Bool) (?S3 Bool) (?T3 Bool) (?U3 Bool) (?V3 Bool) (?W3 Bool) (?X3 Real) (?Y3 Real) (?Z3 Real) (?A4 Real) (?B4 Real) (?C4 Real) (?D4 Real) (?E4 Real) (?F4 Real) (?G4 Real) (?H4 Real) (?I4 Real) (?J4 Bool) (?K4 Bool) (?L4 Bool) (?M4 Bool) (?N4 Bool) (?O4 Bool) (?P4 Bool) (?Q4 Bool) (?R4 Bool) (?S4 Bool) (?T4 Bool) (?U4 Bool) (?V4 Bool) (?W4 Bool) (?X4 Bool) (?Y4 Bool) (?Z4 Bool) (?A5 Bool) (?B5 Bool) (?C5 Bool) (?D5 Bool) (?E5 Bool) (?F5 Bool) (?G5 Bool) (?H5 Bool) (?I5 Bool) (?J5 Bool) (?K5 Bool) (?L5 Bool) (?M5 Bool) (?N5 Bool) (?O5 Bool) (?P5 Bool) (?Q5 Bool) (?R5 Bool) (?S5 Bool) (?T5 Bool) (?U5 Bool) (?V5 Bool) (?W5 Bool) (?X5 Bool) (?Y5 Bool) (?Z5 Bool) (?A6 Bool) (?B6 Bool) (?C6 Bool) (?D6 Bool) (?E6 Bool) (?F6 Bool) (?G6 Bool) (?H6 Bool) (?I6 Bool) (?J6 Real) (?K6 Bool) (?L6 Bool) (?M6 Bool) (?N6 Bool) (?O6 Bool) (?P6 Bool) (?Q6 Bool) (?R6 Bool) (?S6 Bool) (?T6 Bool) (?U6 Bool) (?V6 Real) (?W6 Real) (?X6 Real) (?Y6 Real) (?Z6 Bool) (?A7 Bool) (?B7 Real) (?C7 Real) (?D7 Bool) (?E7 Bool) (?F7 Bool) (?G7 Bool) (?H7 Bool) (?I7 Bool) (?J7 Bool) (?K7 Bool) (?L7 Bool) (?M7 Bool) (?N7 Bool) (?O7 Bool) (?P7 Bool) (?Q7 Bool) (?R7 Bool) (?S7 Bool) (?T7 Bool) (?U7 Bool) (?V7 Bool) (?W7 Bool) (?X7 Bool) (?Y7 Bool) (?Z7 Bool) (?A8 Bool) (?B8 Real) (?C8 Bool) (?D8 Bool) (?E8 Bool) (?F8 Bool) (?G8 Bool) (?H8 Bool) (?I8 Bool) (?J8 Bool) (?K8 Bool) (?L8 Real) (?M8 Real) (?N8 Bool) (?O8 Bool) (?P8 Bool) (?Q8 Bool) (?R8 Bool) (?S8 Bool) (?T8 Bool) (?U8 Bool) (?V8 Bool) (?W8 Bool) (?X8 Bool) (?Y8 Bool) (?Z8 Bool) (?A9 Bool) (?B9 Bool) (?C9 Bool) (?D9 Bool) (?E9 Bool) (?F9 Bool) (?G9 Bool) (?H9 Bool) (?I9 Bool) (?J9 Bool) (?K9 Bool) (?L9 Bool) (?M9 Bool) (?N9 Bool) (?O9 Bool) (?P9 Real) (?Q9 Bool) (?R9 Bool) (?S9 Bool) (?T9 Bool) (?U9 Bool) (?V9 Bool) (?W9 Bool) (?X9 Bool) (?Y9 Bool) (?Z9 Bool) (?A10 Bool) (?B10 Bool) (?C10 Bool) (?D10 Bool) (?E10 Bool) (?F10 Bool) (?G10 Bool) (?H10 Bool) (?I10 Bool) (?J10 Bool) (?K10 Bool) (?L10 Bool) (?M10 Bool) (?N10 Bool) (?O10 Bool) (?P10 Bool) (?Q10 Bool) (?R10 Bool) (?S10 Bool) (?T10 Bool) (?U10 Bool) (?V10 Real) (?W10 Bool) (?X10 Bool) (?Y10 Bool) (?Z10 Bool) (?A11 Bool) (?B11 Bool) (?C11 Bool) (?D11 Bool) (?E11 Bool) (?F11 Bool) (?G11 Bool) (?H11 Bool) (?I11 Bool) (?J11 Bool) (?K11 Real) (?L11 Bool) (?M11 Bool) (?N11 Real) (?O11 Bool) (?P11 Bool) (?Q11 Bool) (?R11 Bool) (?S11 Bool) (?T11 Real) (?U11 Bool) (?V11 Bool) (?W11 Bool) (?X11 Bool) (?Y11 Bool) (?Z11 Bool) (?A12 Bool) (?B12 Bool) (?C12 Real) (?D12 Bool) (?E12 Real) (?F12 Real) (?G12 Bool) (?H12 Bool) (?I12 Bool) (?J12 Bool) (?K12 Bool) (?L12 Bool) )(let (($x849495 (|cp-rel-__UFO__0| ?A ?B ?C ?D ?E ?F ?G ?H ?I ?J ?K ?L ?M ?N ?O ?P ?Q ?R ?S ?T ?U ?V ?W)))
(let (($x315134 (or (not ?J4) (and ?T3 ?K4 ?W3) (and ?P3 ?L4 (not ?V3)) (and ?Y ?M4 ?A1))))
(let (($x301209 (or (not ?J4) (and ?K4 (not ?L4) (not ?M4)) (and ?L4 (not ?K4) (not ?M4)) (and ?M4 (not ?K4) (not ?L4)))))
(let (($x890795 (not ?M5)))
(let (($x512925 (or $x890795 ?N5)))
(let (($x167042 (or (not ?R5) (and ?J5 ?S5) (and ?C5 ?T5 ?L5) (and ?S4 ?U5 (not ?E5)) (and ?V4 ?V5 ?G5))))
(let (($x873307 (or (not ?R5) (and ?S5 (not ?T5) (not ?U5) (not ?V5)) (and ?T5 (not ?S5) (not ?U5) (not ?V5)) (and ?U5 (not ?S5) (not ?T5) (not ?V5)) (and ?V5 (not ?S5) (not ?T5) (not ?U5)))))
(let (($x231311 (not ?Z5)))
(let (($x695733 (not ?H6)))
(let (($x512198 (or $x695733 (and ?D6 ?I6 (<= ?J6 0.0) (>= ?J6 0.0)) (and ?W5 ?K6 (<= ?J6 789.0) (>= ?J6 789.0)) (and ?X4 ?L6 ?G6 (<= ?J6 ?M) (>= ?J6 ?M)) (and ?M5 ?M6 ?B6 (<= ?J6 ?N) (>= ?J6 ?N)))))
(let (($x311525 (or $x695733 (and ?I6 (not ?K6) (not ?L6) (not ?M6)) (and ?K6 (not ?I6) (not ?L6) (not ?M6)) (and ?L6 (not ?I6) (not ?K6) (not ?M6)) (and ?M6 (not ?I6) (not ?K6) (not ?L6)))))
(let (($x847835 (and ?Q6 ?Z6 ?A7 (<= ?V6 ?B7) (>= ?V6 ?B7) (<= ?X6 ?C7) (>= ?X6 ?C7))))
(let (($x374701 (and ?N6 ?T6 ?U6 (<= ?V6 ?W6) (>= ?V6 ?W6) (<= ?X6 ?Y6) (>= ?X6 ?Y6))))
(let (($x577592 (not ?S6)))
(let (($x570712 (or (not ?V7) (and ?K7 ?W7 (not ?R7)) (and ?N7 ?X7 (not ?U7)))))
(let (($x873692 (or (not ?Y7) (and ?S7 ?Z7 ?A8 (<= ?B8 ?T) (>= ?B8 ?T)) (and ?P7 ?C8 ?D8 (<= ?B8 ?S) (>= ?B8 ?S)) (and ?D7 ?E8 ?F8 (<= ?B8 ?R) (>= ?B8 ?R)))))
(let (($x185331 (or (not ?Y7) (and ?Z7 (not ?C8) (not ?E8)) (and ?C8 (not ?Z7) (not ?E8)) (and ?E8 (not ?Z7) (not ?C8)))))
(let (($x361920 (and ?Q6 ?T8 (not ?A7) (<= ?L8 ?Y6) (>= ?L8 ?Y6) (<= ?M8 ?W6) (>= ?M8 ?W6))))
(let (($x288270 (and ?N6 ?S8 (not ?U6) (<= ?L8 ?Y6) (>= ?L8 ?Y6) (<= ?M8 ?W6) (>= ?M8 ?W6))))
(let (($x346378 (>= ?M8 ?V6)))
(let (($x19944 (<= ?M8 ?V6)))
(let (($x844028 (>= ?L8 ?X6)))
(let (($x873745 (<= ?L8 ?X6)))
(let (($x309712 (not ?J8)))
(let (($x138743 (or $x309712 (and ?V7 ?K8 $x873745 $x844028 $x19944 $x346378) (and ?G8 ?N8 $x873745 $x844028 $x19944 $x346378) (and ?Y7 ?O8 ?I8 $x873745 $x844028 $x19944 $x346378) (and ?S7 ?P8 (not ?A8) $x873745 $x844028 $x19944 $x346378) (and ?P7 ?Q8 (not ?D8) $x873745 $x844028 $x19944 $x346378) (and ?D7 ?R8 (not ?F8) $x873745 $x844028 $x19944 $x346378) $x288270 $x361920)))
(let (($x583169 (not ?S8)))
(let (($x757174 (not ?R8)))
(let (($x363945 (not ?Q8)))
(let (($x361296 (not ?P8)))
(let (($x363112 (not ?O8)))
(let (($x615156 (not ?N8)))
(let (($x850483 (not ?K8)))
(let (($x872815 (or $x309712 (and ?K8 $x615156 $x363112 $x361296 $x363945 $x757174 $x583169 (not ?T8)) (and ?N8 $x850483 $x363112 $x361296 $x363945 $x757174 $x583169 (not ?T8)) (and ?O8 $x850483 $x615156 $x361296 $x363945 $x757174 $x583169 (not ?T8)) (and ?P8 $x850483 $x615156 $x363112 $x363945 $x757174 $x583169 (not ?T8)) (and ?Q8 $x850483 $x615156 $x363112 $x361296 $x757174 $x583169 (not ?T8)) (and ?R8 $x850483 $x615156 $x363112 $x361296 $x363945 $x583169 (not ?T8)) (and ?S8 $x850483 $x615156 $x363112 $x361296 $x363945 $x757174 (not ?T8)) (and ?T8 $x850483 $x615156 $x363112 $x361296 $x363945 $x757174 $x583169))))
(let (($x512404 (not ?U8)))
(let (($x844066 (or $x512404 ?V8)))
(let (($x326851 (not ?X8)))
(let (($x456807 (or $x326851 ?Y8)))
(let (($x644745 (or (not ?Z8) (and ?X8 ?A9 ?B9))))
(let (($x847838 (or (not ?Z8) ?A9)))
(let (($x849205 (not ?C9)))
(let (($x871992 (or $x849205 ?D9)))
(let (($x247765 (not ?H9)))
(let (($x185951 (not ?L9)))
(let (($x663592 (or $x185951 ?M9)))
(let (($x27667 (not ?N9)))
(let (($x191473 (or $x27667 (and ?L9 ?O9 (<= ?P9 0.0) (>= ?P9 0.0)) (and ?E9 ?Q9 (<= ?P9 ?N) (>= ?P9 ?N)) (and ?Z8 ?R9 ?J9 (<= ?P9 ?M) (>= ?P9 ?M)))))
(let (($x399186 (or $x27667 (and ?O9 (not ?Q9) (not ?R9)) (and ?Q9 (not ?O9) (not ?R9)) (and ?R9 (not ?O9) (not ?Q9)))))
(let (($x52649 (not ?S9)))
(let (($x289736 (or $x52649 ?T9)))
(let (($x511981 (not ?J10)))
(let (($x849526 (or $x511981 ?K10)))
(let (($x377891 (not ?P10)))
(let (($x577759 (not ?S10)))
(let (($x872675 (or $x577759 (and ?M10 ?T10 ?U10 (<= ?V10 ?S) (>= ?V10 ?S)) (and ?J10 ?W10 ?X10 (<= ?V10 ?R) (>= ?V10 ?R)))))
(let (($x283016 (not ?B11)))
(let (($x660612 (or $x283016 (and ?P10 ?C11) (and ?Y10 ?D11) (and ?S10 ?E11 ?A11) (and ?M10 ?F11 (not ?U10)) (and ?J10 ?G11 (not ?X10)) (and ?S9 ?H11 (not ?Z9)) (and ?V9 ?I11 (not ?B10)))))
(let (($x579426 (not ?H11)))
(let (($x851206 (not ?G11)))
(let (($x156091 (not ?F11)))
(let (($x571182 (not ?E11)))
(let (($x168675 (not ?D11)))
(let (($x223234 (not ?C11)))
(let (($x577784 (or $x283016 (and ?C11 $x168675 $x571182 $x156091 $x851206 $x579426 (not ?I11)) (and ?D11 $x223234 $x571182 $x156091 $x851206 $x579426 (not ?I11)) (and ?E11 $x223234 $x168675 $x156091 $x851206 $x579426 (not ?I11)) (and ?F11 $x223234 $x168675 $x571182 $x851206 $x579426 (not ?I11)) (and ?G11 $x223234 $x168675 $x571182 $x156091 $x579426 (not ?I11)) (and ?H11 $x223234 $x168675 $x571182 $x156091 $x851206 (not ?I11)) (and ?I11 $x223234 $x168675 $x571182 $x156091 $x851206 $x579426))))
(let (($x577857 (|cp-rel-bb.i| ?A ?B ?C ?D ?E ?F ?G ?H ?I ?J ?K ?L ?M ?N ?O ?P ?Q ?R ?S ?T ?U ?V ?W)))
(let (($x867027 (and $x577857 (= ?U10 (= ?P 1.0)) (= ?X10 (= ?O 1.0)) (= ?O10 (= ?K 2.0)) (= ?L10 (= ?K 1.0)) (= ?G10 (not (<= 2.0 ?K))) (= ?B10 (or ?Z9 ?L12)) (= ?L12 (not ?K12)) (= ?K12 (or ?J12 ?G12)) (= ?J12 (or ?I12 ?H12)) (= ?I12 (not (= ?P9 ?F12))) (= ?H12 (= ?F12 0.0)) (= ?U9 (or ?G12 ?Z9)) (= ?Z9 (= ?E12 0.0)) (= ?G12 (= ?P9 0.0)) (= ?G9 (= ?K 2.0)) (= ?J9 (= ?K 1.0)) (= ?B9 (not (<= 2.0 ?K))) (= ?W8 (= ?Y6 ?E12)) (= ?F12 (ite ?D12 ?M8 ?C12)) (= ?E12 (ite ?D12 ?L8 1.0)) (= ?D12 (= ?C12 0.0)) (= ?C12 (ite ?B12 ?R 0.0)) (= ?B12 (= ?K ?O)) (= ?I8 (= ?B8 0.0)) (= ?A8 (= ?Q 1.0)) (= ?D8 (= ?P 1.0)) (= ?U7 (= ?L 3.0)) (= ?R7 (= ?L 2.0)) (= ?M7 (not (<= 3.0 ?L))) (= ?F8 (and ?Z11 ?A12)) (= ?A12 (= ?O 1.0)) (= ?Z11 (= ?L 1.0)) (= ?F7 (not (<= 2.0 ?L))) (= ?B7 (ite ?X11 ?W6 0.0)) (= ?C7 (ite ?X11 ?Y6 0.0)) (= ?A7 (or ?U6 ?Y11)) (= ?Y11 (not ?X11)) (= ?X11 (or ?W11 ?U11)) (= ?W11 (or ?V11 ?U6)) (= ?V11 (not (= ?J6 ?W6))) (= ?P6 (or ?U11 ?U6)) (= ?U11 (= ?J6 0.0)) (= ?Y5 (= ?L 3.0)) (= ?B6 (= ?L 2.0)) (= ?O5 (not (<= 3.0 ?L))) (= ?L5 (= ?T11 0.0)) (= ?T11 (ite ?S11 ?S 0.0)) (= ?S11 (= ?P 1.0)) (= ?G6 (= ?L 1.0)) (= ?G5 (and ?Q11 ?R11)) (= ?R11 (not ?E5)) (= ?Q11 (or ?P11 ?E5)) (= ?P11 (or ?O11 ?L11)) (= ?O11 (not (= ?N ?K11))) (= ?Z4 (not (<= 2.0 ?L))) (= ?N11 (ite ?U6 1.0 0.0)) (= ?U6 (= ?W6 0.0)) (= ?W6 (ite ?M11 ?R 0.0)) (= ?M11 (= ?L ?O)) (= ?U4 (or ?E5 ?L11)) (= ?L11 (= ?N 0.0)) (= ?E5 (= ?K11 0.0)) (= ?K11 (ite ?J11 ?R 0.0)) (= ?J11 (= ?O 2.0)) (= ?P4 (= ?J 0.0)) (= ?W3 (= ?I4 0.0)) (= ?V3 (= ?B 0.0)) (= ?R3 (= ?H4 0.0)) (= ?O3 (= ?C 0.0)) (= ?K3 (= ?G4 0.0)) (= ?H3 (= ?D 0.0)) (= ?D3 (= ?F4 0.0)) (= ?A3 (= ?E 0.0)) (= ?W2 (= ?E4 0.0)) (= ?T2 (= ?F 0.0)) (= ?P2 (= ?D4 0.0)) (= ?M2 (= ?G 0.0)) (= ?I2 (= ?C4 0.0)) (= ?F2 (= ?H 0.0)) (= ?B2 (= ?B4 0.0)) (= ?Y1 (= ?I 0.0)) (= ?U1 (= ?A4 0.0)) (= ?R1 (= ?U 0.0)) (= ?N1 (= ?Z3 0.0)) (= ?K1 (= ?V 0.0)) (= ?G1 (= ?Y3 0.0)) (= ?D1 (= ?W 0.0)) (= ?X3 (+ 1.0 ?A)) (= ?A1 (not (<= ?A 3.0))) (or ?R5 ?B11) $x577784 $x660612 (or (not ?Y10) ?Z10) (or (not ?Y10) (and ?S10 ?Z10 (not ?A11))) (or $x577759 (and ?T10 (not ?W10)) (and ?W10 (not ?T10))) $x872675 (or $x377891 (and ?Q10 (not ?R10)) (and ?R10 (not ?Q10))) (or $x377891 (and ?E10 ?Q10 (not ?L10)) (and ?H10 ?R10 (not ?O10))) (or (not ?M10) ?N10) (or (not ?M10) (and ?H10 ?N10 ?O10)) $x849526 (or $x511981 (and ?E10 ?K10 ?L10)) (or (not ?H10) ?I10) (or (not ?H10) (and ?C10 ?I10 (not ?G10))) (or (not ?E10) ?F10) (or (not ?E10) (and ?C10 ?F10 ?G10)) (or (not ?C10) ?D10) (or (not ?C10) (and ?X9 ?D10)) (or (not ?X9) (and ?Y9 (not ?A10)) (and ?A10 (not ?Y9))) (or (not ?X9) (and ?S9 ?Y9 ?Z9) (and ?V9 ?A10 ?B10)) (or (not ?V9) ?W9) (or (not ?V9) (and ?N9 ?W9 (not ?U9))) $x289736 (or $x52649 (and ?N9 ?T9 ?U9)) $x399186 $x191473 $x663592 (or $x185951 (and ?H9 ?M9)) (or $x247765 (and ?I9 (not ?K9)) (and ?K9 (not ?I9))) (or $x247765 (and ?Z8 ?I9 (not ?J9)) (and ?C9 ?K9 (not ?G9))) (or (not ?E9) ?F9) (or (not ?E9) (and ?C9 ?F9 ?G9)) $x871992 (or $x849205 (and ?X8 ?D9 (not ?B9))) $x847838 $x644745 $x456807 (or $x326851 (and ?U8 ?Y8)) $x844066 (or $x512404 (and ?J8 ?V8 ?W8)) $x872815 $x138743 (or (not ?G8) ?H8) (or (not ?G8) (and ?Y7 ?H8 (not ?I8))) $x185331 $x873692 (or (not ?V7) (and ?W7 (not ?X7)) (and ?X7 (not ?W7))) $x570712 (or (not ?S7) ?T7) (or (not ?S7) (and ?N7 ?T7 ?U7)) (or (not ?P7) ?Q7) (or (not ?P7) (and ?K7 ?Q7 ?R7)) (or (not ?N7) ?O7) (or (not ?N7) (and ?I7 ?O7 (not ?M7))) (or (not ?K7) ?L7) (or (not ?K7) (and ?I7 ?L7 ?M7)) (or (not ?I7) ?J7) (or (not ?I7) (and ?G7 ?J7)) (or (not ?G7) ?H7) (or (not ?G7) (and ?S6 ?H7 (not ?F7))) (or (not ?D7) ?E7) (or (not ?D7) (and ?S6 ?E7 ?F7)) (or $x577592 (and ?T6 (not ?Z6)) (and ?Z6 (not ?T6))) (or $x577592 $x374701 $x847835) (or (not ?Q6) ?R6) (or (not ?Q6) (and ?H6 ?R6 (not ?P6))) (or (not ?N6) ?O6) (or (not ?N6) (and ?H6 ?O6 ?P6)) $x311525 $x512198 (or (not ?D6) (and ?E6 (not ?F6)) (and ?F6 (not ?E6))) (or (not ?D6) (and ?Z5 ?E6) (and ?X4 ?F6 (not ?G6))) (or $x231311 (and ?A6 (not ?C6)) (and ?C6 (not ?A6))) (or $x231311 (and ?M5 ?A6 (not ?B6)) (and ?P5 ?C6 (not ?Y5))) (or (not ?W5) ?X5) (or (not ?W5) (and ?P5 ?X5 ?Y5)) $x873307 $x167042 (or (not ?P5) ?Q5) (or (not ?P5) (and ?H5 ?Q5 (not ?O5))) $x512925 (or $x890795 (and ?H5 ?N5 ?O5)) (or (not ?J5) ?K5) (or (not ?J5) (and ?C5 ?K5 (not ?L5))) (or (not ?H5) ?I5) (or (not ?H5) (and ?A5 ?I5)) (or (not ?C5) (and ?D5 (not ?F5)) (and ?F5 (not ?D5))) (or (not ?C5) (and ?S4 ?D5 ?E5) (and ?V4 ?F5 (not ?G5))) (or (not ?A5) ?B5) (or (not ?A5) (and ?Q4 ?B5 (not ?Z4))) (or (not ?X4) ?Y4) (or (not ?X4) (and ?Q4 ?Y4 ?Z4)) (or (not ?V4) ?W4) (or (not ?V4) (and ?N4 ?W4 (not ?U4))) (or (not ?S4) ?T4) (or (not ?S4) (and ?N4 ?T4 ?U4)) (or (not ?Q4) ?R4) (or (not ?Q4) (and ?J4 ?R4 (not ?P4))) (or (not ?N4) ?O4) (or (not ?N4) (and ?J4 ?O4 ?P4)) $x301209 $x315134 (or (not ?T3) ?U3) (or (not ?T3) (and ?P3 ?U3 ?V3)) (or (not ?P3) (and ?Q3 (not ?S3)) (and ?S3 (not ?Q3))) (or (not ?P3) (and ?M3 ?Q3 ?R3) (and ?I3 ?S3 (not ?O3))) (or (not ?M3) ?N3) (or (not ?M3) (and ?I3 ?N3 ?O3)) (or (not ?I3) (and ?J3 (not ?L3)) (and ?L3 (not ?J3))) (or (not ?I3) (and ?F3 ?J3 ?K3) (and ?B3 ?L3 (not ?H3))) (or (not ?F3) ?G3) (or (not ?F3) (and ?B3 ?G3 ?H3)) (or (not ?B3) (and ?C3 (not ?E3)) (and ?E3 (not ?C3))) (or (not ?B3) (and ?Y2 ?C3 ?D3) (and ?U2 ?E3 (not ?A3))) (or (not ?Y2) ?Z2) (or (not ?Y2) (and ?U2 ?Z2 ?A3)) (or (not ?U2) (and ?V2 (not ?X2)) (and ?X2 (not ?V2))) (or (not ?U2) (and ?R2 ?V2 ?W2) (and ?N2 ?X2 (not ?T2))) (or (not ?R2) ?S2) (or (not ?R2) (and ?N2 ?S2 ?T2)) (or (not ?N2) (and ?O2 (not ?Q2)) (and ?Q2 (not ?O2))) (or (not ?N2) (and ?K2 ?O2 ?P2) (and ?G2 ?Q2 (not ?M2))) (or (not ?K2) ?L2) (or (not ?K2) (and ?G2 ?L2 ?M2)) (or (not ?G2) (and ?H2 (not ?J2)) (and ?J2 (not ?H2))) (or (not ?G2) (and ?D2 ?H2 ?I2) (and ?Z1 ?J2 (not ?F2))) (or (not ?D2) ?E2) (or (not ?D2) (and ?Z1 ?E2 ?F2)) (or (not ?Z1) (and ?A2 (not ?C2)) (and ?C2 (not ?A2))) (or (not ?Z1) (and ?W1 ?A2 ?B2) (and ?S1 ?C2 (not ?Y1))) (or (not ?W1) ?X1) (or (not ?W1) (and ?S1 ?X1 ?Y1)) (or (not ?S1) (and ?T1 (not ?V1)) (and ?V1 (not ?T1))) (or (not ?S1) (and ?P1 ?T1 ?U1) (and ?L1 ?V1 (not ?R1))) (or (not ?P1) ?Q1) (or (not ?P1) (and ?L1 ?Q1 ?R1)) (or (not ?L1) (and ?M1 (not ?O1)) (and ?O1 (not ?M1))) (or (not ?L1) (and ?I1 ?M1 ?N1) (and ?E1 ?O1 (not ?K1))) (or (not ?I1) ?J1) (or (not ?I1) (and ?E1 ?J1 ?K1)) (or (not ?E1) (and ?F1 (not ?H1)) (and ?H1 (not ?F1))) (or (not ?E1) (and ?B1 ?F1 ?G1) (and ?X ?H1 (not ?D1))) (or (not ?B1) ?C1) (or (not ?B1) (and ?X ?C1 ?D1)) (or (not ?X) ?Z) (or (not ?X) (and ?Y ?Z (not ?A1))) (= ?A11 (= ?V10 0.0)))))
(=> $x867027 $x849495)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
)
(assert (forall ((?A Real) (?B Real) (?C Real) (?D Real) (?E Real) (?F Real) (?G Real) (?H Real) (?I Real) (?J Real) (?K Real) (?L Real) (?M Real) (?N Real) (?O Real) (?P Real) (?Q Real) (?R Real) (?S Real) (?T Real) (?U Real) (?V Real) (?W Real) (?X Bool) )(let (($x478076 (|cp-rel-__UFO__0| ?A ?B ?C ?D ?E ?F ?G ?H ?I ?J ?K ?L ?M ?N ?O ?P ?Q ?R ?S ?T ?U ?V ?W)))
(=> (and $x478076 (= ?X true)) $x478076)))
)
(assert (forall ((?A Real) (?B Real) (?C Real) (?D Real) (?E Real) (?F Real) (?G Real) (?H Real) (?I Real) (?J Real) (?K Real) (?L Real) (?M Real) (?N Real) (?O Real) (?P Real) (?Q Real) (?R Real) (?S Real) (?T Real) (?U Real) (?V Real) (?W Real) (?X Bool) (?Y Bool) (?Z Bool) (?A1 Bool) (?B1 Bool) (?C1 Bool) (?D1 Bool) (?E1 Bool) (?F1 Bool) (?G1 Bool) (?H1 Bool) (?I1 Bool) (?J1 Bool) (?K1 Bool) (?L1 Bool) (?M1 Bool) (?N1 Bool) (?O1 Bool) (?P1 Bool) (?Q1 Bool) (?R1 Bool) (?S1 Bool) (?T1 Bool) (?U1 Bool) (?V1 Bool) (?W1 Bool) (?X1 Bool) (?Y1 Bool) (?Z1 Bool) (?A2 Bool) (?B2 Bool) (?C2 Bool) (?D2 Bool) (?E2 Bool) (?F2 Bool) (?G2 Bool) (?H2 Bool) (?I2 Bool) (?J2 Bool) (?K2 Bool) (?L2 Bool) (?M2 Bool) (?N2 Bool) (?O2 Bool) (?P2 Bool) (?Q2 Bool) (?R2 Bool) (?S2 Bool) (?T2 Bool) (?U2 Bool) (?V2 Bool) (?W2 Bool) (?X2 Bool) (?Y2 Bool) (?Z2 Bool) (?A3 Bool) (?B3 Bool) (?C3 Bool) (?D3 Bool) (?E3 Bool) (?F3 Bool) (?G3 Bool) (?H3 Bool) (?I3 Bool) (?J3 Bool) (?K3 Bool) (?L3 Bool) (?M3 Bool) (?N3 Bool) (?O3 Bool) (?P3 Bool) (?Q3 Bool) (?R3 Bool) (?S3 Bool) (?T3 Bool) (?U3 Bool) (?V3 Bool) (?W3 Bool) (?X3 Real) (?Y3 Real) (?Z3 Real) (?A4 Real) (?B4 Real) (?C4 Real) (?D4 Real) (?E4 Real) (?F4 Real) (?G4 Real) (?H4 Real) (?I4 Real) (?J4 Bool) (?K4 Bool) (?L4 Bool) (?M4 Bool) (?N4 Bool) (?O4 Bool) (?P4 Bool) (?Q4 Bool) (?R4 Bool) (?S4 Bool) (?T4 Bool) (?U4 Bool) (?V4 Bool) (?W4 Bool) (?X4 Bool) (?Y4 Bool) (?Z4 Bool) (?A5 Bool) (?B5 Bool) (?C5 Bool) (?D5 Bool) (?E5 Bool) (?F5 Bool) (?G5 Bool) (?H5 Bool) (?I5 Bool) (?J5 Bool) (?K5 Bool) (?L5 Bool) (?M5 Bool) (?N5 Bool) (?O5 Bool) (?P5 Real) (?Q5 Bool) (?R5 Bool) (?S5 Bool) (?T5 Bool) (?U5 Bool) (?V5 Bool) (?W5 Bool) (?X5 Bool) (?Y5 Bool) (?Z5 Bool) (?A6 Bool) (?B6 Real) (?C6 Real) (?D6 Real) (?E6 Real) (?F6 Bool) (?G6 Bool) (?H6 Real) (?I6 Real) (?J6 Bool) (?K6 Bool) (?L6 Bool) (?M6 Bool) (?N6 Bool) (?O6 Bool) (?P6 Bool) (?Q6 Bool) (?R6 Bool) (?S6 Bool) (?T6 Bool) (?U6 Bool) (?V6 Bool) (?W6 Bool) (?X6 Bool) (?Y6 Bool) (?Z6 Bool) (?A7 Bool) (?B7 Bool) (?C7 Bool) (?D7 Bool) (?E7 Bool) (?F7 Bool) (?G7 Bool) (?H7 Real) (?I7 Bool) (?J7 Bool) (?K7 Bool) (?L7 Bool) (?M7 Bool) (?N7 Bool) (?O7 Bool) (?P7 Bool) (?Q7 Bool) (?R7 Real) (?S7 Real) (?T7 Bool) (?U7 Bool) (?V7 Bool) (?W7 Bool) (?X7 Bool) (?Y7 Bool) (?Z7 Bool) (?A8 Bool) (?B8 Bool) (?C8 Real) (?D8 Bool) (?E8 Bool) (?F8 Bool) (?G8 Bool) (?H8 Bool) (?I8 Bool) (?J8 Bool) (?K8 Bool) (?L8 Real) (?M8 Bool) (?N8 Real) (?O8 Real) )(let (($x890795 (not ?P1)))
(let (($x512925 (or $x890795 ?Q1)))
(let (($x573356 (not ?J4)))
(let (($x445039 (or $x573356 (and ?T3 ?K4 ?W3) (and ?P3 ?L4 (not ?V3)) (and ?Y ?M4 ?A1))))
(let (($x693176 (or $x573356 (and ?K4 (not ?L4) (not ?M4)) (and ?L4 (not ?K4) (not ?M4)) (and ?M4 (not ?K4) (not ?L4)))))
(let (($x512404 (not ?X4)))
(let (($x844066 (or $x512404 ?Y4)))
(let (($x326851 (not ?A5)))
(let (($x456807 (or $x326851 ?B5)))
(let (($x644745 (or (not ?C5) (and ?A5 ?D5 ?E5))))
(let (($x847838 (or (not ?C5) ?D5)))
(let (($x849205 (not ?F5)))
(let (($x648698 (not ?N5)))
(let (($x224550 (or $x648698 (and ?J5 ?O5 (<= ?P5 0.0) (>= ?P5 0.0)) (and ?C5 ?Q5 (<= ?P5 789.0) (>= ?P5 789.0)) (and ?Q4 ?R5 ?M5 (<= ?P5 ?M) (>= ?P5 ?M)) (and ?X4 ?S5 ?H5 (<= ?P5 ?N) (>= ?P5 ?N)))))
(let (($x384717 (or $x648698 (and ?O5 (not ?Q5) (not ?R5) (not ?S5)) (and ?Q5 (not ?O5) (not ?R5) (not ?S5)) (and ?R5 (not ?O5) (not ?Q5) (not ?S5)) (and ?S5 (not ?O5) (not ?Q5) (not ?R5)))))
(let (($x576707 (and ?W5 ?F6 ?G6 (<= ?B6 ?H6) (>= ?B6 ?H6) (<= ?D6 ?I6) (>= ?D6 ?I6))))
(let (($x611145 (and ?T5 ?Z5 ?A6 (<= ?B6 ?C6) (>= ?B6 ?C6) (<= ?D6 ?E6) (>= ?D6 ?E6))))
(let (($x848550 (not ?Y5)))
(let (($x417815 (not ?J6)))
(let (($x526106 (or $x417815 ?K6)))
(let (($x511981 (not ?M6)))
(let (($x849526 (or $x511981 ?N6)))
(let (($x360367 (not ?Q6)))
(let (($x873387 (or $x360367 ?R6)))
(let (($x872965 (not ?B7)))
(let (($x283016 (not ?E7)))
(let (($x232808 (or $x283016 (and ?Y6 ?F7 ?G7 (<= ?H7 ?T) (>= ?H7 ?T)) (and ?V6 ?I7 ?J7 (<= ?H7 ?S) (>= ?H7 ?S)) (and ?J6 ?K7 ?L7 (<= ?H7 ?R) (>= ?H7 ?R)))))
(let (($x513104 (or $x283016 (and ?F7 (not ?I7) (not ?K7)) (and ?I7 (not ?F7) (not ?K7)) (and ?K7 (not ?F7) (not ?I7)))))
(let (($x55163 (and ?W5 ?Z7 (not ?G6) (<= ?R7 ?E6) (>= ?R7 ?E6) (<= ?S7 ?C6) (>= ?S7 ?C6))))
(let (($x513958 (not ?A6)))
(let (($x262517 (and ?T5 ?Y7 $x513958 (<= ?R7 ?E6) (>= ?R7 ?E6) (<= ?S7 ?C6) (>= ?S7 ?C6))))
(let (($x315716 (>= ?S7 ?B6)))
(let (($x849930 (<= ?S7 ?B6)))
(let (($x512013 (>= ?R7 ?D6)))
(let (($x619064 (<= ?R7 ?D6)))
(let (($x361862 (not ?L7)))
(let (($x872608 (not ?P7)))
(let (($x494161 (or $x872608 (and ?B7 ?Q7 $x619064 $x512013 $x849930 $x315716) (and ?M7 ?T7 $x619064 $x512013 $x849930 $x315716) (and ?E7 ?U7 ?O7 $x619064 $x512013 $x849930 $x315716) (and ?Y6 ?V7 (not ?G7) $x619064 $x512013 $x849930 $x315716) (and ?V6 ?W7 (not ?J7) $x619064 $x512013 $x849930 $x315716) (and ?J6 ?X7 $x361862 $x619064 $x512013 $x849930 $x315716) $x262517 $x55163)))
(let (($x513044 (not ?Y7)))
(let (($x584129 (not ?X7)))
(let (($x512668 (not ?W7)))
(let (($x454466 (not ?V7)))
(let (($x339353 (not ?U7)))
(let (($x662137 (not ?T7)))
(let (($x512426 (not ?Q7)))
(let (($x130796 (or $x872608 (and ?Q7 $x662137 $x339353 $x454466 $x512668 $x584129 $x513044 (not ?Z7)) (and ?T7 $x512426 $x339353 $x454466 $x512668 $x584129 $x513044 (not ?Z7)) (and ?U7 $x512426 $x662137 $x454466 $x512668 $x584129 $x513044 (not ?Z7)) (and ?V7 $x512426 $x662137 $x339353 $x512668 $x584129 $x513044 (not ?Z7)) (and ?W7 $x512426 $x662137 $x339353 $x454466 $x584129 $x513044 (not ?Z7)) (and ?X7 $x512426 $x662137 $x339353 $x454466 $x512668 $x513044 (not ?Z7)) (and ?Y7 $x512426 $x662137 $x339353 $x454466 $x512668 $x584129 (not ?Z7)) (and ?Z7 $x512426 $x662137 $x339353 $x454466 $x512668 $x584129 $x513044))))
(let (($x330585 (|cp-rel-bb.i| ?A ?B ?C ?D ?E ?F ?G ?H ?I ?J ?K ?L ?M ?N ?O ?P ?Q ?R ?S ?T ?U ?V ?W)))
(let (($x610909 (and $x330585 (= ?O8 (ite ?M8 ?S7 ?L8)) (= ?N8 (ite ?M8 ?R7 1.0)) (= ?M8 (= ?L8 0.0)) (= ?L8 (ite ?K8 ?R 0.0)) (= ?K8 (= ?K ?O)) (= ?O7 (= ?H7 0.0)) (= ?G7 (= ?Q 1.0)) (= ?J7 (= ?P 1.0)) (= ?A7 (= ?L 3.0)) (= ?X6 (= ?L 2.0)) (= ?S6 (not (<= 3.0 ?L))) (= ?L7 (and ?I8 ?J8)) (= ?J8 (= ?O 1.0)) (= ?I8 (= ?L 1.0)) (= ?L6 (not (<= 2.0 ?L))) (= ?H6 (ite ?G8 ?C6 0.0)) (= ?I6 (ite ?G8 ?E6 0.0)) (= ?G6 (or ?A6 ?H8)) (= ?H8 (not ?G8)) (= ?G8 (or ?F8 ?D8)) (= ?F8 (or ?E8 ?A6)) (= ?E8 (not (= ?P5 ?C6))) (= ?V5 (or ?D8 ?A6)) (= ?D8 (= ?P5 0.0)) (= ?E5 (= ?L 3.0)) (= ?H5 (= ?L 2.0)) (= ?Z4 (not (<= 3.0 ?L))) (= ?M5 (= ?L 1.0)) (= ?S4 (not (<= 2.0 ?L))) (= ?C8 (ite ?A6 1.0 0.0)) (= ?A6 (= ?C6 0.0)) (= ?C6 (ite ?B8 ?R 0.0)) (= ?B8 (= ?L ?O)) (= ?N4 (= ?J 0.0)) (= ?W3 (= ?I4 0.0)) (= ?V3 (= ?B 0.0)) (= ?R3 (= ?H4 0.0)) (= ?O3 (= ?C 0.0)) (= ?K3 (= ?G4 0.0)) (= ?H3 (= ?D 0.0)) (= ?D3 (= ?F4 0.0)) (= ?A3 (= ?E 0.0)) (= ?W2 (= ?E4 0.0)) (= ?T2 (= ?F 0.0)) (= ?P2 (= ?D4 0.0)) (= ?M2 (= ?G 0.0)) (= ?I2 (= ?C4 0.0)) (= ?F2 (= ?H 0.0)) (= ?B2 (= ?B4 0.0)) (= ?Y1 (= ?I 0.0)) (= ?U1 (= ?A4 0.0)) (= ?R1 (= ?U 0.0)) (= ?N1 (= ?Z3 0.0)) (= ?K1 (= ?V 0.0)) (= ?G1 (= ?Y3 0.0)) (= ?D1 (= ?W 0.0)) (= ?X3 (+ 1.0 ?A)) (= ?A1 (not (<= ?A 3.0))) (not (= ?A8 true)) (= ?P7 true) $x130796 $x494161 (or (not ?M7) ?N7) (or (not ?M7) (and ?E7 ?N7 (not ?O7))) $x513104 $x232808 (or $x872965 (and ?C7 (not ?D7)) (and ?D7 (not ?C7))) (or $x872965 (and ?Q6 ?C7 (not ?X6)) (and ?T6 ?D7 (not ?A7))) (or (not ?Y6) ?Z6) (or (not ?Y6) (and ?T6 ?Z6 ?A7)) (or (not ?V6) ?W6) (or (not ?V6) (and ?Q6 ?W6 ?X6)) (or (not ?T6) ?U6) (or (not ?T6) (and ?O6 ?U6 (not ?S6))) $x873387 (or $x360367 (and ?O6 ?R6 ?S6)) (or (not ?O6) ?P6) (or (not ?O6) (and ?M6 ?P6)) $x849526 (or $x511981 (and ?Y5 ?N6 (not ?L6))) $x526106 (or $x417815 (and ?Y5 ?K6 ?L6)) (or $x848550 (and ?Z5 (not ?F6)) (and ?F6 (not ?Z5))) (or $x848550 $x611145 $x576707) (or (not ?W5) ?X5) (or (not ?W5) (and ?N5 ?X5 (not ?V5))) (or (not ?T5) ?U5) (or (not ?T5) (and ?N5 ?U5 ?V5)) $x384717 $x224550 (or (not ?J5) (and ?K5 (not ?L5)) (and ?L5 (not ?K5))) (or (not ?J5) (and ?F5 ?K5) (and ?Q4 ?L5 (not ?M5))) (or $x849205 (and ?G5 (not ?I5)) (and ?I5 (not ?G5))) (or $x849205 (and ?X4 ?G5 (not ?H5)) (and ?A5 ?I5 (not ?E5))) $x847838 $x644745 $x456807 (or $x326851 (and ?V4 ?B5 (not ?Z4))) $x844066 (or $x512404 (and ?V4 ?Y4 ?Z4)) (or (not ?V4) ?W4) (or (not ?V4) (and ?T4 ?W4)) (or (not ?T4) ?U4) (or (not ?T4) (and ?O4 ?U4 (not ?S4))) (or (not ?Q4) ?R4) (or (not ?Q4) (and ?O4 ?R4 ?S4)) (or (not ?O4) ?P4) (or (not ?O4) (and ?J4 ?P4 (not ?N4))) $x693176 $x445039 (or (not ?T3) ?U3) (or (not ?T3) (and ?P3 ?U3 ?V3)) (or (not ?P3) (and ?Q3 (not ?S3)) (and ?S3 (not ?Q3))) (or (not ?P3) (and ?M3 ?Q3 ?R3) (and ?I3 ?S3 (not ?O3))) (or (not ?M3) ?N3) (or (not ?M3) (and ?I3 ?N3 ?O3)) (or (not ?I3) (and ?J3 (not ?L3)) (and ?L3 (not ?J3))) (or (not ?I3) (and ?F3 ?J3 ?K3) (and ?B3 ?L3 (not ?H3))) (or (not ?F3) ?G3) (or (not ?F3) (and ?B3 ?G3 ?H3)) (or (not ?B3) (and ?C3 (not ?E3)) (and ?E3 (not ?C3))) (or (not ?B3) (and ?Y2 ?C3 ?D3) (and ?U2 ?E3 (not ?A3))) (or (not ?Y2) ?Z2) (or (not ?Y2) (and ?U2 ?Z2 ?A3)) (or (not ?U2) (and ?V2 (not ?X2)) (and ?X2 (not ?V2))) (or (not ?U2) (and ?R2 ?V2 ?W2) (and ?N2 ?X2 (not ?T2))) (or (not ?R2) ?S2) (or (not ?R2) (and ?N2 ?S2 ?T2)) (or (not ?N2) (and ?O2 (not ?Q2)) (and ?Q2 (not ?O2))) (or (not ?N2) (and ?K2 ?O2 ?P2) (and ?G2 ?Q2 (not ?M2))) (or (not ?K2) ?L2) (or (not ?K2) (and ?G2 ?L2 ?M2)) (or (not ?G2) (and ?H2 (not ?J2)) (and ?J2 (not ?H2))) (or (not ?G2) (and ?D2 ?H2 ?I2) (and ?Z1 ?J2 (not ?F2))) (or (not ?D2) ?E2) (or (not ?D2) (and ?Z1 ?E2 ?F2)) (or (not ?Z1) (and ?A2 (not ?C2)) (and ?C2 (not ?A2))) (or (not ?Z1) (and ?W1 ?A2 ?B2) (and ?S1 ?C2 (not ?Y1))) (or (not ?W1) ?X1) (or (not ?W1) (and ?S1 ?X1 ?Y1)) (or (not ?S1) (and ?T1 (not ?V1)) (and ?V1 (not ?T1))) (or (not ?S1) (and ?P1 ?T1 ?U1) (and ?L1 ?V1 (not ?R1))) $x512925 (or $x890795 (and ?L1 ?Q1 ?R1)) (or (not ?L1) (and ?M1 (not ?O1)) (and ?O1 (not ?M1))) (or (not ?L1) (and ?I1 ?M1 ?N1) (and ?E1 ?O1 (not ?K1))) (or (not ?I1) ?J1) (or (not ?I1) (and ?E1 ?J1 ?K1)) (or (not ?E1) (and ?F1 (not ?H1)) (and ?H1 (not ?F1))) (or (not ?E1) (and ?B1 ?F1 ?G1) (and ?X ?H1 (not ?D1))) (or (not ?B1) ?C1) (or (not ?B1) (and ?X ?C1 ?D1)) (or (not ?X) ?Z) (or (not ?X) (and ?Y ?Z (not ?A1))) (= ?A8 (= ?E6 ?N8)))))
(=> $x610909 |cp-rel-bb2.i.i.i.i171.i.i.i.i.i|))))))))))))))))))))))))))))))))))))))))))))))))))
)
(assert (not cp-rel-bb2.i.i.i.i171.i.i.i.i.i))
(check-sat)