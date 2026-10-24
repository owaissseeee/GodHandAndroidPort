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

// Function: func_0011A660
// Address: 0x11a660 - 0x11a820
void func_0011A660_0x11a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011A660_0x11a660");
#endif

    switch (ctx->pc) {
        case 0x11a684u: goto label_11a684;
        case 0x11a6ecu: goto label_11a6ec;
        case 0x11a6f4u: goto label_11a6f4;
        case 0x11a6fcu: goto label_11a6fc;
        case 0x11a710u: goto label_11a710;
        case 0x11a724u: goto label_11a724;
        case 0x11a76cu: goto label_11a76c;
        case 0x11a780u: goto label_11a780;
        case 0x11a7e4u: goto label_11a7e4;
        case 0x11a7f8u: goto label_11a7f8;
        default: break;
    }

    ctx->pc = 0x11a660u;

    // 0x11a660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a668: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11a668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11a66c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11a66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a674: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11a674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11a678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a67c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11A67Cu;
    SET_GPR_U32(ctx, 31, 0x11A684u);
    ctx->pc = 0x11A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A67Cu;
    // 0x11a680: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11A67Cu, 0x11A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A684u;
label_11a684:
    // 0x11a684: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x11a684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11a688: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11a688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x11a68c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a690: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x11a690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x11a694: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x11A694u;
    {
        const bool branch_taken_0x11a694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A694u;
        // 0x11a698: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a694) {
            ctx->pc = 0x11A810u;
            goto label_11a810;
        }
    }
    ctx->pc = 0x11A69Cu;
    // 0x11a69c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x11a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x11a6a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11a6a4: 0x2442c590  addiu       $v0, $v0, -0x3A70
    ctx->pc = 0x11a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952336));
    // 0x11a6a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a6ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a6b0: 0x800008  jr          $a0
    ctx->pc = 0x11A6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A6B8u: goto label_11a6b8;
            case 0x11A708u: goto label_11a708;
            case 0x11A740u: goto label_11a740;
            case 0x11A778u: goto label_11a778;
            case 0x11A7B0u: goto label_11a7b0;
            case 0x11A7F0u: goto label_11a7f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A6B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11A6B8u;
label_11a6b8:
    // 0x11a6b8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x11a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x11a6bc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x11a6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11a6c0: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x11a6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x11a6c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11a6c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6c8: 0xa60005e2  sh          $zero, 0x5E2($s0)
    ctx->pc = 0x11a6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x11a6cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11a6ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11a6d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a6d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6d8: 0x8c4506f0  lw          $a1, 0x6F0($v0)
    ctx->pc = 0x11a6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1776)));
    // 0x11a6dc: 0x8c4606f4  lw          $a2, 0x6F4($v0)
    ctx->pc = 0x11a6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1780)));
    // 0x11a6e0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11a6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11a6e4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11A6E4u;
    SET_GPR_U32(ctx, 31, 0x11A6ECu);
    ctx->pc = 0x11A6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A6E4u;
    // 0x11a6e8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11A6E4u, 0x11A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A6ECu;
label_11a6ec:
    // 0x11a6ec: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11A6ECu;
    SET_GPR_U32(ctx, 31, 0x11A6F4u);
    ctx->pc = 0x11A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A6ECu;
    // 0x11a6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11A6ECu, 0x11A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A6F4u;
label_11a6f4:
    // 0x11a6f4: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11A6F4u;
    SET_GPR_U32(ctx, 31, 0x11A6FCu);
    ctx->pc = 0x11A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A6F4u;
    // 0x11a6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11A6F4u, 0x11A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A6FCu;
label_11a6fc:
    // 0x11a6fc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11a6fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11a700: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11a700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11a704: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11a704u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11a708:
    // 0x11a708: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11A708u;
    SET_GPR_U32(ctx, 31, 0x11A710u);
    ctx->pc = 0x11A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A708u;
    // 0x11a70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11A708u, 0x11A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A710u;
label_11a710:
    // 0x11a710: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x11A710u;
    {
        const bool branch_taken_0x11a710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a710) {
            ctx->pc = 0x11A714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A710u;
            // 0x11a714: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A814u;
            goto label_11a814;
        }
    }
    ctx->pc = 0x11A718u;
    // 0x11a718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a71c: 0xc04b150  jal         func_12C540
    ctx->pc = 0x11A71Cu;
    SET_GPR_U32(ctx, 31, 0x11A724u);
    ctx->pc = 0x11A720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A71Cu;
    // 0x11a720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C540u, 0x11A71Cu, 0x11A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A724u;
label_11a724:
    // 0x11a724: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11a724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11a728: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x11a728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x11a72c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11a730: 0x8e04068c  lw          $a0, 0x68C($s0)
    ctx->pc = 0x11a730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
    // 0x11a734: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x11a734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x11a738: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11A738u;
    {
        const bool branch_taken_0x11a738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A738u;
        // 0x11a73c: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a738) {
            ctx->pc = 0x11A798u;
            goto label_11a798;
        }
    }
    ctx->pc = 0x11A740u;
label_11a740:
    // 0x11a740: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x11a740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x11a744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a748: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11a748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a74c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x11a74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11a750: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x11a750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x11a754: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11a754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a758: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x11a758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x11a75c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11a75cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a760: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11a760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11a764: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11A764u;
    SET_GPR_U32(ctx, 31, 0x11A76Cu);
    ctx->pc = 0x11A768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A764u;
    // 0x11a768: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11A764u, 0x11A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A76Cu;
label_11a76c:
    // 0x11a76c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11a76cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11a770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11a774: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11a774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11a778:
    // 0x11a778: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11A778u;
    SET_GPR_U32(ctx, 31, 0x11A780u);
    ctx->pc = 0x11A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A778u;
    // 0x11a77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11A778u, 0x11A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A780u;
label_11a780:
    // 0x11a780: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x11a780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x11a784: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x11a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x11a788: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x11a788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x11a78c: 0x8e04068c  lw          $a0, 0x68C($s0)
    ctx->pc = 0x11a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
    // 0x11a790: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x11a790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x11a794: 0xae0215f4  sw          $v0, 0x15F4($s0)
    ctx->pc = 0x11a794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
label_11a798:
    // 0x11a798: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x11A798u;
    {
        const bool branch_taken_0x11a798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A798u;
        // 0x11a79c: 0xae030250  sw          $v1, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a798) {
            ctx->pc = 0x11A810u;
            goto label_11a810;
        }
    }
    ctx->pc = 0x11A7A0u;
    // 0x11a7a0: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x11a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x11a7a4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x11a7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x11a7a8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x11A7A8u;
    {
        const bool branch_taken_0x11a7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7A8u;
        // 0x11a7ac: 0xac820250  sw          $v0, 0x250($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7a8) {
            ctx->pc = 0x11A810u;
            goto label_11a810;
        }
    }
    ctx->pc = 0x11A7B0u;
label_11a7b0:
    // 0x11a7b0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x11a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x11a7b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7b8: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x11a7b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x11a7bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11a7bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7c0: 0xa60005e2  sh          $zero, 0x5E2($s0)
    ctx->pc = 0x11a7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x11a7c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11a7c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11a7c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a7cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11a7ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7d0: 0x8c4506f8  lw          $a1, 0x6F8($v0)
    ctx->pc = 0x11a7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1784)));
    // 0x11a7d4: 0x8c4606fc  lw          $a2, 0x6FC($v0)
    ctx->pc = 0x11a7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1788)));
    // 0x11a7d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11a7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11a7dc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11A7DCu;
    SET_GPR_U32(ctx, 31, 0x11A7E4u);
    ctx->pc = 0x11A7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A7DCu;
    // 0x11a7e0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11A7DCu, 0x11A7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7E4u;
label_11a7e4:
    // 0x11a7e4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11a7e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11a7e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11a7ec: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11a7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11a7f0:
    // 0x11a7f0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11A7F0u;
    SET_GPR_U32(ctx, 31, 0x11A7F8u);
    ctx->pc = 0x11A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A7F0u;
    // 0x11a7f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11A7F0u, 0x11A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7F8u;
label_11a7f8:
    // 0x11a7f8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A7F8u;
    {
        const bool branch_taken_0x11a7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a7f8) {
            ctx->pc = 0x11A7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A7F8u;
            // 0x11a7fc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A814u;
            goto label_11a814;
        }
    }
    ctx->pc = 0x11A800u;
    // 0x11a800: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x11a800u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a804: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x11a804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a808: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x11a808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a80c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x11a80cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_11a810:
    // 0x11a810: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11a810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11a814:
    // 0x11a814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a818: 0x3e00008  jr          $ra
    ctx->pc = 0x11A818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A818u;
        // 0x11a81c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A820u;
}
