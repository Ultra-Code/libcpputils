// module;
#include <algorithm>
//#include <iostream>
//#include <vector>
//#include <tuple>
//#include <string_view>
// export module fp;
// import<algorithm>;
import<iostream>;
import<vector>;
import<tuple>;
import<string_view>;
import composable_funcs;
import invocable;
// import high_order_function;
// import intro;
// import partial_function;
//#include <libcpputils/fp/composable_funcs.hxx>
//#include <libcpputils/fp/high_order_function.hxx>
//#include <libcpputils/fp/intro.hxx>
//#include <libcpputils/fp/invocable.hxx>
//#include <libcpputils/fp/partial_function.hxx>

auto
fp_main() -> void
{
    std::cout << "ifEvenInc 1 " << ifEvenInc(1) << " ifEvenDouble "
              << ifEvenDouble(4) << '\n';
    persons_t a {{}, 20, Gender::Male};
    std::vector<persons_t> b {};
    // std::vector<persons_t> list_of_people {a};
    // auto list_of_people =
    // std::vector<persons_t> {{{"Assan", 20, persons_t::Gender::Male},
    //{"Kojo", 30, persons_t::Gender::Male}}};
    // auto filer_by_name = [](persons_t const &person) {
    // return person.gender == persons_t::Gender::Male;
    //};
    //// std::ranges::for_each(
    //// name_for(list_of_people, filer_by_name),
    ////[](std::string_view name) { std::cout << name << '\n'; });
    // std::ranges::for_each(
    // name_for(list_of_people, filer_by_name),
    //[](std::string_view name) { std::cout << name << '\n'; });
    // use_partial_func();

    // use_curry();
    // use_collection_lift();
    // auto tuples = std::make_tuple("Assan", "Bernard");
    // std::cout << addressLetter(locations::ny, tuples) << '\n';

    //// uint32_t m, n;
    //// std::cin >> m >> n;
    //// std::cout << ackermann(m, n) << '\n';
}
