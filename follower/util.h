
inline float fmin(float a, float b) {
    if (a > b)
        return b;
    return a;
}
inline float fmax(float a, float b) {
    if (b > a)
        return b;
    return a;
}
inline int min(int a, int b) {
    if (a > b)
        return b;
    return a;
}
inline int max(int a, int b) {
    if (b > a)
        return b;
    return a;
}
