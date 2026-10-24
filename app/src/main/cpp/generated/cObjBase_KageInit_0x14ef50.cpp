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

// Function: cObjBase_KageInit
// Address: 0x14ef50 - 0x14efa8
void cObjBase_KageInit_0x14ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjBase_KageInit_0x14ef50");
#endif

    switch (ctx->pc) {
        case 0x14ef78u: goto label_14ef78;
        case 0x14ef88u: goto label_14ef88;
        default: break;
    }

    ctx->pc = 0x14ef50u;

    // 0x14ef50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14ef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14ef54: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14ef54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14ef58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14ef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14ef5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ef5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef60: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14ef60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14ef64: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x14ef64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ef68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ef68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ef6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14ef6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef70: 0xae06044c  sw          $a2, 0x44C($s0)
    ctx->pc = 0x14ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1100), GPR_U32(ctx, 6));
    // 0x14ef74: 0xae050450  sw          $a1, 0x450($s0)
    ctx->pc = 0x14ef74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1104), GPR_U32(ctx, 5));
label_14ef78:
    // 0x14ef78: 0x8e040450  lw          $a0, 0x450($s0)
    ctx->pc = 0x14ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1104)));
    // 0x14ef7c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x14ef7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x14ef80: 0xc057ab2  jal         func_15EAC8
    ctx->pc = 0x14EF80u;
    SET_GPR_U32(ctx, 31, 0x14EF88u);
    ctx->pc = 0x14EF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF80u;
    // 0x14ef84: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EAC8u, 0x14EF80u, 0x14EF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF88u;
label_14ef88:
    // 0x14ef88: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14EF88u;
    {
        const bool branch_taken_0x14ef88 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x14EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF88u;
        // 0x14ef8c: 0x26520750  addiu       $s2, $s2, 0x750 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef88) {
            ctx->pc = 0x14EF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ef78;
        }
    }
    ctx->pc = 0x14EF90u;
    // 0x14ef90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14ef90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ef94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14ef94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ef98: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14ef98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ef9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ef9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14efa0: 0x3e00008  jr          $ra
    ctx->pc = 0x14EFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFA0u;
        // 0x14efa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EFA8u;
}
