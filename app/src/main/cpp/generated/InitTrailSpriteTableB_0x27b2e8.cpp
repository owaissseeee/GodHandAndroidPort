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

// Function: InitTrailSpriteTableB
// Address: 0x27b2e8 - 0x27b6f8
void InitTrailSpriteTableB_0x27b2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitTrailSpriteTableB_0x27b2e8");
#endif

    switch (ctx->pc) {
        case 0x27b340u: goto label_27b340;
        case 0x27b3c4u: goto label_27b3c4;
        case 0x27b41cu: goto label_27b41c;
        case 0x27b474u: goto label_27b474;
        case 0x27b4c0u: goto label_27b4c0;
        case 0x27b50cu: goto label_27b50c;
        case 0x27b55cu: goto label_27b55c;
        case 0x27b5a8u: goto label_27b5a8;
        case 0x27b5f4u: goto label_27b5f4;
        case 0x27b640u: goto label_27b640;
        case 0x27b68cu: goto label_27b68c;
        default: break;
    }

    ctx->pc = 0x27b2e8u;

    // 0x27b2e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27b2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27b2ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x27b2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27b2f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x27b2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x27b2f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x27b2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x27b2f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27b2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27b2fc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x27b2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x27b300: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x27b300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x27b304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27b308: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x27b308u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x27b30c: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x27b30cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27b310: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x27b310u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27b314: 0x14a200ec  bne         $a1, $v0, . + 4 + (0xEC << 2)
    ctx->pc = 0x27B314u;
    {
        const bool branch_taken_0x27b314 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x27B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B314u;
        // 0x27b318: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b314) {
            ctx->pc = 0x27B6C8u;
            goto label_27b6c8;
        }
    }
    ctx->pc = 0x27B31Cu;
    // 0x27b31c: 0x108000ea  beqz        $a0, . + 4 + (0xEA << 2)
    ctx->pc = 0x27B31Cu;
    {
        const bool branch_taken_0x27b31c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B31Cu;
        // 0x27b320: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b31c) {
            ctx->pc = 0x27B6C8u;
            goto label_27b6c8;
        }
    }
    ctx->pc = 0x27B324u;
    // 0x27b324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b328: 0x26105450  addiu       $s0, $s0, 0x5450
    ctx->pc = 0x27b328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21584));
    // 0x27b32c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27b32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27b330: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27b330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27b334: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27b334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27b338: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27B338u;
    SET_GPR_U32(ctx, 31, 0x27B340u);
    ctx->pc = 0x27B33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B338u;
    // 0x27b33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27B338u, 0x27B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B340u;
label_27b340:
    // 0x27b340: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x27b340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
    // 0x27b344: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x27b344u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x27b348: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27b348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27b34c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x27b34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x27b350: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x27b350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x27b354: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27b354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b358: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x27b358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x27b35c: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x27b35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x27b360: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27b360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x27b364: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27b364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27b368: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27b368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27b36c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x27b36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27b370: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x27b370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27b374: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x27b374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x27b378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b37c: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x27b37cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x27b380: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27b380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27b384: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x27b384u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27b388: 0x24110012  addiu       $s1, $zero, 0x12
    ctx->pc = 0x27b388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x27b38c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27b38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27b390: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x27b390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x27b394: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x27b394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27b398: 0x24130016  addiu       $s3, $zero, 0x16
    ctx->pc = 0x27b398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x27b39c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27b39cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27b3a0: 0x24140017  addiu       $s4, $zero, 0x17
    ctx->pc = 0x27b3a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x27b3a4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27b3a8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27b3ac: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27b3acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27b3b0: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x27b3b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x27b3b4: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x27b3b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x27b3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b3bc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27B3BCu;
    SET_GPR_U32(ctx, 31, 0x27B3C4u);
    ctx->pc = 0x27B3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B3BCu;
    // 0x27b3c0: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27B3BCu, 0x27B3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3C4u;
label_27b3c4:
    // 0x27b3c4: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x27b3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
    // 0x27b3c8: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x27b3c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x27b3cc: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x27b3ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x27b3d0: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x27b3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x27b3d4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27b3d8: 0xa2110003  sb          $s1, 0x3($s0)
    ctx->pc = 0x27b3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x27b3dc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27b3e0: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x27b3e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27b3e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b3e8: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27b3e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27b3ec: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27b3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27b3f0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27b3f4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27b3f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27b3f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27b3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27b3fc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27b3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27b400: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27b400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27b404: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27b404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27b408: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27b408u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27b40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b410: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27b410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27b414: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27B414u;
    SET_GPR_U32(ctx, 31, 0x27B41Cu);
    ctx->pc = 0x27B418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B414u;
    // 0x27b418: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27B414u, 0x27B41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B41Cu;
label_27b41c:
    // 0x27b41c: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x27b41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x27b420: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x27b420u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x27b424: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27b424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27b428: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x27b428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x27b42c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27b430: 0xa2120003  sb          $s2, 0x3($s0)
    ctx->pc = 0x27b430u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x27b434: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27b434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27b438: 0xe6170004  swc1        $f23, 0x4($s0)
    ctx->pc = 0x27b438u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27b43c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b440: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27b440u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27b444: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27b444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27b448: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27b448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27b44c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27b44cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27b450: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27b450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27b454: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27b454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27b458: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27b458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27b45c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27b45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27b460: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27b460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27b464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b468: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27b468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27b46c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27B46Cu;
    SET_GPR_U32(ctx, 31, 0x27B474u);
    ctx->pc = 0x27B470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B46Cu;
    // 0x27b470: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27B46Cu, 0x27B474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B474u;
label_27b474:
    // 0x27b474: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x27b474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x27b478: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27b478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27b47c: 0xa2120003  sb          $s2, 0x3($s0)
    ctx->pc = 0x27b47cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x27b480: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27b480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27b484: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x27b484u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27b488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b48c: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27b48cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27b490: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27b490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27b494: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27b494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27b498: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27b498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27b49c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27b49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27b4a0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27b4a4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27b4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27b4a8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27b4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27b4ac: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27b4acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27b4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27b4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27b4b8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27B4B8u;
    SET_GPR_U32(ctx, 31, 0x27B4C0u);
    ctx->pc = 0x27B4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B4B8u;
    // 0x27b4bc: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27B4B8u, 0x27B4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4C0u;
label_27b4c0:
    // 0x27b4c0: 0xa2120002  sb          $s2, 0x2($s0)
    ctx->pc = 0x27b4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x27b4c4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27b4c8: 0xa2120003  sb          $s2, 0x3($s0)
    ctx->pc = 0x27b4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x27b4cc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27b4d0: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x27b4d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27b4d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4d8: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27b4d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27b4dc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27b4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27b4e0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27b4e4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27b4e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27b4e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27b4ec: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27b4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27b4f0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27b4f4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27b4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27b4f8: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27b4f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27b4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b500: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27b500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27b504: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27B504u;
    SET_GPR_U32(ctx, 31, 0x27B50Cu);
    ctx->pc = 0x27B508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B504u;
    // 0x27b508: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27B504u, 0x27B50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B50Cu;
label_27b50c:
    // 0x27b50c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x27b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x27b510: 0xa2120002  sb          $s2, 0x2($s0)
    ctx->pc = 0x27b510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x27b514: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x27b514u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x27b518: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27b518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27b51c: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x27b51cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27b520: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27b520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27b524: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27b524u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27b528: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b52c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27b52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27b530: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27b530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27b534: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27b534u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27b538: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27b538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27b53c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27b540: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27b540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27b544: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27b544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27b548: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27b548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27b54c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b550: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27b550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27b554: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27B554u;
    SET_GPR_U32(ctx, 31, 0x27B55Cu);
    ctx->pc = 0x27B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B554u;
    // 0x27b558: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27B554u, 0x27B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B55Cu;
label_27b55c:
    // 0x27b55c: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x27b55cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x27b560: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27b560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27b564: 0xa2130003  sb          $s3, 0x3($s0)
    ctx->pc = 0x27b564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x27b568: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27b568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27b56c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x27b56cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27b570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b574: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27b574u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27b578: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27b578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27b57c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27b57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27b580: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27b580u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27b584: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27b584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27b588: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27b588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27b58c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27b58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27b590: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27b590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27b594: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27b594u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27b598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b59c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27b59cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27b5a0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27B5A0u;
    SET_GPR_U32(ctx, 31, 0x27B5A8u);
    ctx->pc = 0x27B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B5A0u;
    // 0x27b5a4: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27B5A0u, 0x27B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5A8u;
label_27b5a8:
    // 0x27b5a8: 0xe6170004  swc1        $f23, 0x4($s0)
    ctx->pc = 0x27b5a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27b5ac: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27b5b0: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x27b5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x27b5b4: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27b5b8: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x27b5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x27b5bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b5c0: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27b5c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27b5c4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27b5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27b5c8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27b5cc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27b5ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27b5d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27b5d4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27b5d8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27b5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27b5dc: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27b5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27b5e0: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27b5e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27b5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b5e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27b5ec: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27B5ECu;
    SET_GPR_U32(ctx, 31, 0x27B5F4u);
    ctx->pc = 0x27B5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B5ECu;
    // 0x27b5f0: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27B5ECu, 0x27B5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5F4u;
label_27b5f4:
    // 0x27b5f4: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x27b5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x27b5f8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27b5fc: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x27b5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x27b600: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27b600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27b604: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x27b604u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27b608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b60c: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27b60cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27b610: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27b610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27b614: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27b614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27b618: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27b618u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27b61c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27b61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27b620: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27b620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27b624: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27b624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27b628: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27b628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27b62c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27b62cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27b630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b634: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27b634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27b638: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27B638u;
    SET_GPR_U32(ctx, 31, 0x27B640u);
    ctx->pc = 0x27B63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B638u;
    // 0x27b63c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27B638u, 0x27B640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B640u;
label_27b640:
    // 0x27b640: 0xa2140002  sb          $s4, 0x2($s0)
    ctx->pc = 0x27b640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x27b644: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27b644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27b648: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x27b648u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x27b64c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27b650: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x27b650u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27b654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b658: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27b658u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27b65c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x27b65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27b660: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27b660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27b664: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27b664u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27b668: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27b668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27b66c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27b670: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27b670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27b674: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27b674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27b678: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27b678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27b67c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27b67cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27b680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b684: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x27B684u;
    SET_GPR_U32(ctx, 31, 0x27B68Cu);
    ctx->pc = 0x27B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B684u;
    // 0x27b688: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x27B684u, 0x27B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B68Cu;
label_27b68c:
    // 0x27b68c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x27b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x27b690: 0xa2140002  sb          $s4, 0x2($s0)
    ctx->pc = 0x27b690u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x27b694: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x27b694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x27b698: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x27b698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27b69c: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x27b69cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27b6a0: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x27b6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27b6a4: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x27b6a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27b6a8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x27b6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x27b6ac: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x27b6acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27b6b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27b6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27b6b4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x27b6b8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27b6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27b6bc: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x27b6bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x27b6c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27b6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27b6c4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x27b6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_27b6c8:
    // 0x27b6c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x27b6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27b6cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x27b6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b6d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27b6d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b6d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x27b6d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b6d8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x27b6d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b6dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b6e0: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x27b6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27b6e4: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x27b6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27b6e8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x27b6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27b6ec: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x27b6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27b6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x27B6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B6F0u;
        // 0x27b6f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B6F8u;
}
