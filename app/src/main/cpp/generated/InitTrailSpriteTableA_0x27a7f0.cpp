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

// Function: InitTrailSpriteTableA
// Address: 0x27a7f0 - 0x27ac00
void InitTrailSpriteTableA_0x27a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitTrailSpriteTableA_0x27a7f0");
#endif

    switch (ctx->pc) {
        case 0x27a848u: goto label_27a848;
        case 0x27a8ccu: goto label_27a8cc;
        case 0x27a924u: goto label_27a924;
        case 0x27a97cu: goto label_27a97c;
        case 0x27a9c8u: goto label_27a9c8;
        case 0x27aa14u: goto label_27aa14;
        case 0x27aa64u: goto label_27aa64;
        case 0x27aab0u: goto label_27aab0;
        case 0x27aafcu: goto label_27aafc;
        case 0x27ab48u: goto label_27ab48;
        case 0x27ab94u: goto label_27ab94;
        default: break;
    }

    ctx->pc = 0x27a7f0u;

    // 0x27a7f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27a7f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x27a7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27a7f8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x27a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x27a7fc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x27a7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x27a800: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27a800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27a804: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x27a804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x27a808: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x27a808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x27a80c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27a80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27a810: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x27a810u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x27a814: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x27a814u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27a818: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x27a818u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27a81c: 0x14a200ec  bne         $a1, $v0, . + 4 + (0xEC << 2)
    ctx->pc = 0x27A81Cu;
    {
        const bool branch_taken_0x27a81c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x27A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A81Cu;
        // 0x27a820: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a81c) {
            ctx->pc = 0x27ABD0u;
            goto label_27abd0;
        }
    }
    ctx->pc = 0x27A824u;
    // 0x27a824: 0x108000ea  beqz        $a0, . + 4 + (0xEA << 2)
    ctx->pc = 0x27A824u;
    {
        const bool branch_taken_0x27a824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A824u;
        // 0x27a828: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a824) {
            ctx->pc = 0x27ABD0u;
            goto label_27abd0;
        }
    }
    ctx->pc = 0x27A82Cu;
    // 0x27a82c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27a82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a830: 0x26105240  addiu       $s0, $s0, 0x5240
    ctx->pc = 0x27a830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21056));
    // 0x27a834: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27a834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27a838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27a838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27a83c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27a83cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27a840: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27A840u;
    SET_GPR_U32(ctx, 31, 0x27A848u);
    ctx->pc = 0x27A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A840u;
    // 0x27a844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27A840u, 0x27A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A848u;
label_27a848:
    // 0x27a848: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x27a848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
    // 0x27a84c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x27a84cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x27a850: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27a850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27a854: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x27a854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x27a858: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x27a858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x27a85c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a85cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a860: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x27a860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x27a864: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x27a864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x27a868: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27a868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x27a86c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27a86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a870: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27a874: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x27a874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27a878: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x27a878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27a87c: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x27a87cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x27a880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27a880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a884: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x27a884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x27a888: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27a888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27a88c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x27a88cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27a890: 0x24110012  addiu       $s1, $zero, 0x12
    ctx->pc = 0x27a890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x27a894: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27a894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27a898: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x27a898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x27a89c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x27a89cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27a8a0: 0x24130016  addiu       $s3, $zero, 0x16
    ctx->pc = 0x27a8a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x27a8a4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27a8a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27a8a8: 0x24140017  addiu       $s4, $zero, 0x17
    ctx->pc = 0x27a8a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x27a8ac: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27a8acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27a8b0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27a8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27a8b4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27a8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27a8b8: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x27a8b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x27a8bc: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x27a8bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x27a8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8c4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27A8C4u;
    SET_GPR_U32(ctx, 31, 0x27A8CCu);
    ctx->pc = 0x27A8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A8C4u;
    // 0x27a8c8: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27A8C4u, 0x27A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A8CCu;
label_27a8cc:
    // 0x27a8cc: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x27a8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
    // 0x27a8d0: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x27a8d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x27a8d4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x27a8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x27a8d8: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x27a8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x27a8dc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27a8e0: 0xa2110003  sb          $s1, 0x3($s0)
    ctx->pc = 0x27a8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x27a8e4: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27a8e8: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x27a8e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27a8ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27a8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8f0: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27a8f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27a8f4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27a8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27a8f8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27a8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27a8fc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27a8fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27a900: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27a900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27a904: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27a904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27a908: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27a908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27a90c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27a90cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27a910: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27a910u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27a914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a918: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27a918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27a91c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27A91Cu;
    SET_GPR_U32(ctx, 31, 0x27A924u);
    ctx->pc = 0x27A920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A91Cu;
    // 0x27a920: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27A91Cu, 0x27A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A924u;
label_27a924:
    // 0x27a924: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x27a924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x27a928: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x27a928u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x27a92c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27a92cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27a930: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x27a930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x27a934: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27a934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27a938: 0xa2120003  sb          $s2, 0x3($s0)
    ctx->pc = 0x27a938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x27a93c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27a93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27a940: 0xe6170004  swc1        $f23, 0x4($s0)
    ctx->pc = 0x27a940u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27a944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27a944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a948: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27a948u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27a94c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27a94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27a950: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27a950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27a954: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27a954u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27a958: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27a958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27a95c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27a960: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27a960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27a964: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27a964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27a968: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27a968u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27a96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a970: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27a970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27a974: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27A974u;
    SET_GPR_U32(ctx, 31, 0x27A97Cu);
    ctx->pc = 0x27A978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A974u;
    // 0x27a978: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27A974u, 0x27A97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A97Cu;
label_27a97c:
    // 0x27a97c: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x27a97cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x27a980: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27a984: 0xa2120003  sb          $s2, 0x3($s0)
    ctx->pc = 0x27a984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x27a988: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27a988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27a98c: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x27a98cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27a990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27a990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a994: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27a994u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27a998: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27a998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27a99c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27a9a0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27a9a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27a9a4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27a9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27a9a8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27a9ac: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27a9b0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27a9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27a9b4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27a9b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27a9b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27a9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27a9c0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27A9C0u;
    SET_GPR_U32(ctx, 31, 0x27A9C8u);
    ctx->pc = 0x27A9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A9C0u;
    // 0x27a9c4: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27A9C0u, 0x27A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9C8u;
label_27a9c8:
    // 0x27a9c8: 0xa2120002  sb          $s2, 0x2($s0)
    ctx->pc = 0x27a9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x27a9cc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27a9d0: 0xa2120003  sb          $s2, 0x3($s0)
    ctx->pc = 0x27a9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x27a9d4: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27a9d8: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x27a9d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27a9dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27a9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9e0: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27a9e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27a9e4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27a9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27a9e8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27a9ec: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27a9ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27a9f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27a9f4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27a9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27a9f8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27a9fc: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27a9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27aa00: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27aa00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27aa04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27aa04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27aa0c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27AA0Cu;
    SET_GPR_U32(ctx, 31, 0x27AA14u);
    ctx->pc = 0x27AA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AA0Cu;
    // 0x27aa10: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27AA0Cu, 0x27AA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA14u;
label_27aa14:
    // 0x27aa14: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x27aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x27aa18: 0xa2120002  sb          $s2, 0x2($s0)
    ctx->pc = 0x27aa18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x27aa1c: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x27aa1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x27aa20: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27aa24: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x27aa24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27aa28: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27aa2c: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27aa2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27aa30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27aa30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa34: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27aa34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27aa38: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27aa38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27aa3c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27aa3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27aa40: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27aa40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27aa44: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27aa44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27aa48: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27aa4c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27aa4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27aa50: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27aa50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27aa54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27aa54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27aa58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27aa5c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27AA5Cu;
    SET_GPR_U32(ctx, 31, 0x27AA64u);
    ctx->pc = 0x27AA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AA5Cu;
    // 0x27aa60: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27AA5Cu, 0x27AA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA64u;
label_27aa64:
    // 0x27aa64: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x27aa64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x27aa68: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27aa6c: 0xa2130003  sb          $s3, 0x3($s0)
    ctx->pc = 0x27aa6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x27aa70: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27aa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27aa74: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x27aa74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27aa78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27aa78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa7c: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27aa7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27aa80: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27aa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27aa84: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27aa88: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27aa88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27aa8c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27aa90: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27aa90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27aa94: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27aa98: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27aa98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27aa9c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27aa9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27aaa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27aaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aaa4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27aaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27aaa8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27AAA8u;
    SET_GPR_U32(ctx, 31, 0x27AAB0u);
    ctx->pc = 0x27AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AAA8u;
    // 0x27aaac: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27AAA8u, 0x27AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AAB0u;
label_27aab0:
    // 0x27aab0: 0xe6170004  swc1        $f23, 0x4($s0)
    ctx->pc = 0x27aab0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27aab4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27aab8: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x27aab8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x27aabc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27aac0: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x27aac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x27aac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27aac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aac8: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27aac8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27aacc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27aaccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27aad0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27aad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27aad4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27aad4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27aad8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27aadc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27aadcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27aae0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27aae4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27aae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27aae8: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27aae8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27aaec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27aaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aaf0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27aaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27aaf4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27AAF4u;
    SET_GPR_U32(ctx, 31, 0x27AAFCu);
    ctx->pc = 0x27AAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AAF4u;
    // 0x27aaf8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27AAF4u, 0x27AAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AAFCu;
label_27aafc:
    // 0x27aafc: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x27aafcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x27ab00: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27ab04: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x27ab04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x27ab08: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27ab0c: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x27ab0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27ab10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27ab10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab14: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27ab14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27ab18: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27ab18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27ab1c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27ab20: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27ab20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27ab24: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27ab24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27ab28: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27ab2c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27ab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27ab30: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27ab30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27ab34: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27ab34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27ab38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ab38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab3c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27ab40: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27AB40u;
    SET_GPR_U32(ctx, 31, 0x27AB48u);
    ctx->pc = 0x27AB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AB40u;
    // 0x27ab44: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27AB40u, 0x27AB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AB48u;
label_27ab48:
    // 0x27ab48: 0xa2140002  sb          $s4, 0x2($s0)
    ctx->pc = 0x27ab48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x27ab4c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27ab50: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x27ab50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x27ab54: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27ab58: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x27ab58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27ab5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27ab5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab60: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27ab60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27ab64: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27ab64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27ab68: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27ab6c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27ab6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27ab70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27ab74: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27ab74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27ab78: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27ab7c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27ab7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27ab80: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27ab80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27ab84: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27ab88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ab88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab8c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27AB8Cu;
    SET_GPR_U32(ctx, 31, 0x27AB94u);
    ctx->pc = 0x27AB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AB8Cu;
    // 0x27ab90: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27AB8Cu, 0x27AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AB94u;
label_27ab94:
    // 0x27ab94: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x27ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x27ab98: 0xa2140002  sb          $s4, 0x2($s0)
    ctx->pc = 0x27ab98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x27ab9c: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x27ab9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x27aba0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27aba4: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x27aba4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27aba8: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27abac: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27abacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27abb0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27abb4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27abb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27abb8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27abbc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27abc0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27abc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27abc4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27abc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27abc8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27abcc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x27abccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_27abd0:
    // 0x27abd0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x27abd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27abd4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x27abd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27abd8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27abd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27abdc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x27abdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27abe0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x27abe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27abe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27abe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27abe8: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x27abe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27abec: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x27abecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27abf0: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x27abf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27abf4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x27abf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27abf8: 0x3e00008  jr          $ra
    ctx->pc = 0x27ABF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ABF8u;
        // 0x27abfc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ABF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AC00u;
}
