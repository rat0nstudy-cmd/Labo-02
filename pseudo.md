# Pseudo code:
On sait :
- distance dx = 3 km, dy = 10 km
- vr_road = 5 km/h, vr_earth = 2 km/h
- L1 = 6 km

---
(const à déclarer au plus tard, juste avant son utilisation)

1. On cherche à connaître les longueures des chemins possibles:
    - L3 = distance adjacente à la route
      --> dy - L1 = L3 <=> 10 - 6 = 4
      L3 = 4 km

    - L2 = hypothénus
      --> $\sqrt{dx^2 + L3^2}$
      L2 <=> $\sqrt{3^2 + 4^2}$ = 5
      L2 = 5 km

2. Calcule du temps par chemins:
    temps 1 = l1 / 5
    temps 2 = l2 / 2

    addition : t1 + t2 --> temps final(ft)

3. Temps en heure :
    temps en mins = ft *60
    h = t_m / 60
    m = t_m % 60

--> cout "ça a pris {h}h{m} pour atteindre le cube"

