(set-info :origin "driver benchmark extracted from Microsoft SDV")
(set-logic HORN)
(declare-fun Proc26 (Int Bool Int Bool Int) Bool)
(declare-fun Proc22 (Int Bool) Bool)
(declare-fun Proc16 (Int Bool) Bool)
(declare-fun Proc8 (Int Bool Int Int Int Int) Bool)
(declare-fun Proc0 (Int Bool Int Int Int Int) Bool)
(declare-fun Proc9 (Int Bool Int Int Int Int) Bool)
(declare-fun Proc1 (Int Bool Int Int Int Int) Bool)
(declare-fun Proc17 (Int Bool) Bool)
(declare-fun Proc2 (Int Bool Int) Bool)
(declare-fun Proc18 (Int Bool) Bool)
(declare-fun Proc3 (Int Bool) Bool)
(declare-fun Proc5 (Int Bool Int Int) Bool)
(declare-fun Proc19 (Int Bool Int) Bool)
(declare-fun Proc14 (Int Bool Int Int Int) Bool)
(declare-fun Proc13 (Int Bool Int) Bool)
(declare-fun Proc7 (Int Bool Int Int) Bool)
(declare-fun Proc21 (Int Bool Int Bool Int) Bool)
(declare-fun Proc6 (Int Bool Int Int Int Int Int Int Int Int) Bool)
(declare-fun Proc25 (Int Bool) Bool)
(declare-fun Proc12 (Int Bool Int Int Int) Bool)
(declare-fun Proc20 (Int Bool Int) Bool)
(declare-fun Proc24 (Int Bool Int Int Int Int) Bool)
(declare-fun Proc23 (Int Bool) Bool)
(declare-fun Proc11 (Int Bool Int Int Int Int) Bool)
(declare-fun Proc10 (Int Bool Int) Bool)
(declare-fun Proc15 (Int Bool Int) Bool)
(declare-fun Proc4 (Int Bool Int Int) Bool)
(assert (forall ((A Int)
         (B Int)
         (C Int)
         (D Int)
         (E Int)
         (F Int)
         (G Int)
         (H Int)
         (I Int)
         (J Int)
         (K Int)
         (L Int)
         (M Int)
         (N Int)
         (O Int)
         (P Int)
         (Q Int)
         (R Int)
         (S Int)
         (T Int)
         (U Int)
         (V Int)
         (W Int)
         (X Int)
         (Y Int)
         (Z Int)
         (A1 Int)
         (B1 Int)
         (C1 Int)
         (D1 Bool))
  (let ((a!1 (and (not (<= A1 (+ 1 C1))) (not (<= A1 B1))))
        (a!2 (and (not (<= Y (+ 1 Z))) (not (<= Y A1))))
        (a!3 (and (not (<= W (+ 1 X))) (not (<= W Y))))
        (a!4 (and (not (<= U (+ 1 V))) (not (<= U W))))
        (a!5 (and (not (<= S (+ 1 T))) (not (<= S U))))
        (a!6 (and (not (<= Q (+ 1 R))) (not (<= Q S))))
        (a!7 (not (and (not (= J 0)) (not (= K 0)))))
        (a!8 (not (and (not (= I 0)) (not (= J 0)))))
        (a!9 (not (and (not (= H 0)) (not (= I 0))))))
  (let ((a!10 (or (not D1)
                  (not (= C1 B1))
                  (not a!1)
                  (not (= Z A1))
                  (not a!2)
                  (not (= X Y))
                  (not a!3)
                  (not (= V W))
                  (not a!4)
                  (not (= T U))
                  (not a!5)
                  (not (= R S))
                  (not a!6)
                  (= P 0)
                  (<= O 27)
                  (= N 0)
                  (= M 0)
                  (= L 0)
                  (= K 0)
                  a!7
                  a!8
                  a!9
                  (not (Proc0 Q D1 G 1 1 F))
                  (not (and (= E F) (= D 0)))
                  (not (and (= C D) (= B E))))))
    (=> (not a!10) (Proc1 B1 D1 P A C B))))))
(assert (forall ((A Int)
         (B Int)
         (C Int)
         (D Int)
         (E Int)
         (F Int)
         (G Int)
         (H Int)
         (I Int)
         (J Int)
         (K Int)
         (L Int)
         (M Int)
         (N Int)
         (O Int)
         (P Int)
         (Q Int)
         (R Int)
         (S Int)
         (T Int)
         (U Int)
         (V Int)
         (W Int)
         (X Int)
         (Y Int)
         (Z Int)
         (A1 Int)
         (B1 Int)
         (C1 Int)
         (D1 Bool)
         (E1 Int)
         (F1 Int)
         (G1 Int)
         (H1 Int)
         (I1 Int))
  (let ((a!1 (and (not (<= G1 (+ 4 I1))) (not (<= G1 H1))))
        (a!2 (and (not (<= E1 (+ 1 F1))) (not (<= E1 G1))))
        (a!3 (not (Proc6 E1 D1 V 44 0 X 256 0 I1 U)))
        (a!4 (and (not (<= Q (+ 1 R))) (not (<= Q S))))
        (a!6 (or (not (and (= O G) (= N H))) (not (and (= M O) (= L N)))))
        (a!7 (not (and (not (= K 0))
                       (= D (+ 20 K))
                       (= C (- 328645036))
                       (Proc9 H D1 D C 1 100)))))
  (let ((a!5 (or (<= 0 U)
                 (not (and (= T U) (= S E1)))
                 (not (= R S))
                 (not a!4)
                 (not (Proc7 Q D1 R P))
                 (not (and (= O T) (= N P)))
                 (not (and (= M O) (= L N)))))
        (a!8 (or (= K 0)
                 (= F 0)
                 (= E 0)
                 a!7
                 (not (and (= T 0) (= S H)))
                 (not (= R S))
                 (not a!4)
                 (not (Proc7 Q D1 R P))
                 (not (and (= O T) (= N P)))
                 (not (and (= M O) (= L N)))))
        (a!9 (or (not (Proc10 H D1 B))
                 (not (= A (- 1073741823)))
                 (not (and (= T A) (= S H)))
                 (not (= R S))
                 (not a!4)
                 (not (Proc7 Q D1 R P))
                 (not (and (= O T) (= N P)))
                 (not (and (= M O) (= L N))))))
  (let ((a!10 (or (not (<= 0 U))
                  (= K 0)
                  (not (Proc8 E1 D1 J B1 I H))
                  (and a!6 (or (= K 0) (and a!8 a!9))))))
  (let ((a!11 (or (not (and (= C1 0) (= X 34))) a!3 (and a!5 a!10))))
  (let ((a!12 (and (or (= C1 0)
                       (not (Proc4 E1 D1 B1 A1))
                       (not (Proc5 E1 D1 Z Y))
                       (not (= X W))
                       a!3
                       (and a!5 a!10))
                   a!11)))
  (let ((a!13 (not (or (not D1)
                       (not (= I1 H1))
                       (not a!1)
                       (not (= F1 G1))
                       (not a!2)
                       (not (Proc2 E1 D1 F1))
                       (not (Proc3 E1 D1))
                       a!12))))
    (=> a!13 (Proc11 H1 D1 V B1 M L))))))))))
(assert (forall ((A Int)
         (B Int)
         (C Int)
         (D Int)
         (E Int)
         (F Int)
         (G Int)
         (H Int)
         (I Int)
         (J Int)
         (D1 Bool))
  (let ((a!1 (and (not (<= H (+ 1 J))) (not (<= H I))))
        (a!2 (or (not (= E D)) (not (and (= C E) (= B F)))))
        (a!3 (or (not (= E 0)) (not (and (= C E) (= B F)))))
        (a!4 (or (not (= E G)) (not (and (= C E) (= B F))))))
  (let ((a!5 (not (or (not D1)
                      (not (= J I))
                      (not a!1)
                      (not (Proc12 H D1 J G F))
                      (and a!2 a!3 a!4)))))
    (=> a!5 (Proc8 I D1 A G C B))))))
(assert (forall ((A Int)
         (B Int)
         (C Int)
         (D Int)
         (E Int)
         (F Int)
         (G Int)
         (H Int)
         (I Int)
         (J Int)
         (K Int)
         (L Int)
         (M Int)
         (N Int)
         (D1 Bool))
  (let ((a!1 (not (and (= K (- 1073741823)) (= M K))))
        (a!2 (not (and (= J (- 1073741670)) (= M J))))
        (a!3 (not (and (= I (- 1073741771)) (= M I))))
        (a!4 (not (and (= H (- 1073741824)) (= M H)))))
  (let ((a!5 (and (or (= N 0) (not (= M 0)) (not (= L M)))
                  (or (= N 0) a!1 (not (= L M)))
                  (or (= N 0) a!2 (not (= L M)))
                  (or (= N 0) a!3 (not (= L M)))
                  (or (= N 0) a!4 (not (= L M))))))
    (=> (not (or (not D1) a!5)) (Proc6 G D1 F E D C B A N L))))))
(assert (forall ((A Int) (B Int) (D1 Bool)) (=> D1 (Proc10 B D1 A))))
(assert (forall ((A Int) (B Int) (C Int) (D Int) (D1 Bool))
  (let ((a!1 (not (or (not D1) (not (= D C))))))
    (=> a!1 (Proc4 B D1 A D)))))
(assert (forall ((A Int) (B Int) (C Int) (D Int) (E Int) (F Int) (G Int) (D1 Bool))
  (let ((a!1 (and (not (<= E (+ 1 G))) (not (<= E F)))))
  (let ((a!2 (not (or (not D1) (not (= G F)) (not a!1) (not (= D E))))))
    (=> a!2 (Proc0 F D1 C B A D))))))
(assert (forall ((A Int) (B Int) (C Int) (D Int) (E Int) (F Int) (D1 Bool))
  (let ((a!1 (and (not (<= D (+ 1 F))) (not (<= D E)))))
  (let ((a!2 (not (or (not D1)
                      (not (= F E))
                      (not a!1)
                      (not (Proc13 D D1 F))
                      (not (= C D))))))
    (=> a!2 (Proc14 E D1 B A C))))))
(assert (forall ((A Int) (B Int) (D1 Bool)) (=> D1 (Proc13 B D1 A))))
(assert (forall ((A Int) (B Int) (D1 Bool)) (=> false (Proc15 B D1 A))))
(assert (forall ((A Int) (B Int) (D1 Bool)) (=> D1 (Proc2 B D1 A))))
(assert (forall ((A Int) (B Int) (C Int) (D Int) (E Int) (D1 Bool))
  (let ((a!1 (and (not (<= C (+ 1 E))) (not (<= C D)))))
  (let ((a!2 (not (or (not D1)
                      (not (= E D))
                      (not a!1)
                      (not (Proc15 C D1 E))
                      (not (= B C))))))
    (=> a!2 (Proc7 D D1 A B))))))
(assert (forall ((A Int) (B Int) (C Int) (D Int) (E Int) (F Int) (D1 Bool))
  (let ((a!1 (and (or (not (= F E)) (not (= D F)))
                  (or (not (Proc14 E D1 C B A)) (not (= F A)) (not (= D F))))))
    (=> (not (or (not D1) a!1)) (Proc12 E D1 C B D)))))
(assert (forall ((A Int) (D1 Bool)) (=> D1 (Proc16 A D1))))
(assert (forall ((A Int) (D1 Bool)) (=> D1 (Proc17 A D1))))
(assert (forall ((A Int) (D1 Bool)) (=> D1 (Proc18 A D1))))
(assert (forall ((A Int)
         (B Int)
         (C Int)
         (D Int)
         (E Int)
         (F Int)
         (G Int)
         (H Int)
         (D1 Bool)
         (J1 Bool)
         (K1 Bool)
         (L1 Bool))
  (let ((a!1 (not (and (not (<= H 0)) (Proc19 H L1 G))))
        (a!2 (not (and (= C E) (= J1 K1) (= B F)))))
  (let ((a!3 (or (not (and (= E D) (not K1))) a!2))
        (a!4 (or (= (not D1) L1) (not (and (= E A) (= K1 D1))) a!2)))
  (let ((a!5 (not (or (not L1)
                      a!1
                      (not (Proc18 G L1))
                      (not (Proc17 G L1))
                      (not (Proc16 G L1))
                      (not (Proc20 G L1 F))
                      (and a!3 a!4)))))
    (=> a!5 (Proc21 H L1 C J1 B)))))))
(assert (forall ((A Int) (B Int) (C Int) (D Int) (E Int) (D1 Bool))
  (=> D1 (Proc9 E D1 D C B A))))
(assert (forall ((A Int) (B Int) (C Int) (D Int) (D1 Bool))
  (let ((a!1 (not (or (not D1) (not (= D C))))))
    (=> a!1 (Proc5 B D1 A D)))))
(assert (forall ((A Int)
         (B Int)
         (C Int)
         (D Int)
         (E Int)
         (F Int)
         (G Int)
         (H Int)
         (I Int)
         (D1 Bool))
  (let ((a!1 (or (not (= D C)) (not (and (= B D) (= A E)))))
        (a!2 (or (not (Proc23 E D1)) (not (= D F)) (not (and (= B D) (= A E))))))
  (let ((a!3 (not (or (not D1)
                      (not (Proc22 I D1))
                      (not (Proc11 I D1 H G F E))
                      (and a!1 a!2)))))
    (=> a!3 (Proc24 I D1 H G B A))))))
(assert (forall ((A Int) (D1 Bool)) (=> D1 (Proc3 A D1))))
(assert (forall ((A Int)
         (B Int)
         (C Int)
         (D Int)
         (E Int)
         (F Int)
         (G Int)
         (H Int)
         (I Int)
         (J Int)
         (K Int)
         (L Int)
         (M Int)
         (D1 Bool))
  (let ((a!1 (and (not (<= K (+ 12 M))) (not (<= K L))))
        (a!2 (and (not (= B C))
                  (or (not (<= 0 D))
                      (not (= A 1))
                      (= A 0)
                      (not (Proc25 C D1))
                      (not (= B C))))))
  (let ((a!3 (not (or (not D1)
                      (not (= M L))
                      (not a!1)
                      (not (Proc1 K D1 J M I H))
                      (not (<= 0 I))
                      (not (= G 1))
                      (= G 0)
                      (not (Proc24 H D1 F E D C))
                      a!2))))
    (=> a!3 (Proc20 L D1 B))))))
(assert (forall ((A Int) (D1 Bool)) (=> D1 (Proc22 A D1))))
(assert (forall ((A Int) (D1 Bool)) (=> D1 (Proc23 A D1))))
(assert (forall ((A Int) (D1 Bool)) (=> D1 (Proc25 A D1))))
(assert (forall ((A Int)
         (B Int)
         (C Int)
         (D Int)
         (E Int)
         (F Int)
         (G Int)
         (H Int)
         (I Int)
         (J Int)
         (K Int)
         (L Int)
         (M Int)
         (N Int)
         (O Int)
         (P Int)
         (Q Int)
         (R Int)
         (S Int)
         (T Int)
         (U Int)
         (V Int)
         (W Int)
         (X Int)
         (Y Int)
         (Z Int)
         (A1 Int)
         (B1 Int)
         (C1 Int)
         (D1 Bool)
         (E1 Int)
         (F1 Int)
         (G1 Int)
         (H1 Int)
         (I1 Int)
         (M1 Int)
         (N1 Int)
         (O1 Int)
         (P1 Int)
         (Q1 Int)
         (R1 Int)
         (S1 Int)
         (T1 Int)
         (U1 Int)
         (V1 Int)
         (W1 Int)
         (X1 Int)
         (Y1 Int)
         (Z1 Int)
         (A2 Int)
         (B2 Int)
         (C2 Int)
         (D2 Int)
         (E2 Int)
         (F2 Int))
  (let ((a!1 (and (= F2 E2) (not (<= D2 (+ 112 F2)))))
        (a!2 (and (not (<= D2 E2))
                  (= C2 D2)
                  (not (<= B2 (+ 16 C2)))
                  (not (<= B2 D2))))
        (a!3 (and (= A2 B2)
                  (not (<= Z1 (+ 4 A2)))
                  (not (<= Z1 B2))
                  (= Y1 Z1)
                  (not (<= X1 (+ 332 Y1)))
                  (not (<= X1 Z1))
                  (= W1 X1)
                  (not (<= V1 (+ 4 W1)))))
        (a!4 (and (not (<= V1 X1))
                  (= U1 V1)
                  (not (<= T1 (+ 536 U1)))
                  (not (<= T1 V1))
                  (= S1 T1)
                  (not (<= R1 (+ 240 S1)))
                  (not (<= R1 T1))
                  (= Q1 R1)
                  (not (<= P1 (+ 240 Q1)))
                  (not (<= P1 R1))
                  (= O1 P1)
                  (not (<= N1 (+ 240 O1)))
                  (not (<= N1 P1))
                  (= M1 N1)
                  (not (<= I1 (+ 4 M1)))
                  (not (<= I1 N1))
                  (= H1 I1)
                  (not (<= G1 (+ 536 H1)))
                  (not (<= G1 I1))
                  (= F1 G1)
                  (not (<= E1 (+ 332 F1)))
                  (not (<= E1 G1))
                  (= C1 E1)
                  (not (<= B1 (+ 240 C1)))
                  (not (<= B1 E1))
                  (= A1 B1)
                  (not (<= Z (+ 240 A1)))
                  (not (<= Z B1))
                  (= Y Z)
                  (not (<= X (+ 332 Y)))
                  (not (<= X Z))
                  (= W X)
                  (not (<= V (+ 4 W)))
                  (not (<= V X))
                  (= U V)
                  (not (<= T (+ 68 U)))
                  (not (<= T V))
                  (= S T)
                  (not (<= R (+ 240 S)))
                  (not (<= R T))
                  (= Q R)
                  (not (<= P (+ 240 Q)))
                  (not (<= P R))
                  (= O P)
                  (not (<= N (+ 240 O)))
                  (not (<= N P))
                  (= M N)
                  (not (<= L (+ 240 M)))
                  (not (<= L N))
                  (= K L)
                  (not (<= J (+ 240 K)))
                  (not (<= J L))
                  (= I J)
                  (not (<= H (+ 40 I)))
                  (not (<= H J))
                  (= G H)
                  (not (<= F (+ 332 G)))
                  (not (<= F H))
                  (= E F)
                  (not (<= D (+ 4 E)))
                  (not (<= D F))
                  (= C D)
                  (not (<= B (+ 40 C)))
                  (not (<= B D)))))
  (let ((a!5 (not (or (not D1)
                      (not a!1)
                      (not a!2)
                      (not a!3)
                      (not a!4)
                      (not (= A B))))))
    (=> a!5 (Proc19 E2 D1 A))))))
(assert (forall ((A Int) (B Int) (C Int) (D Int) (E Int) (D1 Bool) (J1 Bool) (K1 Bool))
  (let ((a!1 (or (not K1) (not (and (Proc21 E true D J1 C) (not J1))))))
    (=> (not a!1) (Proc26 E K1 B D1 A)))))
(assert (let ((a!1 (exists ((V0 Int) (V1 Bool) (V2 Int) (V3 Bool) (V4 Int))
             (not (=> (and (Proc26 V0 V1 V2 V3 V4) (not false)) false)))))
  (not a!1)))

(check-sat)