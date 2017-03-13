class LargestPrimeFactor {
    public static void main(String[] args) {
        System.out.println(largestFactor(600851475143l));
    }

    public static int largestFactor(long x) {
        long y = x;
        int i = 2;
        int factor = 0;

        while(y > 1) {
            if (y % i == 0) {
                y = y / i;
                if (i > factor) {
                    factor = i;
                }
            }
            i++;
        }

        return factor;
    }
}
