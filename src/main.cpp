#include <iostream>
#include <climits>

//Patterns
#include "pattern.h"

//Basic Maths
#include "count_digits.h"
#include "reverse_number.h"
#include "palindrome.h"
#include "armstrong.h"
#include "all_devisors.h"
#include "is_prime_number.h"

//Recursion
#include "recursion_basics.h"
#include "name_recursion.h"
#include "factorial_numbers.h"
#include "reverse_array.h"
#include "frequency_count.h"
#include "highest_lowest.h"

//Sorting
#include "selection_sort.h"
#include "bubble_sort.h"
#include "insersion_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"

#include "largest_number.h"
#include "remove_duplicates.h"
#include "rotate_by_one_position.h"
#include "rotate_by_k_positions.h"
#include "move_zeros_to_end.h"
#include "union.h"
#include "missing_number.h"
#include "max_consecutive_one.h"
#include "single_number.h"
#include "largest_subarray_with_given_sum.h"

//Arrays
//Medium
#include "two_sum.h"
#include "sort_zero_one_two.h"
#include "find_majority_element.h"
#include "kadance_max_sum_subarray.h"
#include "max_profit.h"
#include "rearrange_alternating_array.h"
#include "leader_element.h"
#include "zero_matrix.h"
#include "rotate_marix_90d.h"

//=================================
// Binary Search
//=================================
#include "find_x_in_sorted_array.h"
#include "lower_bound.h"
#include "upper_bound.h"


int main()
{
    //===============================
    // Binary Search
    //===============================
    testUpperBound();
    // testLowerBound();
    // testFindXinSortedArray();

    //===============================
    // Arrays
    //===============================
    //testRotateMatrix();
    // testZeroMatrix();
    // testSuperiorElement();
    // testAlternatingNumbers();
    // testMaxProfit();
    // testMaxSumSubArray();
    // testFindMajorityElement();
    // testSortOneTwoThree();
    // testRead();

    //-------------------------------
    //EASY
    //-------------------------------
    // testLargestSubArray();
    // testFindSingleNumber();
    // testCountConsecutiveOnce();
    // findMissingNumber();
    //testUnionArray();
    //testMoveZerosToEnd();
    // testRotateArrayByKPositions();
    // testRotateByOnePosition();
    // testRemoveDuplicates();
    //testLargestElement();

    //===============================
    // Sorting
    //===============================
    // testQuickSort();
    // testMergeSort();
    // testInsersionSort();
    // testBubbleSort();
    // testSelectionSort();

    //===============================
    // Hash
    //===============================
    // testGetFrequencies();
    // testFrequencyCount();

    //===============================
    // Recursion
    //===============================
    //isPalindrome();
    // testReverseArray();
    // testFactorialNumbers();
    // testNameRecursion() ;
    // restRecursive();

    //===============================
    //Maths
    //===============================
    // testIsPrime();
    // testSumOfAllDivisors();
    // testIsArmstrong();
    // testIsPalindrome();
    // testReverseBits();
    // testCountDigits();

    //===============================
    // Basics
    //===============================
    //Patterns
    // testPatterns();


    return 0;
}
