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

// Function: new_eh_context
// Address: 0x3202e0 - 0x320338
void new_eh_context_0x3202e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("new_eh_context_0x3202e0");
#endif

    switch (ctx->pc) {
        case 0x3202f4u: goto label_3202f4;
        case 0x320308u: goto label_320308;
        case 0x320318u: goto label_320318;
        default: break;
    }

    ctx->pc = 0x3202e0u;

    // 0x3202e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3202e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3202e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3202e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3202e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3202e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3202ec: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x3202ECu;
    SET_GPR_U32(ctx, 31, 0x3202F4u);
    ctx->pc = 0x3202F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3202ECu;
    // 0x3202f0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x3202ECu, 0x3202F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3202F4u;
label_3202f4:
    // 0x3202f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3202f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3202f8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3202F8u;
    {
        const bool branch_taken_0x3202f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3202FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202F8u;
        // 0x3202fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3202f8) {
            ctx->pc = 0x32030Cu;
            goto label_32030c;
        }
    }
    ctx->pc = 0x320300u;
    // 0x320300: 0xc0c80a0  jal         func_320280
    ctx->pc = 0x320300u;
    SET_GPR_U32(ctx, 31, 0x320308u);
    ctx->pc = 0x320280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320280u, 0x320300u, 0x320308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320308u;
label_320308:
    // 0x320308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32030c:
    // 0x32030c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32030cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320310: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x320310u;
    SET_GPR_U32(ctx, 31, 0x320318u);
    ctx->pc = 0x320314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320310u;
    // 0x320314: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x320310u, 0x320318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320318u;
label_320318:
    // 0x320318: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x320318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32031c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32031cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320320: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x320320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x320324: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x320324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x320328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32032c: 0x3e00008  jr          $ra
    ctx->pc = 0x32032Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32032Cu;
        // 0x320330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32032Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320334u;
    // 0x320334: 0x0  nop
    ctx->pc = 0x320334u;
    // NOP
    ctx->pc = 0x320338u;
}
