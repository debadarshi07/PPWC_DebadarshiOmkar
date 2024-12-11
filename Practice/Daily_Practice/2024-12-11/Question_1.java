class Question_1 {
    public static float f(long m, long n) {
        float result = (float)m / (float)n;
        if (m < 0 | n < 0) return 0.0f;
        else result -= f(m * 2, n * 3);
        return result;
    }

    public static void main(String args[]) {
        System.out.println(f(1, 3));
    }
}

/*
    O/P
    2.0
*/