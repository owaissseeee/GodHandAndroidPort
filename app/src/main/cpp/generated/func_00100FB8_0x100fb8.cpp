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

// Function: func_00100FB8
// Address: 0x100fb8 - 0x101e28
void func_00100FB8_0x100fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00100FB8_0x100fb8");
#endif

    switch (ctx->pc) {
        case 0x101040u: goto label_101040;
        case 0x1010bcu: goto label_1010bc;
        case 0x101120u: goto label_101120;
        case 0x101178u: goto label_101178;
        case 0x1011d0u: goto label_1011d0;
        case 0x101228u: goto label_101228;
        case 0x101280u: goto label_101280;
        case 0x1012d8u: goto label_1012d8;
        case 0x101330u: goto label_101330;
        case 0x101388u: goto label_101388;
        case 0x1013e0u: goto label_1013e0;
        case 0x101438u: goto label_101438;
        case 0x10148cu: goto label_10148c;
        case 0x1014f0u: goto label_1014f0;
        case 0x10153cu: goto label_10153c;
        case 0x101588u: goto label_101588;
        case 0x1015d4u: goto label_1015d4;
        case 0x101620u: goto label_101620;
        case 0x10166cu: goto label_10166c;
        case 0x1016b8u: goto label_1016b8;
        case 0x101704u: goto label_101704;
        case 0x101750u: goto label_101750;
        case 0x10179cu: goto label_10179c;
        case 0x1017f0u: goto label_1017f0;
        case 0x10183cu: goto label_10183c;
        case 0x101888u: goto label_101888;
        case 0x1018e0u: goto label_1018e0;
        case 0x101938u: goto label_101938;
        case 0x101984u: goto label_101984;
        case 0x1019d0u: goto label_1019d0;
        case 0x101a2cu: goto label_101a2c;
        case 0x101a84u: goto label_101a84;
        case 0x101adcu: goto label_101adc;
        case 0x101b28u: goto label_101b28;
        case 0x101b74u: goto label_101b74;
        case 0x101bc0u: goto label_101bc0;
        case 0x101c0cu: goto label_101c0c;
        case 0x101c58u: goto label_101c58;
        case 0x101ca4u: goto label_101ca4;
        case 0x101cf0u: goto label_101cf0;
        case 0x101d3cu: goto label_101d3c;
        case 0x101d88u: goto label_101d88;
        default: break;
    }

    ctx->pc = 0x100fb8u;

    // 0x100fb8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x100fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x100fbc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x100fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x100fc0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x100fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x100fc4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x100fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x100fc8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x100fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x100fcc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x100fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x100fd0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x100fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x100fd4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x100fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x100fd8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x100fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x100fdc: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x100fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x100fe0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x100fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x100fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100fe8: 0xe7bf00f8  swc1        $f31, 0xF8($sp)
    ctx->pc = 0x100fe8u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x100fec: 0xe7be00f0  swc1        $f30, 0xF0($sp)
    ctx->pc = 0x100fecu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x100ff0: 0xe7bd00e8  swc1        $f29, 0xE8($sp)
    ctx->pc = 0x100ff0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x100ff4: 0xe7bc00e0  swc1        $f28, 0xE0($sp)
    ctx->pc = 0x100ff4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x100ff8: 0xe7bb00d8  swc1        $f27, 0xD8($sp)
    ctx->pc = 0x100ff8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x100ffc: 0xe7ba00d0  swc1        $f26, 0xD0($sp)
    ctx->pc = 0x100ffcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x101000: 0xe7b900c8  swc1        $f25, 0xC8($sp)
    ctx->pc = 0x101000u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x101004: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x101004u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x101008: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x101008u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x10100c: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x10100cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x101010: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x101010u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x101014: 0x14a2036b  bne         $a1, $v0, . + 4 + (0x36B << 2)
    ctx->pc = 0x101014u;
    {
        const bool branch_taken_0x101014 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x101018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101014u;
        // 0x101018: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x101014) {
            ctx->pc = 0x101DC4u;
            goto label_101dc4;
        }
    }
    ctx->pc = 0x10101Cu;
    // 0x10101c: 0x10800369  beqz        $a0, . + 4 + (0x369 << 2)
    ctx->pc = 0x10101Cu;
    {
        const bool branch_taken_0x10101c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x101020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10101Cu;
        // 0x101020: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10101c) {
            ctx->pc = 0x101DC4u;
            goto label_101dc4;
        }
    }
    ctx->pc = 0x101024u;
    // 0x101024: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101028: 0x26100e00  addiu       $s0, $s0, 0xE00
    ctx->pc = 0x101028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3584));
    // 0x10102c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x10102cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101030: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x101030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x101034: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x101034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x101038: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101038u;
    SET_GPR_U32(ctx, 31, 0x101040u);
    ctx->pc = 0x10103Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101038u;
    // 0x10103c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101038u, 0x101040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101040u;
label_101040:
    // 0x101040: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x101040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x101044: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x101044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x101048: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x101048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x10104c: 0x24170011  addiu       $s7, $zero, 0x11
    ctx->pc = 0x10104cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x101050: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x101050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x101054: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x101054u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x101058: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10105c: 0xa2170002  sb          $s7, 0x2($s0)
    ctx->pc = 0x10105cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 23));
    // 0x101060: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101064: 0xa2170003  sb          $s7, 0x3($s0)
    ctx->pc = 0x101064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 23));
    // 0x101068: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x10106c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x10106cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101074: 0xe6170008  swc1        $f23, 0x8($s0)
    ctx->pc = 0x101074u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101078: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10107c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x10107cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101080: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x101080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x101084: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x101084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x101088: 0x24140013  addiu       $s4, $zero, 0x13
    ctx->pc = 0x101088u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x10108c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x10108cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101090: 0x241e0014  addiu       $fp, $zero, 0x14
    ctx->pc = 0x101090u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x101094: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101098: 0x24150016  addiu       $s5, $zero, 0x16
    ctx->pc = 0x101098u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x10109c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x10109cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1010a0: 0x24160017  addiu       $s6, $zero, 0x17
    ctx->pc = 0x1010a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1010a4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1010a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1010a8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1010a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1010ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1010acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010b0: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1010b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1010b4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1010B4u;
    SET_GPR_U32(ctx, 31, 0x1010BCu);
    ctx->pc = 0x1010B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010B4u;
    // 0x1010b8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1010B4u, 0x1010BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010BCu;
label_1010bc:
    // 0x1010bc: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x1010bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
    // 0x1010c0: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1010c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1010c4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1010c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1010c8: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x1010c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x1010cc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1010ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1010d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1010d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1010d4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1010d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1010d8: 0xa2170002  sb          $s7, 0x2($s0)
    ctx->pc = 0x1010d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 23));
    // 0x1010dc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1010dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1010e0: 0xa2170003  sb          $s7, 0x3($s0)
    ctx->pc = 0x1010e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 23));
    // 0x1010e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1010e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010e8: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x1010e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1010ec: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1010ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1010f0: 0xe6170008  swc1        $f23, 0x8($s0)
    ctx->pc = 0x1010f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1010f4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1010f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1010f8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1010f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1010fc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1010fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101100: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101104: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101108: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x10110c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x10110cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x101110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101114: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101114u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101118: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101118u;
    SET_GPR_U32(ctx, 31, 0x101120u);
    ctx->pc = 0x10111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101118u;
    // 0x10111c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101118u, 0x101120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101120u;
label_101120:
    // 0x101120: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x101120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
    // 0x101124: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x101124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x101128: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x101128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x10112c: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x10112cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x101130: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101134: 0xa2130003  sb          $s3, 0x3($s0)
    ctx->pc = 0x101134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x101138: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x10113c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x10113cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101144: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x101144u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101148: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10114c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x10114cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101150: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101150u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101154: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101158: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x10115c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x10115cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101160: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x101164: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101164u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10116c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x10116cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101170: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101170u;
    SET_GPR_U32(ctx, 31, 0x101178u);
    ctx->pc = 0x101174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101170u;
    // 0x101174: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101170u, 0x101178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101178u;
label_101178:
    // 0x101178: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x101178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x10117c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x10117cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x101180: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x101180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x101184: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x101184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x101188: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x10118c: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x10118cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x101190: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x101194: 0xe61d0004  swc1        $f29, 0x4($s0)
    ctx->pc = 0x101194u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101198: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10119c: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x10119cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1011a0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1011a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1011a4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1011a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1011a8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1011a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1011ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1011acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1011b0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1011b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1011b4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1011b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1011b8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1011b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1011bc: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1011bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1011c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1011c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1011c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1011c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1011c8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1011C8u;
    SET_GPR_U32(ctx, 31, 0x1011D0u);
    ctx->pc = 0x1011CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1011C8u;
    // 0x1011cc: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1011C8u, 0x1011D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011D0u;
label_1011d0:
    // 0x1011d0: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x1011d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
    // 0x1011d4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1011d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1011d8: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x1011d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x1011dc: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x1011dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x1011e0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1011e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1011e4: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x1011e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x1011e8: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1011e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1011ec: 0xe6180004  swc1        $f24, 0x4($s0)
    ctx->pc = 0x1011ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1011f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1011f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1011f4: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x1011f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1011f8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1011f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1011fc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1011fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101200: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101200u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101204: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101208: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x10120c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x10120cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101210: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x101214: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101214u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10121c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x10121cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101220: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101220u;
    SET_GPR_U32(ctx, 31, 0x101228u);
    ctx->pc = 0x101224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101220u;
    // 0x101224: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101220u, 0x101228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101228u;
label_101228:
    // 0x101228: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x101228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x10122c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x10122cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x101230: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x101230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x101234: 0xa2140002  sb          $s4, 0x2($s0)
    ctx->pc = 0x101234u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x101238: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x10123c: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x10123cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x101240: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x101244: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x101244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10124c: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x10124cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101250: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101254: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x101254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101258: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x10125c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x10125cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101260: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101264: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101268: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x10126c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x10126cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101274: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101278: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101278u;
    SET_GPR_U32(ctx, 31, 0x101280u);
    ctx->pc = 0x10127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101278u;
    // 0x10127c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101278u, 0x101280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101280u;
label_101280:
    // 0x101280: 0x3c013deb  lui         $at, 0x3DEB
    ctx->pc = 0x101280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15851 << 16));
    // 0x101284: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x101284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x101288: 0x4481f800  mtc1        $at, $f31
    ctx->pc = 0x101288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
    // 0x10128c: 0xa2140002  sb          $s4, 0x2($s0)
    ctx->pc = 0x10128cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x101290: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101294: 0xa21e0003  sb          $fp, 0x3($s0)
    ctx->pc = 0x101294u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 30));
    // 0x101298: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x10129c: 0xe6180004  swc1        $f24, 0x4($s0)
    ctx->pc = 0x10129cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1012a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1012a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1012a4: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x1012a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1012a8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1012a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1012ac: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1012acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1012b0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1012b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1012b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1012b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1012b8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1012b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1012bc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1012bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1012c0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1012c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1012c4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1012c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1012c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1012c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1012cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1012ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1012d0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1012D0u;
    SET_GPR_U32(ctx, 31, 0x1012D8u);
    ctx->pc = 0x1012D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012D0u;
    // 0x1012d4: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1012D0u, 0x1012D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1012D8u;
label_1012d8:
    // 0x1012d8: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1012d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x1012dc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1012dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1012e0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1012e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1012e4: 0xa2150002  sb          $s5, 0x2($s0)
    ctx->pc = 0x1012e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x1012e8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1012e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1012ec: 0xa2150003  sb          $s5, 0x3($s0)
    ctx->pc = 0x1012ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x1012f0: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1012f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1012f4: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x1012f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1012f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1012f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1012fc: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x1012fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101300: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101304: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x101304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101308: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101308u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x10130c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x10130cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101310: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101314: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101318: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x10131c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x10131cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101324: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101328: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101328u;
    SET_GPR_U32(ctx, 31, 0x101330u);
    ctx->pc = 0x10132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101328u;
    // 0x10132c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101328u, 0x101330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101330u;
label_101330:
    // 0x101330: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x101330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x101334: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x101334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x101338: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x101338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x10133c: 0xa2150002  sb          $s5, 0x2($s0)
    ctx->pc = 0x10133cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x101340: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101344: 0xa2160003  sb          $s6, 0x3($s0)
    ctx->pc = 0x101344u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 22));
    // 0x101348: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x10134c: 0xe61d0004  swc1        $f29, 0x4($s0)
    ctx->pc = 0x10134cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101354: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x101354u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101358: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10135c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x10135cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101360: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101360u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101364: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101368: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x10136c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x10136cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101370: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x101374: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10137c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x10137cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101380: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101380u;
    SET_GPR_U32(ctx, 31, 0x101388u);
    ctx->pc = 0x101384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101380u;
    // 0x101384: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101380u, 0x101388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101388u;
label_101388:
    // 0x101388: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x101388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x10138c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10138cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x101390: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x101390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x101394: 0xa2150002  sb          $s5, 0x2($s0)
    ctx->pc = 0x101394u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x101398: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x10139c: 0xa2160003  sb          $s6, 0x3($s0)
    ctx->pc = 0x10139cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 22));
    // 0x1013a0: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1013a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1013a4: 0xe6180004  swc1        $f24, 0x4($s0)
    ctx->pc = 0x1013a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1013a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1013a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013ac: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x1013acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1013b0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1013b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1013b4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1013b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1013b8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1013b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1013bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1013bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1013c0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1013c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1013c4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1013c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1013c8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1013c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1013cc: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1013ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1013d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1013d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1013d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1013d8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1013D8u;
    SET_GPR_U32(ctx, 31, 0x1013E0u);
    ctx->pc = 0x1013DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1013D8u;
    // 0x1013dc: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1013D8u, 0x1013E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013E0u;
label_1013e0:
    // 0x1013e0: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1013e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1013e4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1013e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1013e8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1013e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1013ec: 0xa2160002  sb          $s6, 0x2($s0)
    ctx->pc = 0x1013ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 22));
    // 0x1013f0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1013f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1013f4: 0xa2160003  sb          $s6, 0x3($s0)
    ctx->pc = 0x1013f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 22));
    // 0x1013f8: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1013f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1013fc: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x1013fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101404: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x101404u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101408: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10140c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x10140cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101410: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101410u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101414: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101418: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x10141c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x10141cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101420: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x101424: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101424u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10142c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x10142cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101430: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101430u;
    SET_GPR_U32(ctx, 31, 0x101438u);
    ctx->pc = 0x101434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101430u;
    // 0x101434: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101430u, 0x101438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101438u;
label_101438:
    // 0x101438: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x101438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10143c: 0xa2160002  sb          $s6, 0x2($s0)
    ctx->pc = 0x10143cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 22));
    // 0x101440: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x101440u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x101444: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x101444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101448: 0xe6180004  swc1        $f24, 0x4($s0)
    ctx->pc = 0x101448u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x10144c: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x10144cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    // 0x101450: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x101450u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101454: 0x26311040  addiu       $s1, $s1, 0x1040
    ctx->pc = 0x101454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4160));
    // 0x101458: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x101458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x10145c: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x10145cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x101460: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101468: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x10146c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10146cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101470: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x101470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x101474: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101478: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x10147c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x10147cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101480: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101484: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101484u;
    SET_GPR_U32(ctx, 31, 0x10148Cu);
    ctx->pc = 0x101488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101484u;
    // 0x101488: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101484u, 0x10148Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10148Cu;
label_10148c:
    // 0x10148c: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x10148cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
    // 0x101490: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x101490u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x101494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101498: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x101498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x10149c: 0x3c01be38  lui         $at, 0xBE38
    ctx->pc = 0x10149cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48696 << 16));
    // 0x1014a0: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1014a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1014a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1014a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1014a8: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x1014a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1014ac: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1014acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1014b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1014b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014b4: 0xa2370002  sb          $s7, 0x2($s1)
    ctx->pc = 0x1014b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 23));
    // 0x1014b8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1014b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1014bc: 0xa2370003  sb          $s7, 0x3($s1)
    ctx->pc = 0x1014bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 23));
    // 0x1014c0: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x1014c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1014c4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1014c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1014c8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1014c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1014cc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1014ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1014d0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1014d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1014d4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1014d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1014d8: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1014d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1014dc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1014dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1014e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1014e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014e4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1014e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1014e8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1014E8u;
    SET_GPR_U32(ctx, 31, 0x1014F0u);
    ctx->pc = 0x1014ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014E8u;
    // 0x1014ec: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1014E8u, 0x1014F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014F0u;
label_1014f0:
    // 0x1014f0: 0xa2330002  sb          $s3, 0x2($s1)
    ctx->pc = 0x1014f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x1014f4: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1014f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1014f8: 0xa2330003  sb          $s3, 0x3($s1)
    ctx->pc = 0x1014f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x1014fc: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x1014fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x101500: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x101500u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x101504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101508: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x101508u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x10150c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x10150cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101510: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x101510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x101514: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101514u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101518: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x10151c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x10151cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101520: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x101520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x101524: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x101524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x101528: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101528u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x10152c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10152cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101530: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101534: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101534u;
    SET_GPR_U32(ctx, 31, 0x10153Cu);
    ctx->pc = 0x101538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101534u;
    // 0x101538: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101534u, 0x10153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10153Cu;
label_10153c:
    // 0x10153c: 0xa2330002  sb          $s3, 0x2($s1)
    ctx->pc = 0x10153cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x101540: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x101540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x101544: 0xa2340003  sb          $s4, 0x3($s1)
    ctx->pc = 0x101544u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x101548: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x101548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x10154c: 0xe63d0004  swc1        $f29, 0x4($s1)
    ctx->pc = 0x10154cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x101550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101554: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x101554u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x101558: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10155c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x10155cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x101560: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101564: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101568: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x10156c: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x10156cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x101570: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x101570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x101574: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101574u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10157c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x10157cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101580: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101580u;
    SET_GPR_U32(ctx, 31, 0x101588u);
    ctx->pc = 0x101584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101580u;
    // 0x101584: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101580u, 0x101588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101588u;
label_101588:
    // 0x101588: 0xa2330002  sb          $s3, 0x2($s1)
    ctx->pc = 0x101588u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x10158c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x10158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x101590: 0xa2340003  sb          $s4, 0x3($s1)
    ctx->pc = 0x101590u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x101594: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x101594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x101598: 0xe6380004  swc1        $f24, 0x4($s1)
    ctx->pc = 0x101598u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x10159c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10159cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1015a0: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x1015a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1015a4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1015a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1015a8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1015a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1015ac: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1015acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1015b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1015b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1015b4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1015b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1015b8: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1015b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1015bc: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1015bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1015c0: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1015c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1015c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1015c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1015c8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1015c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1015cc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1015CCu;
    SET_GPR_U32(ctx, 31, 0x1015D4u);
    ctx->pc = 0x1015D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015CCu;
    // 0x1015d0: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1015CCu, 0x1015D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015D4u;
label_1015d4:
    // 0x1015d4: 0xa2340002  sb          $s4, 0x2($s1)
    ctx->pc = 0x1015d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x1015d8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1015d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1015dc: 0xa2340003  sb          $s4, 0x3($s1)
    ctx->pc = 0x1015dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x1015e0: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x1015e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1015e4: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x1015e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1015e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1015e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1015ec: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x1015ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1015f0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1015f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1015f4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1015f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1015f8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1015f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1015fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1015fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101600: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101604: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x101604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x101608: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x101608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x10160c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x10160cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101614: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101618: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101618u;
    SET_GPR_U32(ctx, 31, 0x101620u);
    ctx->pc = 0x10161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101618u;
    // 0x10161c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101618u, 0x101620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101620u;
label_101620:
    // 0x101620: 0xa2340002  sb          $s4, 0x2($s1)
    ctx->pc = 0x101620u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x101624: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x101624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x101628: 0xa23e0003  sb          $fp, 0x3($s1)
    ctx->pc = 0x101628u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 30));
    // 0x10162c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x10162cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x101630: 0xe6380004  swc1        $f24, 0x4($s1)
    ctx->pc = 0x101630u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x101634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101638: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x101638u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x10163c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x10163cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101640: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x101640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x101644: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101644u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101648: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x10164c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x10164cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101650: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x101650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x101654: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x101654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x101658: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101658u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x10165c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10165cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101660: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101664: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101664u;
    SET_GPR_U32(ctx, 31, 0x10166Cu);
    ctx->pc = 0x101668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101664u;
    // 0x101668: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101664u, 0x10166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10166Cu;
label_10166c:
    // 0x10166c: 0xa2350002  sb          $s5, 0x2($s1)
    ctx->pc = 0x10166cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x101670: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x101670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x101674: 0xa2350003  sb          $s5, 0x3($s1)
    ctx->pc = 0x101674u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x101678: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x101678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x10167c: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x10167cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x101680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101684: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x101684u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x101688: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10168c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x10168cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x101690: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101690u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101694: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101698: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x10169c: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x10169cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1016a0: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1016a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1016a4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1016a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1016a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1016a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016ac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1016acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1016b0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1016B0u;
    SET_GPR_U32(ctx, 31, 0x1016B8u);
    ctx->pc = 0x1016B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016B0u;
    // 0x1016b4: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1016B0u, 0x1016B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016B8u;
label_1016b8:
    // 0x1016b8: 0xa2350002  sb          $s5, 0x2($s1)
    ctx->pc = 0x1016b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x1016bc: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1016bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1016c0: 0xa2360003  sb          $s6, 0x3($s1)
    ctx->pc = 0x1016c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 22));
    // 0x1016c4: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x1016c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1016c8: 0xe63d0004  swc1        $f29, 0x4($s1)
    ctx->pc = 0x1016c8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1016cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1016ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016d0: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x1016d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1016d4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1016d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1016d8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1016d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1016dc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1016dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1016e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1016e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1016e4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1016e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1016e8: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1016e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1016ec: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1016ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1016f0: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1016f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1016f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1016f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1016f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1016fc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1016FCu;
    SET_GPR_U32(ctx, 31, 0x101704u);
    ctx->pc = 0x101700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016FCu;
    // 0x101700: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1016FCu, 0x101704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101704u;
label_101704:
    // 0x101704: 0xa2350002  sb          $s5, 0x2($s1)
    ctx->pc = 0x101704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x101708: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x101708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x10170c: 0xa2360003  sb          $s6, 0x3($s1)
    ctx->pc = 0x10170cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 22));
    // 0x101710: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x101710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x101714: 0xe6380004  swc1        $f24, 0x4($s1)
    ctx->pc = 0x101714u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x101718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10171c: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x10171cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x101720: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101724: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x101724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x101728: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101728u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x10172c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x10172cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101730: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101734: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x101734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x101738: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x101738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x10173c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x10173cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101744: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101748: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101748u;
    SET_GPR_U32(ctx, 31, 0x101750u);
    ctx->pc = 0x10174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101748u;
    // 0x10174c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101748u, 0x101750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101750u;
label_101750:
    // 0x101750: 0xa2360002  sb          $s6, 0x2($s1)
    ctx->pc = 0x101750u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 22));
    // 0x101754: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x101754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x101758: 0xa2360003  sb          $s6, 0x3($s1)
    ctx->pc = 0x101758u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 22));
    // 0x10175c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x10175cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x101760: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x101760u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x101764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101768: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x101768u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x10176c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x10176cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101770: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x101770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x101774: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101774u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101778: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x10177c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x10177cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101780: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x101780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x101784: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x101784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x101788: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101788u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x10178c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10178cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101790: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101794: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101794u;
    SET_GPR_U32(ctx, 31, 0x10179Cu);
    ctx->pc = 0x101798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101794u;
    // 0x101798: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101794u, 0x10179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10179Cu;
label_10179c:
    // 0x10179c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x10179cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1017a0: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x1017a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1017a4: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x1017a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1017a8: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1017a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1017ac: 0xa2360002  sb          $s6, 0x2($s1)
    ctx->pc = 0x1017acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 22));
    // 0x1017b0: 0x3c120046  lui         $s2, 0x46
    ctx->pc = 0x1017b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
    // 0x1017b4: 0xe6380004  swc1        $f24, 0x4($s1)
    ctx->pc = 0x1017b4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1017b8: 0x26521250  addiu       $s2, $s2, 0x1250
    ctx->pc = 0x1017b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4688));
    // 0x1017bc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1017bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1017c0: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x1017c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1017c4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1017c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1017c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1017c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1017ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1017d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1017d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017d4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1017d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1017d8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1017d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1017dc: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1017dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1017e0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1017e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1017e4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1017e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1017e8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1017E8u;
    SET_GPR_U32(ctx, 31, 0x1017F0u);
    ctx->pc = 0x1017ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1017E8u;
    // 0x1017ec: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1017E8u, 0x1017F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017F0u;
label_1017f0:
    // 0x1017f0: 0xa2570002  sb          $s7, 0x2($s2)
    ctx->pc = 0x1017f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 23));
    // 0x1017f4: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x1017f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1017f8: 0xa2570003  sb          $s7, 0x3($s2)
    ctx->pc = 0x1017f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 23));
    // 0x1017fc: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x1017fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x101800: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x101800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x101804: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101808: 0xe6570008  swc1        $f23, 0x8($s2)
    ctx->pc = 0x101808u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x10180c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x10180cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101810: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x101810u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x101814: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101814u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101818: 0xe45e0004  swc1        $f30, 0x4($v0)
    ctx->pc = 0x101818u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x10181c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x10181cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101820: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x101820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x101824: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x101824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x101828: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101828u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x10182c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10182cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101830: 0xe47e0004  swc1        $f30, 0x4($v1)
    ctx->pc = 0x101830u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x101834: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101834u;
    SET_GPR_U32(ctx, 31, 0x10183Cu);
    ctx->pc = 0x101838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101834u;
    // 0x101838: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101834u, 0x10183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10183Cu;
label_10183c:
    // 0x10183c: 0xa2530002  sb          $s3, 0x2($s2)
    ctx->pc = 0x10183cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x101840: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x101840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x101844: 0xa2530003  sb          $s3, 0x3($s2)
    ctx->pc = 0x101844u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x101848: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x101848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x10184c: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x10184cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x101850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101854: 0xe65f0008  swc1        $f31, 0x8($s2)
    ctx->pc = 0x101854u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x101858: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10185c: 0xe65b0010  swc1        $f27, 0x10($s2)
    ctx->pc = 0x10185cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x101860: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101860u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101864: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x101864u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x101868: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x10186c: 0xe65b0020  swc1        $f27, 0x20($s2)
    ctx->pc = 0x10186cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x101870: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x101870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x101874: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101874u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x101878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10187c: 0xe4760004  swc1        $f22, 0x4($v1)
    ctx->pc = 0x10187cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x101880: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101880u;
    SET_GPR_U32(ctx, 31, 0x101888u);
    ctx->pc = 0x101884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101880u;
    // 0x101884: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101880u, 0x101888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101888u;
label_101888:
    // 0x101888: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x101888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x10188c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x10188cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x101890: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101894: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x101894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x101898: 0xa2530002  sb          $s3, 0x2($s2)
    ctx->pc = 0x101898u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x10189c: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x10189cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1018a0: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1018a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1018a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1018a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1018a8: 0xa2530003  sb          $s3, 0x3($s2)
    ctx->pc = 0x1018a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x1018ac: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1018acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1018b0: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x1018b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1018b4: 0xe65b0010  swc1        $f27, 0x10($s2)
    ctx->pc = 0x1018b4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1018b8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1018b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1018bc: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x1018bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1018c0: 0xe45c0008  swc1        $f28, 0x8($v0)
    ctx->pc = 0x1018c0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1018c4: 0xe65b0020  swc1        $f27, 0x20($s2)
    ctx->pc = 0x1018c4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1018c8: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1018c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1018cc: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1018ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1018d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1018d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1018d4: 0xe4760004  swc1        $f22, 0x4($v1)
    ctx->pc = 0x1018d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1018d8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1018D8u;
    SET_GPR_U32(ctx, 31, 0x1018E0u);
    ctx->pc = 0x1018DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1018D8u;
    // 0x1018dc: 0xe47c0008  swc1        $f28, 0x8($v1) (Delay Slot)
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1018D8u, 0x1018E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1018E0u;
label_1018e0:
    // 0x1018e0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1018e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1018e4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1018e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1018e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1018e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1018ec: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x1018ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1018f0: 0xa2530002  sb          $s3, 0x2($s2)
    ctx->pc = 0x1018f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x1018f4: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x1018f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1018f8: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1018f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1018fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1018fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101900: 0xa2540003  sb          $s4, 0x3($s2)
    ctx->pc = 0x101900u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x101904: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101908: 0xe65a0004  swc1        $f26, 0x4($s2)
    ctx->pc = 0x101908u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x10190c: 0xe65a0008  swc1        $f26, 0x8($s2)
    ctx->pc = 0x10190cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x101910: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101910u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101914: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101918: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x10191c: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x10191cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x101920: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x101920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x101924: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101924u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x101928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10192c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x10192cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101930: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101930u;
    SET_GPR_U32(ctx, 31, 0x101938u);
    ctx->pc = 0x101934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101930u;
    // 0x101934: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101930u, 0x101938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101938u;
label_101938:
    // 0x101938: 0xa2550002  sb          $s5, 0x2($s2)
    ctx->pc = 0x101938u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x10193c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x10193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x101940: 0xa2550003  sb          $s5, 0x3($s2)
    ctx->pc = 0x101940u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x101944: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x101944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x101948: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x101948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x10194c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10194cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101950: 0xe65f0008  swc1        $f31, 0x8($s2)
    ctx->pc = 0x101950u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x101954: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101958: 0xe6590010  swc1        $f25, 0x10($s2)
    ctx->pc = 0x101958u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x10195c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x10195cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101960: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x101960u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x101964: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101968: 0xe6590020  swc1        $f25, 0x20($s2)
    ctx->pc = 0x101968u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x10196c: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x10196cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x101970: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101970u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x101974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101978: 0xe4760004  swc1        $f22, 0x4($v1)
    ctx->pc = 0x101978u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x10197c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x10197Cu;
    SET_GPR_U32(ctx, 31, 0x101984u);
    ctx->pc = 0x101980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10197Cu;
    // 0x101980: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x10197Cu, 0x101984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101984u;
label_101984:
    // 0x101984: 0xe65f0008  swc1        $f31, 0x8($s2)
    ctx->pc = 0x101984u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x101988: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x101988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x10198c: 0xa2550002  sb          $s5, 0x2($s2)
    ctx->pc = 0x10198cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x101990: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x101990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x101994: 0xa2550003  sb          $s5, 0x3($s2)
    ctx->pc = 0x101994u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x101998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10199c: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x10199cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1019a0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1019a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1019a4: 0xe6590010  swc1        $f25, 0x10($s2)
    ctx->pc = 0x1019a4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1019a8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1019a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1019ac: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x1019acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1019b0: 0xe45c0008  swc1        $f28, 0x8($v0)
    ctx->pc = 0x1019b0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1019b4: 0xe6590020  swc1        $f25, 0x20($s2)
    ctx->pc = 0x1019b4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1019b8: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1019b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1019bc: 0xe4760004  swc1        $f22, 0x4($v1)
    ctx->pc = 0x1019bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1019c0: 0xe47c0008  swc1        $f28, 0x8($v1)
    ctx->pc = 0x1019c0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1019c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1019c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1019c8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1019C8u;
    SET_GPR_U32(ctx, 31, 0x1019D0u);
    ctx->pc = 0x1019CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1019C8u;
    // 0x1019cc: 0xe474000c  swc1        $f20, 0xC($v1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1019C8u, 0x1019D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1019D0u;
label_1019d0:
    // 0x1019d0: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x1019d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
    // 0x1019d4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1019d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1019d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1019d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1019dc: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x1019dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1019e0: 0xe65a0008  swc1        $f26, 0x8($s2)
    ctx->pc = 0x1019e0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1019e4: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x1019e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x1019e8: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1019e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1019ec: 0x261013a0  addiu       $s0, $s0, 0x13A0
    ctx->pc = 0x1019ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5024));
    // 0x1019f0: 0xa2550002  sb          $s5, 0x2($s2)
    ctx->pc = 0x1019f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x1019f4: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x1019f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1019f8: 0xa2560003  sb          $s6, 0x3($s2)
    ctx->pc = 0x1019f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 22));
    // 0x1019fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1019fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a00: 0xe65a0004  swc1        $f26, 0x4($s2)
    ctx->pc = 0x101a00u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x101a04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a08: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101a08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101a0c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101a10: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101a14: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x101a14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x101a18: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x101a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x101a1c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101a1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101a20: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101a24: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101A24u;
    SET_GPR_U32(ctx, 31, 0x101A2Cu);
    ctx->pc = 0x101A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101A24u;
    // 0x101a28: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101A24u, 0x101A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101A2Cu;
label_101a2c:
    // 0x101a2c: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x101a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
    // 0x101a30: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x101a30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x101a34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101a38: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101a3c: 0xa2170002  sb          $s7, 0x2($s0)
    ctx->pc = 0x101a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 23));
    // 0x101a40: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x101a44: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x101a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101a48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a4c: 0xa2170003  sb          $s7, 0x3($s0)
    ctx->pc = 0x101a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 23));
    // 0x101a50: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101a54: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x101a54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101a58: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x101a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101a5c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101a5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101a60: 0xe45e0004  swc1        $f30, 0x4($v0)
    ctx->pc = 0x101a60u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x101a64: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101a68: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101a6c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x101a70: 0xe47e0004  swc1        $f30, 0x4($v1)
    ctx->pc = 0x101a70u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x101a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a78: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101a78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101a7c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101A7Cu;
    SET_GPR_U32(ctx, 31, 0x101A84u);
    ctx->pc = 0x101A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101A7Cu;
    // 0x101a80: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101A7Cu, 0x101A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101A84u;
label_101a84:
    // 0x101a84: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x101a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x101a88: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x101a88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x101a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101a90: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101a94: 0xa2170003  sb          $s7, 0x3($s0)
    ctx->pc = 0x101a94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 23));
    // 0x101a98: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x101a9c: 0xa2170002  sb          $s7, 0x2($s0)
    ctx->pc = 0x101a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 23));
    // 0x101aa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101aa4: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x101aa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101aa8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101aac: 0xe6170008  swc1        $f23, 0x8($s0)
    ctx->pc = 0x101aacu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101ab0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x101ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101ab4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x101ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x101ab8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101ab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101abc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101ac0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101ac4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x101ac8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x101ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x101acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ad0: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101ad0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101ad4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101AD4u;
    SET_GPR_U32(ctx, 31, 0x101ADCu);
    ctx->pc = 0x101AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101AD4u;
    // 0x101ad8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101AD4u, 0x101ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101ADCu;
label_101adc:
    // 0x101adc: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x101adcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x101ae0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101ae4: 0xa2130003  sb          $s3, 0x3($s0)
    ctx->pc = 0x101ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x101ae8: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x101aec: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x101aecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101af4: 0xe6170008  swc1        $f23, 0x8($s0)
    ctx->pc = 0x101af4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101af8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101afc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x101afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101b00: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101b00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101b04: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101b08: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101b0c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101b10: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x101b14: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101b14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101b20: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101B20u;
    SET_GPR_U32(ctx, 31, 0x101B28u);
    ctx->pc = 0x101B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B20u;
    // 0x101b24: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101B20u, 0x101B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B28u;
label_101b28:
    // 0x101b28: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x101b28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x101b2c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101b30: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x101b30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x101b34: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x101b38: 0xe61d0004  swc1        $f29, 0x4($s0)
    ctx->pc = 0x101b38u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101b3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b40: 0xe6170008  swc1        $f23, 0x8($s0)
    ctx->pc = 0x101b40u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101b44: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101b48: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x101b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101b4c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101b4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101b50: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101b54: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101b58: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101b5c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x101b60: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101b60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b68: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101b68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101b6c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101B6Cu;
    SET_GPR_U32(ctx, 31, 0x101B74u);
    ctx->pc = 0x101B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B6Cu;
    // 0x101b70: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101B6Cu, 0x101B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B74u;
label_101b74:
    // 0x101b74: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x101b74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x101b78: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101b7c: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x101b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x101b80: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x101b84: 0xe6180004  swc1        $f24, 0x4($s0)
    ctx->pc = 0x101b84u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101b88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b8c: 0xe6170008  swc1        $f23, 0x8($s0)
    ctx->pc = 0x101b8cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101b90: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101b94: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x101b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101b98: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101b98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101b9c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101ba0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101ba4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101ba8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x101bac: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101bacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101bb4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101bb8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101BB8u;
    SET_GPR_U32(ctx, 31, 0x101BC0u);
    ctx->pc = 0x101BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101BB8u;
    // 0x101bbc: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101BB8u, 0x101BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BC0u;
label_101bc0:
    // 0x101bc0: 0xa2140002  sb          $s4, 0x2($s0)
    ctx->pc = 0x101bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x101bc4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101bc8: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x101bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x101bcc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x101bd0: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x101bd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101bd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101bd8: 0xe6170008  swc1        $f23, 0x8($s0)
    ctx->pc = 0x101bd8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101bdc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101be0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x101be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101be4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101be4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101be8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101bec: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101becu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101bf0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101bf4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x101bf8: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101bf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101c04: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101C04u;
    SET_GPR_U32(ctx, 31, 0x101C0Cu);
    ctx->pc = 0x101C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101C04u;
    // 0x101c08: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101C04u, 0x101C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C0Cu;
label_101c0c:
    // 0x101c0c: 0xa2140002  sb          $s4, 0x2($s0)
    ctx->pc = 0x101c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x101c10: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101c14: 0xa21e0003  sb          $fp, 0x3($s0)
    ctx->pc = 0x101c14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 30));
    // 0x101c18: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x101c1c: 0xe6180004  swc1        $f24, 0x4($s0)
    ctx->pc = 0x101c1cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101c20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c24: 0xe6170008  swc1        $f23, 0x8($s0)
    ctx->pc = 0x101c24u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101c28: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101c2c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x101c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101c30: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101c30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101c34: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101c38: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101c3c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101c40: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x101c44: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101c44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c4c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101c50: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101C50u;
    SET_GPR_U32(ctx, 31, 0x101C58u);
    ctx->pc = 0x101C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101C50u;
    // 0x101c54: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101C50u, 0x101C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C58u;
label_101c58:
    // 0x101c58: 0xa2150002  sb          $s5, 0x2($s0)
    ctx->pc = 0x101c58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x101c5c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101c60: 0xa2150003  sb          $s5, 0x3($s0)
    ctx->pc = 0x101c60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x101c64: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x101c68: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x101c68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101c6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c70: 0xe6170008  swc1        $f23, 0x8($s0)
    ctx->pc = 0x101c70u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101c74: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101c78: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x101c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101c7c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101c7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101c80: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101c84: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101c88: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101c8c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x101c90: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101c90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101c9c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101C9Cu;
    SET_GPR_U32(ctx, 31, 0x101CA4u);
    ctx->pc = 0x101CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101C9Cu;
    // 0x101ca0: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101C9Cu, 0x101CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101CA4u;
label_101ca4:
    // 0x101ca4: 0xe61d0004  swc1        $f29, 0x4($s0)
    ctx->pc = 0x101ca4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101ca8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101cac: 0xa2150002  sb          $s5, 0x2($s0)
    ctx->pc = 0x101cacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x101cb0: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x101cb4: 0xa2160003  sb          $s6, 0x3($s0)
    ctx->pc = 0x101cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 22));
    // 0x101cb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cbc: 0xe6170008  swc1        $f23, 0x8($s0)
    ctx->pc = 0x101cbcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101cc0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101cc4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x101cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101cc8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101cc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101ccc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101cd0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101cd4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101cd8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x101cdc: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101cdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ce4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101ce8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101CE8u;
    SET_GPR_U32(ctx, 31, 0x101CF0u);
    ctx->pc = 0x101CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101CE8u;
    // 0x101cec: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101CE8u, 0x101CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101CF0u;
label_101cf0:
    // 0x101cf0: 0xa2150002  sb          $s5, 0x2($s0)
    ctx->pc = 0x101cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x101cf4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101cf8: 0xa2160003  sb          $s6, 0x3($s0)
    ctx->pc = 0x101cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 22));
    // 0x101cfc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x101d00: 0xe6180004  swc1        $f24, 0x4($s0)
    ctx->pc = 0x101d00u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101d04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d08: 0xe6170008  swc1        $f23, 0x8($s0)
    ctx->pc = 0x101d08u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101d0c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101d10: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x101d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101d14: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101d14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101d18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101d1c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101d20: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101d24: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x101d28: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101d28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101d34: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101D34u;
    SET_GPR_U32(ctx, 31, 0x101D3Cu);
    ctx->pc = 0x101D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D34u;
    // 0x101d38: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101D34u, 0x101D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D3Cu;
label_101d3c:
    // 0x101d3c: 0xa2160002  sb          $s6, 0x2($s0)
    ctx->pc = 0x101d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 22));
    // 0x101d40: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101d44: 0xa2160003  sb          $s6, 0x3($s0)
    ctx->pc = 0x101d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 22));
    // 0x101d48: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x101d4c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x101d4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101d50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d54: 0xe6170008  swc1        $f23, 0x8($s0)
    ctx->pc = 0x101d54u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101d58: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x101d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x101d5c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x101d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101d60: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101d60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101d64: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101d68: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101d6c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101d70: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x101d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x101d74: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101d74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101d78: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d80: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x101D80u;
    SET_GPR_U32(ctx, 31, 0x101D88u);
    ctx->pc = 0x101D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D80u;
    // 0x101d84: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x101D80u, 0x101D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D88u;
label_101d88:
    // 0x101d88: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x101d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x101d8c: 0xa2160002  sb          $s6, 0x2($s0)
    ctx->pc = 0x101d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 22));
    // 0x101d90: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x101d90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x101d94: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x101d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x101d98: 0xe6180004  swc1        $f24, 0x4($s0)
    ctx->pc = 0x101d98u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x101d9c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x101d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x101da0: 0xe6170008  swc1        $f23, 0x8($s0)
    ctx->pc = 0x101da0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101da4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x101da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x101da8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x101da8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x101dac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101db0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101db4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101db8: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x101db8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x101dbc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101dc0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x101dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_101dc4:
    // 0x101dc4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x101dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x101dc8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x101dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x101dcc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x101dccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x101dd0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x101dd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101dd4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x101dd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101dd8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x101dd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101ddc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x101ddcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101de0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x101de0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101de4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x101de4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101dec: 0xc7bf00f8  lwc1        $f31, 0xF8($sp)
    ctx->pc = 0x101decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x101df0: 0xc7be00f0  lwc1        $f30, 0xF0($sp)
    ctx->pc = 0x101df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x101df4: 0xc7bd00e8  lwc1        $f29, 0xE8($sp)
    ctx->pc = 0x101df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x101df8: 0xc7bc00e0  lwc1        $f28, 0xE0($sp)
    ctx->pc = 0x101df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x101dfc: 0xc7bb00d8  lwc1        $f27, 0xD8($sp)
    ctx->pc = 0x101dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x101e00: 0xc7ba00d0  lwc1        $f26, 0xD0($sp)
    ctx->pc = 0x101e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x101e04: 0xc7b900c8  lwc1        $f25, 0xC8($sp)
    ctx->pc = 0x101e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x101e08: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x101e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x101e0c: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x101e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x101e10: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x101e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x101e14: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x101e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x101e18: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x101e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x101e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x101E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E1Cu;
        // 0x101e20: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101E24u;
    // 0x101e24: 0x0  nop
    ctx->pc = 0x101e24u;
    // NOP
    ctx->pc = 0x101e28u;
}
