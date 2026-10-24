#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0016A4D8
// Address: 0x16a4d8 - 0x16acd0
void func_0016A4D8_0x16a4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016A4D8_0x16a4d8");
#endif

    switch (ctx->pc) {
        case 0x16a5a0u: goto label_16a5a0;
        case 0x16a698u: goto label_16a698;
        case 0x16a6a8u: goto label_16a6a8;
        case 0x16a6d0u: goto label_16a6d0;
        case 0x16a710u: goto label_16a710;
        case 0x16a780u: goto label_16a780;
        case 0x16a8dcu: goto label_16a8dc;
        case 0x16a8f0u: goto label_16a8f0;
        case 0x16a950u: goto label_16a950;
        case 0x16a970u: goto label_16a970;
        case 0x16a9ccu: goto label_16a9cc;
        case 0x16aa5cu: goto label_16aa5c;
        case 0x16aa7cu: goto label_16aa7c;
        default: break;
    }

    ctx->pc = 0x16a4d8u;

    // 0x16a4d8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x16a4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x16a4dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a4e0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x16a4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x16a4e4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x16a4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x16a4e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16a4e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4ec: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x16a4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x16a4f0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x16a4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x16a4f4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x16a4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x16a4f8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x16a4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x16a4fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16a4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16a500: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x16a500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x16a504: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x16a504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x16a508: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16a50c: 0x8282005b  lb          $v0, 0x5B($s4)
    ctx->pc = 0x16a50cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
    // 0x16a510: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16A510u;
    {
        const bool branch_taken_0x16a510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16a510) {
            ctx->pc = 0x16A514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A510u;
            // 0x16a514: 0x8e8500b8  lw          $a1, 0xB8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A530u;
            goto label_16a530;
        }
    }
    ctx->pc = 0x16A518u;
    // 0x16a518: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x16a518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x16a51c: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x16a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x16a520: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x16a520u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16a524: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x16a524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x16a528: 0xa4640090  sh          $a0, 0x90($v1)
    ctx->pc = 0x16a528u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16a52c: 0x8e8500b8  lw          $a1, 0xB8($s4)
    ctx->pc = 0x16a52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
label_16a530:
    // 0x16a530: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x16a530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x16a534: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x16a534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x16a538: 0x26870120  addiu       $a3, $s4, 0x120
    ctx->pc = 0x16a538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
    // 0x16a53c: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x16a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x16a540: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x16a540u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x16a544: 0x24c3ab60  addiu       $v1, $a2, -0x54A0
    ctx->pc = 0x16a544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945632));
    // 0x16a548: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x16a548u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a54c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x16a54cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x16a550: 0x2466ffe8  addiu       $a2, $v1, -0x18
    ctx->pc = 0x16a550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x16a554: 0xaca4002c  sw          $a0, 0x2C($a1)
    ctx->pc = 0x16a554u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 4));
    // 0x16a558: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x16a558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x16a55c: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x16a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x16a560: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x16a560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a564: 0x2467ffec  addiu       $a3, $v1, -0x14
    ctx->pc = 0x16a564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x16a568: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x16a568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x16a56c: 0x2405ffe4  addiu       $a1, $zero, -0x1C
    ctx->pc = 0x16a56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x16a570: 0x2463ffe4  addiu       $v1, $v1, -0x1C
    ctx->pc = 0x16a570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
    // 0x16a574: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16a574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16a578: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16a578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a57c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x16a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x16a580: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x16a580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x16a584: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x16a584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x16a588: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x16a588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x16a58c: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x16a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x16a590: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x16a590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
    // 0x16a594: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x16a594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x16a598: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x16a598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x16a59c: 0x0  nop
    ctx->pc = 0x16a59cu;
    // NOP
label_16a5a0:
    // 0x16a5a0: 0x868301d0  lh          $v1, 0x1D0($s4)
    ctx->pc = 0x16a5a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 464)));
    // 0x16a5a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a5a8: 0x26460005  addiu       $a2, $s2, 0x5
    ctx->pc = 0x16a5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x16a5ac: 0x2e23821  addu        $a3, $s7, $v0
    ctx->pc = 0x16a5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x16a5b0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x16a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x16a5b4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16a5b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16a5bc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x16a5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16a5c0: 0x240430c1  addiu       $a0, $zero, 0x30C1
    ctx->pc = 0x16a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12481));
    // 0x16a5c4: 0xac430084  sw          $v1, 0x84($v0)
    ctx->pc = 0x16a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
    // 0x16a5c8: 0x2e63021  addu        $a2, $s7, $a2
    ctx->pc = 0x16a5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x16a5cc: 0x2643000b  addiu       $v1, $s2, 0xB
    ctx->pc = 0x16a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11));
    // 0x16a5d0: 0x26450011  addiu       $a1, $s2, 0x11
    ctx->pc = 0x16a5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 17));
    // 0x16a5d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16a5d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a5dc: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x16a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x16a5e0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16a5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16a5e4: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x16a5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16a5e8: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x16a5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x16a5ec: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16a5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a5f0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x16a5f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a5f4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x16a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16a5f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16a5fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16a5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a600: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x16a600u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16a604: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x16a604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x16a608: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x16a608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x16a60c: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x16a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x16a610: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x16a610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x16a614: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x16a614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x16a618: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x16a618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x16a61c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a620: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a624: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x16a624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x16a628: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x16a628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x16a62c: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x16a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x16a630: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x16a630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x16a634: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x16a634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x16a638: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x16a638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x16a63c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16a640: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16a640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a644: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x16a644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16a648: 0xa046008b  sb          $a2, 0x8B($v0)
    ctx->pc = 0x16a648u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 6));
    // 0x16a64c: 0x28640012  slti        $a0, $v1, 0x12
    ctx->pc = 0x16a64cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x16a650: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16a650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16a654: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x16a654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16a658: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16a658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16a65c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x16a65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x16a660: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A660u;
    {
        const bool branch_taken_0x16a660 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A660u;
        // 0x16a664: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a660) {
            ctx->pc = 0x16A674u;
            goto label_16a674;
        }
    }
    ctx->pc = 0x16A668u;
    // 0x16a668: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16a668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16a66c: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x16A66Cu;
    {
        const bool branch_taken_0x16a66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A66Cu;
        // 0x16a670: 0xac400084  sw          $zero, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a66c) {
            ctx->pc = 0x16AB04u;
            goto label_16ab04;
        }
    }
    ctx->pc = 0x16A674u;
label_16a674:
    // 0x16a674: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x16a674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a678: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x16a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x16a67c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16a680: 0x10620072  beq         $v1, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x16A680u;
    {
        const bool branch_taken_0x16a680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A680u;
        // 0x16a684: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a680) {
            ctx->pc = 0x16A84Cu;
            goto label_16a84c;
        }
    }
    ctx->pc = 0x16A688u;
    // 0x16a688: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x16a688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x16a68c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x16a68cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a690: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x16A690u;
    SET_GPR_U32(ctx, 31, 0x16A698u);
    ctx->pc = 0x16A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A690u;
    // 0x16a694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x16A690u, 0x16A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A698u;
label_16a698:
    // 0x16a698: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16A698u;
    {
        const bool branch_taken_0x16a698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A698u;
        // 0x16a69c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a698) {
            ctx->pc = 0x16A6BCu;
            goto label_16a6bc;
        }
    }
    ctx->pc = 0x16A6A0u;
    // 0x16a6a0: 0xc07f008  jal         func_1FC020
    ctx->pc = 0x16A6A0u;
    SET_GPR_U32(ctx, 31, 0x16A6A8u);
    ctx->pc = 0x16A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A6A0u;
    // 0x16a6a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC020u, 0x16A6A0u, 0x16A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A6A8u;
label_16a6a8:
    // 0x16a6a8: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x16a6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a6ac: 0x80e30019  lb          $v1, 0x19($a3)
    ctx->pc = 0x16a6acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 25)));
    // 0x16a6b0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x16a6b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16a6b4: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x16A6B4u;
    {
        const bool branch_taken_0x16a6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6B4u;
        // 0x16a6b8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6b4) {
            ctx->pc = 0x16A84Cu;
            goto label_16a84c;
        }
    }
    ctx->pc = 0x16A6BCu;
label_16a6bc:
    // 0x16a6bc: 0x2415001c  addiu       $s5, $zero, 0x1C
    ctx->pc = 0x16a6bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16a6c0: 0x27d39b70  addiu       $s3, $fp, -0x6490
    ctx->pc = 0x16a6c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    // 0x16a6c4: 0x558818  mult        $s1, $v0, $s5
    ctx->pc = 0x16a6c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x16a6c8: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x16A6C8u;
    SET_GPR_U32(ctx, 31, 0x16A6D0u);
    ctx->pc = 0x16A6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A6C8u;
    // 0x16a6cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x16A6C8u, 0x16A6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A6D0u;
label_16a6d0:
    // 0x16a6d0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x16a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x16a6d4: 0x2463ab74  addiu       $v1, $v1, -0x548C
    ctx->pc = 0x16a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945652));
    // 0x16a6d8: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x16a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x16a6dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16a6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16a6e0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x16a6e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16a6e4: 0x1460005a  bnez        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x16A6E4u;
    {
        const bool branch_taken_0x16a6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6E4u;
        // 0x16a6e8: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6e4) {
            ctx->pc = 0x16A850u;
            goto label_16a850;
        }
    }
    ctx->pc = 0x16A6ECu;
    // 0x16a6ec: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x16a6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x16a6f0: 0x2484ab64  addiu       $a0, $a0, -0x549C
    ctx->pc = 0x16a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945636));
    // 0x16a6f4: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x16a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x16a6f8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x16a6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a6fc: 0x3a030021  xori        $v1, $s0, 0x21
    ctx->pc = 0x16a6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)33);
    // 0x16a700: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x16A700u;
    {
        const bool branch_taken_0x16a700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A700u;
        // 0x16a704: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a700) {
            ctx->pc = 0x16A74Cu;
            goto label_16a74c;
        }
    }
    ctx->pc = 0x16A708u;
    // 0x16a708: 0xc07eb4e  jal         func_1FAD38
    ctx->pc = 0x16A708u;
    SET_GPR_U32(ctx, 31, 0x16A710u);
    ctx->pc = 0x16A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A708u;
    // 0x16a70c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD38u, 0x16A708u, 0x16A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A710u;
label_16a710:
    // 0x16a710: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a714: 0x1445004e  bne         $v0, $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x16A714u;
    {
        const bool branch_taken_0x16a714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x16A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A714u;
        // 0x16a718: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a714) {
            ctx->pc = 0x16A850u;
            goto label_16a850;
        }
    }
    ctx->pc = 0x16A71Cu;
    // 0x16a71c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x16a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x16a720: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x16a720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x16a724: 0x2442ab68  addiu       $v0, $v0, -0x5498
    ctx->pc = 0x16a724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945640));
    // 0x16a728: 0x2463ab68  addiu       $v1, $v1, -0x5498
    ctx->pc = 0x16a728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945640));
    // 0x16a72c: 0x400013  mtlo        $v0
    ctx->pc = 0x16a72cu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x16a730: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x16a730u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a734: 0x72152000  madd        $a0, $s0, $s5
    ctx->pc = 0x16a734u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16a738: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x16a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x16a73c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a740: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16a740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16a744: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x16a744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x16a748: 0x2b00b  movn        $s6, $zero, $v0
    ctx->pc = 0x16a748u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_16a74c:
    // 0x16a74c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16a74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a750: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x16a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16a754: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x16a754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x16a758: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x16A758u;
    {
        const bool branch_taken_0x16a758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A758u;
        // 0x16a75c: 0x2411001c  addiu       $s1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a758) {
            ctx->pc = 0x16A800u;
            goto label_16a800;
        }
    }
    ctx->pc = 0x16A760u;
    // 0x16a760: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x16a760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x16a764: 0x918018  mult        $s0, $a0, $s1
    ctx->pc = 0x16a764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x16a768: 0x24b3ab60  addiu       $s3, $a1, -0x54A0
    ctx->pc = 0x16a768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945632));
    // 0x16a76c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x16a76cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a770: 0x27c49b70  addiu       $a0, $fp, -0x6490
    ctx->pc = 0x16a770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    // 0x16a774: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x16a774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x16a778: 0xc07eb4e  jal         func_1FAD38
    ctx->pc = 0x16A778u;
    SET_GPR_U32(ctx, 31, 0x16A780u);
    ctx->pc = 0x16A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A778u;
    // 0x16a77c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD38u, 0x16A778u, 0x16A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A780u;
label_16a780:
    // 0x16a780: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16a780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a784: 0x1446001c  bne         $v0, $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x16A784u;
    {
        const bool branch_taken_0x16a784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x16A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A784u;
        // 0x16a788: 0x32a200ff  andi        $v0, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a784) {
            ctx->pc = 0x16A7F8u;
            goto label_16a7f8;
        }
    }
    ctx->pc = 0x16A78Cu;
    // 0x16a78c: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x16a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x16a790: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16a794: 0x38420021  xori        $v0, $v0, 0x21
    ctx->pc = 0x16a794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)33);
    // 0x16a798: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16A798u;
    {
        const bool branch_taken_0x16a798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A798u;
        // 0x16a79c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a798) {
            ctx->pc = 0x16A7F4u;
            goto label_16a7f4;
        }
    }
    ctx->pc = 0x16A7A0u;
    // 0x16a7a0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x16a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x16a7a4: 0x2463ab64  addiu       $v1, $v1, -0x549C
    ctx->pc = 0x16a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945636));
    // 0x16a7a8: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x16a7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x16a7ac: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x16a7acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16a7b0: 0x24c6ab64  addiu       $a2, $a2, -0x549C
    ctx->pc = 0x16a7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945636));
    // 0x16a7b4: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x16a7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16a7b8: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x16a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x16a7bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a7c0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x16a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16a7c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a7c8: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x16A7C8u;
    {
        const bool branch_taken_0x16a7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x16A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7C8u;
        // 0x16a7cc: 0x32a200ff  andi        $v0, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7c8) {
            ctx->pc = 0x16A7F8u;
            goto label_16a7f8;
        }
    }
    ctx->pc = 0x16A7D0u;
    // 0x16a7d0: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x16a7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
    // 0x16a7d4: 0x24e7ab68  addiu       $a3, $a3, -0x5498
    ctx->pc = 0x16a7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945640));
    // 0x16a7d8: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x16a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x16a7dc: 0x2072821  addu        $a1, $s0, $a3
    ctx->pc = 0x16a7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x16a7e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16a7e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16a7e8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x16a7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x16a7ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x16a7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x16a7f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x16a7f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a7f4:
    // 0x16a7f4: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x16a7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_16a7f8:
    // 0x16a7f8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16A7F8u;
    {
        const bool branch_taken_0x16a7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7F8u;
        // 0x16a7fc: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7f8) {
            ctx->pc = 0x16A850u;
            goto label_16a850;
        }
    }
    ctx->pc = 0x16A800u;
label_16a800:
    // 0x16a800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a804: 0x16c2000a  bne         $s6, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16A804u;
    {
        const bool branch_taken_0x16a804 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x16A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A804u;
        // 0x16a808: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a804) {
            ctx->pc = 0x16A830u;
            goto label_16a830;
        }
    }
    ctx->pc = 0x16A80Cu;
    // 0x16a80c: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x16A80Cu;
    {
        const bool branch_taken_0x16a80c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A80Cu;
        // 0x16a810: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a80c) {
            ctx->pc = 0x16A818u;
            goto label_16a818;
        }
    }
    ctx->pc = 0x16A814u;
    // 0x16a814: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x16a814u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_16a818:
    // 0x16a818: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x16a818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16a81c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16a820: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16a820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16a824: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x16a824u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16a828: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x16a828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16a82c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x16a82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16a830:
    // 0x16a830: 0x868301d0  lh          $v1, 0x1D0($s4)
    ctx->pc = 0x16a830u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 464)));
    // 0x16a834: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x16a834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16a838: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16a838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16a83c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x16a83cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16a840: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x16a840u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16a844: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A844u;
    {
        const bool branch_taken_0x16a844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A844u;
        // 0x16a848: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a844) {
            ctx->pc = 0x16A858u;
            goto label_16a858;
        }
    }
    ctx->pc = 0x16A84Cu;
label_16a84c:
    // 0x16a84c: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x16a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_16a850:
    // 0x16a850: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x16A850u;
    {
        const bool branch_taken_0x16a850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A850u;
        // 0x16a854: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a850) {
            ctx->pc = 0x16AB04u;
            goto label_16ab04;
        }
    }
    ctx->pc = 0x16A858u;
label_16a858:
    // 0x16a858: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16a858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a85c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x16a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x16a860: 0x868601d2  lh          $a2, 0x1D2($s4)
    ctx->pc = 0x16a860u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 466)));
    // 0x16a864: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x16a864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16a868: 0xac4501b8  sw          $a1, 0x1B8($v0)
    ctx->pc = 0x16a868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 440), GPR_U32(ctx, 5));
    // 0x16a86c: 0x26430005  addiu       $v1, $s2, 0x5
    ctx->pc = 0x16a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x16a870: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x16a870u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a874: 0x2642000b  addiu       $v0, $s2, 0xB
    ctx->pc = 0x16a874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11));
    // 0x16a878: 0x8fa7001c  lw          $a3, 0x1C($sp)
    ctx->pc = 0x16a878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x16a87c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a880: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16a880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a884: 0x2e28021  addu        $s0, $s7, $v0
    ctx->pc = 0x16a884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x16a888: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x16a888u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16a88c: 0x2e3a821  addu        $s5, $s7, $v1
    ctx->pc = 0x16a88cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x16a890: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x16a890u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x16a894: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x16a894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x16a898: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x16a898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x16a89c: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x16a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
    // 0x16a8a0: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x16a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x16a8a4: 0xe28821  addu        $s1, $a3, $v0
    ctx->pc = 0x16a8a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16a8a8: 0xa4850090  sh          $a1, 0x90($a0)
    ctx->pc = 0x16a8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x16a8ac: 0x2463026  xor         $a2, $s2, $a2
    ctx->pc = 0x16a8acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 6));
    // 0x16a8b0: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x16a8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16a8b4: 0x27d39b70  addiu       $s3, $fp, -0x6490
    ctx->pc = 0x16a8b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    // 0x16a8b8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x16a8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a8bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a8c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16a8c4: 0xe6180b  movn        $v1, $a3, $a2
    ctx->pc = 0x16a8c4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x16a8c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x16a8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16a8cc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x16a8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x16a8d0: 0xac440084  sw          $a0, 0x84($v0)
    ctx->pc = 0x16a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 4));
    // 0x16a8d4: 0xc07eb4e  jal         func_1FAD38
    ctx->pc = 0x16A8D4u;
    SET_GPR_U32(ctx, 31, 0x16A8DCu);
    ctx->pc = 0x16A8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8D4u;
    // 0x16a8d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD38u, 0x16A8D4u, 0x16A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8DCu;
label_16a8dc:
    // 0x16a8dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a8e0: 0x10430033  beq         $v0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x16A8E0u;
    {
        const bool branch_taken_0x16a8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8E0u;
        // 0x16a8e4: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8e0) {
            ctx->pc = 0x16A9B0u;
            goto label_16a9b0;
        }
    }
    ctx->pc = 0x16A8E8u;
    // 0x16a8e8: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x16A8E8u;
    SET_GPR_U32(ctx, 31, 0x16A8F0u);
    ctx->pc = 0x16A8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8E8u;
    // 0x16a8ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x16A8E8u, 0x16A8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8F0u;
label_16a8f0:
    // 0x16a8f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16a8f4: 0x8c640084  lw          $a0, 0x84($v1)
    ctx->pc = 0x16a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x16a8f8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x16a8f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x16a8fc: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x16A8FCu;
    {
        const bool branch_taken_0x16a8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8FCu;
        // 0x16a900: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8fc) {
            ctx->pc = 0x16A9B0u;
            goto label_16a9b0;
        }
    }
    ctx->pc = 0x16A904u;
    // 0x16a904: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16a904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a908: 0x26420011  addiu       $v0, $s2, 0x11
    ctx->pc = 0x16a908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 17));
    // 0x16a90c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a910: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x16a910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x16a914: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16a914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16a918: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x16a918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16a91c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x16a91cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a920: 0x38600  sll         $s0, $v1, 24
    ctx->pc = 0x16a920u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x16a924: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x16a924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x16a928: 0x102e03  sra         $a1, $s0, 24
    ctx->pc = 0x16a928u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 24));
    // 0x16a92c: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x16a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x16a930: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16a930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16a934: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16a934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a938: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x16a938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x16a93c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16a93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16a940: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x16a940u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
    // 0x16a944: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x16a944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x16a948: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x16A948u;
    SET_GPR_U32(ctx, 31, 0x16A950u);
    ctx->pc = 0x16A94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A948u;
    // 0x16a94c: 0xa067008b  sb          $a3, 0x8B($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 139), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x16A948u, 0x16A950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A950u;
label_16a950:
    // 0x16a950: 0x5440005e  bnel        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x16A950u;
    {
        const bool branch_taken_0x16a950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a950) {
            ctx->pc = 0x16A954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A950u;
            // 0x16a954: 0x8282005b  lb          $v0, 0x5B($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AACCu;
            goto label_16aacc;
        }
    }
    ctx->pc = 0x16A958u;
    // 0x16a958: 0x101e03  sra         $v1, $s0, 24
    ctx->pc = 0x16a958u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 24));
    // 0x16a95c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a960: 0x5062005a  beql        $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x16A960u;
    {
        const bool branch_taken_0x16a960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16a960) {
            ctx->pc = 0x16A964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A960u;
            // 0x16a964: 0x8282005b  lb          $v0, 0x5B($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AACCu;
            goto label_16aacc;
        }
    }
    ctx->pc = 0x16A968u;
    // 0x16a968: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x16A968u;
    SET_GPR_U32(ctx, 31, 0x16A970u);
    ctx->pc = 0x16A96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A968u;
    // 0x16a96c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x16A968u, 0x16A970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A970u;
label_16a970:
    // 0x16a970: 0x54400056  bnel        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x16A970u;
    {
        const bool branch_taken_0x16a970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a970) {
            ctx->pc = 0x16A974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A970u;
            // 0x16a974: 0x8282005b  lb          $v0, 0x5B($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AACCu;
            goto label_16aacc;
        }
    }
    ctx->pc = 0x16A978u;
    // 0x16a978: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x16a978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a97c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x16a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x16a980: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16a980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16a984: 0x54620051  bnel        $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x16A984u;
    {
        const bool branch_taken_0x16a984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a984) {
            ctx->pc = 0x16A988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A984u;
            // 0x16a988: 0x8282005b  lb          $v0, 0x5B($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AACCu;
            goto label_16aacc;
        }
    }
    ctx->pc = 0x16A98Cu;
    // 0x16a98c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x16a98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a990: 0x2642001f  addiu       $v0, $s2, 0x1F
    ctx->pc = 0x16a990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 31));
    // 0x16a994: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a998: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x16a998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16a99c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16a9a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16a9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a9a4: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x16a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16a9a8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x16A9A8u;
    {
        const bool branch_taken_0x16a9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9A8u;
        // 0x16a9ac: 0x661824  and         $v1, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a9a8) {
            ctx->pc = 0x16AAC4u;
            goto label_16aac4;
        }
    }
    ctx->pc = 0x16A9B0u;
label_16a9b0:
    // 0x16a9b0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x16a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x16a9b4: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x16a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
    // 0x16a9b8: 0x27d19b70  addiu       $s1, $fp, -0x6490
    ctx->pc = 0x16a9b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    // 0x16a9bc: 0xe28021  addu        $s0, $a3, $v0
    ctx->pc = 0x16a9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16a9c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9c4: 0xc07eb4e  jal         func_1FAD38
    ctx->pc = 0x16A9C4u;
    SET_GPR_U32(ctx, 31, 0x16A9CCu);
    ctx->pc = 0x16A9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9C4u;
    // 0x16a9c8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD38u, 0x16A9C4u, 0x16A9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A9CCu;
label_16a9cc:
    // 0x16a9cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16a9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a9d0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x16A9D0u;
    {
        const bool branch_taken_0x16a9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9D0u;
        // 0x16a9d4: 0x26420011  addiu       $v0, $s2, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a9d0) {
            ctx->pc = 0x16AA10u;
            goto label_16aa10;
        }
    }
    ctx->pc = 0x16A9D8u;
    // 0x16a9d8: 0x26430011  addiu       $v1, $s2, 0x11
    ctx->pc = 0x16a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 17));
    // 0x16a9dc: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x16a9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16a9e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a9e4: 0x162880  sll         $a1, $s6, 2
    ctx->pc = 0x16a9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x16a9e8: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x16a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x16a9ec: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x16a9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x16a9f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16a9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a9f4: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x16a9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16a9f8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16a9fc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x16a9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x16aa00: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16aa00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16aa04: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16aa08: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x16AA08u;
    {
        const bool branch_taken_0x16aa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA08u;
        // 0x16aa0c: 0xa067008b  sb          $a3, 0x8B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 139), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa08) {
            ctx->pc = 0x16AAC8u;
            goto label_16aac8;
        }
    }
    ctx->pc = 0x16AA10u;
label_16aa10:
    // 0x16aa10: 0x92030019  lbu         $v1, 0x19($s0)
    ctx->pc = 0x16aa10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x16aa14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16aa18: 0x163080  sll         $a2, $s6, 2
    ctx->pc = 0x16aa18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x16aa1c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x16aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x16aa20: 0x38600  sll         $s0, $v1, 24
    ctx->pc = 0x16aa20u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x16aa24: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x16aa24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16aa28: 0x2e63021  addu        $a2, $s7, $a2
    ctx->pc = 0x16aa28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x16aa2c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x16aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x16aa30: 0x102e03  sra         $a1, $s0, 24
    ctx->pc = 0x16aa30u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 24));
    // 0x16aa34: 0x8ce3002c  lw          $v1, 0x2C($a3)
    ctx->pc = 0x16aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x16aa38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16aa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16aa3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16aa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa40: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x16aa40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x16aa44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16aa44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16aa48: 0xace3002c  sw          $v1, 0x2C($a3)
    ctx->pc = 0x16aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 3));
    // 0x16aa4c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x16aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16aa50: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16aa54: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x16AA54u;
    SET_GPR_U32(ctx, 31, 0x16AA5Cu);
    ctx->pc = 0x16AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA54u;
    // 0x16aa58: 0xa043008b  sb          $v1, 0x8B($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x16AA54u, 0x16AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA5Cu;
label_16aa5c:
    // 0x16aa5c: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x16AA5Cu;
    {
        const bool branch_taken_0x16aa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16aa5c) {
            ctx->pc = 0x16AA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AA5Cu;
            // 0x16aa60: 0x8282005b  lb          $v0, 0x5B($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AACCu;
            goto label_16aacc;
        }
    }
    ctx->pc = 0x16AA64u;
    // 0x16aa64: 0x101e03  sra         $v1, $s0, 24
    ctx->pc = 0x16aa64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 24));
    // 0x16aa68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16aa6c: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x16AA6Cu;
    {
        const bool branch_taken_0x16aa6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16aa6c) {
            ctx->pc = 0x16AA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AA6Cu;
            // 0x16aa70: 0x8282005b  lb          $v0, 0x5B($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AACCu;
            goto label_16aacc;
        }
    }
    ctx->pc = 0x16AA74u;
    // 0x16aa74: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x16AA74u;
    SET_GPR_U32(ctx, 31, 0x16AA7Cu);
    ctx->pc = 0x16AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA74u;
    // 0x16aa78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x16AA74u, 0x16AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA7Cu;
label_16aa7c:
    // 0x16aa7c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x16AA7Cu;
    {
        const bool branch_taken_0x16aa7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16aa7c) {
            ctx->pc = 0x16AA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AA7Cu;
            // 0x16aa80: 0x8282005b  lb          $v0, 0x5B($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AACCu;
            goto label_16aacc;
        }
    }
    ctx->pc = 0x16AA84u;
    // 0x16aa84: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x16aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x16aa88: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x16aa88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x16aa8c: 0x24a5ab64  addiu       $a1, $a1, -0x549C
    ctx->pc = 0x16aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945636));
    // 0x16aa90: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x16aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16aa94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16aa98: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x16aa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x16aa9c: 0x5464000b  bnel        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x16AA9Cu;
    {
        const bool branch_taken_0x16aa9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x16aa9c) {
            ctx->pc = 0x16AAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AA9Cu;
            // 0x16aaa0: 0x8282005b  lb          $v0, 0x5B($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AACCu;
            goto label_16aacc;
        }
    }
    ctx->pc = 0x16AAA4u;
    // 0x16aaa4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x16aaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16aaa8: 0x2642001f  addiu       $v0, $s2, 0x1F
    ctx->pc = 0x16aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 31));
    // 0x16aaac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16aab0: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x16aab0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16aab4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16aab8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16aabc: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x16aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16aac0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x16aac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_16aac4:
    // 0x16aac4: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x16aac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_16aac8:
    // 0x16aac8: 0x8282005b  lb          $v0, 0x5B($s4)
    ctx->pc = 0x16aac8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
label_16aacc:
    // 0x16aacc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16aad0: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16AAD0u;
    {
        const bool branch_taken_0x16aad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAD0u;
        // 0x16aad4: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aad0) {
            ctx->pc = 0x16AB08u;
            goto label_16ab08;
        }
    }
    ctx->pc = 0x16AAD8u;
    // 0x16aad8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x16aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x16aadc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x16aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16aae0: 0x2463ab6c  addiu       $v1, $v1, -0x5494
    ctx->pc = 0x16aae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945644));
    // 0x16aae4: 0x600013  mtlo        $v1
    ctx->pc = 0x16aae4u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x16aae8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x16aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16aaec: 0x70641000  madd        $v0, $v1, $a0
    ctx->pc = 0x16aaecu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16aaf0: 0x8e83008c  lw          $v1, 0x8C($s4)
    ctx->pc = 0x16aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x16aaf4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x16aaf4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16aaf8: 0xa4640090  sh          $a0, 0x90($v1)
    ctx->pc = 0x16aaf8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16aafc: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x16aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x16ab00: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x16ab00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
label_16ab04:
    // 0x16ab04: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x16ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16ab08:
    // 0x16ab08: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x16ab08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16ab0c: 0x2e430006  sltiu       $v1, $s2, 0x6
    ctx->pc = 0x16ab0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x16ab10: 0x1460fea3  bnez        $v1, . + 4 + (-0x15D << 2)
    ctx->pc = 0x16AB10u;
    {
        const bool branch_taken_0x16ab10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB10u;
        // 0x16ab14: 0x26420018  addiu       $v0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab10) {
            ctx->pc = 0x16A5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a5a0;
        }
    }
    ctx->pc = 0x16AB18u;
    // 0x16ab18: 0x8e8600b0  lw          $a2, 0xB0($s4)
    ctx->pc = 0x16ab18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x16ab1c: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x16ab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
    // 0x16ab20: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x16ab20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ab24: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x16ab24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x16ab28: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x16ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x16ab2c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x16ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16ab30: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x16ab30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16ab34: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x16ab34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
    // 0x16ab38: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x16ab38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x16ab3c: 0x24e5ab60  addiu       $a1, $a3, -0x54A0
    ctx->pc = 0x16ab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945632));
    // 0x16ab40: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x16ab40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
    // 0x16ab44: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x16ab44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x16ab48: 0x8e8400b4  lw          $a0, 0xB4($s4)
    ctx->pc = 0x16ab48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x16ab4c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16ab50: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x16ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ab54: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16ab58: 0x2ca30012  sltiu       $v1, $a1, 0x12
    ctx->pc = 0x16ab58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x16ab5c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x16ab5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x16ab60: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x16AB60u;
    {
        const bool branch_taken_0x16ab60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB60u;
        // 0x16ab64: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab60) {
            ctx->pc = 0x16AC08u;
            goto label_16ac08;
        }
    }
    ctx->pc = 0x16AB68u;
    // 0x16ab68: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x16ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16ab6c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x16ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16ab70: 0x2442fd40  addiu       $v0, $v0, -0x2C0
    ctx->pc = 0x16ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966592));
    // 0x16ab74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ab78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16ab78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ab7c: 0x800008  jr          $a0
    ctx->pc = 0x16AB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16AB84u: goto label_16ab84;
            case 0x16AB90u: goto label_16ab90;
            case 0x16AB9Cu: goto label_16ab9c;
            case 0x16ABA8u: goto label_16aba8;
            case 0x16ABB4u: goto label_16abb4;
            case 0x16ABF0u: goto label_16abf0;
            case 0x16ABFCu: goto label_16abfc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AB7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16AB84u;
label_16ab84:
    // 0x16ab84: 0x8e8300b0  lw          $v1, 0xB0($s4)
    ctx->pc = 0x16ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x16ab88: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x16AB88u;
    {
        const bool branch_taken_0x16ab88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB88u;
        // 0x16ab8c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab88) {
            ctx->pc = 0x16AC04u;
            goto label_16ac04;
        }
    }
    ctx->pc = 0x16AB90u;
label_16ab90:
    // 0x16ab90: 0x8e8300b0  lw          $v1, 0xB0($s4)
    ctx->pc = 0x16ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x16ab94: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16AB94u;
    {
        const bool branch_taken_0x16ab94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB94u;
        // 0x16ab98: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab94) {
            ctx->pc = 0x16AC04u;
            goto label_16ac04;
        }
    }
    ctx->pc = 0x16AB9Cu;
label_16ab9c:
    // 0x16ab9c: 0x8e8300b0  lw          $v1, 0xB0($s4)
    ctx->pc = 0x16ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x16aba0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16ABA0u;
    {
        const bool branch_taken_0x16aba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABA0u;
        // 0x16aba4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aba0) {
            ctx->pc = 0x16AC04u;
            goto label_16ac04;
        }
    }
    ctx->pc = 0x16ABA8u;
label_16aba8:
    // 0x16aba8: 0x8e8300b0  lw          $v1, 0xB0($s4)
    ctx->pc = 0x16aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x16abac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16ABACu;
    {
        const bool branch_taken_0x16abac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABACu;
        // 0x16abb0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16abac) {
            ctx->pc = 0x16AC04u;
            goto label_16ac04;
        }
    }
    ctx->pc = 0x16ABB4u;
label_16abb4:
    // 0x16abb4: 0x8e8300b4  lw          $v1, 0xB4($s4)
    ctx->pc = 0x16abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x16abb8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x16abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x16abbc: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x16abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x16abc0: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x16abc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x16abc4: 0xa062008b  sb          $v0, 0x8B($v1)
    ctx->pc = 0x16abc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 139), (uint8_t)GPR_U32(ctx, 2));
    // 0x16abc8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x16abc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x16abcc: 0x8e8300b0  lw          $v1, 0xB0($s4)
    ctx->pc = 0x16abccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x16abd0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16abd4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x16abd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x16abd8: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16abd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x16abdc: 0x8e8400b4  lw          $a0, 0xB4($s4)
    ctx->pc = 0x16abdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x16abe0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16abe4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x16abe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x16abe8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16ABE8u;
    {
        const bool branch_taken_0x16abe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABE8u;
        // 0x16abec: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16abe8) {
            ctx->pc = 0x16AC08u;
            goto label_16ac08;
        }
    }
    ctx->pc = 0x16ABF0u;
label_16abf0:
    // 0x16abf0: 0x8e8300b0  lw          $v1, 0xB0($s4)
    ctx->pc = 0x16abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x16abf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16ABF4u;
    {
        const bool branch_taken_0x16abf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABF4u;
        // 0x16abf8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16abf4) {
            ctx->pc = 0x16AC04u;
            goto label_16ac04;
        }
    }
    ctx->pc = 0x16ABFCu;
label_16abfc:
    // 0x16abfc: 0x8e8300b0  lw          $v1, 0xB0($s4)
    ctx->pc = 0x16abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x16ac00: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x16ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_16ac04:
    // 0x16ac04: 0xa062008b  sb          $v0, 0x8B($v1)
    ctx->pc = 0x16ac04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 139), (uint8_t)GPR_U32(ctx, 2));
label_16ac08:
    // 0x16ac08: 0x86820204  lh          $v0, 0x204($s4)
    ctx->pc = 0x16ac08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 516)));
    // 0x16ac0c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x16ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16ac10: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x16ac10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x16ac14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16ac14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16ac18: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x16ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16ac1c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16ac20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16ac20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16ac24: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x16ac24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16ac28: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x16ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16ac2c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x16ac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16ac30: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x16ac30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x16ac34: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x16ac34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16ac38: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x16ac38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x16ac3c: 0x8e84017c  lw          $a0, 0x17C($s4)
    ctx->pc = 0x16ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
    // 0x16ac40: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x16ac40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ac44: 0x0  nop
    ctx->pc = 0x16ac44u;
    // NOP
    // 0x16ac48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16ac48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16ac4c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x16ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x16ac50: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x16ac50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16ac54: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x16ac54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16ac58: 0x0  nop
    ctx->pc = 0x16ac58u;
    // NOP
    // 0x16ac5c: 0x0  nop
    ctx->pc = 0x16ac5cu;
    // NOP
    // 0x16ac60: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x16ac60u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[1]);
    // 0x16ac64: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x16ac64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16ac68: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x16ac68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x16ac6c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x16ac6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16ac70: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16ac70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16ac74: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x16ac74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16ac78: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x16ac78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16ac7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16ac7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ac80: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x16ac80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x16ac84: 0x868201d0  lh          $v0, 0x1D0($s4)
    ctx->pc = 0x16ac84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 464)));
    // 0x16ac88: 0x8e83017c  lw          $v1, 0x17C($s4)
    ctx->pc = 0x16ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
    // 0x16ac8c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16ac8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16ac90: 0x0  nop
    ctx->pc = 0x16ac90u;
    // NOP
    // 0x16ac94: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16ac94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16ac98: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x16ac98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16ac9c: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x16ac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16aca0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16aca4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x16aca4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x16aca8: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x16aca8u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[1]);
    // 0x16acac: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x16acacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16acb0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x16acb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16acb4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x16acb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x16acb8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x16acb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x16acbc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x16acbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16acc0: 0xe461003c  swc1        $f1, 0x3C($v1)
    ctx->pc = 0x16acc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x16acc4: 0x3e00008  jr          $ra
    ctx->pc = 0x16ACC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACC4u;
        // 0x16acc8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ACC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16ACCCu;
    // 0x16accc: 0x0  nop
    ctx->pc = 0x16acccu;
    // NOP
    ctx->pc = 0x16acd0u;
}
