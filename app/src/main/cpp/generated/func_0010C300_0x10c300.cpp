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

// Function: func_0010C300
// Address: 0x10c300 - 0x10c5a8
void func_0010C300_0x10c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010C300_0x10c300");
#endif

    switch (ctx->pc) {
        case 0x10c354u: goto label_10c354;
        case 0x10c378u: goto label_10c378;
        case 0x10c3f0u: goto label_10c3f0;
        case 0x10c41cu: goto label_10c41c;
        case 0x10c4c4u: goto label_10c4c4;
        case 0x10c4d8u: goto label_10c4d8;
        case 0x10c4e4u: goto label_10c4e4;
        case 0x10c4f0u: goto label_10c4f0;
        case 0x10c510u: goto label_10c510;
        case 0x10c524u: goto label_10c524;
        case 0x10c530u: goto label_10c530;
        case 0x10c538u: goto label_10c538;
        case 0x10c544u: goto label_10c544;
        case 0x10c584u: goto label_10c584;
        case 0x10c594u: goto label_10c594;
        default: break;
    }

    ctx->pc = 0x10c300u;

    // 0x10c300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10c304: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10c304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10c308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c30c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c310: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10c310u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10c314: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x10c314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x10c318: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C318u;
    {
        const bool branch_taken_0x10c318 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x10c318) {
            ctx->pc = 0x10C31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C318u;
            // 0x10c31c: 0x960305f2  lhu         $v1, 0x5F2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1522)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C32Cu;
            goto label_10c32c;
        }
    }
    ctx->pc = 0x10C320u;
    // 0x10c320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c324: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x10c324u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x10c328: 0x960305f2  lhu         $v1, 0x5F2($s0)
    ctx->pc = 0x10c328u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1522)));
label_10c32c:
    // 0x10c32c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10c330: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10C330u;
    {
        const bool branch_taken_0x10c330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C330u;
        // 0x10c334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c330) {
            ctx->pc = 0x10C35Cu;
            goto label_10c35c;
        }
    }
    ctx->pc = 0x10C338u;
    // 0x10c338: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x10c338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x10c33c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10c33cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10c340: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c344: 0x0  nop
    ctx->pc = 0x10c344u;
    // NOP
    // 0x10c348: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10c348u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10c34c: 0xc0560a2  jal         func_158288
    ctx->pc = 0x10C34Cu;
    SET_GPR_U32(ctx, 31, 0x10C354u);
    ctx->pc = 0x10C350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C34Cu;
    // 0x10c350: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x10C34Cu, 0x10C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C354u;
label_10c354:
    // 0x10c354: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10C354u;
    {
        const bool branch_taken_0x10c354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C354u;
        // 0x10c358: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c354) {
            ctx->pc = 0x10C37Cu;
            goto label_10c37c;
        }
    }
    ctx->pc = 0x10C35Cu;
label_10c35c:
    // 0x10c35c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x10c35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x10c360: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x10c360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x10c364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c368: 0x0  nop
    ctx->pc = 0x10c368u;
    // NOP
    // 0x10c36c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10c36cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10c370: 0xc0560a2  jal         func_158288
    ctx->pc = 0x10C370u;
    SET_GPR_U32(ctx, 31, 0x10C378u);
    ctx->pc = 0x10C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C370u;
    // 0x10c374: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x10C370u, 0x10C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C378u;
label_10c378:
    // 0x10c378: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x10c378u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_10c37c:
    // 0x10c37c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C37Cu;
    {
        const bool branch_taken_0x10c37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C37Cu;
        // 0x10c380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c37c) {
            ctx->pc = 0x10C394u;
            goto label_10c394;
        }
    }
    ctx->pc = 0x10C384u;
    // 0x10c384: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x10C384u;
    {
        const bool branch_taken_0x10c384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C384u;
        // 0x10c388: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c384) {
            ctx->pc = 0x10C42Cu;
            goto label_10c42c;
        }
    }
    ctx->pc = 0x10C38Cu;
    // 0x10c38c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x10C38Cu;
    {
        const bool branch_taken_0x10c38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C38Cu;
        // 0x10c390: 0x9202061f  lbu         $v0, 0x61F($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1567)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c38c) {
            ctx->pc = 0x10C548u;
            goto label_10c548;
        }
    }
    ctx->pc = 0x10C394u;
label_10c394:
    // 0x10c394: 0x82020648  lb          $v0, 0x648($s0)
    ctx->pc = 0x10c394u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1608)));
    // 0x10c398: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x10c398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x10c39c: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x10c39cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x10c3a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C3A0u;
    {
        const bool branch_taken_0x10c3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C3A0u;
        // 0x10c3a4: 0xa60005e2  sh          $zero, 0x5E2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c3a0) {
            ctx->pc = 0x10C3B0u;
            goto label_10c3b0;
        }
    }
    ctx->pc = 0x10C3A8u;
    // 0x10c3a8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x10c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10c3ac: 0xa2020648  sb          $v0, 0x648($s0)
    ctx->pc = 0x10c3acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10c3b0:
    // 0x10c3b0: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x10c3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10c3b4: 0x8e0406a0  lw          $a0, 0x6A0($s0)
    ctx->pc = 0x10c3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x10c3b8: 0x8d020058  lw          $v0, 0x58($t0)
    ctx->pc = 0x10c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x10c3bc: 0x8d03005c  lw          $v1, 0x5C($t0)
    ctx->pc = 0x10c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x10c3c0: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x10c3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10c3c4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x10C3C4u;
    {
        const bool branch_taken_0x10c3c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C3C4u;
        // 0x10c3c8: 0x683021  addu        $a2, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c3c4) {
            ctx->pc = 0x10C404u;
            goto label_10c404;
        }
    }
    ctx->pc = 0x10C3CCu;
    // 0x10c3cc: 0x8d050370  lw          $a1, 0x370($t0)
    ctx->pc = 0x10c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x10c3d0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x10c3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10c3d4: 0x8d06038c  lw          $a2, 0x38C($t0)
    ctx->pc = 0x10c3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 908)));
    // 0x10c3d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10c3d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c3dc: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x10c3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x10c3e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10c3e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10c3e4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x10c3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x10c3e8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10C3E8u;
    SET_GPR_U32(ctx, 31, 0x10C3F0u);
    ctx->pc = 0x10C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C3E8u;
    // 0x10c3ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10C3E8u, 0x10C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C3F0u;
label_10c3f0:
    // 0x10c3f0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x10c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10c3f4: 0x8c43034c  lw          $v1, 0x34C($v0)
    ctx->pc = 0x10c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 844)));
    // 0x10c3f8: 0x8c440350  lw          $a0, 0x350($v0)
    ctx->pc = 0x10c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x10c3fc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x10c3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10c400: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x10c400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10c404:
    // 0x10c404: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10c404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10c408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c40c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x10c40cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10c410: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10c410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c414: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10C414u;
    SET_GPR_U32(ctx, 31, 0x10C41Cu);
    ctx->pc = 0x10C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C414u;
    // 0x10c418: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10C414u, 0x10C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C41Cu;
label_10c41c:
    // 0x10c41c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x10c41cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10c420: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10c420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10c424: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x10c424u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x10c428: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x10c428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_10c42c:
    // 0x10c42c: 0x8e0405d8  lw          $a0, 0x5D8($s0)
    ctx->pc = 0x10c42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1496)));
    // 0x10c430: 0xc440d480  lwc1        $f0, -0x2B80($v0)
    ctx->pc = 0x10c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c434: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10c434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10c438: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x10C438u;
    {
        const bool branch_taken_0x10c438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x10C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C438u;
        // 0x10c43c: 0xe60015f0  swc1        $f0, 0x15F0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c438) {
            ctx->pc = 0x10C4F8u;
            goto label_10c4f8;
        }
    }
    ctx->pc = 0x10C440u;
    // 0x10c440: 0x9202061f  lbu         $v0, 0x61F($s0)
    ctx->pc = 0x10c440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1567)));
    // 0x10c444: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x10C444u;
    {
        const bool branch_taken_0x10c444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c444) {
            ctx->pc = 0x10C4C8u;
            goto label_10c4c8;
        }
    }
    ctx->pc = 0x10C44Cu;
    // 0x10c44c: 0xc6010608  lwc1        $f1, 0x608($s0)
    ctx->pc = 0x10c44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10c450: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x10c450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x10c454: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x10c454u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x10c458: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c45c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x10c45cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10c460: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x10c460u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x10c464: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x10c464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c468: 0x0  nop
    ctx->pc = 0x10c468u;
    // NOP
    // 0x10c46c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10C46Cu;
    {
        const bool branch_taken_0x10c46c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10c46c) {
            ctx->pc = 0x10C470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C46Cu;
            // 0x10c470: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C474u;
            goto label_10c474;
        }
    }
    ctx->pc = 0x10C474u;
label_10c474:
    // 0x10c474: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x10c474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x10c478: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10c478u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10c47c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c480: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x10c480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x10c484: 0xc442d478  lwc1        $f2, -0x2B88($v0)
    ctx->pc = 0x10c484u;
    { uint32_t bits = FAST_READ32(0x3BD478u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10c488: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10c488u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10c48c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x10c48cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c490: 0x0  nop
    ctx->pc = 0x10c490u;
    // NOP
    // 0x10c494: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10C494u;
    {
        const bool branch_taken_0x10c494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10c494) {
            ctx->pc = 0x10C498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C494u;
            // 0x10c498: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C49Cu;
            goto label_10c49c;
        }
    }
    ctx->pc = 0x10C49Cu;
label_10c49c:
    // 0x10c49c: 0xc6000604  lwc1        $f0, 0x604($s0)
    ctx->pc = 0x10c49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c4a0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x10c4a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c4a4: 0x0  nop
    ctx->pc = 0x10c4a4u;
    // NOP
    // 0x10c4a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10C4A8u;
    {
        const bool branch_taken_0x10c4a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10c4a8) {
            ctx->pc = 0x10C4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C4A8u;
            // 0x10c4ac: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C4B0u;
            goto label_10c4b0;
        }
    }
    ctx->pc = 0x10C4B0u;
label_10c4b0:
    // 0x10c4b0: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x10c4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c4b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10c4b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10c4b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10c4b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10c4bc: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x10C4BCu;
    SET_GPR_U32(ctx, 31, 0x10C4C4u);
    ctx->pc = 0x10C4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C4BCu;
    // 0x10c4c0: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x10C4BCu, 0x10C4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C4C4u;
label_10c4c4:
    // 0x10c4c4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x10c4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_10c4c8:
    // 0x10c4c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c4cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10c4ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10c4d0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10C4D0u;
    SET_GPR_U32(ctx, 31, 0x10C4D8u);
    ctx->pc = 0x10C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C4D0u;
    // 0x10c4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10C4D0u, 0x10C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C4D8u;
label_10c4d8:
    // 0x10c4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c4dc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x10C4DCu;
    SET_GPR_U32(ctx, 31, 0x10C4E4u);
    ctx->pc = 0x10C4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C4DCu;
    // 0x10c4e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10C4DCu, 0x10C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C4E4u;
label_10c4e4:
    // 0x10c4e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10c4e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10c4e8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x10C4E8u;
    SET_GPR_U32(ctx, 31, 0x10C4F0u);
    ctx->pc = 0x10C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C4E8u;
    // 0x10c4ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10C4E8u, 0x10C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C4F0u;
label_10c4f0:
    // 0x10c4f0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x10C4F0u;
    {
        const bool branch_taken_0x10c4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4F0u;
        // 0x10c4f4: 0x9202061f  lbu         $v0, 0x61F($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1567)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4f0) {
            ctx->pc = 0x10C548u;
            goto label_10c548;
        }
    }
    ctx->pc = 0x10C4F8u;
label_10c4f8:
    // 0x10c4f8: 0xc60d15fc  lwc1        $f13, 0x15FC($s0)
    ctx->pc = 0x10c4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x10c4fc: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x10c4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x10c500: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x10c500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x10c504: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x10c504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x10c508: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x10C508u;
    SET_GPR_U32(ctx, 31, 0x10C510u);
    ctx->pc = 0x10C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C508u;
    // 0x10c50c: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x10C508u, 0x10C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C510u;
label_10c510:
    // 0x10c510: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x10c510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10c514: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x10c514u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x10c518: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x10c518u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x10c51c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x10C51Cu;
    SET_GPR_U32(ctx, 31, 0x10C524u);
    ctx->pc = 0x10C520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C51Cu;
    // 0x10c520: 0xe6010104  swc1        $f1, 0x104($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x10C51Cu, 0x10C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C524u;
label_10c524:
    // 0x10c524: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x10c524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x10c528: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10C528u;
    SET_GPR_U32(ctx, 31, 0x10C530u);
    ctx->pc = 0x10C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C528u;
    // 0x10c52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10C528u, 0x10C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C530u;
label_10c530:
    // 0x10c530: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x10C530u;
    SET_GPR_U32(ctx, 31, 0x10C538u);
    ctx->pc = 0x10C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C530u;
    // 0x10c534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x10C530u, 0x10C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C538u;
label_10c538:
    // 0x10c538: 0xc60c15fc  lwc1        $f12, 0x15FC($s0)
    ctx->pc = 0x10c538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10c53c: 0xc0b6a78  jal         func_2DA9E0
    ctx->pc = 0x10C53Cu;
    SET_GPR_U32(ctx, 31, 0x10C544u);
    ctx->pc = 0x10C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C53Cu;
    // 0x10c540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9E0u, 0x10C53Cu, 0x10C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C544u;
label_10c544:
    // 0x10c544: 0x9202061f  lbu         $v0, 0x61F($s0)
    ctx->pc = 0x10c544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1567)));
label_10c548:
    // 0x10c548: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10C548u;
    {
        const bool branch_taken_0x10c548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C548u;
        // 0x10c54c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c548) {
            ctx->pc = 0x10C57Cu;
            goto label_10c57c;
        }
    }
    ctx->pc = 0x10C550u;
    // 0x10c550: 0xc601060c  lwc1        $f1, 0x60C($s0)
    ctx->pc = 0x10c550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10c554: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x10c554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x10c558: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x10c558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x10c55c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c560: 0x0  nop
    ctx->pc = 0x10c560u;
    // NOP
    // 0x10c564: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10c564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c568: 0x0  nop
    ctx->pc = 0x10c568u;
    // NOP
    // 0x10c56c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x10C56Cu;
    {
        const bool branch_taken_0x10c56c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C56Cu;
        // 0x10c570: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c56c) {
            ctx->pc = 0x10C57Cu;
            goto label_10c57c;
        }
    }
    ctx->pc = 0x10C574u;
    // 0x10c574: 0xa2021601  sb          $v0, 0x1601($s0)
    ctx->pc = 0x10c574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5633), (uint8_t)GPR_U32(ctx, 2));
    // 0x10c578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c57c:
    // 0x10c57c: 0xc048e4e  jal         func_123938
    ctx->pc = 0x10C57Cu;
    SET_GPR_U32(ctx, 31, 0x10C584u);
    ctx->pc = 0x10C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C57Cu;
    // 0x10c580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10C57Cu, 0x10C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C584u;
label_10c584:
    // 0x10c584: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C584u;
    {
        const bool branch_taken_0x10c584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c584) {
            ctx->pc = 0x10C588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C584u;
            // 0x10c588: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C598u;
            goto label_10c598;
        }
    }
    ctx->pc = 0x10C58Cu;
    // 0x10c58c: 0xc04afee  jal         func_12BFB8
    ctx->pc = 0x10C58Cu;
    SET_GPR_U32(ctx, 31, 0x10C594u);
    ctx->pc = 0x10C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C58Cu;
    // 0x10c590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BFB8u, 0x10C58Cu, 0x10C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C594u;
label_10c594:
    // 0x10c594: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10c594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10c598:
    // 0x10c598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c59c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10c59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10c5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x10C5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C5A0u;
        // 0x10c5a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C5A8u;
}
