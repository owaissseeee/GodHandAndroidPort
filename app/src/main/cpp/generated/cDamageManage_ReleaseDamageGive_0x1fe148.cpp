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

// Function: cDamageManage_ReleaseDamageGive
// Address: 0x1fe148 - 0x1fe188
void cDamageManage_ReleaseDamageGive_0x1fe148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDamageManage_ReleaseDamageGive_0x1fe148");
#endif

    switch (ctx->pc) {
        case 0x1fe164u: goto label_1fe164;
        case 0x1fe16cu: goto label_1fe16c;
        default: break;
    }

    ctx->pc = 0x1fe148u;

    // 0x1fe148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fe148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fe14c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fe14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fe150: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fe150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe154: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE154u;
    {
        const bool branch_taken_0x1fe154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE154u;
        // 0x1fe158: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe154) {
            ctx->pc = 0x1FE174u;
            goto label_1fe174;
        }
    }
    ctx->pc = 0x1FE15Cu;
    // 0x1fe15c: 0xc07f560  jal         func_1FD580
    ctx->pc = 0x1FE15Cu;
    SET_GPR_U32(ctx, 31, 0x1FE164u);
    ctx->pc = 0x1FE160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE15Cu;
    // 0x1fe160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD580u, 0x1FE15Cu, 0x1FE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE164u;
label_1fe164:
    // 0x1fe164: 0xc07f36e  jal         func_1FCDB8
    ctx->pc = 0x1FE164u;
    SET_GPR_U32(ctx, 31, 0x1FE16Cu);
    ctx->pc = 0x1FE168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE164u;
    // 0x1fe168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCDB8u, 0x1FE164u, 0x1FE16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE16Cu;
label_1fe16c:
    // 0x1fe16c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE16Cu;
    {
        const bool branch_taken_0x1fe16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE16Cu;
        // 0x1fe170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe16c) {
            ctx->pc = 0x1FE178u;
            goto label_1fe178;
        }
    }
    ctx->pc = 0x1FE174u;
label_1fe174:
    // 0x1fe174: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe178:
    // 0x1fe178: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fe178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe180: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE180u;
        // 0x1fe184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE188u;
}
