 int search(int value, vi a,size) {

        if(value < a[0]) {
            return a[0];
        }
        if(value > a[size-1]) {
            return a[size-1];
        }

        int lo = 0;
        int hi = size - 1;

        while (lo <= hi) {
            int mid = (hi + lo) / 2;

            if (value < a[mid]) {
                hi = mid - 1;
            } else if (value > a[mid]) {
                lo = mid + 1;
            } else {
                return a[mid];
            }
        }
        // lo == hi + 1
        return (a[lo] - value) < (value - a[hi]) ? a[lo] : a[hi];
}