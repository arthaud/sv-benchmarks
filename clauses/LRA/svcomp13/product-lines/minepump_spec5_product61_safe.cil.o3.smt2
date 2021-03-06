(set-info :origin "SVCOMP13 benchmarks generated by Arie Gurfinkel")
(set-info :status sat)
(set-logic HORN)
(declare-fun cp-rel-entry () Bool)
(declare-fun cp-rel-bb2.i.i45.i.i () Bool)
(declare-fun cp-rel-bb1.i.i (Real Real Real) Bool)
(assert |cp-rel-entry|)
(assert (forall ((?A Real) (?B Real) (?C Real) (?D Bool) )(let (($x163204 (and |cp-rel-entry| (<= ?C 0.0) (>= ?B 1.0) (<= ?B 1.0) (>= ?A 0.0) (<= ?A 0.0) (= ?D true) (>= ?C 0.0))))
(=> $x163204 (|cp-rel-bb1.i.i| ?A ?B ?C))))
)
(assert (forall ((?A Real) (?B Real) (?C Real) (?D Real) (?E Real) (?F Real) (?G Bool) (?H Bool) (?I Bool) (?J Bool) (?K Bool) (?L Bool) (?M Real) (?N Real) (?O Bool) (?P Bool) (?Q Bool) (?R Bool) (?S Bool) (?T Bool) (?U Real) (?V Real) (?W Bool) (?X Bool) (?Y Bool) (?Z Bool) (?A1 Bool) (?B1 Bool) (?C1 Bool) (?D1 Bool) (?E1 Bool) (?F1 Bool) (?G1 Bool) (?H1 Bool) (?I1 Bool) (?J1 Bool) (?K1 Real) (?L1 Real) (?M1 Real) (?N1 Bool) (?O1 Bool) (?P1 Real) (?Q1 Bool) (?R1 Bool) (?S1 Real) (?T1 Bool) (?U1 Real) (?V1 Real) (?W1 Bool) (?X1 Bool) (?Y1 Real) (?Z1 Bool) (?A2 Bool) (?B2 Bool) (?C2 Bool) (?D2 Bool) (?E2 Bool) (?F2 Bool) )(let (($x607376 (|cp-rel-bb1.i.i| ?D ?E ?F)))
(let (($x148428 (= ?R1 (and ?Z ?F2))))
(let (($x355908 (or (not ?G) (and ?H ?I (not ?J)))))
(let (($x17654 (or (not ?G) ?I)))
(let (($x555151 (not ?K)))
(let (($x865534 (or $x555151 (and ?G ?L (<= ?M ?N) (>= ?M ?N)) (and ?H ?O ?J (<= ?M ?B) (>= ?M ?B)))))
(let (($x391002 (or $x555151 (and ?L (not ?O)) (and ?O (not ?L)))))
(let (($x884106 (or (not ?P) (and ?K ?Q (not ?R)))))
(let (($x307998 (or (not ?P) ?Q)))
(let (($x387570 (not ?S)))
(let (($x605907 (or $x387570 (and ?P ?T (<= ?U ?V) (>= ?U ?V)) (and ?K ?W ?R (<= ?U ?A) (>= ?U ?A)))))
(let (($x633881 (or $x387570 (and ?T (not ?W)) (and ?W (not ?T)))))
(let (($x332894 (or (not ?X) (and ?S ?Y ?Z))))
(let (($x871534 (or (not ?X) ?Y)))
(let (($x636250 (or (not ?A1) (and ?S ?B1 (not ?Z)))))
(let (($x293656 (or (not ?A1) ?B1)))
(let (($x645551 (or (not ?C1) (and ?X ?D1 ?E1))))
(let (($x149937 (or (not ?C1) ?D1)))
(let (($x306812 (or (not ?F1) (and ?A1 ?G1 ?H1))))
(let (($x12734 (or (not ?F1) ?G1)))
(let (($x295307 (>= ?K1 ?P1)))
(let (($x275076 (<= ?K1 ?P1)))
(let (($x151147 (and ?A1 ?Q1 (not ?H1) $x275076 $x295307 (<= ?L1 0.0) (>= ?L1 0.0))))
(let (($x351350 (>= ?K1 ?M)))
(let (($x583990 (<= ?K1 ?M)))
(let (($x193407 (not ?I1)))
(let (($x85882 (or $x193407 (and ?C1 ?J1 $x583990 $x351350 (<= ?L1 ?M1) (>= ?L1 ?M1)) (and ?X ?N1 (not ?E1) $x583990 $x351350 (<= ?L1 ?C) (>= ?L1 ?C)) (and ?F1 ?O1 $x275076 $x295307 (<= ?L1 ?C) (>= ?L1 ?C)) $x151147)))
(let (($x266952 (or $x193407 (and ?J1 (not ?N1) (not ?O1) (not ?Q1)) (and ?N1 (not ?J1) (not ?O1) (not ?Q1)) (and ?O1 (not ?J1) (not ?N1) (not ?Q1)) (and ?Q1 (not ?J1) (not ?N1) (not ?O1)))))
(let (($x217446 (= ?I1 true)))
(let (($x258642 (= ?J (= ?S1 0.0))))
(let (($x362407 (= ?U1 (ite ?T1 1.0 0.0))))
(let (($x356860 (= ?R (= ?V1 0.0))))
(let (($x266208 (= ?V (ite ?W1 1.0 0.0))))
(let (($x435837 (= ?E1 (not (<= ?M 1.0)))))
(let (($x570516 (= ?X1 (not (<= ?M 0.0)))))
(let (($x254564 (= ?Y1 (+ (~ 1.0) ?M))))
(let (($x356934 (= ?P1 (ite ?X1 ?Y1 ?M))))
(let (($x446483 (= ?Z1 (= ?U 0.0))))
(let (($x114915 (= ?A2 (= ?P1 0.0))))
(let (($x444315 (= ?H1 (and ?Z1 ?A2))))
(let (($x700742 (= ?B2 (= ?U 0.0))))
(let (($x30142 (= ?C2 (= ?K1 2.0))))
(let (($x817755 (= ?D2 (= ?L1 0.0))))
(let (($x535181 (= ?E2 (or ?D2 ?C2))))
(let (($x290850 (= ?F2 (not ?E2))))
(let (($x465636 (and (|cp-rel-bb1.i.i| ?A ?B ?C) $x290850 $x535181 $x817755 $x30142 (= ?M1 (ite ?B2 1.0 ?C)) $x700742 $x444315 $x114915 $x446483 $x356934 $x254564 $x570516 $x435837 (= ?Z (= ?C 0.0)) $x266208 (= ?W1 (= ?A 0.0)) $x356860 (= ?N (+ ?U1 ?B)) $x362407 (= ?T1 (not (<= 2.0 ?B))) $x258642 (>= ?F ?L1) (<= ?F ?L1) (>= ?E ?K1) (<= ?E ?K1) (>= ?D ?U) (<= ?D ?U) (not (= ?R1 true)) $x217446 $x266952 $x85882 $x12734 $x306812 $x149937 $x645551 $x293656 $x636250 $x871534 $x332894 $x633881 $x605907 $x307998 $x884106 $x391002 $x865534 $x17654 $x355908 $x148428)))
(=> $x465636 $x607376))))))))))))))))))))))))))))))))))))))))))))))))
)
(assert (forall ((?A Real) (?B Real) (?C Real) (?D Bool) (?E Bool) (?F Bool) (?G Bool) (?H Bool) (?I Bool) (?J Real) (?K Real) (?L Bool) (?M Bool) (?N Bool) (?O Bool) (?P Bool) (?Q Bool) (?R Real) (?S Real) (?T Bool) (?U Bool) (?V Bool) (?W Bool) (?X Bool) (?Y Bool) (?Z Bool) (?A1 Bool) (?B1 Bool) (?C1 Bool) (?D1 Bool) (?E1 Bool) (?F1 Bool) (?G1 Bool) (?H1 Real) (?I1 Real) (?J1 Real) (?K1 Bool) (?L1 Bool) (?M1 Real) (?N1 Bool) (?O1 Bool) (?P1 Real) (?Q1 Bool) (?R1 Real) (?S1 Real) (?T1 Bool) (?U1 Bool) (?V1 Real) (?W1 Bool) (?X1 Bool) (?Y1 Bool) (?Z1 Bool) (?A2 Bool) (?B2 Bool) (?C2 Bool) )(let (($x148428 (= ?O1 (and ?W ?C2))))
(let (($x355908 (or (not ?D) (and ?E ?F (not ?G)))))
(let (($x17654 (or (not ?D) ?F)))
(let (($x555151 (not ?H)))
(let (($x306929 (or $x555151 (and ?D ?I (<= ?J ?K) (>= ?J ?K)) (and ?E ?L ?G (<= ?J ?B) (>= ?J ?B)))))
(let (($x391002 (or $x555151 (and ?I (not ?L)) (and ?L (not ?I)))))
(let (($x884106 (or (not ?M) (and ?H ?N (not ?O)))))
(let (($x307998 (or (not ?M) ?N)))
(let (($x387570 (not ?P)))
(let (($x800444 (or $x387570 (and ?M ?Q (<= ?R ?S) (>= ?R ?S)) (and ?H ?T ?O (<= ?R ?A) (>= ?R ?A)))))
(let (($x633881 (or $x387570 (and ?Q (not ?T)) (and ?T (not ?Q)))))
(let (($x332894 (or (not ?U) (and ?P ?V ?W))))
(let (($x871534 (or (not ?U) ?V)))
(let (($x636250 (or (not ?X) (and ?P ?Y (not ?W)))))
(let (($x293656 (or (not ?X) ?Y)))
(let (($x645551 (or (not ?Z) (and ?U ?A1 ?B1))))
(let (($x149937 (or (not ?Z) ?A1)))
(let (($x306812 (or (not ?C1) (and ?X ?D1 ?E1))))
(let (($x12734 (or (not ?C1) ?D1)))
(let (($x295307 (>= ?H1 ?M1)))
(let (($x275076 (<= ?H1 ?M1)))
(let (($x151147 (and ?X ?N1 (not ?E1) $x275076 $x295307 (<= ?I1 0.0) (>= ?I1 0.0))))
(let (($x351350 (>= ?H1 ?J)))
(let (($x583990 (<= ?H1 ?J)))
(let (($x193407 (not ?F1)))
(let (($x416750 (or $x193407 (and ?Z ?G1 $x583990 $x351350 (<= ?I1 ?J1) (>= ?I1 ?J1)) (and ?U ?K1 (not ?B1) $x583990 $x351350 (<= ?I1 ?C) (>= ?I1 ?C)) (and ?C1 ?L1 $x275076 $x295307 (<= ?I1 ?C) (>= ?I1 ?C)) $x151147)))
(let (($x266952 (or $x193407 (and ?G1 (not ?K1) (not ?L1) (not ?N1)) (and ?K1 (not ?G1) (not ?L1) (not ?N1)) (and ?L1 (not ?G1) (not ?K1) (not ?N1)) (and ?N1 (not ?G1) (not ?K1) (not ?L1)))))
(let (($x217446 (= ?F1 true)))
(let (($x762650 (= ?O1 true)))
(let (($x258642 (= ?G (= ?P1 0.0))))
(let (($x362407 (= ?R1 (ite ?Q1 1.0 0.0))))
(let (($x356860 (= ?O (= ?S1 0.0))))
(let (($x266208 (= ?S (ite ?T1 1.0 0.0))))
(let (($x435837 (= ?B1 (not (<= ?J 1.0)))))
(let (($x570516 (= ?U1 (not (<= ?J 0.0)))))
(let (($x254564 (= ?V1 (+ (~ 1.0) ?J))))
(let (($x356934 (= ?M1 (ite ?U1 ?V1 ?J))))
(let (($x446483 (= ?W1 (= ?R 0.0))))
(let (($x114915 (= ?X1 (= ?M1 0.0))))
(let (($x444315 (= ?E1 (and ?W1 ?X1))))
(let (($x700742 (= ?Y1 (= ?R 0.0))))
(let (($x30142 (= ?Z1 (= ?H1 2.0))))
(let (($x817755 (= ?A2 (= ?I1 0.0))))
(let (($x535181 (= ?B2 (or ?A2 ?Z1))))
(let (($x290850 (= ?C2 (not ?B2))))
(let (($x607376 (|cp-rel-bb1.i.i| ?A ?B ?C)))
(let (($x42523 (and $x607376 $x290850 $x535181 $x817755 $x30142 (= ?J1 (ite ?Y1 1.0 ?C)) $x700742 $x444315 $x114915 $x446483 $x356934 $x254564 $x570516 $x435837 (= ?W (= ?C 0.0)) $x266208 (= ?T1 (= ?A 0.0)) $x356860 (= ?K (+ ?R1 ?B)) $x362407 (= ?Q1 (not (<= 2.0 ?B))) $x258642 $x762650 $x217446 $x266952 $x416750 $x12734 $x306812 $x149937 $x645551 $x293656 $x636250 $x871534 $x332894 $x633881 $x800444 $x307998 $x884106 $x391002 $x306929 $x17654 $x355908 $x148428)))
(=> $x42523 |cp-rel-bb2.i.i45.i.i|)))))))))))))))))))))))))))))))))))))))))))))))))
)
(assert (not cp-rel-bb2.i.i45.i.i))
(check-sat)
