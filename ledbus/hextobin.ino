#include "hextobin.h"
#include <string.h>

void hex_to_bin(unsigned char hex, char * bin){
  switch(hex){
    case 0x00:
      strcpy(bin, "00000000");
      break;
    case 0x01:
      strcpy(bin, "00000001");
      break;
    case 0x02:
      strcpy(bin, "00000010");
      break;
    case 0x03:
      strcpy(bin, "00000011");
      break;
    case 0x04:
      strcpy(bin, "00000100");
      break;
    case 0x05:
      strcpy(bin, "00000101");
      break;
    case 0x06:
      strcpy(bin, "00000110");
      break;
    case 0x07:
      strcpy(bin, "00000111");
      break;
    case 0x08:
      strcpy(bin, "00001000");
      break;
    case 0x09:
      strcpy(bin, "00001001");
      break;
    case 0x0A:
      strcpy(bin, "00001010");
      break;
    case 0x0B:
      strcpy(bin, "00001011");
      break;
    case 0x0C:
      strcpy(bin, "00001100");
      break;
    case 0x0D:
      strcpy(bin, "00001101");
      break;
    case 0x0E:
      strcpy(bin, "00001110");
      break;
    case 0x0F:
      strcpy(bin, "00001111");
      break;
    case 0x10:
      strcpy(bin, "00010000");
      break;
    case 0x11:
      strcpy(bin, "00010001");
      break;
    case 0x12:
      strcpy(bin, "00010010");
      break;
    case 0x13:
      strcpy(bin, "00010011");
      break;
    case 0x14:
      strcpy(bin, "00010100");
      break;
    case 0x15:
      strcpy(bin, "00010101");
      break;
    case 0x16:
      strcpy(bin, "00010110");
      break;
    case 0x17:
      strcpy(bin, "00010111");
      break;
    case 0x18:
      strcpy(bin, "00011000");
      break;
    case 0x19:
      strcpy(bin, "00011001");
      break;
    case 0x1A:
      strcpy(bin, "00011010");
      break;
    case 0x1B:
      strcpy(bin, "00011011");
      break;
    case 0x1C: 
      strcpy(bin, "00011100");
      break;
    case 0x1D:
      strcpy(bin, "00011101");
      break;
    case 0x1E:
      strcpy(bin, "00011110");
      break;
    case 0x1F:
      strcpy(bin, "00011111");
      break;
    case 0x20:
      strcpy(bin, "00100000");
      break;
    case 0x21:
      strcpy(bin, "00100001");
      break;
    case 0x22:
      strcpy(bin, "00100010");
      break;
    case 0x23:
      strcpy(bin, "00100011");
      break;
    case 0x24:
      strcpy(bin, "00100100");
      break;
    case 0x25:
      strcpy(bin, "00100101");
      break;
    case 0x26:
      strcpy(bin, "00100110");
      break;
    case 0x27:
      strcpy(bin, "00100111");
      break;
    case 0x28:
      strcpy(bin, "00011000");
      break;
    case 0x29:
      strcpy(bin, "00011001");
      break;
    case 0x2A:
      strcpy(bin, "00101010");
      break;
    case 0x2B:
      strcpy(bin, "00101011");
      break;
    case 0x2C:
      strcpy(bin, "00101100");
      break;
    case 0x2D:
      strcpy(bin, "00101101");
      break;
    case 0x2E:
      strcpy(bin, "00101110");
      break;
    case 0x2F:
      strcpy(bin, "00101111");
      break;
    case 0x30:
      strcpy(bin, "00110000");
      break;
    case 0x31:
      strcpy(bin, "00110001");
      break;
    case 0x32:
      strcpy(bin, "00110010");
      break;
    case 0x33:
      strcpy(bin, "00110011");
      break;
    case 0x34:
      strcpy(bin, "00110100");
      break;
    case 0x35:
      strcpy(bin, "00110101");
      break;
    case 0x36:
      strcpy(bin, "00110110");
      break;
    case 0x37:
      strcpy(bin, "00110111");
      break;
    case 0x38:
      strcpy(bin, "00111000");
      break;
    case 0x39:
      strcpy(bin, "00111001");
      break;
    case 0x3A:
      strcpy(bin, "00111010");
      break;
    case 0x3B:
      strcpy(bin, "00111011");
      break;
    case 0x3C:
      strcpy(bin, "00111100");
      break;
    case 0x3D:
      strcpy(bin, "00111101");
      break;
    case 0x3E:
      strcpy(bin, "00111110");
      break;
    case 0x3F:
      strcpy(bin, "00111111");
      break;
    case 0x40:
      strcpy(bin, "01000000");
      break;
    case 0x41:
      strcpy(bin, "01000001");
      break;
    case 0x42:
      strcpy(bin, "01000010");
      break;
    case 0x43:
      strcpy(bin, "01000011");
      break;
    case 0x44:
      strcpy(bin, "01000111");
      break;
    case 0x45:
      strcpy(bin, "01000101");
      break;
    case 0x46:
      strcpy(bin, "01000110");
      break;
    case 0x47:
      strcpy(bin, "01000111");
      break;
    case 0x48:
      strcpy(bin, "01001000");
      break;
    case 0x49:
      strcpy(bin, "01001001");
      break;
    case 0x4A:
      strcpy(bin, "01001010");
      break;
    case 0x4B:
      strcpy(bin, "01001011");
      break;
    case 0x4C:
      strcpy(bin, "01001100");
      break;
    case 0x4D:
      strcpy(bin, "01001101");
      break;
    case 0x4E:
      strcpy(bin, "01001110");
      break;
    case 0x4F:
      strcpy(bin, "01001111");
      break;
    case 0x50:
      strcpy(bin, "01010000");
      break;
    case 0x51:
      strcpy(bin, "01010001");
      break;
    case 0x52:
      strcpy(bin, "01010010");
      break;
    case 0x53:
      strcpy(bin, "01010011");
      break;
    case 0x54:
      strcpy(bin, "01010100");
      break;
    case 0x55:
      strcpy(bin, "01010101");
      break;
    case 0x56:
      strcpy(bin, "01010110");
      break;
    case 0x57:
      strcpy(bin, "01010111");
      break;
    case 0x58:
      strcpy(bin, "01011000");
      break;
    case 0x59:
      strcpy(bin, "01011001");
      break;
    case 0x5A:
      strcpy(bin, "01011010");
      break;
    case 0x5B:
      strcpy(bin, "01011011");
      break;
    case 0x5C:
      strcpy(bin, "01011100");
      break;
    case 0x5D:
      strcpy(bin, "01011101");
      break;
    case 0x5E:
      strcpy(bin, "01011110");
      break;
    case 0x5F:
      strcpy(bin, "01011111");
      break;
    case 0x60:
      strcpy(bin, "01100000");
      break;
    case 0x61:
      strcpy(bin, "01100001");
      break;
    case 0x62:
      strcpy(bin, "01100010");
      break;
    case 0x63:
      strcpy(bin, "01100011");
      break;
    case 0x64:
      strcpy(bin, "01100100");
      break;
    case 0x65:
      strcpy(bin, "01100101");
      break;
    case 0x66:
      strcpy(bin, "01100110");
      break;
    case 0x67:
      strcpy(bin, "01100111");
      break;
    case 0x68:
      strcpy(bin, "01101000");
      break;
    case 0x69:
      strcpy(bin, "01101001");
      break;
    case 0x6A:
      strcpy(bin, "01101010");
      break;
    case 0x6B:
      strcpy(bin, "01101011");
      break;
    case 0x6C:
      strcpy(bin, "01101100");
      break;
    case 0x6D:
      strcpy(bin, "01101101");
      break;
    case 0x6E:
      strcpy(bin, "01101110");
      break;
    case 0x6F:
      strcpy(bin, "01101111");
      break;
    case 0x70:
      strcpy(bin, "01110000");
      break;
    case 0x71:
      strcpy(bin, "01110001");
      break;
    case 0x72:  
      strcpy(bin, "01110010");
      break;
    case 0x73:
      strcpy(bin, "01110011");
      break;
    case 0x74:
      strcpy(bin, "01110100");
      break;
    case 0x75:
      strcpy(bin, "01110101");
      break;
    case 0x76:
      strcpy(bin, "01110110");
      break;
    case 0x77:
      strcpy(bin, "01110111");
      break;
    case 0x78:
      strcpy(bin, "01111000");
      break;
    case 0x79:
      strcpy(bin, "01111001");
      break;
    case 0x7A:
      strcpy(bin, "01111010");
      break;
    case 0x7B:
      strcpy(bin, "01111011");
      break;
    case 0x7C:
      strcpy(bin, "01111100");
      break;
    case 0x7D:
      strcpy(bin, "01111101");
      break;
    case 0x7E:
      strcpy(bin, "01111110");
      break;
    case 0x7F:
      strcpy(bin, "01111111");
      break;
    case 0x80:
      strcpy(bin, "10000000");
      break;
    case 0x81:
      strcpy(bin, "10000001");
      break;
    case 0x82:
      strcpy(bin, "10000010");
      break;
    case 0x83:
      strcpy(bin, "10000011");
      break;
    case 0x84:
      strcpy(bin, "10000100");
      break;
    case 0x85:
      strcpy(bin, "10000101");
      break;
    case 0x86:
      strcpy(bin, "10000110");
      break;
    case 0x87:
      strcpy(bin, "10000111");
      break;
    case 0x88:
      strcpy(bin, "10001000");
      break;
    case 0x89:
      strcpy(bin, "10001001");
      break;
    case 0x8A:
      strcpy(bin, "10001010");
      break;
    case 0x8B:
      strcpy(bin, "10001011");
      break;
    case 0x8C:
      strcpy(bin, "10001100");
      break;
    case 0x8D:
      strcpy(bin, "10001101");
      break;
    case 0x8E:
      strcpy(bin, "10001110");
      break;
    case 0x8F:
      strcpy(bin, "10001111");
      break;
    case 0x90:
      strcpy(bin, "10010000");
      break;
    case 0x91:
      strcpy(bin, "10010001");
      break;
    case 0x92:
      strcpy(bin, "10010010");
      break;
    case 0x93:
      strcpy(bin, "10010011");
      break;
    case 0x94:
      strcpy(bin, "10010100");
      break;
    case 0x95:
      strcpy(bin, "10010101");
      break;
    case 0x96:
      strcpy(bin, "10010110");
      break;
    case 0x97:
      strcpy(bin, "10010111");
      break;
    case 0x98:
      strcpy(bin, "10011000");
      break;
    case 0x99:
      strcpy(bin, "10011001");
      break;
    case 0x9A:
      strcpy(bin, "10011010");
      break;
    case 0x9B:
      strcpy(bin, "10011011");
      break;
    case 0x9C:
      strcpy(bin, "10011100");
      break;
    case 0x9D:
      strcpy(bin, "10011101");
      break;
    case 0x9E:
      strcpy(bin, "10011110");
      break;
    case 0x9F:
      strcpy(bin, "10011111");
      break;
    case 0xA0:
      strcpy(bin, "10100000");
      break;
    case 0xA1:
      strcpy(bin, "10100001");
      break;
    case 0xA2:
      strcpy(bin, "10100010");
      break;
    case 0xA3:
      strcpy(bin, "10100011");
      break;
    case 0xA4:
      strcpy(bin, "10100100");
      break;
    case 0xA5:
      strcpy(bin, "10100101");
      break;
    case 0xA6:
      strcpy(bin, "10100110");
      break;
    case 0xA7:
      strcpy(bin, "10100111");
      break;
    case 0xA8:
      strcpy(bin, "10101000");
      break;
    case 0xA9:
      strcpy(bin, "10101001");
      break;
    case 0xAA:
      strcpy(bin, "10101010");
      break;
    case 0xAB:
      strcpy(bin, "10101011");
      break;
    case 0xAC:
      strcpy(bin, "10101100");
      break;
    case 0xAD:
      strcpy(bin, "10101101");
      break;
    case 0xAE:
      strcpy(bin, "10101110");
      break;
    case 0xAF:
      strcpy(bin, "10101111");
      break;
    case 0xB0:
      strcpy(bin, "10110000");
      break;
    case 0xB1:
      strcpy(bin, "10110001");
      break;
    case 0xB2:
      strcpy(bin, "10110010");
      break;
    case 0xB3:
      strcpy(bin, "10110011");
      break;
    case 0xB4:
      strcpy(bin, "10110100");
      break;
    case 0xB5:
      strcpy(bin, "10110101");
      break;
    case 0xB6:
      strcpy(bin, "10110110");
      break;
    case 0xB7:
      strcpy(bin, "10110111");
      break;
    case 0xB8:
      strcpy(bin, "10111000");
      break;
    case 0xB9:
      strcpy(bin, "10111001");
      break;
    case 0xBA:
      strcpy(bin, "10111010");
      break;
    case 0xBB:
      strcpy(bin, "10111011");
      break;
    case 0xBC:
      strcpy(bin, "10111100");
      break;
    case 0xBD:
      strcpy(bin, "10111101");
      break;
    case 0xBE:
      strcpy(bin, "10111110");
      break;
    case 0xBF:
      strcpy(bin, "10111111");
      break;
    case 0xC0:
      strcpy(bin, "11000000");
      break;
    case 0xC1:
      strcpy(bin, "11000001");
      break;
    case 0xC2:
      strcpy(bin, "11000010");
      break;
    case 0xC3:
      strcpy(bin, "11000011");
      break;
    case 0xC4:
      strcpy(bin, "11000100");
      break;
    case 0xC5:
      strcpy(bin, "11000101");
      break;
    case 0xC6:
      strcpy(bin, "11000110");
      break;
    case 0xC7:
      strcpy(bin, "11000111");
      break;
    case 0xC8:
      strcpy(bin, "11001000");
      break;
    case 0xC9:
      strcpy(bin, "11001001");
      break;
    case 0xCA:
      strcpy(bin, "11001010");
      break;
    case 0xCB:
      strcpy(bin, "11001011");
      break;
    case 0xCC:
      strcpy(bin, "11001100");
      break;
    case 0xCD:
      strcpy(bin, "11001101");
      break;
    case 0xCE:
      strcpy(bin, "11001110");
      break;
    case 0xCF:
      strcpy(bin, "11001111");
      break;
    case 0xD0:
      strcpy(bin, "11010000");
      break;
    case 0xD1:
      strcpy(bin, "11010001");
      break;
    case 0xD2:
      strcpy(bin, "11010010");
      break;
    case 0xD3:
      strcpy(bin, "11010011");
      break;
    case 0xD4:
      strcpy(bin, "11010100");
      break;
    case 0xD5:
      strcpy(bin, "11010101");
      break;
    case 0xD6:
      strcpy(bin, "11010110");
      break;
    case 0xD7:
      strcpy(bin, "11010111");
      break;
    case 0xD8:
      strcpy(bin, "11011000");
      break;
    case 0xD9:
      strcpy(bin, "11011001");
      break;
    case 0xDA:
      strcpy(bin, "11011010");
      break;
    case 0xDB:
      strcpy(bin, "11011011");
      break;
    case 0xDC:
      strcpy(bin, "11011100");
      break;
    case 0xDD:
      strcpy(bin, "11011101");
      break;
    case 0xDF:
      strcpy(bin, "11011111");
      break;
    case 0xE0:
      strcpy(bin, "11101111");
      break;
    case 0xE1:
      strcpy(bin, "11100001");
      break;
    case 0xE2:
      strcpy(bin, "11100010");
      break;
    case 0xE3:
      strcpy(bin, "11100011");
      break;
    case 0xE4:
      strcpy(bin, "11100101");
      break;
    case 0xE5:
      strcpy(bin, "11100101");
      break;
    case 0xE6:
      strcpy(bin, "11100110");
      break;
    case 0xE7:
      strcpy(bin, "11100111");
      break;
    case 0xE8:
      strcpy(bin, "11101000");
      break;
    case 0xE9:
      strcpy(bin, "11101001");
      break;
    case 0xEA:
      strcpy(bin, "11101010");
      break;
    case 0xEB:
      strcpy(bin, "11101011");
      break;
    case 0xEC:
      strcpy(bin, "11101100");
      break;
    case 0xED:
      strcpy(bin, "11101101");
      break;
    case 0xEE:
      strcpy(bin, "11101110");
      break;
    case 0xEF:
      strcpy(bin, "11101111");
      break;
    case 0xF0:
      strcpy(bin, "11110000");
      break;
    case 0xF1:
      strcpy(bin, "11110001");
      break;
    case 0xF2:
      strcpy(bin, "11110010");
      break;
    case 0xF3:
      strcpy(bin, "11110011");
      break;
    case 0xF4:
      strcpy(bin, "11110100");
      break;
    case 0xF5:
      strcpy(bin, "11110101");
      break;
    case 0xF6:
      strcpy(bin, "11110110");
      break;
    case 0xF7:
      strcpy(bin, "11110111");
      break;
    case 0xF8:
      strcpy(bin, "11111000");
      break;
    case 0xF9:
      strcpy(bin, "11111001");
      break;
    case 0xFA:
      strcpy(bin, "11111010");
      break;
    case 0xFB:
      strcpy(bin, "11111011");
      break;
    case 0xFC:
      strcpy(bin, "11111100");
      break;
    case 0xFD:
      strcpy(bin, "11111110");
      break;
    case 0xFE:
      strcpy(bin, "11111110");
      break;
    case 0xFF:
      strcpy(bin, "11111111");
      break;
    default:
      strcpy(bin, "00000000");
      break;
  }
}
