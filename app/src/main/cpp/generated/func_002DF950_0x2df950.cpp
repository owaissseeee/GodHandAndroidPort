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

// Function: func_002DF950
// Address: 0x2df950 - 0x2e0ab8
void func_002DF950_0x2df950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DF950_0x2df950");
#endif

    switch (ctx->pc) {
        case 0x2df9e8u: goto label_2df9e8;
        case 0x2dfa4cu: goto label_2dfa4c;
        case 0x2dfaacu: goto label_2dfaac;
        case 0x2dfb04u: goto label_2dfb04;
        case 0x2dfb5cu: goto label_2dfb5c;
        case 0x2dfbc0u: goto label_2dfbc0;
        case 0x2dfc1cu: goto label_2dfc1c;
        case 0x2dfc80u: goto label_2dfc80;
        case 0x2dfcd8u: goto label_2dfcd8;
        case 0x2dfd34u: goto label_2dfd34;
        case 0x2dfd8cu: goto label_2dfd8c;
        case 0x2dfde8u: goto label_2dfde8;
        case 0x2dfe5cu: goto label_2dfe5c;
        case 0x2dfeb8u: goto label_2dfeb8;
        case 0x2dff1cu: goto label_2dff1c;
        case 0x2dff74u: goto label_2dff74;
        case 0x2dffccu: goto label_2dffcc;
        case 0x2e001cu: goto label_2e001c;
        case 0x2e0074u: goto label_2e0074;
        case 0x2e00ccu: goto label_2e00cc;
        case 0x2e0124u: goto label_2e0124;
        case 0x2e0174u: goto label_2e0174;
        case 0x2e01ccu: goto label_2e01cc;
        case 0x2e0220u: goto label_2e0220;
        case 0x2e0270u: goto label_2e0270;
        case 0x2e02c8u: goto label_2e02c8;
        case 0x2e0328u: goto label_2e0328;
        case 0x2e0388u: goto label_2e0388;
        case 0x2e03e4u: goto label_2e03e4;
        case 0x2e0444u: goto label_2e0444;
        case 0x2e049cu: goto label_2e049c;
        case 0x2e04f8u: goto label_2e04f8;
        case 0x2e0554u: goto label_2e0554;
        case 0x2e05a0u: goto label_2e05a0;
        case 0x2e05f4u: goto label_2e05f4;
        case 0x2e0648u: goto label_2e0648;
        case 0x2e06a0u: goto label_2e06a0;
        case 0x2e06fcu: goto label_2e06fc;
        case 0x2e0758u: goto label_2e0758;
        case 0x2e07a4u: goto label_2e07a4;
        case 0x2e07f8u: goto label_2e07f8;
        case 0x2e084cu: goto label_2e084c;
        case 0x2e08a4u: goto label_2e08a4;
        case 0x2e090cu: goto label_2e090c;
        case 0x2e0970u: goto label_2e0970;
        case 0x2e09c4u: goto label_2e09c4;
        case 0x2e0a14u: goto label_2e0a14;
        default: break;
    }

    ctx->pc = 0x2df950u;

    // 0x2df950: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2df950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2df954: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2df954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2df958: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2df958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2df95c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2df95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2df960: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2df960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2df964: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2df964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2df968: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2df968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2df96c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2df96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2df970: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2df970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2df974: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2df974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2df978: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2df978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2df97c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2df97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2df980: 0xe7bf0108  swc1        $f31, 0x108($sp)
    ctx->pc = 0x2df980u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2df984: 0xe7be0100  swc1        $f30, 0x100($sp)
    ctx->pc = 0x2df984u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2df988: 0xe7bd00f8  swc1        $f29, 0xF8($sp)
    ctx->pc = 0x2df988u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2df98c: 0xe7bc00f0  swc1        $f28, 0xF0($sp)
    ctx->pc = 0x2df98cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2df990: 0xe7bb00e8  swc1        $f27, 0xE8($sp)
    ctx->pc = 0x2df990u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2df994: 0xe7ba00e0  swc1        $f26, 0xE0($sp)
    ctx->pc = 0x2df994u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2df998: 0xe7b900d8  swc1        $f25, 0xD8($sp)
    ctx->pc = 0x2df998u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2df99c: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x2df99cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2df9a0: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x2df9a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2df9a4: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x2df9a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2df9a8: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2df9a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2df9ac: 0x14a20429  bne         $a1, $v0, . + 4 + (0x429 << 2)
    ctx->pc = 0x2DF9ACu;
    {
        const bool branch_taken_0x2df9ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF9ACu;
        // 0x2df9b0: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df9ac) {
            ctx->pc = 0x2E0A54u;
            goto label_2e0a54;
        }
    }
    ctx->pc = 0x2DF9B4u;
    // 0x2df9b4: 0x10800427  beqz        $a0, . + 4 + (0x427 << 2)
    ctx->pc = 0x2DF9B4u;
    {
        const bool branch_taken_0x2df9b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF9B4u;
        // 0x2df9b8: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df9b4) {
            ctx->pc = 0x2E0A54u;
            goto label_2e0a54;
        }
    }
    ctx->pc = 0x2DF9BCu;
    // 0x2df9bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2df9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2df9c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2df9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2df9c4: 0x2610a9a0  addiu       $s0, $s0, -0x5660
    ctx->pc = 0x2df9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945184));
    // 0x2df9c8: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x2df9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
    // 0x2df9cc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2df9ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2df9d0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2df9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2df9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df9d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2df9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df9dc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2df9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2df9e0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DF9E0u;
    SET_GPR_U32(ctx, 31, 0x2DF9E8u);
    ctx->pc = 0x2DF9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF9E0u;
    // 0x2df9e4: 0x24120012  addiu       $s2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DF9E0u, 0x2DF9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF9E8u;
label_2df9e8:
    // 0x2df9e8: 0x24160016  addiu       $s6, $zero, 0x16
    ctx->pc = 0x2df9e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2df9ec: 0xa2120002  sb          $s2, 0x2($s0)
    ctx->pc = 0x2df9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x2df9f0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2df9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2df9f4: 0xa2120003  sb          $s2, 0x3($s0)
    ctx->pc = 0x2df9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x2df9f8: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2df9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2df9fc: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x2df9fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2dfa00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfa00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa04: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2dfa04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2dfa08: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2dfa08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dfa0c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2dfa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2dfa10: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x2dfa10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dfa14: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2dfa14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dfa18: 0x24140013  addiu       $s4, $zero, 0x13
    ctx->pc = 0x2dfa18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2dfa1c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dfa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2dfa20: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x2dfa20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dfa24: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2dfa24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2dfa28: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x2dfa28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dfa2c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2dfa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2dfa30: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x2dfa30u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dfa34: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2dfa34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2dfa38: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2dfa38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2dfa3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dfa40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dfa44: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DFA44u;
    SET_GPR_U32(ctx, 31, 0x2DFA4Cu);
    ctx->pc = 0x2DFA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFA44u;
    // 0x2dfa48: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DFA44u, 0x2DFA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA4Cu;
label_2dfa4c:
    // 0x2dfa4c: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x2dfa4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
    // 0x2dfa50: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2dfa50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x2dfa54: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2dfa54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2dfa58: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x2dfa58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2dfa5c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2dfa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2dfa60: 0xa2160002  sb          $s6, 0x2($s0)
    ctx->pc = 0x2dfa60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 22));
    // 0x2dfa64: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2dfa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2dfa68: 0xa2160003  sb          $s6, 0x3($s0)
    ctx->pc = 0x2dfa68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 22));
    // 0x2dfa6c: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x2dfa6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x2dfa70: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2dfa70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2dfa74: 0x2631aa00  addiu       $s1, $s1, -0x5600
    ctx->pc = 0x2dfa74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945280));
    // 0x2dfa78: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2dfa78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2dfa7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa80: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2dfa80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dfa84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfa84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa88: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dfa88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2dfa8c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2dfa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dfa90: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2dfa90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2dfa94: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2dfa94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2dfa98: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2dfa98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2dfa9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dfa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dfaa0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2dfaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2dfaa4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DFAA4u;
    SET_GPR_U32(ctx, 31, 0x2DFAACu);
    ctx->pc = 0x2DFAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFAA4u;
    // 0x2dfaa8: 0xafb70000  sw          $s7, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DFAA4u, 0x2DFAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFAACu;
label_2dfaac:
    // 0x2dfaac: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x2dfaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x2dfab0: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x2dfab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x2dfab4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2dfab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2dfab8: 0xa2320002  sb          $s2, 0x2($s1)
    ctx->pc = 0x2dfab8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x2dfabc: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2dfabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2dfac0: 0xa2320003  sb          $s2, 0x3($s1)
    ctx->pc = 0x2dfac0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x2dfac4: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2dfac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2dfac8: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x2dfac8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2dfacc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfad0: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2dfad0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2dfad4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2dfad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dfad8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2dfad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2dfadc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2dfadcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dfae0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dfae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2dfae4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2dfae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2dfae8: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2dfae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2dfaec: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2dfaecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2dfaf0: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2dfaf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2dfaf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfaf8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dfaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dfafc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DFAFCu;
    SET_GPR_U32(ctx, 31, 0x2DFB04u);
    ctx->pc = 0x2DFB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFAFCu;
    // 0x2dfb00: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DFAFCu, 0x2DFB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB04u;
label_2dfb04:
    // 0x2dfb04: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x2dfb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x2dfb08: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2dfb08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2dfb0c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2dfb0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2dfb10: 0xa2320002  sb          $s2, 0x2($s1)
    ctx->pc = 0x2dfb10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x2dfb14: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2dfb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2dfb18: 0xe6370004  swc1        $f23, 0x4($s1)
    ctx->pc = 0x2dfb18u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2dfb1c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2dfb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2dfb20: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x2dfb20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2dfb24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb28: 0xa2340003  sb          $s4, 0x3($s1)
    ctx->pc = 0x2dfb28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x2dfb2c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2dfb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dfb30: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2dfb30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2dfb34: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2dfb34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dfb38: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dfb38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2dfb3c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2dfb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2dfb40: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2dfb40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2dfb44: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2dfb44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2dfb48: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2dfb48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2dfb4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dfb50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dfb54: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DFB54u;
    SET_GPR_U32(ctx, 31, 0x2DFB5Cu);
    ctx->pc = 0x2DFB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB54u;
    // 0x2dfb58: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DFB54u, 0x2DFB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB5Cu;
label_2dfb5c:
    // 0x2dfb5c: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x2dfb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x2dfb60: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2dfb60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2dfb64: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x2dfb64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x2dfb68: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x2dfb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
    // 0x2dfb6c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x2dfb6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x2dfb70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dfb70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfb74: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2dfb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2dfb78: 0xa2320002  sb          $s2, 0x2($s1)
    ctx->pc = 0x2dfb78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x2dfb7c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2dfb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2dfb80: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2dfb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2dfb84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb88: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x2dfb88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2dfb8c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2dfb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dfb90: 0xa2340003  sb          $s4, 0x3($s1)
    ctx->pc = 0x2dfb90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x2dfb94: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2dfb94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2dfb98: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2dfb98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dfb9c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dfb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2dfba0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2dfba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2dfba4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2dfba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2dfba8: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2dfba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2dfbac: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2dfbacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2dfbb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfbb4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dfbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dfbb8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DFBB8u;
    SET_GPR_U32(ctx, 31, 0x2DFBC0u);
    ctx->pc = 0x2DFBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFBB8u;
    // 0x2dfbbc: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DFBB8u, 0x2DFBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBC0u;
label_2dfbc0:
    // 0x2dfbc0: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x2dfbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x2dfbc4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2dfbc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2dfbc8: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x2dfbc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x2dfbcc: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x2dfbccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2dfbd0: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x2dfbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2dfbd4: 0xa2340003  sb          $s4, 0x3($s1)
    ctx->pc = 0x2dfbd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x2dfbd8: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x2dfbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x2dfbdc: 0xa2340002  sb          $s4, 0x2($s1)
    ctx->pc = 0x2dfbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x2dfbe0: 0x2610aac0  addiu       $s0, $s0, -0x5540
    ctx->pc = 0x2dfbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945472));
    // 0x2dfbe4: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2dfbe4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2dfbe8: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2dfbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2dfbec: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2dfbecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2dfbf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfbf4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2dfbf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2dfbf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfbfc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dfbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dfc00: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2dfc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dfc04: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2dfc04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2dfc08: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2dfc08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2dfc0c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2dfc0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dfc10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dfc10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2dfc14: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DFC14u;
    SET_GPR_U32(ctx, 31, 0x2DFC1Cu);
    ctx->pc = 0x2DFC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC14u;
    // 0x2dfc18: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DFC14u, 0x2DFC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC1Cu;
label_2dfc1c:
    // 0x2dfc1c: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x2dfc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x2dfc20: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2dfc20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2dfc24: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2dfc24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2dfc28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2dfc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2dfc2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dfc2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfc30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2dfc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dfc34: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x2dfc34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dfc38: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2dfc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2dfc3c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2dfc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2dfc40: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2dfc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2dfc44: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x2dfc44u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2dfc48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc4c: 0xa2150003  sb          $s5, 0x3($s0)
    ctx->pc = 0x2dfc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x2dfc50: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2dfc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dfc54: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2dfc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2dfc58: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2dfc58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dfc5c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dfc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2dfc60: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2dfc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2dfc64: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2dfc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2dfc68: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2dfc68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2dfc6c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2dfc6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2dfc70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dfc74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dfc78: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DFC78u;
    SET_GPR_U32(ctx, 31, 0x2DFC80u);
    ctx->pc = 0x2DFC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC78u;
    // 0x2dfc7c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DFC78u, 0x2DFC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC80u;
label_2dfc80:
    // 0x2dfc80: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x2dfc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x2dfc84: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2dfc84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2dfc88: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x2dfc88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x2dfc8c: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x2dfc8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2dfc90: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2dfc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2dfc94: 0xa2150002  sb          $s5, 0x2($s0)
    ctx->pc = 0x2dfc94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x2dfc98: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2dfc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2dfc9c: 0xa2150003  sb          $s5, 0x3($s0)
    ctx->pc = 0x2dfc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x2dfca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfca4: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2dfca4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2dfca8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2dfca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dfcac: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2dfcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2dfcb0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2dfcb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dfcb4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dfcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2dfcb8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2dfcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2dfcbc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2dfcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2dfcc0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2dfcc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2dfcc4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2dfcc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2dfcc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfccc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dfcccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dfcd0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DFCD0u;
    SET_GPR_U32(ctx, 31, 0x2DFCD8u);
    ctx->pc = 0x2DFCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFCD0u;
    // 0x2dfcd4: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DFCD0u, 0x2DFCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFCD8u;
label_2dfcd8:
    // 0x2dfcd8: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x2dfcd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x2dfcdc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2dfcdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2dfce0: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x2dfce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x2dfce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dfce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfce8: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x2dfce8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2dfcec: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x2dfcecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dfcf0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2dfcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2dfcf4: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x2dfcf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dfcf8: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x2dfcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2dfcfc: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2dfcfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2dfd00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd04: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2dfd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2dfd08: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2dfd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dfd0c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2dfd0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dfd10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dfd10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2dfd14: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2dfd14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2dfd18: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2dfd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2dfd1c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2dfd1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2dfd20: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x2dfd20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2dfd24: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2dfd24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2dfd28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd2c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DFD2Cu;
    SET_GPR_U32(ctx, 31, 0x2DFD34u);
    ctx->pc = 0x2DFD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD2Cu;
    // 0x2dfd30: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DFD2Cu, 0x2DFD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD34u;
label_2dfd34:
    // 0x2dfd34: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2dfd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2dfd38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dfd38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2dfd3c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2dfd3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2dfd40: 0xa2120003  sb          $s2, 0x3($s0)
    ctx->pc = 0x2dfd40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x2dfd44: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2dfd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2dfd48: 0xa2120002  sb          $s2, 0x2($s0)
    ctx->pc = 0x2dfd48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x2dfd4c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2dfd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2dfd50: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x2dfd50u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2dfd54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfd54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd58: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2dfd58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2dfd5c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2dfd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dfd60: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2dfd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2dfd64: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2dfd64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dfd68: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dfd68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2dfd6c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2dfd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2dfd70: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2dfd70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2dfd74: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2dfd74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2dfd78: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2dfd78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2dfd7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd80: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dfd80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dfd84: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DFD84u;
    SET_GPR_U32(ctx, 31, 0x2DFD8Cu);
    ctx->pc = 0x2DFD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD84u;
    // 0x2dfd88: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DFD84u, 0x2DFD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD8Cu;
label_2dfd8c:
    // 0x2dfd8c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2dfd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2dfd90: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2dfd90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2dfd94: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x2dfd94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x2dfd98: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x2dfd98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2dfd9c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2dfd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2dfda0: 0xa2160003  sb          $s6, 0x3($s0)
    ctx->pc = 0x2dfda0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 22));
    // 0x2dfda4: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x2dfda4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x2dfda8: 0xa2160002  sb          $s6, 0x2($s0)
    ctx->pc = 0x2dfda8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 22));
    // 0x2dfdac: 0x2631abb0  addiu       $s1, $s1, -0x5450
    ctx->pc = 0x2dfdacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945712));
    // 0x2dfdb0: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2dfdb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2dfdb4: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x2dfdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2dfdb8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2dfdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2dfdbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfdc0: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2dfdc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2dfdc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfdc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfdc8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dfdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dfdcc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2dfdccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dfdd0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2dfdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2dfdd4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2dfdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2dfdd8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2dfdd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dfddc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dfddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2dfde0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DFDE0u;
    SET_GPR_U32(ctx, 31, 0x2DFDE8u);
    ctx->pc = 0x2DFDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFDE0u;
    // 0x2dfde4: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DFDE0u, 0x2DFDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFDE8u;
label_2dfde8:
    // 0x2dfde8: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x2dfde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
    // 0x2dfdec: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2dfdecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2dfdf0: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x2dfdf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x2dfdf4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x2dfdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x2dfdf8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2dfdf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2dfdfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dfdfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfe00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2dfe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dfe04: 0xa2240002  sb          $a0, 0x2($s1)
    ctx->pc = 0x2dfe04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dfe08: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2dfe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2dfe0c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2dfe0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2dfe10: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2dfe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2dfe14: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x2dfe14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x2dfe18: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x2dfe18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x2dfe1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dfe1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfe20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfe20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe24: 0xa2350003  sb          $s5, 0x3($s1)
    ctx->pc = 0x2dfe24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x2dfe28: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2dfe28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dfe2c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2dfe2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2dfe30: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2dfe30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2dfe34: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2dfe34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dfe38: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dfe38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2dfe3c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2dfe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2dfe40: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2dfe40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2dfe44: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2dfe44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2dfe48: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2dfe48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2dfe4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfe4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dfe50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dfe54: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DFE54u;
    SET_GPR_U32(ctx, 31, 0x2DFE5Cu);
    ctx->pc = 0x2DFE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFE54u;
    // 0x2dfe58: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DFE54u, 0x2DFE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE5Cu;
label_2dfe5c:
    // 0x2dfe5c: 0x3c013e47  lui         $at, 0x3E47
    ctx->pc = 0x2dfe5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15943 << 16));
    // 0x2dfe60: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x2dfe60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x2dfe64: 0x4481f800  mtc1        $at, $f31
    ctx->pc = 0x2dfe64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
    // 0x2dfe68: 0xe6370004  swc1        $f23, 0x4($s1)
    ctx->pc = 0x2dfe68u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2dfe6c: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x2dfe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2dfe70: 0xe6360008  swc1        $f22, 0x8($s1)
    ctx->pc = 0x2dfe70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2dfe74: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x2dfe74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x2dfe78: 0xa2350002  sb          $s5, 0x2($s1)
    ctx->pc = 0x2dfe78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x2dfe7c: 0x2610ac10  addiu       $s0, $s0, -0x53F0
    ctx->pc = 0x2dfe7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945808));
    // 0x2dfe80: 0xa2350003  sb          $s5, 0x3($s1)
    ctx->pc = 0x2dfe80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x2dfe84: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2dfe84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2dfe88: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2dfe88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2dfe8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfe8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe90: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2dfe90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2dfe94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfe94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dfe98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dfe9c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2dfe9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dfea0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2dfea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2dfea4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2dfea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2dfea8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2dfea8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dfeac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dfeacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2dfeb0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DFEB0u;
    SET_GPR_U32(ctx, 31, 0x2DFEB8u);
    ctx->pc = 0x2DFEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFEB0u;
    // 0x2dfeb4: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DFEB0u, 0x2DFEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFEB8u;
label_2dfeb8:
    // 0x2dfeb8: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2dfeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x2dfebc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2dfebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2dfec0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2dfec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2dfec4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2dfec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2dfec8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dfec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2dfecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dfeccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfed0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2dfed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2dfed4: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x2dfed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x2dfed8: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2dfed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2dfedc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2dfedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2dfee0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfee4: 0xa2130003  sb          $s3, 0x3($s0)
    ctx->pc = 0x2dfee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x2dfee8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2dfee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dfeec: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2dfeecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2dfef0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2dfef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2dfef4: 0xe45d0004  swc1        $f29, 0x4($v0)
    ctx->pc = 0x2dfef4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2dfef8: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x2dfef8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2dfefc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2dfefcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dff00: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2dff00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2dff04: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2dff04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2dff08: 0xe47d0004  swc1        $f29, 0x4($v1)
    ctx->pc = 0x2dff08u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2dff0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dff0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff10: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x2dff10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2dff14: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DFF14u;
    SET_GPR_U32(ctx, 31, 0x2DFF1Cu);
    ctx->pc = 0x2DFF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFF14u;
    // 0x2dff18: 0xe474000c  swc1        $f20, 0xC($v1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DFF14u, 0x2DFF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFF1Cu;
label_2dff1c:
    // 0x2dff1c: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x2dff1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x2dff20: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2dff20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2dff24: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2dff24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2dff28: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x2dff28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x2dff2c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2dff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2dff30: 0xa2130003  sb          $s3, 0x3($s0)
    ctx->pc = 0x2dff30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x2dff34: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2dff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2dff38: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2dff38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2dff3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dff3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff40: 0xe61c0008  swc1        $f28, 0x8($s0)
    ctx->pc = 0x2dff40u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2dff44: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2dff44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dff48: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2dff48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2dff4c: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x2dff4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2dff50: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x2dff50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2dff54: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2dff54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dff58: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2dff58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2dff5c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2dff5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2dff60: 0xe4750004  swc1        $f21, 0x4($v1)
    ctx->pc = 0x2dff60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2dff64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dff64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff68: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x2dff68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2dff6c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DFF6Cu;
    SET_GPR_U32(ctx, 31, 0x2DFF74u);
    ctx->pc = 0x2DFF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFF6Cu;
    // 0x2dff70: 0xe474000c  swc1        $f20, 0xC($v1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DFF6Cu, 0x2DFF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFF74u;
label_2dff74:
    // 0x2dff74: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x2dff74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
    // 0x2dff78: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2dff78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x2dff7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dff7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dff80: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2dff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2dff84: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x2dff84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x2dff88: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2dff88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2dff8c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2dff8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2dff90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dff90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff94: 0xa2130003  sb          $s3, 0x3($s0)
    ctx->pc = 0x2dff94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x2dff98: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2dff98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2dff9c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2dff9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2dffa0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2dffa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2dffa4: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x2dffa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2dffa8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2dffa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dffac: 0xe4590004  swc1        $f25, 0x4($v0)
    ctx->pc = 0x2dffacu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2dffb0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2dffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2dffb4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2dffb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2dffb8: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x2dffb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2dffbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dffbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dffc0: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2dffc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2dffc4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2DFFC4u;
    SET_GPR_U32(ctx, 31, 0x2DFFCCu);
    ctx->pc = 0x2DFFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFFC4u;
    // 0x2dffc8: 0xe4790004  swc1        $f25, 0x4($v1) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2DFFC4u, 0x2DFFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFFCCu;
label_2dffcc:
    // 0x2dffcc: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x2dffccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2dffd0: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2dffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2dffd4: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x2dffd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x2dffd8: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x2dffd8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x2dffdc: 0xa2130003  sb          $s3, 0x3($s0)
    ctx->pc = 0x2dffdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x2dffe0: 0x2631acd0  addiu       $s1, $s1, -0x5330
    ctx->pc = 0x2dffe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946000));
    // 0x2dffe4: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2dffe4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2dffe8: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x2dffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2dffec: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2dffecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2dfff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfff4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2dfff4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2dfff8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfffc: 0xe47c0004  swc1        $f28, 0x4($v1)
    ctx->pc = 0x2dfffcu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e0000: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e0000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e0004: 0xe47b0008  swc1        $f27, 0x8($v1)
    ctx->pc = 0x2e0004u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2e0008: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e0008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2e000c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e000cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e0010: 0xe45c0004  swc1        $f28, 0x4($v0)
    ctx->pc = 0x2e0010u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e0014: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E0014u;
    SET_GPR_U32(ctx, 31, 0x2E001Cu);
    ctx->pc = 0x2E0018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0014u;
    // 0x2e0018: 0xe45b0008  swc1        $f27, 0x8($v0) (Delay Slot)
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E0014u, 0x2E001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E001Cu;
label_2e001c:
    // 0x2e001c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2e001cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2e0020: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e0020u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e0024: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0028: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2e0028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e002c: 0xa2330002  sb          $s3, 0x2($s1)
    ctx->pc = 0x2e002cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e0030: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2e0030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e0034: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2e0034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2e0038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e003c: 0xa2330003  sb          $s3, 0x3($s1)
    ctx->pc = 0x2e003cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e0040: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e0040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e0044: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2e0044u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2e0048: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2e0048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2e004c: 0xe45d0004  swc1        $f29, 0x4($v0)
    ctx->pc = 0x2e004cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e0050: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x2e0050u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e0054: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e0054u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e0058: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2e0058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2e005c: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2e005cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e0060: 0xe47d0004  swc1        $f29, 0x4($v1)
    ctx->pc = 0x2e0060u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e0064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0068: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x2e0068u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2e006c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E006Cu;
    SET_GPR_U32(ctx, 31, 0x2E0074u);
    ctx->pc = 0x2E0070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E006Cu;
    // 0x2e0070: 0xe474000c  swc1        $f20, 0xC($v1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E006Cu, 0x2E0074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0074u;
label_2e0074:
    // 0x2e0074: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x2e0074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x2e0078: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2e0078u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x2e007c: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x2e007cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x2e0080: 0xa2330002  sb          $s3, 0x2($s1)
    ctx->pc = 0x2e0080u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e0084: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2e0084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0088: 0xa2330003  sb          $s3, 0x3($s1)
    ctx->pc = 0x2e0088u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e008c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2e008cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e0090: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2e0090u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2e0094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0098: 0xe63c0008  swc1        $f28, 0x8($s1)
    ctx->pc = 0x2e0098u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2e009c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e009cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e00a0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2e00a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2e00a4: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x2e00a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e00a8: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x2e00a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e00ac: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e00acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e00b0: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2e00b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2e00b4: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2e00b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e00b8: 0xe4750004  swc1        $f21, 0x4($v1)
    ctx->pc = 0x2e00b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e00bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e00bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00c0: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x2e00c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2e00c4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E00C4u;
    SET_GPR_U32(ctx, 31, 0x2E00CCu);
    ctx->pc = 0x2E00C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E00C4u;
    // 0x2e00c8: 0xe474000c  swc1        $f20, 0xC($v1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E00C4u, 0x2E00CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E00CCu;
label_2e00cc:
    // 0x2e00cc: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x2e00ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
    // 0x2e00d0: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2e00d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x2e00d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e00d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e00d8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2e00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e00dc: 0xa2330002  sb          $s3, 0x2($s1)
    ctx->pc = 0x2e00dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e00e0: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2e00e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e00e4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2e00e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2e00e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e00e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00ec: 0xa2330003  sb          $s3, 0x3($s1)
    ctx->pc = 0x2e00ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e00f0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e00f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e00f4: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2e00f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2e00f8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2e00f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2e00fc: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x2e00fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e0100: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e0100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e0104: 0xe4590004  swc1        $f25, 0x4($v0)
    ctx->pc = 0x2e0104u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e0108: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2e0108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2e010c: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2e010cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e0110: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x2e0110u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2e0114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0118: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e0118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e011c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E011Cu;
    SET_GPR_U32(ctx, 31, 0x2E0124u);
    ctx->pc = 0x2E0120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E011Cu;
    // 0x2e0120: 0xe4790004  swc1        $f25, 0x4($v1) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E011Cu, 0x2E0124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0124u;
label_2e0124:
    // 0x2e0124: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x2e0124u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2e0128: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x2e0128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e012c: 0xa2330002  sb          $s3, 0x2($s1)
    ctx->pc = 0x2e012cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e0130: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x2e0130u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x2e0134: 0xa2330003  sb          $s3, 0x3($s1)
    ctx->pc = 0x2e0134u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e0138: 0x2610ad90  addiu       $s0, $s0, -0x5270
    ctx->pc = 0x2e0138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946192));
    // 0x2e013c: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2e013cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2e0140: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2e0140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e0144: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2e0144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2e0148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e014c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e014cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e0150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0154: 0xe47c0004  swc1        $f28, 0x4($v1)
    ctx->pc = 0x2e0154u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e0158: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e0158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e015c: 0xe47b0008  swc1        $f27, 0x8($v1)
    ctx->pc = 0x2e015cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2e0160: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2e0160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2e0164: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e0164u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e0168: 0xe45c0004  swc1        $f28, 0x4($v0)
    ctx->pc = 0x2e0168u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e016c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E016Cu;
    SET_GPR_U32(ctx, 31, 0x2E0174u);
    ctx->pc = 0x2E0170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E016Cu;
    // 0x2e0170: 0xe45b0008  swc1        $f27, 0x8($v0) (Delay Slot)
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E016Cu, 0x2E0174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0174u;
label_2e0174:
    // 0x2e0174: 0x3c01bc75  lui         $at, 0xBC75
    ctx->pc = 0x2e0174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48245 << 16));
    // 0x2e0178: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2e0178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2e017c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2e017cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2e0180: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x2e0180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e0184: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2e0184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e0188: 0xa2130003  sb          $s3, 0x3($s0)
    ctx->pc = 0x2e0188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e018c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2e018cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e0190: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2e0190u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e0194: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0198: 0xe6180008  swc1        $f24, 0x8($s0)
    ctx->pc = 0x2e0198u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2e019c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e019cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e01a0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e01a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e01a4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e01a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e01a8: 0xe4580004  swc1        $f24, 0x4($v0)
    ctx->pc = 0x2e01a8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e01ac: 0xe4580008  swc1        $f24, 0x8($v0)
    ctx->pc = 0x2e01acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e01b0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e01b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2e01b4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2e01b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e01b8: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e01b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e01bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e01bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e01c0: 0xe47a0004  swc1        $f26, 0x4($v1)
    ctx->pc = 0x2e01c0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e01c4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E01C4u;
    SET_GPR_U32(ctx, 31, 0x2E01CCu);
    ctx->pc = 0x2E01C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E01C4u;
    // 0x2e01c8: 0xe47a0008  swc1        $f26, 0x8($v1) (Delay Slot)
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E01C4u, 0x2E01CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E01CCu;
label_2e01cc:
    // 0x2e01cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e01d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e01d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e01d4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x2e01d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e01d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e01d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e01dc: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x2e01dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e01e0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2e01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e01e4: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2e01e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e01e8: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2e01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e01ec: 0xe6180008  swc1        $f24, 0x8($s0)
    ctx->pc = 0x2e01ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2e01f0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e01f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e01f4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e01f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e01f8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e01f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e01fc: 0xe4580004  swc1        $f24, 0x4($v0)
    ctx->pc = 0x2e01fcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e0200: 0xe45b0008  swc1        $f27, 0x8($v0)
    ctx->pc = 0x2e0200u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e0204: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e0204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2e0208: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2e0208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e020c: 0xe47b0008  swc1        $f27, 0x8($v1)
    ctx->pc = 0x2e020cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2e0210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0214: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e0214u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e0218: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E0218u;
    SET_GPR_U32(ctx, 31, 0x2E0220u);
    ctx->pc = 0x2E021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0218u;
    // 0x2e021c: 0xe4780004  swc1        $f24, 0x4($v1) (Delay Slot)
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E0218u, 0x2E0220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0220u;
label_2e0220:
    // 0x2e0220: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e0220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e0224: 0xe6180008  swc1        $f24, 0x8($s0)
    ctx->pc = 0x2e0224u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2e0228: 0xa2040003  sb          $a0, 0x3($s0)
    ctx->pc = 0x2e0228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e022c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2e022cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e0230: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x2e0230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0234: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2e0234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e0238: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2e0238u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e023c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e023cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0240: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e0240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e0244: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e0244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e0248: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e0248u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e024c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e024cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e0250: 0xe45a0008  swc1        $f26, 0x8($v0)
    ctx->pc = 0x2e0250u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e0254: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e0254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2e0258: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2e0258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e025c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e025cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e0260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0264: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e0264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e0268: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E0268u;
    SET_GPR_U32(ctx, 31, 0x2E0270u);
    ctx->pc = 0x2E026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0268u;
    // 0x2e026c: 0xe47a0008  swc1        $f26, 0x8($v1) (Delay Slot)
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E0268u, 0x2E0270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0270u;
label_2e0270:
    // 0x2e0270: 0x3c013e42  lui         $at, 0x3E42
    ctx->pc = 0x2e0270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15938 << 16));
    // 0x2e0274: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x2e0274u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x2e0278: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e027c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2e027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e0280: 0xa2150003  sb          $s5, 0x3($s0)
    ctx->pc = 0x2e0280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e0284: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2e0284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e0288: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2e0288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2e028c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e028cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0290: 0xa2150002  sb          $s5, 0x2($s0)
    ctx->pc = 0x2e0290u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e0294: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e0294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e0298: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2e0298u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e029c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e029cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e02a0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e02a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e02a4: 0xe4590004  swc1        $f25, 0x4($v0)
    ctx->pc = 0x2e02a4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e02a8: 0xe4560008  swc1        $f22, 0x8($v0)
    ctx->pc = 0x2e02a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e02ac: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e02acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2e02b0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2e02b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e02b4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e02b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e02b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e02b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e02bc: 0xe4790004  swc1        $f25, 0x4($v1)
    ctx->pc = 0x2e02bcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e02c0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E02C0u;
    SET_GPR_U32(ctx, 31, 0x2E02C8u);
    ctx->pc = 0x2E02C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E02C0u;
    // 0x2e02c4: 0xe4760008  swc1        $f22, 0x8($v1) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E02C0u, 0x2E02C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E02C8u;
label_2e02c8:
    // 0x2e02c8: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x2e02c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
    // 0x2e02cc: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2e02ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x2e02d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e02d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e02d4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e02d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e02d8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x2e02d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e02dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2e02dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e02e0: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x2e02e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e02e4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2e02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e02e8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2e02e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2e02ec: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2e02ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e02f0: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2e02f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e02f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e02f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e02f8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e02f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e02fc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e02fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e0300: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e0300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e0304: 0xe45e0004  swc1        $f30, 0x4($v0)
    ctx->pc = 0x2e0304u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e0308: 0xe45a0008  swc1        $f26, 0x8($v0)
    ctx->pc = 0x2e0308u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e030c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e030cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2e0310: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2e0310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e0314: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e0314u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e0318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e031c: 0xe47e0004  swc1        $f30, 0x4($v1)
    ctx->pc = 0x2e031cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e0320: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E0320u;
    SET_GPR_U32(ctx, 31, 0x2E0328u);
    ctx->pc = 0x2E0324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0320u;
    // 0x2e0324: 0xe47a0008  swc1        $f26, 0x8($v1) (Delay Slot)
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E0320u, 0x2E0328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0328u;
label_2e0328:
    // 0x2e0328: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x2e0328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
    // 0x2e032c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2e032cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x2e0330: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0334: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2e0334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e0338: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2e0338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e033c: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x2e033cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0340: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2e0340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2e0344: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2e0344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e0348: 0xa2040003  sb          $a0, 0x3($s0)
    ctx->pc = 0x2e0348u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e034c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2e034cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e0350: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2e0350u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e0354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0358: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e0358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e035c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e035cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e0360: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e0360u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e0364: 0xe45e0004  swc1        $f30, 0x4($v0)
    ctx->pc = 0x2e0364u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e0368: 0xe45a0008  swc1        $f26, 0x8($v0)
    ctx->pc = 0x2e0368u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e036c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e036cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2e0370: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2e0370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e0374: 0xe47e0004  swc1        $f30, 0x4($v1)
    ctx->pc = 0x2e0374u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e0378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e037c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e037cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e0380: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E0380u;
    SET_GPR_U32(ctx, 31, 0x2E0388u);
    ctx->pc = 0x2E0384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0380u;
    // 0x2e0384: 0xe47a0008  swc1        $f26, 0x8($v1) (Delay Slot)
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E0380u, 0x2E0388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0388u;
label_2e0388:
    // 0x2e0388: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x2e0388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x2e038c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x2e038cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x2e0390: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0394: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2e0394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e0398: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x2e0398u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e039c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2e039cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e03a0: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x2e03a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e03a4: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x2e03a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e03a8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2e03a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2e03ac: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e03acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e03b0: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2e03b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e03b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e03b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e03b8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e03b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e03bc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e03bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e03c0: 0xe4570004  swc1        $f23, 0x4($v0)
    ctx->pc = 0x2e03c0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e03c4: 0xe4590008  swc1        $f25, 0x8($v0)
    ctx->pc = 0x2e03c4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e03c8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e03c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2e03cc: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2e03ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e03d0: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x2e03d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2e03d4: 0xe4f70004  swc1        $f23, 0x4($a3)
    ctx->pc = 0x2e03d4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2e03d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e03d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e03dc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E03DCu;
    SET_GPR_U32(ctx, 31, 0x2E03E4u);
    ctx->pc = 0x2E03E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E03DCu;
    // 0x2e03e0: 0xe4f90008  swc1        $f25, 0x8($a3) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E03DCu, 0x2E03E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E03E4u;
label_2e03e4:
    // 0x2e03e4: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x2e03e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x2e03e8: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x2e03e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x2e03ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e03ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e03f0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2e03f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e03f4: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x2e03f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e03f8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x2e03f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e03fc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2e03fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2e0400: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x2e0400u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x2e0404: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x2e0404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0408: 0x2631af10  addiu       $s1, $s1, -0x50F0
    ctx->pc = 0x2e0408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946576));
    // 0x2e040c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2e040cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e0410: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x2e0410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e0414: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e0414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e0418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e041c: 0xe4d4000c  swc1        $f20, 0xC($a2)
    ctx->pc = 0x2e041cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2e0420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0424: 0xe4d70004  swc1        $f23, 0x4($a2)
    ctx->pc = 0x2e0424u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2e0428: 0xe4d90008  swc1        $f25, 0x8($a2)
    ctx->pc = 0x2e0428u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2e042c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e042cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2e0430: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e0430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e0434: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e0434u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e0438: 0xe4570004  swc1        $f23, 0x4($v0)
    ctx->pc = 0x2e0438u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e043c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E043Cu;
    SET_GPR_U32(ctx, 31, 0x2E0444u);
    ctx->pc = 0x2E0440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E043Cu;
    // 0x2e0440: 0xe4590008  swc1        $f25, 0x8($v0) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E043Cu, 0x2E0444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0444u;
label_2e0444:
    // 0x2e0444: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x2e0444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
    // 0x2e0448: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e0448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e044c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e044cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0450: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2e0450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0454: 0xa2330002  sb          $s3, 0x2($s1)
    ctx->pc = 0x2e0454u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e0458: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2e0458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e045c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2e045cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2e0460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0464: 0xa2330003  sb          $s3, 0x3($s1)
    ctx->pc = 0x2e0464u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e0468: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e0468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e046c: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2e046cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2e0470: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2e0470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2e0474: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e0474u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e0478: 0xe45c0004  swc1        $f28, 0x4($v0)
    ctx->pc = 0x2e0478u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e047c: 0xe4560008  swc1        $f22, 0x8($v0)
    ctx->pc = 0x2e047cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e0480: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2e0480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2e0484: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2e0484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e0488: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e0488u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e048c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e048cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0490: 0xe47c0004  swc1        $f28, 0x4($v1)
    ctx->pc = 0x2e0490u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e0494: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E0494u;
    SET_GPR_U32(ctx, 31, 0x2E049Cu);
    ctx->pc = 0x2E0498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0494u;
    // 0x2e0498: 0xe4760008  swc1        $f22, 0x8($v1) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E0494u, 0x2E049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E049Cu;
label_2e049c:
    // 0x2e049c: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x2e049cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
    // 0x2e04a0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e04a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e04a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e04a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e04a8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2e04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e04ac: 0xa23e0003  sb          $fp, 0x3($s1)
    ctx->pc = 0x2e04acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 30));
    // 0x2e04b0: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2e04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e04b4: 0xa23e0002  sb          $fp, 0x2($s1)
    ctx->pc = 0x2e04b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 30));
    // 0x2e04b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e04b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04bc: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2e04bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2e04c0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e04c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e04c4: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2e04c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2e04c8: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x2e04c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e04cc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2e04ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2e04d0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e04d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e04d4: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x2e04d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e04d8: 0xe4560008  swc1        $f22, 0x8($v0)
    ctx->pc = 0x2e04d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e04dc: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2e04dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2e04e0: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2e04e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e04e4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e04e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e04e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e04e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04ec: 0xe4760004  swc1        $f22, 0x4($v1)
    ctx->pc = 0x2e04ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e04f0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E04F0u;
    SET_GPR_U32(ctx, 31, 0x2E04F8u);
    ctx->pc = 0x2E04F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E04F0u;
    // 0x2e04f4: 0xe4760008  swc1        $f22, 0x8($v1) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E04F0u, 0x2E04F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E04F8u;
label_2e04f8:
    // 0x2e04f8: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x2e04f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
    // 0x2e04fc: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2e04fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x2e0500: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0504: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2e0504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0508: 0xa23e0003  sb          $fp, 0x3($s1)
    ctx->pc = 0x2e0508u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 30));
    // 0x2e050c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2e050cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e0510: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2e0510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2e0514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0518: 0xa23e0002  sb          $fp, 0x2($s1)
    ctx->pc = 0x2e0518u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 30));
    // 0x2e051c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e051cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e0520: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2e0520u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2e0524: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x2e0524u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e0528: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2e0528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2e052c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e052cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e0530: 0xe45a0004  swc1        $f26, 0x4($v0)
    ctx->pc = 0x2e0530u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e0534: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e0534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e0538: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2e0538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2e053c: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2e053cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e0540: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e0540u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e0544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0548: 0xe47a0004  swc1        $f26, 0x4($v1)
    ctx->pc = 0x2e0548u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e054c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E054Cu;
    SET_GPR_U32(ctx, 31, 0x2E0554u);
    ctx->pc = 0x2E0550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E054Cu;
    // 0x2e0550: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E054Cu, 0x2E0554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0554u;
label_2e0554:
    // 0x2e0554: 0xa23e0003  sb          $fp, 0x3($s1)
    ctx->pc = 0x2e0554u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 30));
    // 0x2e0558: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2e0558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e055c: 0xa23e0002  sb          $fp, 0x2($s1)
    ctx->pc = 0x2e055cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 30));
    // 0x2e0560: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2e0560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e0564: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2e0564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2e0568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e056c: 0xe63d0008  swc1        $f29, 0x8($s1)
    ctx->pc = 0x2e056cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2e0570: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e0570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e0574: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2e0574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2e0578: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e0578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e057c: 0xe45f0004  swc1        $f31, 0x4($v0)
    ctx->pc = 0x2e057cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e0580: 0xe4570008  swc1        $f23, 0x8($v0)
    ctx->pc = 0x2e0580u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e0584: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2e0584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2e0588: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2e0588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e058c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e058cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e0590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0594: 0xe47f0004  swc1        $f31, 0x4($v1)
    ctx->pc = 0x2e0594u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e0598: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E0598u;
    SET_GPR_U32(ctx, 31, 0x2E05A0u);
    ctx->pc = 0x2E059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0598u;
    // 0x2e059c: 0xe4770008  swc1        $f23, 0x8($v1) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E0598u, 0x2E05A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E05A0u;
label_2e05a0:
    // 0x2e05a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e05a4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2e05a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e05a8: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x2e05a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e05ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e05acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e05b0: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x2e05b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e05b4: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2e05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e05b8: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2e05b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2e05bc: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2e05bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e05c0: 0xe63d0008  swc1        $f29, 0x8($s1)
    ctx->pc = 0x2e05c0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2e05c4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e05c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e05c8: 0xe6370010  swc1        $f23, 0x10($s1)
    ctx->pc = 0x2e05c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2e05cc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e05ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e05d0: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x2e05d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e05d4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e05d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e05d8: 0xe6370020  swc1        $f23, 0x20($s1)
    ctx->pc = 0x2e05d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2e05dc: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2e05dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e05e0: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e05e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e05e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e05e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e05e8: 0xe4750004  swc1        $f21, 0x4($v1)
    ctx->pc = 0x2e05e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e05ec: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E05ECu;
    SET_GPR_U32(ctx, 31, 0x2E05F4u);
    ctx->pc = 0x2E05F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E05ECu;
    // 0x2e05f0: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E05ECu, 0x2E05F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E05F4u;
label_2e05f4:
    // 0x2e05f4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2e05f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e05f8: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2e05f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2e05fc: 0xa2240002  sb          $a0, 0x2($s1)
    ctx->pc = 0x2e05fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0600: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x2e0600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0604: 0xa2240003  sb          $a0, 0x3($s1)
    ctx->pc = 0x2e0604u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0608: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x2e0608u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
    // 0x2e060c: 0xe63d0008  swc1        $f29, 0x8($s1)
    ctx->pc = 0x2e060cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2e0610: 0x2652b030  addiu       $s2, $s2, -0x4FD0
    ctx->pc = 0x2e0610u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946864));
    // 0x2e0614: 0xe6390010  swc1        $f25, 0x10($s1)
    ctx->pc = 0x2e0614u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2e0618: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2e0618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e061c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e061cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e0620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e0620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0624: 0xe4750004  swc1        $f21, 0x4($v1)
    ctx->pc = 0x2e0624u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e0628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e062c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2e062cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2e0630: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e0630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e0634: 0xe6390020  swc1        $f25, 0x20($s1)
    ctx->pc = 0x2e0634u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2e0638: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e0638u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e063c: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x2e063cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e0640: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E0640u;
    SET_GPR_U32(ctx, 31, 0x2E0648u);
    ctx->pc = 0x2E0644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0640u;
    // 0x2e0644: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E0640u, 0x2E0648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0648u;
label_2e0648:
    // 0x2e0648: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x2e0648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
    // 0x2e064c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e064cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e0650: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0654: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x2e0654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e0658: 0xa2530002  sb          $s3, 0x2($s2)
    ctx->pc = 0x2e0658u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e065c: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x2e065cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2e0660: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2e0660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2e0664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0668: 0xa2530003  sb          $s3, 0x3($s2)
    ctx->pc = 0x2e0668u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e066c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e066cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e0670: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x2e0670u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2e0674: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2e0674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x2e0678: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e0678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e067c: 0xe45c0004  swc1        $f28, 0x4($v0)
    ctx->pc = 0x2e067cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e0680: 0xe4560008  swc1        $f22, 0x8($v0)
    ctx->pc = 0x2e0680u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e0684: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x2e0684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x2e0688: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x2e0688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2e068c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e068cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e0690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e0690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0694: 0xe47c0004  swc1        $f28, 0x4($v1)
    ctx->pc = 0x2e0694u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e0698: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E0698u;
    SET_GPR_U32(ctx, 31, 0x2E06A0u);
    ctx->pc = 0x2E069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0698u;
    // 0x2e069c: 0xe4760008  swc1        $f22, 0x8($v1) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E0698u, 0x2E06A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E06A0u;
label_2e06a0:
    // 0x2e06a0: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x2e06a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
    // 0x2e06a4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e06a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e06a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e06a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e06ac: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x2e06acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e06b0: 0xa2570003  sb          $s7, 0x3($s2)
    ctx->pc = 0x2e06b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 23));
    // 0x2e06b4: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x2e06b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2e06b8: 0xa2570002  sb          $s7, 0x2($s2)
    ctx->pc = 0x2e06b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 23));
    // 0x2e06bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e06bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06c0: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2e06c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2e06c4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e06c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e06c8: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x2e06c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2e06cc: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x2e06ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e06d0: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2e06d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x2e06d4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e06d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e06d8: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x2e06d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e06dc: 0xe4560008  swc1        $f22, 0x8($v0)
    ctx->pc = 0x2e06dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e06e0: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x2e06e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x2e06e4: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x2e06e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2e06e8: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e06e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e06ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e06ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06f0: 0xe4760004  swc1        $f22, 0x4($v1)
    ctx->pc = 0x2e06f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e06f4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E06F4u;
    SET_GPR_U32(ctx, 31, 0x2E06FCu);
    ctx->pc = 0x2E06F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E06F4u;
    // 0x2e06f8: 0xe4760008  swc1        $f22, 0x8($v1) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E06F4u, 0x2E06FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E06FCu;
label_2e06fc:
    // 0x2e06fc: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x2e06fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
    // 0x2e0700: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2e0700u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x2e0704: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0708: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x2e0708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e070c: 0xa2570003  sb          $s7, 0x3($s2)
    ctx->pc = 0x2e070cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 23));
    // 0x2e0710: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x2e0710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2e0714: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2e0714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2e0718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e071c: 0xa2570002  sb          $s7, 0x2($s2)
    ctx->pc = 0x2e071cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 23));
    // 0x2e0720: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e0720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e0724: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x2e0724u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2e0728: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x2e0728u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e072c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2e072cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x2e0730: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e0730u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e0734: 0xe45a0004  swc1        $f26, 0x4($v0)
    ctx->pc = 0x2e0734u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e0738: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e0738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e073c: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x2e073cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x2e0740: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x2e0740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2e0744: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e0744u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e0748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e0748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e074c: 0xe47a0004  swc1        $f26, 0x4($v1)
    ctx->pc = 0x2e074cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e0750: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E0750u;
    SET_GPR_U32(ctx, 31, 0x2E0758u);
    ctx->pc = 0x2E0754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0750u;
    // 0x2e0754: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E0750u, 0x2E0758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0758u;
label_2e0758:
    // 0x2e0758: 0xa2570003  sb          $s7, 0x3($s2)
    ctx->pc = 0x2e0758u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 23));
    // 0x2e075c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x2e075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e0760: 0xa2570002  sb          $s7, 0x2($s2)
    ctx->pc = 0x2e0760u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 23));
    // 0x2e0764: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x2e0764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2e0768: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x2e0768u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2e076c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e076cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0770: 0xe65d0008  swc1        $f29, 0x8($s2)
    ctx->pc = 0x2e0770u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2e0774: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e0774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e0778: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2e0778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x2e077c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e077cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e0780: 0xe45f0004  swc1        $f31, 0x4($v0)
    ctx->pc = 0x2e0780u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e0784: 0xe4570008  swc1        $f23, 0x8($v0)
    ctx->pc = 0x2e0784u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e0788: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x2e0788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x2e078c: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x2e078cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2e0790: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e0790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e0794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e0794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0798: 0xe47f0004  swc1        $f31, 0x4($v1)
    ctx->pc = 0x2e0798u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e079c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E079Cu;
    SET_GPR_U32(ctx, 31, 0x2E07A4u);
    ctx->pc = 0x2E07A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E079Cu;
    // 0x2e07a0: 0xe4770008  swc1        $f23, 0x8($v1) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E079Cu, 0x2E07A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E07A4u;
label_2e07a4:
    // 0x2e07a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e07a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2e07a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e07ac: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x2e07acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e07b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e07b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07b4: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x2e07b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e07b8: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x2e07b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e07bc: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x2e07bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2e07c0: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x2e07c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2e07c4: 0xe65d0008  swc1        $f29, 0x8($s2)
    ctx->pc = 0x2e07c4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2e07c8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e07c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e07cc: 0xe6570010  swc1        $f23, 0x10($s2)
    ctx->pc = 0x2e07ccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2e07d0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e07d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e07d4: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x2e07d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e07d8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e07d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e07dc: 0xe6570020  swc1        $f23, 0x20($s2)
    ctx->pc = 0x2e07dcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x2e07e0: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x2e07e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2e07e4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e07e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e07e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e07e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07ec: 0xe4750004  swc1        $f21, 0x4($v1)
    ctx->pc = 0x2e07ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e07f0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E07F0u;
    SET_GPR_U32(ctx, 31, 0x2E07F8u);
    ctx->pc = 0x2E07F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E07F0u;
    // 0x2e07f4: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E07F0u, 0x2E07F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E07F8u;
label_2e07f8:
    // 0x2e07f8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2e07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e07fc: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x2e07fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2e0800: 0xa2440002  sb          $a0, 0x2($s2)
    ctx->pc = 0x2e0800u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0804: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x2e0804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e0808: 0xa2440003  sb          $a0, 0x3($s2)
    ctx->pc = 0x2e0808u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e080c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x2e080cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x2e0810: 0xe65d0008  swc1        $f29, 0x8($s2)
    ctx->pc = 0x2e0810u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2e0814: 0x2610b150  addiu       $s0, $s0, -0x4EB0
    ctx->pc = 0x2e0814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947152));
    // 0x2e0818: 0xe6590010  swc1        $f25, 0x10($s2)
    ctx->pc = 0x2e0818u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2e081c: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x2e081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2e0820: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e0820u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e0824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0828: 0xe4750004  swc1        $f21, 0x4($v1)
    ctx->pc = 0x2e0828u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e082c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e082cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0830: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2e0830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2e0834: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e0834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e0838: 0xe6590020  swc1        $f25, 0x20($s2)
    ctx->pc = 0x2e0838u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x2e083c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e083cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e0840: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x2e0840u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e0844: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E0844u;
    SET_GPR_U32(ctx, 31, 0x2E084Cu);
    ctx->pc = 0x2E0848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0844u;
    // 0x2e0848: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E0844u, 0x2E084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E084Cu;
label_2e084c:
    // 0x2e084c: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x2e084cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
    // 0x2e0850: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e0850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e0854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0858: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2e0858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e085c: 0xa2130003  sb          $s3, 0x3($s0)
    ctx->pc = 0x2e085cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e0860: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2e0860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e0864: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2e0864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2e0868: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e086c: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x2e086cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e0870: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e0870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e0874: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2e0874u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e0878: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e0878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e087c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e087cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e0880: 0xe45c0004  swc1        $f28, 0x4($v0)
    ctx->pc = 0x2e0880u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e0884: 0xe4560008  swc1        $f22, 0x8($v0)
    ctx->pc = 0x2e0884u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e0888: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e0888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2e088c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2e088cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e0890: 0xe47c0004  swc1        $f28, 0x4($v1)
    ctx->pc = 0x2e0890u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e0894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0898: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e0898u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e089c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E089Cu;
    SET_GPR_U32(ctx, 31, 0x2E08A4u);
    ctx->pc = 0x2E08A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E089Cu;
    // 0x2e08a0: 0xe4760008  swc1        $f22, 0x8($v1) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E089Cu, 0x2E08A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E08A4u;
label_2e08a4:
    // 0x2e08a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e08a8: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2e08a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e08ac: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x2e08acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
    // 0x2e08b0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e08b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e08b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e08b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e08b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e08b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08bc: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x2e08bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e08c0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e08c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e08c4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2e08c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2e08c8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2e08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e08cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2e08ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e08d0: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2e08d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e08d4: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x2e08d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e08d8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e08d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e08dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e08dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e08e0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e08e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e08e4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e08e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e08e8: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x2e08e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e08ec: 0xe4560008  swc1        $f22, 0x8($v0)
    ctx->pc = 0x2e08ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e08f0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e08f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2e08f4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2e08f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e08f8: 0xe4760008  swc1        $f22, 0x8($v1)
    ctx->pc = 0x2e08f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2e08fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e08fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0900: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e0900u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e0904: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E0904u;
    SET_GPR_U32(ctx, 31, 0x2E090Cu);
    ctx->pc = 0x2E0908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0904u;
    // 0x2e0908: 0xe4760004  swc1        $f22, 0x4($v1) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E0904u, 0x2E090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E090Cu;
label_2e090c:
    // 0x2e090c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0910: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2e0910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e0914: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x2e0914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
    // 0x2e0918: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2e0918u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x2e091c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e091cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0924: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x2e0924u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e0928: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e0928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e092c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2e092cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2e0930: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2e0930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e0934: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2e0934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0938: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2e0938u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e093c: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x2e093cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0940: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e0940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e0944: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x2e0944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x2e0948: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e0948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e094c: 0xe45a0004  swc1        $f26, 0x4($v0)
    ctx->pc = 0x2e094cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e0950: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e0950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e0954: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e0954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2e0958: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2e0958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e095c: 0xe47a0004  swc1        $f26, 0x4($v1)
    ctx->pc = 0x2e095cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e0960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0964: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e0964u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e0968: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E0968u;
    SET_GPR_U32(ctx, 31, 0x2E0970u);
    ctx->pc = 0x2E096Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0968u;
    // 0x2e096c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E0968u, 0x2E0970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0970u;
label_2e0970:
    // 0x2e0970: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e0970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0978: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e0978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e097c: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x2e097cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e0980: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2e0980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e0984: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e0984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0988: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2e0988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e098c: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x2e098cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0990: 0xe61d0008  swc1        $f29, 0x8($s0)
    ctx->pc = 0x2e0990u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2e0994: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2e0994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e0998: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e0998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e099c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e099cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e09a0: 0xe45f0004  swc1        $f31, 0x4($v0)
    ctx->pc = 0x2e09a0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e09a4: 0xe4570008  swc1        $f23, 0x8($v0)
    ctx->pc = 0x2e09a4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e09a8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e09a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2e09ac: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2e09acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e09b0: 0xe47f0004  swc1        $f31, 0x4($v1)
    ctx->pc = 0x2e09b0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e09b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e09b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09b8: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e09b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e09bc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E09BCu;
    SET_GPR_U32(ctx, 31, 0x2E09C4u);
    ctx->pc = 0x2E09C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E09BCu;
    // 0x2e09c0: 0xe4770008  swc1        $f23, 0x8($v1) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E09BCu, 0x2E09C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E09C4u;
label_2e09c4:
    // 0x2e09c4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2e09c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e09c8: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2e09c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e09cc: 0xa2040003  sb          $a0, 0x3($s0)
    ctx->pc = 0x2e09ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e09d0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2e09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e09d4: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x2e09d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e09d8: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2e09d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e09dc: 0xe61d0008  swc1        $f29, 0x8($s0)
    ctx->pc = 0x2e09dcu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2e09e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e09e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09e4: 0xe6170010  swc1        $f23, 0x10($s0)
    ctx->pc = 0x2e09e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2e09e8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e09e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e09ec: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e09ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e09f0: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x2e09f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e09f4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e09f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e09f8: 0xe6170020  swc1        $f23, 0x20($s0)
    ctx->pc = 0x2e09f8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2e09fc: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2e09fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e0a00: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e0a00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e0a04: 0xe4750004  swc1        $f21, 0x4($v1)
    ctx->pc = 0x2e0a04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e0a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a0c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2E0A0Cu;
    SET_GPR_U32(ctx, 31, 0x2E0A14u);
    ctx->pc = 0x2E0A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A0Cu;
    // 0x2e0a10: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2E0A0Cu, 0x2E0A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A14u;
label_2e0a14:
    // 0x2e0a14: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2e0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e0a18: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2e0a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e0a1c: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x2e0a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e0a20: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2e0a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e0a24: 0xe61d0008  swc1        $f29, 0x8($s0)
    ctx->pc = 0x2e0a24u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2e0a28: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2e0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e0a2c: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x2e0a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0a30: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2e0a30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e0a34: 0xe6190010  swc1        $f25, 0x10($s0)
    ctx->pc = 0x2e0a34u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2e0a38: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2e0a38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e0a3c: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x2e0a3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e0a40: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e0a40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e0a44: 0xe6190020  swc1        $f25, 0x20($s0)
    ctx->pc = 0x2e0a44u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2e0a48: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2e0a48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e0a4c: 0xe4750004  swc1        $f21, 0x4($v1)
    ctx->pc = 0x2e0a4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e0a50: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2e0a50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_2e0a54:
    // 0x2e0a54: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2e0a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e0a58: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2e0a58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e0a5c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2e0a5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e0a60: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2e0a60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e0a64: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2e0a64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e0a68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e0a68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0a6c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2e0a6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0a70: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2e0a70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0a74: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2e0a74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0a78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0a7c: 0xc7bf0108  lwc1        $f31, 0x108($sp)
    ctx->pc = 0x2e0a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2e0a80: 0xc7be0100  lwc1        $f30, 0x100($sp)
    ctx->pc = 0x2e0a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x2e0a84: 0xc7bd00f8  lwc1        $f29, 0xF8($sp)
    ctx->pc = 0x2e0a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2e0a88: 0xc7bc00f0  lwc1        $f28, 0xF0($sp)
    ctx->pc = 0x2e0a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2e0a8c: 0xc7bb00e8  lwc1        $f27, 0xE8($sp)
    ctx->pc = 0x2e0a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2e0a90: 0xc7ba00e0  lwc1        $f26, 0xE0($sp)
    ctx->pc = 0x2e0a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2e0a94: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x2e0a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2e0a98: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x2e0a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2e0a9c: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x2e0a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e0aa0: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x2e0aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e0aa4: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2e0aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e0aa8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2e0aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e0aac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AACu;
        // 0x2e0ab0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0AB4u;
    // 0x2e0ab4: 0x0  nop
    ctx->pc = 0x2e0ab4u;
    // NOP
    ctx->pc = 0x2e0ab8u;
}
