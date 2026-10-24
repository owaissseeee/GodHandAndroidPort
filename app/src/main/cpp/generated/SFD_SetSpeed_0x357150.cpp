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

// Function: SFD_SetSpeed
// Address: 0x357150 - 0x3571d0
void SFD_SetSpeed_0x357150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFD_SetSpeed_0x357150");
#endif

    switch (ctx->pc) {
        case 0x35716cu: goto label_35716c;
        case 0x35719cu: goto label_35719c;
        case 0x3571a8u: goto label_3571a8;
        default: break;
    }

    ctx->pc = 0x357150u;

    // 0x357150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357158: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x357158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35715c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35715cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357160: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x357160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x357164: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x357164u;
    SET_GPR_U32(ctx, 31, 0x35716Cu);
    ctx->pc = 0x357168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357164u;
    // 0x357168: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x357164u, 0x35716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35716Cu;
label_35716c:
    // 0x35716c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35716cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x357170: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x357170u;
    {
        const bool branch_taken_0x357170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357170u;
        // 0x357174: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357170) {
            ctx->pc = 0x357190u;
            goto label_357190;
        }
    }
    ctx->pc = 0x357178u;
    // 0x357178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35717c: 0x34a50144  ori         $a1, $a1, 0x144
    ctx->pc = 0x35717cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)324);
    // 0x357180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357188: 0x80d375c  j           func_34DD70
    ctx->pc = 0x357188u;
    ctx->pc = 0x35718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357188u;
    // 0x35718c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x357188u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x357190u;
label_357190:
    // 0x357190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357194: 0xc0d6e92  jal         func_35BA48
    ctx->pc = 0x357194u;
    SET_GPR_U32(ctx, 31, 0x35719Cu);
    ctx->pc = 0x357198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357194u;
    // 0x357198: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BA48u, 0x357194u, 0x35719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35719Cu;
label_35719c:
    // 0x35719c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35719cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3571a0: 0xc0d2db4  jal         func_34B6D0
    ctx->pc = 0x3571A0u;
    SET_GPR_U32(ctx, 31, 0x3571A8u);
    ctx->pc = 0x3571A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3571A0u;
    // 0x3571a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B6D0u, 0x3571A0u, 0x3571A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3571A8u;
label_3571a8:
    // 0x3571a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3571a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3571ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3571acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3571b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3571b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3571b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3571b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3571b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3571B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3571BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571B8u;
        // 0x3571bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3571B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3571C0u;
    // 0x3571c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3571c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3571c4: 0x0  nop
    ctx->pc = 0x3571c4u;
    // NOP
    // 0x3571c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3571c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3571cc: 0x0  nop
    ctx->pc = 0x3571ccu;
    // NOP
    ctx->pc = 0x3571d0u;
}
