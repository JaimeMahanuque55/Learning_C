/////////////////// VARIABLE MODIFIERS - STATIC /////////////////////

// static int count;

// int increment()
// {
//     count = count + 1;
//     return count;
// }

int increment()
{
    static int count;
    count = count + 1;
    return count;
}

/////////////////// Takeaways

// 1. Static variable remains in memory even if it is declared within a block on the other hand automatic variable is destroyed after the completion of function in which it was declared.
// 2. Static variable if declared outside the scope of any function will act like global variable but only within the file in which it is declared.
// 3. You can only assign a constant literal (or value) to a static variable.