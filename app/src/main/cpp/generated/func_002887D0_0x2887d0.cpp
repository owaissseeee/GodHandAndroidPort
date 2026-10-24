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

// Function: func_002887D0
// Address: 0x2887d0 - 0x288930
void func_002887D0_0x2887d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002887D0_0x2887d0");
#endif

    switch (ctx->pc) {
        case 0x2887f4u: goto label_2887f4;
        case 0x288824u: goto label_288824;
        case 0x288858u: goto label_288858;
        case 0x288888u: goto label_288888;
        case 0x2888bcu: goto label_2888bc;
        case 0x2888d0u: goto label_2888d0;
        case 0x28891cu: goto label_28891c;
        default: break;
    }

    ctx->pc = 0x2887d0u;

    // 0x2887d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2887d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2887d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2887d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2887d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2887dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2887dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2887e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2887e4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2887e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2887e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2887e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887ec: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2887ECu;
    SET_GPR_U32(ctx, 31, 0x2887F4u);
    ctx->pc = 0x2887F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2887ECu;
    // 0x2887f0: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2887ECu, 0x2887F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2887F4u;
label_2887f4:
    // 0x2887f4: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x2887f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x2887f8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2887f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2887fc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2887fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x288800: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x288800u;
    {
        const bool branch_taken_0x288800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x288804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288800u;
        // 0x288804: 0xae0215b0  sw          $v0, 0x15B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288800) {
            ctx->pc = 0x28881Cu;
            goto label_28881c;
        }
    }
    ctx->pc = 0x288808u;
    // 0x288808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28880c: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x28880Cu;
    {
        const bool branch_taken_0x28880c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28880c) {
            ctx->pc = 0x2888C8u;
            goto label_2888c8;
        }
    }
    ctx->pc = 0x288814u;
    // 0x288814: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x288814u;
    {
        const bool branch_taken_0x288814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288814u;
        // 0x288818: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288814) {
            ctx->pc = 0x288920u;
            goto label_288920;
        }
    }
    ctx->pc = 0x28881Cu;
label_28881c:
    // 0x28881c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x28881Cu;
    SET_GPR_U32(ctx, 31, 0x288824u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x28881Cu, 0x288824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288824u;
label_288824:
    // 0x288824: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x288824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x288828: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x288828u;
    {
        const bool branch_taken_0x288828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288828u;
        // 0x28882c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288828) {
            ctx->pc = 0x288860u;
            goto label_288860;
        }
    }
    ctx->pc = 0x288830u;
    // 0x288830: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x288830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x288834: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x288834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288838: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x288838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28883c: 0x8c4500a8  lw          $a1, 0xA8($v0)
    ctx->pc = 0x28883cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x288840: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x288840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288844: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x288844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x288848: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x288848u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28884c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28884cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x288850: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x288850u;
    SET_GPR_U32(ctx, 31, 0x288858u);
    ctx->pc = 0x288854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288850u;
    // 0x288854: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x288850u, 0x288858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288858u;
label_288858:
    // 0x288858: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x288858u;
    {
        const bool branch_taken_0x288858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288858u;
        // 0x28885c: 0x920202f7  lbu         $v0, 0x2F7($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288858) {
            ctx->pc = 0x28888Cu;
            goto label_28888c;
        }
    }
    ctx->pc = 0x288860u;
label_288860:
    // 0x288860: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x288860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x288864: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x288864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288868: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x288868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28886c: 0x8c4500b0  lw          $a1, 0xB0($v0)
    ctx->pc = 0x28886cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x288870: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x288870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288874: 0x8c4600b4  lw          $a2, 0xB4($v0)
    ctx->pc = 0x288874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x288878: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x288878u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28887c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28887cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x288880: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x288880u;
    SET_GPR_U32(ctx, 31, 0x288888u);
    ctx->pc = 0x288884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288880u;
    // 0x288884: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x288880u, 0x288888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288888u;
label_288888:
    // 0x288888: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x288888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
label_28888c:
    // 0x28888c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x28888Cu;
    {
        const bool branch_taken_0x28888c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28888c) {
            ctx->pc = 0x288890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28888Cu;
            // 0x288890: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2888C0u;
            goto label_2888c0;
        }
    }
    ctx->pc = 0x288894u;
    // 0x288894: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x288894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x288898: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x288898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28889c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x28889cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2888a0: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x2888a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2888a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2888a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2888a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2888a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2888ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2888acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2888b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2888b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2888b4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2888B4u;
    SET_GPR_U32(ctx, 31, 0x2888BCu);
    ctx->pc = 0x2888B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2888B4u;
    // 0x2888b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2888B4u, 0x2888BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2888BCu;
label_2888bc:
    // 0x2888bc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2888bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2888c0:
    // 0x2888c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2888c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2888c4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2888c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2888c8:
    // 0x2888c8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2888C8u;
    SET_GPR_U32(ctx, 31, 0x2888D0u);
    ctx->pc = 0x2888CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2888C8u;
    // 0x2888cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2888C8u, 0x2888D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2888D0u;
label_2888d0:
    // 0x2888d0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2888D0u;
    {
        const bool branch_taken_0x2888d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2888d0) {
            ctx->pc = 0x288914u;
            goto label_288914;
        }
    }
    ctx->pc = 0x2888D8u;
    // 0x2888d8: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x2888d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x2888dc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2888dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2888e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2888E0u;
    {
        const bool branch_taken_0x2888e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2888E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2888E0u;
        // 0x2888e4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2888e0) {
            ctx->pc = 0x288900u;
            goto label_288900;
        }
    }
    ctx->pc = 0x2888E8u;
    // 0x2888e8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2888e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2888ec: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2888ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2888f0: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x2888f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x2888f4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2888f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2888f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2888F8u;
    {
        const bool branch_taken_0x2888f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2888FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2888F8u;
        // 0x2888fc: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2888f8) {
            ctx->pc = 0x28891Cu;
            goto label_28891c;
        }
    }
    ctx->pc = 0x288900u;
label_288900:
    // 0x288900: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x288900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288904: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x288904u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x288908: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x288908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x28890c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x28890cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x288910: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x288910u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_288914:
    // 0x288914: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x288914u;
    SET_GPR_U32(ctx, 31, 0x28891Cu);
    ctx->pc = 0x288918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288914u;
    // 0x288918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x288914u, 0x28891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28891Cu;
label_28891c:
    // 0x28891c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28891cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_288920:
    // 0x288920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288924: 0x3e00008  jr          $ra
    ctx->pc = 0x288924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288924u;
        // 0x288928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28892Cu;
    // 0x28892c: 0x0  nop
    ctx->pc = 0x28892cu;
    // NOP
    ctx->pc = 0x288930u;
}
