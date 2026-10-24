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

// Function: func_00355508
// Address: 0x355508 - 0x3555a8
void func_00355508_0x355508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00355508_0x355508");
#endif

    switch (ctx->pc) {
        case 0x355520u: goto label_355520;
        case 0x355548u: goto label_355548;
        case 0x355594u: goto label_355594;
        default: break;
    }

    ctx->pc = 0x355508u;

    // 0x355508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35550c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35550cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x355510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x355510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355514: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x355514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x355518: 0xc0d37da  jal         func_34DF68
    ctx->pc = 0x355518u;
    SET_GPR_U32(ctx, 31, 0x355520u);
    ctx->pc = 0x35551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355518u;
    // 0x35551c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF68u, 0x355518u, 0x355520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355520u;
label_355520:
    // 0x355520: 0x8e061fc0  lw          $a2, 0x1FC0($s0)
    ctx->pc = 0x355520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    // 0x355524: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x355524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355528: 0x8cc20178  lw          $v0, 0x178($a2)
    ctx->pc = 0x355528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 376)));
    // 0x35552c: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x35552Cu;
    {
        const bool branch_taken_0x35552c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x355530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35552Cu;
        // 0x355530: 0x24c40180  addiu       $a0, $a2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35552c) {
            ctx->pc = 0x355578u;
            goto label_355578;
        }
    }
    ctx->pc = 0x355534u;
    // 0x355534: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x355534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355538: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x355538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35553c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x35553cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x355540: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x355540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x355544: 0x0  nop
    ctx->pc = 0x355544u;
    // NOP
label_355548:
    // 0x355548: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x355548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35554c: 0x50490004  beql        $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35554Cu;
    {
        const bool branch_taken_0x35554c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x35554c) {
            ctx->pc = 0x355550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35554Cu;
            // 0x355550: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355560u;
            goto label_355560;
        }
    }
    ctx->pc = 0x355554u;
    // 0x355554: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x355554u;
    {
        const bool branch_taken_0x355554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x355554) {
            ctx->pc = 0x355558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355554u;
            // 0x355558: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355570u;
            goto label_355570;
        }
    }
    ctx->pc = 0x35555Cu;
    // 0x35555c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x35555cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_355560:
    // 0x355560: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x355560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x355564: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x355564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x355568: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x355568u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x35556c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x35556cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_355570:
    // 0x355570: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x355570u;
    {
        const bool branch_taken_0x355570 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x355574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355570u;
        // 0x355574: 0x248400f0  addiu       $a0, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355570) {
            ctx->pc = 0x355548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355548;
        }
    }
    ctx->pc = 0x355578u;
label_355578:
    // 0x355578: 0x8cc3007c  lw          $v1, 0x7C($a2)
    ctx->pc = 0x355578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x35557c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355580: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x355580u;
    {
        const bool branch_taken_0x355580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x355584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355580u;
        // 0x355584: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355580) {
            ctx->pc = 0x35558Cu;
            goto label_35558c;
        }
    }
    ctx->pc = 0x355588u;
    // 0x355588: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x355588u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_35558c:
    // 0x35558c: 0xc0d37e0  jal         func_34DF80
    ctx->pc = 0x35558Cu;
    SET_GPR_U32(ctx, 31, 0x355594u);
    ctx->pc = 0x355590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35558Cu;
    // 0x355590: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF80u, 0x35558Cu, 0x355594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355594u;
label_355594:
    // 0x355594: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x355594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355598: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x355598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35559c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35559cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3555a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3555A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3555A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3555A0u;
        // 0x3555a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3555A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3555A8u;
}
