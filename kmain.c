#define FB_GREEN 2
#define FB_DARK_GREY 8

char *fb = (char *) 0x000B8000;

void fb_write_cell(unsigned int i, char c, unsigned char fg, unsigned char bg) {
    fb[i] = c;
    fb[i + 1] = ((fg & 0x0F) << 4 | (bg & 0x0F));
}

int main() {
    fb_write_cell(0, 'A', FB_GREEN, FB_DARK_GREY);
    return 0;
}
