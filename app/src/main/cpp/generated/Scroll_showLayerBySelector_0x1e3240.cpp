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

// Function: Scroll_showLayerBySelector
// Address: 0x1e3240 - 0x1e3298
void Scroll_showLayerBySelector_0x1e3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scroll_showLayerBySelector_0x1e3240");
#endif

    switch (ctx->pc) {
        case 0x1e325cu: goto label_1e325c;
        case 0x1e3270u: goto label_1e3270;
        case 0x1e3280u: goto label_1e3280;
        default: break;
    }

    ctx->pc = 0x1e3240u;

    // 0x1e3240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e3244: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e3248: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e3248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e324c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e324cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3254: 0xc078ca6  jal         func_1E3298
    ctx->pc = 0x1E3254u;
    SET_GPR_U32(ctx, 31, 0x1E325Cu);
    ctx->pc = 0x1E3258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3254u;
    // 0x1e3258: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3298u, 0x1E3254u, 0x1E325Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E325Cu;
label_1e325c:
    // 0x1e325c: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E325Cu;
    {
        const bool branch_taken_0x1e325c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e325c) {
            ctx->pc = 0x1E3260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E325Cu;
            // 0x1e3260: 0x8e240404  lw          $a0, 0x404($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3278u;
            goto label_1e3278;
        }
    }
    ctx->pc = 0x1E3264u;
    // 0x1e3264: 0x8e240400  lw          $a0, 0x400($s1)
    ctx->pc = 0x1e3264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1024)));
    // 0x1e3268: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3268u;
    SET_GPR_U32(ctx, 31, 0x1E3270u);
    ctx->pc = 0x1E326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3268u;
    // 0x1e326c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3268u, 0x1E3270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3270u;
label_1e3270:
    // 0x1e3270: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3270u;
    {
        const bool branch_taken_0x1e3270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3270u;
        // 0x1e3274: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3270) {
            ctx->pc = 0x1E3284u;
            goto label_1e3284;
        }
    }
    ctx->pc = 0x1E3278u;
label_1e3278:
    // 0x1e3278: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3278u;
    SET_GPR_U32(ctx, 31, 0x1E3280u);
    ctx->pc = 0x1E327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3278u;
    // 0x1e327c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3278u, 0x1E3280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3280u;
label_1e3280:
    // 0x1e3280: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e3280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3284:
    // 0x1e3284: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e328c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E328Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E328Cu;
        // 0x1e3290: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E328Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3294u;
    // 0x1e3294: 0x0  nop
    ctx->pc = 0x1e3294u;
    // NOP
    ctx->pc = 0x1e3298u;
}
