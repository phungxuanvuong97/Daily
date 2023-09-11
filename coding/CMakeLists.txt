cmake_minimum_required(VERSION 3.26)
project(IOTLeetCode C)

set(CMAKE_C_STANDARD 99)

add_executable(IOTLeetCode main.c
        common/array/ArrayUtils.c
        common/array/ArrayUtils.h
        easy/two_sum/TwoSum.c
        easy/two_sum/TwoSum.h
        easy/roman_to_integer/RomanToInteger.c
        easy/roman_to_integer/RomanToInteger.h
        common/string/StringUltils.c
        common/string/StringUltils.h
        common/printing/printing.c
        common/printing/printing.h
        easy/longest_common_prefix/LongestCommonPrefix.c
        easy/longest_common_prefix/LongestCommonPrefix.h
        easy/valid_parenthese/ValidParenthese.c
        easy/valid_parenthese/ValidParenthese.h
        common/data_structure/queue/sc_queue.h
        common/data_structure/queue/queue_example.c
        common/data_structure/queue/queue_example.h
        easy/merge_two_sorted_array/MergeTwoSortedArray.c
        easy/merge_two_sorted_array/MergeTwoSortedArray.h
        easy/remove_duplicate_element/RemoveDuplicateElement.c
        easy/remove_duplicate_element/RemoveDuplicateElement.h
        common/data_structure/map/sc_map.c
        common/data_structure/map/sc_map.h
        common/data_structure/map/map_example.c
        common/data_structure/map/map_example.h
        easy/first_occation/FirstOccurenet.c
        easy/first_occation/FirstOccurenet.h
        easy/search_inserted/SearchInsert.c
        easy/search_inserted/SearchInsert.h
        easy/length_of_last_word/LengthOfLastWord.c
        easy/length_of_last_word/LengthOfLastWord.h
        easy/plus_one/PlusOne.c
        easy/plus_one/PlusOne.h
        common/function/GenerateFunction.c
        common/function/GenerateFunction.h
        easy/add_binary/AddBinary.c
        easy/add_binary/AddBinary.h
        easy/sqrt/Sqrt.c
        easy/sqrt/Sqrt.h
        easy/reverse_linked_list/ReverseLinkedList.c
        easy/reverse_linked_list/ReverseLinkedList.h
        easy/binary_tree_inoder_travesal/BinaryTreeInorderTraversal.c
        easy/binary_tree_inoder_travesal/BinaryTreeInorderTraversal.h
        common/data_structure/list/List.c
        common/data_structure/list/List.h
        common/data_structure/list/ListSample.c
        common/data_structure/list/ListSample.h
        easy/last_stone_weight/LastStoneWeight.c
        easy/last_stone_weight/LastStoneWeight.h
        common/algorithms/pubble_sort/BubbleSort.c
        common/algorithms/pubble_sort/BubbleSort.h
        common/algorithms/pubble_sort/TestBubbleSort.c
        common/algorithms/pubble_sort/TestBubbleSort.h
        "easy/125.vaid_palindrome/ValidPalindrome.c"
        "easy/125.vaid_palindrome/ValidPalindrome.h"
        common/string/TestStringUltis.c
        common/string/TestStringUltis.h
        easy/136.single_number/SingleNumber.c
        easy/136.single_number/SingleNumber.h
)
