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

// Function: func_002477F0
// Address: 0x2477f0 - 0x2478b8
void func_002477F0_0x2477f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002477F0_0x2477f0");
#endif

    switch (ctx->pc) {
        case 0x247844u: goto label_247844;
        case 0x247870u: goto label_247870;
        case 0x24788cu: goto label_24788c;
        case 0x247898u: goto label_247898;
        case 0x2478a4u: goto label_2478a4;
        default: break;
    }

    ctx->pc = 0x2477f0u;

    // 0x2477f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2477f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2477f4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2477f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2477f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2477f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2477fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2477fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x247800: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x247800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x247804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24780c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x24780cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x247810: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x247810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x247814: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x247814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x247818: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x247818u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24781c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24781cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x247820: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x247820u;
    {
        const bool branch_taken_0x247820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x247824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247820u;
        // 0x247824: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247820) {
            ctx->pc = 0x24783Cu;
            goto label_24783c;
        }
    }
    ctx->pc = 0x247828u;
    // 0x247828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24782c: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24782Cu;
    {
        const bool branch_taken_0x24782c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x24782c) {
            ctx->pc = 0x24787Cu;
            goto label_24787c;
        }
    }
    ctx->pc = 0x247834u;
    // 0x247834: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x247834u;
    {
        const bool branch_taken_0x247834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247834u;
        // 0x247838: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247834) {
            ctx->pc = 0x2478A8u;
            goto label_2478a8;
        }
    }
    ctx->pc = 0x24783Cu;
label_24783c:
    // 0x24783c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24783Cu;
    SET_GPR_U32(ctx, 31, 0x247844u);
    ctx->pc = 0x247840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24783Cu;
    // 0x247840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24783Cu, 0x247844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247844u;
label_247844:
    // 0x247844: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x247844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x247848: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x247848u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24784c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24784cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x247850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247854: 0x8c6523f8  lw          $a1, 0x23F8($v1)
    ctx->pc = 0x247854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9208)));
    // 0x247858: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x247858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24785c: 0x8c6623fc  lw          $a2, 0x23FC($v1)
    ctx->pc = 0x24785cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9212)));
    // 0x247860: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x247860u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247864: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x247864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x247868: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x247868u;
    SET_GPR_U32(ctx, 31, 0x247870u);
    ctx->pc = 0x24786Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247868u;
    // 0x24786c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x247868u, 0x247870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247870u;
label_247870:
    // 0x247870: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x247870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x247874: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x247874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x247878: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x247878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_24787c:
    // 0x24787c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24787cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x247880: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x247880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x247884: 0xc055f06  jal         func_157C18
    ctx->pc = 0x247884u;
    SET_GPR_U32(ctx, 31, 0x24788Cu);
    ctx->pc = 0x247888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247884u;
    // 0x247888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x247884u, 0x24788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24788Cu;
label_24788c:
    // 0x24788c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24788cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247890: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x247890u;
    SET_GPR_U32(ctx, 31, 0x247898u);
    ctx->pc = 0x247894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247890u;
    // 0x247894: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x247890u, 0x247898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247898u;
label_247898:
    // 0x247898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24789c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24789Cu;
    SET_GPR_U32(ctx, 31, 0x2478A4u);
    ctx->pc = 0x2478A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24789Cu;
    // 0x2478a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24789Cu, 0x2478A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2478A4u;
label_2478a4:
    // 0x2478a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2478a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2478a8:
    // 0x2478a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2478a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2478ac: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2478acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2478b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2478B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2478B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478B0u;
        // 0x2478b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2478B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2478B8u;
}
