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

// Function: func_00296530
// Address: 0x296530 - 0x2965f0
void func_00296530_0x296530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00296530_0x296530");
#endif

    switch (ctx->pc) {
        case 0x29658cu: goto label_29658c;
        case 0x29659cu: goto label_29659c;
        case 0x2965acu: goto label_2965ac;
        case 0x2965bcu: goto label_2965bc;
        case 0x2965ccu: goto label_2965cc;
        case 0x2965dcu: goto label_2965dc;
        default: break;
    }

    ctx->pc = 0x296530u;

    // 0x296530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296534: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x296534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x296538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29653c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29653cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296540: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x296540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x296544: 0x310fa  dsrl        $v0, $v1, 3
    ctx->pc = 0x296544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 3);
    // 0x296548: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29654c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x29654Cu;
    {
        const bool branch_taken_0x29654c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29654Cu;
        // 0x296550: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29654c) {
            ctx->pc = 0x2965D4u;
            goto label_2965d4;
        }
    }
    ctx->pc = 0x296554u;
    // 0x296554: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x296554u;
    {
        const bool branch_taken_0x296554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296554) {
            ctx->pc = 0x296558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296554u;
            // 0x296558: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2965E0u;
            goto label_2965e0;
        }
    }
    ctx->pc = 0x29655Cu;
    // 0x29655c: 0x82030004  lb          $v1, 0x4($s0)
    ctx->pc = 0x29655cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x296560: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x296560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x296564: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x296564u;
    {
        const bool branch_taken_0x296564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296564u;
        // 0x296568: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296564) {
            ctx->pc = 0x2965DCu;
            goto label_2965dc;
        }
    }
    ctx->pc = 0x29656Cu;
    // 0x29656c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29656cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x296570: 0x2442a8b0  addiu       $v0, $v0, -0x5750
    ctx->pc = 0x296570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944944));
    // 0x296574: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x296574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x296578: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x296578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29657c: 0x800008  jr          $a0
    ctx->pc = 0x29657Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296584u: goto label_296584;
            case 0x296594u: goto label_296594;
            case 0x2965A4u: goto label_2965a4;
            case 0x2965B4u: goto label_2965b4;
            case 0x2965C4u: goto label_2965c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29657Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x296584u;
label_296584:
    // 0x296584: 0xc0a597c  jal         func_2965F0
    ctx->pc = 0x296584u;
    SET_GPR_U32(ctx, 31, 0x29658Cu);
    ctx->pc = 0x296588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296584u;
    // 0x296588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2965F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2965F0u, 0x296584u, 0x29658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29658Cu;
label_29658c:
    // 0x29658c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x29658Cu;
    {
        const bool branch_taken_0x29658c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29658c) {
            ctx->pc = 0x296590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29658Cu;
            // 0x296590: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2965E0u;
            goto label_2965e0;
        }
    }
    ctx->pc = 0x296594u;
label_296594:
    // 0x296594: 0xc0a5a06  jal         func_296818
    ctx->pc = 0x296594u;
    SET_GPR_U32(ctx, 31, 0x29659Cu);
    ctx->pc = 0x296598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296594u;
    // 0x296598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296818u, 0x296594u, 0x29659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29659Cu;
label_29659c:
    // 0x29659c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x29659Cu;
    {
        const bool branch_taken_0x29659c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29659c) {
            ctx->pc = 0x2965A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29659Cu;
            // 0x2965a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2965E0u;
            goto label_2965e0;
        }
    }
    ctx->pc = 0x2965A4u;
label_2965a4:
    // 0x2965a4: 0xc0a5a56  jal         func_296958
    ctx->pc = 0x2965A4u;
    SET_GPR_U32(ctx, 31, 0x2965ACu);
    ctx->pc = 0x2965A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2965A4u;
    // 0x2965a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296958u, 0x2965A4u, 0x2965ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2965ACu;
label_2965ac:
    // 0x2965ac: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2965ACu;
    {
        const bool branch_taken_0x2965ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2965ac) {
            ctx->pc = 0x2965B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2965ACu;
            // 0x2965b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2965E0u;
            goto label_2965e0;
        }
    }
    ctx->pc = 0x2965B4u;
label_2965b4:
    // 0x2965b4: 0xc0a5b0a  jal         func_296C28
    ctx->pc = 0x2965B4u;
    SET_GPR_U32(ctx, 31, 0x2965BCu);
    ctx->pc = 0x2965B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2965B4u;
    // 0x2965b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C28u, 0x2965B4u, 0x2965BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2965BCu;
label_2965bc:
    // 0x2965bc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2965BCu;
    {
        const bool branch_taken_0x2965bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2965bc) {
            ctx->pc = 0x2965C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2965BCu;
            // 0x2965c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2965E0u;
            goto label_2965e0;
        }
    }
    ctx->pc = 0x2965C4u;
label_2965c4:
    // 0x2965c4: 0xc0a5c0e  jal         func_297038
    ctx->pc = 0x2965C4u;
    SET_GPR_U32(ctx, 31, 0x2965CCu);
    ctx->pc = 0x2965C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2965C4u;
    // 0x2965c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297038u, 0x2965C4u, 0x2965CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2965CCu;
label_2965cc:
    // 0x2965cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2965CCu;
    {
        const bool branch_taken_0x2965cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2965D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2965CCu;
        // 0x2965d0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2965cc) {
            ctx->pc = 0x2965E0u;
            goto label_2965e0;
        }
    }
    ctx->pc = 0x2965D4u;
label_2965d4:
    // 0x2965d4: 0xc0a5b76  jal         func_296DD8
    ctx->pc = 0x2965D4u;
    SET_GPR_U32(ctx, 31, 0x2965DCu);
    ctx->pc = 0x2965D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2965D4u;
    // 0x2965d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DD8u, 0x2965D4u, 0x2965DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2965DCu;
label_2965dc:
    // 0x2965dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2965dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2965e0:
    // 0x2965e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2965e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2965e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2965E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2965E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2965E4u;
        // 0x2965e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2965E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2965ECu;
    // 0x2965ec: 0x0  nop
    ctx->pc = 0x2965ecu;
    // NOP
    ctx->pc = 0x2965f0u;
}
