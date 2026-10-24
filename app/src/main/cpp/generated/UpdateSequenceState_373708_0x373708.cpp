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

// Function: UpdateSequenceState_373708
// Address: 0x373708 - 0x373770
void UpdateSequenceState_373708_0x373708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateSequenceState_373708_0x373708");
#endif

    switch (ctx->pc) {
        case 0x37372cu: goto label_37372c;
        case 0x37373cu: goto label_37373c;
        case 0x373754u: goto label_373754;
        default: break;
    }

    ctx->pc = 0x373708u;

    // 0x373708: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37370c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37370cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x373710: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x373710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x373714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373718: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x373718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37371c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x37371cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373724: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x373724u;
    SET_GPR_U32(ctx, 31, 0x37372Cu);
    ctx->pc = 0x373728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373724u;
    // 0x373728: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x373724u, 0x37372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37372Cu;
label_37372c:
    // 0x37372c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x37372Cu;
    {
        const bool branch_taken_0x37372c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37372c) {
            ctx->pc = 0x373730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37372Cu;
            // 0x373730: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373758u;
            goto label_373758;
        }
    }
    ctx->pc = 0x373734u;
    // 0x373734: 0xc0dcec8  jal         func_373B20
    ctx->pc = 0x373734u;
    SET_GPR_U32(ctx, 31, 0x37373Cu);
    ctx->pc = 0x373738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373734u;
    // 0x373738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B20u, 0x373734u, 0x37373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37373Cu;
label_37373c:
    // 0x37373c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37373cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373740: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x373740u;
    {
        const bool branch_taken_0x373740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x373744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373740u;
        // 0x373744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373740) {
            ctx->pc = 0x373754u;
            goto label_373754;
        }
    }
    ctx->pc = 0x373748u;
    // 0x373748: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x373748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37374c: 0xc0dd052  jal         func_374148
    ctx->pc = 0x37374Cu;
    SET_GPR_U32(ctx, 31, 0x373754u);
    ctx->pc = 0x373750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37374Cu;
    // 0x373750: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374148u, 0x37374Cu, 0x373754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373754u;
label_373754:
    // 0x373754: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x373754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_373758:
    // 0x373758: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x373758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37375c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37375cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373764: 0x3e00008  jr          $ra
    ctx->pc = 0x373764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373764u;
        // 0x373768: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37376Cu;
    // 0x37376c: 0x0  nop
    ctx->pc = 0x37376cu;
    // NOP
    ctx->pc = 0x373770u;
}
