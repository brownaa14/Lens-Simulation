#include <iostream>
const auto aspect_ratio = 16.0 / 9.0;
const int image_width = 400;
const int image_height = static_cast<int>(image_width / aspect_ratio);

int main()
{

    // Declare memory block of size M
    std::string** image_arr = new std::string * [image_height];

    for (int i = 0; i < image_height; i++) {

        // Declare a memory block
        // of size n
        image_arr[i] = new std::string[image_width]();
    }

    // Traverse the 2D array
    for (int i = 0; i < image_height; i++) {
        for (int j = 0; j < image_width; j++) {

            // Assign values to the
            // memory blocks created
            //a[i][j] = ++c;
        }
    }

    // Traverse the 2D array
    for (int i = 0; i < image_height; i++) {
        for (int j = 0; j < image_width; j++) {

            // Print the values of
            // memory blocks created
            std::cout << image_arr[i][j] << "\n";
        }
    }

    // Delete the array created
    for (int i = 0; i < image_height; i++) // To delete the innerarrays
        delete[] image_arr[i];
    delete[] image_arr; // To delete the outer array
                // which contained the pointers
                // of all the inner arrays
}


/*
std::string* image_arr = new std::string[image_height * image_width]();
std::string s = "howdy";
image_arr[0][0] = s;

for (int i = 0; i < image_height; ++i) {
	for (int j = 0; j < image_width; ++j)
		std::cerr << (image_arr[i][j];
}*/