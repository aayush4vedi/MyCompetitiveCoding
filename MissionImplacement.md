# Notes:
- Pointers:
    - `&` => *A(nd)*ddress of
    - `*` => Value@
    >It's easier to give someone your address to find you than a copy of your house.
- Masters's Theorem:<br>
    `T(n) = aT(n/b) + f(n)` , where f(n) = &theta;(n<sup>c</sup>)
    <br>
    (i)     `c` < log<sub>b</sub>a    => `T(n)` = &theta;(n<sup>log<sub>b</sub>a</sup>)    <br>
    (ii)    .. = ........   => `T(n)` = &theta;(`n`<sup>c</sup>log`n`)     <br>
    (iii)   .. = ........   => `T(n)` = &theta;(f`(n)`)