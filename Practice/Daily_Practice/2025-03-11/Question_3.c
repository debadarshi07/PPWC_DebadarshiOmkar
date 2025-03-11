/*

Consider the following pseudocode, where x and y are positive integers.
    begin
    q = 0;
    r = x;
    while (r >= y)
        do
        begin r = r - y; q = q + 1; end
    end

    The post condition that needs to be satisfied after the program terminates is
    (a). {r = qx + y and r < y}
    (b). {x = qy + r and r < y}
    (c). {y = qx + r and 0 < r < y}
    (d). {q + 1 < r - y and y > 0}

    Ans). (b)

*/