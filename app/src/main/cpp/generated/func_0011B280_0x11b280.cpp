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

// Function: func_0011B280
// Address: 0x11b280 - 0x11b3e8
void func_0011B280_0x11b280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011B280_0x11b280");
#endif

    switch (ctx->pc) {
        case 0x11b310u: goto label_11b310;
        case 0x11b32cu: goto label_11b32c;
        case 0x11b364u: goto label_11b364;
        case 0x11b378u: goto label_11b378;
        case 0x11b3a4u: goto label_11b3a4;
        case 0x11b3b0u: goto label_11b3b0;
        case 0x11b3bcu: goto label_11b3bc;
        case 0x11b3ccu: goto label_11b3cc;
        default: break;
    }

    ctx->pc = 0x11b280u;

    // 0x11b280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11b280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11b284: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x11b284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x11b288: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b28c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11b28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11b290: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11b290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11b294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b298: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11b298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11b29c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b2a0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11b2a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11b2a4: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x11b2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x11b2a8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x11b2a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11b2ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B2ACu;
    {
        const bool branch_taken_0x11b2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2ACu;
        // 0x11b2b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2ac) {
            ctx->pc = 0x11B2C4u;
            goto label_11b2c4;
        }
    }
    ctx->pc = 0x11B2B4u;
    // 0x11b2b4: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x11B2B4u;
    {
        const bool branch_taken_0x11b2b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11b2b4) {
            ctx->pc = 0x11B370u;
            goto label_11b370;
        }
    }
    ctx->pc = 0x11B2BCu;
    // 0x11b2bc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x11B2BCu;
    {
        const bool branch_taken_0x11b2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2BCu;
        // 0x11b2c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2bc) {
            ctx->pc = 0x11B3D0u;
            goto label_11b3d0;
        }
    }
    ctx->pc = 0x11B2C4u;
label_11b2c4:
    // 0x11b2c4: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x11b2c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x11b2c8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B2C8u;
    {
        const bool branch_taken_0x11b2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b2c8) {
            ctx->pc = 0x11B2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B2C8u;
            // 0x11b2cc: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B2E4u;
            goto label_11b2e4;
        }
    }
    ctx->pc = 0x11B2D0u;
    // 0x11b2d0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x11b2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x11b2d4: 0x8c6274a0  lw          $v0, 0x74A0($v1)
    ctx->pc = 0x11b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7474A0u));
    // 0x11b2d8: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x11b2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x11b2dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11B2DCu;
    {
        const bool branch_taken_0x11b2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2DCu;
        // 0x11b2e0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2dc) {
            ctx->pc = 0x11B334u;
            goto label_11b334;
        }
    }
    ctx->pc = 0x11B2E4u;
label_11b2e4:
    // 0x11b2e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2e8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11b2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11b2ec: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x11b2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11b2f0: 0x8c43051c  lw          $v1, 0x51C($v0)
    ctx->pc = 0x11b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1308)));
    // 0x11b2f4: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x11b2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11b2f8: 0x8c4a0520  lw          $t2, 0x520($v0)
    ctx->pc = 0x11b2f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1312)));
    // 0x11b2fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b2fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b300: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x11b300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b304: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x11b304u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11b308: 0xc042902  jal         func_10A408
    ctx->pc = 0x11B308u;
    SET_GPR_U32(ctx, 31, 0x11B310u);
    ctx->pc = 0x11B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B308u;
    // 0x11b30c: 0x1428821  addu        $s1, $t2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x11B308u, 0x11B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B310u;
label_11b310:
    // 0x11b310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b314: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11b314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11b318: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x11b318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11b31c: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x11b31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11b320: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b320u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b324: 0xc042908  jal         func_10A420
    ctx->pc = 0x11B324u;
    SET_GPR_U32(ctx, 31, 0x11B32Cu);
    ctx->pc = 0x11B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B324u;
    // 0x11b328: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x11B324u, 0x11B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B32Cu;
label_11b32c:
    // 0x11b32c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11B32Cu;
    {
        const bool branch_taken_0x11b32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B32Cu;
        // 0x11b330: 0xa2001684  sb          $zero, 0x1684($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5764), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b32c) {
            ctx->pc = 0x11B344u;
            goto label_11b344;
        }
    }
    ctx->pc = 0x11B334u;
label_11b334:
    // 0x11b334: 0x8c430174  lw          $v1, 0x174($v0)
    ctx->pc = 0x11b334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x11b338: 0x8c440178  lw          $a0, 0x178($v0)
    ctx->pc = 0x11b338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x11b33c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x11b33cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b340: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x11b340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_11b344:
    // 0x11b344: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11b344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11b348: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11b348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b34c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11b34cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b354: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x11b354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11b358: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b35c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11B35Cu;
    SET_GPR_U32(ctx, 31, 0x11B364u);
    ctx->pc = 0x11B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B35Cu;
    // 0x11b360: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11B35Cu, 0x11B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B364u;
label_11b364:
    // 0x11b364: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11b364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11b368: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b36c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11b36cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11b370:
    // 0x11b370: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11B370u;
    SET_GPR_U32(ctx, 31, 0x11B378u);
    ctx->pc = 0x11B374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B370u;
    // 0x11b374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11B370u, 0x11B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B378u;
label_11b378:
    // 0x11b378: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B378u;
    {
        const bool branch_taken_0x11b378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b378) {
            ctx->pc = 0x11B390u;
            goto label_11b390;
        }
    }
    ctx->pc = 0x11B380u;
    // 0x11b380: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x11b380u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b384: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x11b384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b388: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x11b388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b38c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x11b38cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_11b390:
    // 0x11b390: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11b390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11b394: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11b394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11b398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b39c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11B39Cu;
    SET_GPR_U32(ctx, 31, 0x11B3A4u);
    ctx->pc = 0x11B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B39Cu;
    // 0x11b3a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11B39Cu, 0x11B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B3A4u;
label_11b3a4:
    // 0x11b3a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3a8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11B3A8u;
    SET_GPR_U32(ctx, 31, 0x11B3B0u);
    ctx->pc = 0x11B3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B3A8u;
    // 0x11b3ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11B3A8u, 0x11B3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B3B0u;
label_11b3b0:
    // 0x11b3b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3b4: 0xc048e4e  jal         func_123938
    ctx->pc = 0x11B3B4u;
    SET_GPR_U32(ctx, 31, 0x11B3BCu);
    ctx->pc = 0x11B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B3B4u;
    // 0x11b3b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x11B3B4u, 0x11B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B3BCu;
label_11b3bc:
    // 0x11b3bc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B3BCu;
    {
        const bool branch_taken_0x11b3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b3bc) {
            ctx->pc = 0x11B3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B3BCu;
            // 0x11b3c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B3D0u;
            goto label_11b3d0;
        }
    }
    ctx->pc = 0x11B3C4u;
    // 0x11b3c4: 0xc04290e  jal         func_10A438
    ctx->pc = 0x11B3C4u;
    SET_GPR_U32(ctx, 31, 0x11B3CCu);
    ctx->pc = 0x11B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B3C4u;
    // 0x11b3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x11B3C4u, 0x11B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B3CCu;
label_11b3cc:
    // 0x11b3cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11b3ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11b3d0:
    // 0x11b3d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11b3d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b3d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11b3d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b3d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b3dc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x11b3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11b3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3E0u;
        // 0x11b3e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B3E8u;
}
