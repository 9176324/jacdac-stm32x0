#pragma once

#define BL_PAGE_SIZE FLASH_PAGE_SIZE
#define BL_SUBPAGE_SIZE 208
#define BL_NUM_SUBPAGES ((BL_PAGE_SIZE + SUBPAGE_SIZE - 1) / SUBPAGE_SIZE)

struct bl_page_data {
    uint32_t pageaddr;
    uint16_t pageoffset;
    uint8_t subpageno;
    uint8_t subpagemax;
    uint32_t session_id;
    uint32_t reserved[4];
    uint8_t data[BL_SUBPAGE_SIZE];
};

#define BL_CMD_PAGE_DATA 0x80
#define BL_CMD_SET_SESSION 0x81
