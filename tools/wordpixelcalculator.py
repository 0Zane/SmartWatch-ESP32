FONT_2 = { #Corresponds to font #2 in TFT_eSPI
    "A": 0,
    "H": 8,
    "I": 3,
    "L": 7,
    "M": 9,
    "N": 7,
    "O": 7,
    "U": 9,
}


def calculate_pixel_len(string,fontnumber):

    if fontnumber.upper() == "2":
        
        total_pixels = 0

        for char in string:
            print(FONT_2[char])
            total_pixels += FONT_2[char] + 1

        total_pixels -= 1 #Remove the empty pixel at the end
        return total_pixels
    

print(calculate_pixel_len("OMNIHILUM","2"))