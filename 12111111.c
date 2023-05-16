#include <stdio.h>
#include <stdbool.h>

#define MAX_FRAMES 10

int main() {
    int reference_string[] = {4,7,6,1,7,6,1,2,7,2};
    int num_frames = 3;
    int num_refs = sizeof(reference_string) / sizeof(reference_string[0]);
    int frames[MAX_FRAMES];
    int faults = 0;
    bool is_present[MAX_FRAMES];

    // Initialize frames as empty
    for (int i = 0; i < num_frames; i++) {
        frames[i] = -1;
        is_present[i] = false;
    }

    // Process reference string
    for (int i = 0; i < num_refs; i++) {
        int page = reference_string[i];

        // Check if page is already present in frames
        bool found = false;
        for (int j = 0; j < num_frames; j++) {
            if (frames[j] == page) {
                found = true;
                break;
            }
        }

        // If page is not present, find optimal page to replace
        if (!found) {
            faults++;

            // Find pages in frames that will not be used for the longest time
            for (int j = 0; j < num_frames; j++) {
                is_present[j] = false;
            }
            for (int j = i + 1; j < num_refs; j++) {
                int future_page = reference_string[j];
                for (int k = 0; k < num_frames; k++) {
                    if (frames[k] == future_page) {
                        is_present[k] = true;
                        break;
                    }
                }
            }

            // Replace page with the optimal one
            int index_to_replace = 0;
            int max_future_distance = -1;
            for (int j = 0; j < num_frames; j++) {
                if (!is_present[j]) {
                    index_to_replace = j;
                    break;
                }
                int future_distance = 0;
                for (int k = i + 1; k < num_refs; k++) {
                    if (reference_string[k] == frames[j]) {
                        break;
                    }
                    future_distance++;
                }
                if (future_distance > max_future_distance) {
                    max_future_distance = future_distance;
                    index_to_replace = j;
                }
            }

            // Replace page in frame
            frames[index_to_replace] = page;
        }
    }

    // Print results
    printf("Page Faults: %d\n", faults);
    printf("Frames: ");
    for (int i = 0; i < num_frames; i++) {
        printf("%d ", frames[i]);
    }
    printf("\n");

    return 0;
}
