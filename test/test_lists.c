#include "../inc/libmx.h"

int main() {
    t_list *playlist = mx_create_node("Kashmir");
    // mx_printlist(playlist);

    mx_push_front(&playlist, "Pumped up kicks");
    mx_push_front(&playlist, "Lonely boy");
    // mx_printlist(playlist);

    mx_push_back(&playlist, "Seven nations army");
    mx_push_back(&playlist, "The bandit");
    // mx_printlist(playlist);

    mx_pop_back(&playlist);
    // mx_printlist(playlist);

    mx_pop_front(&playlist);
    // mx_printlist(playlist);

    mx_push_front(&playlist, "Take me out");
    mx_push_front(&playlist, "Somebody told me");
    mx_push_back(&playlist, "Colours");
    mx_printlist(playlist);
    mx_printintn(mx_list_size(playlist));

    // mx_sort_list(playlist, cmp());
    // mx_printlist(playlist);
}
