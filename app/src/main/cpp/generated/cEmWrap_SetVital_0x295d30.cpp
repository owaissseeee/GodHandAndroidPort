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

// Function: cEmWrap_SetVital
// Address: 0x295d30 - 0x295d88
void cEmWrap_SetVital_0x295d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_SetVital_0x295d30");
#endif

    switch (ctx->pc) {
        case 0x295d4cu: goto label_295d4c;
        default: break;
    }

    ctx->pc = 0x295d30u;

    // 0x295d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x295d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x295d34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x295d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x295d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x295d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x295d3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x295d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295d44: 0xc0a565e  jal         func_295978
    ctx->pc = 0x295D44u;
    SET_GPR_U32(ctx, 31, 0x295D4Cu);
    ctx->pc = 0x295D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D44u;
    // 0x295d48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x295D44u, 0x295D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D4Cu;
label_295d4c:
    // 0x295d4c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x295D4Cu;
    {
        const bool branch_taken_0x295d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295d4c) {
            ctx->pc = 0x295D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295D4Cu;
            // 0x295d50: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295D78u;
            goto label_295d78;
        }
    }
    ctx->pc = 0x295D54u;
    // 0x295d54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x295d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295d58: 0x84820548  lh          $v0, 0x548($a0)
    ctx->pc = 0x295d58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1352)));
    // 0x295d5c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x295d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x295d60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295D60u;
    {
        const bool branch_taken_0x295d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D60u;
        // 0x295d64: 0x94830548  lhu         $v1, 0x548($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d60) {
            ctx->pc = 0x295D70u;
            goto label_295d70;
        }
    }
    ctx->pc = 0x295D68u;
    // 0x295d68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x295D68u;
    {
        const bool branch_taken_0x295d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D68u;
        // 0x295d6c: 0xa483054a  sh          $v1, 0x54A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d68) {
            ctx->pc = 0x295D74u;
            goto label_295d74;
        }
    }
    ctx->pc = 0x295D70u;
label_295d70:
    // 0x295d70: 0xa491054a  sh          $s1, 0x54A($a0)
    ctx->pc = 0x295d70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1354), (uint16_t)GPR_U32(ctx, 17));
label_295d74:
    // 0x295d74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x295d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_295d78:
    // 0x295d78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x295d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295d80: 0x3e00008  jr          $ra
    ctx->pc = 0x295D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D80u;
        // 0x295d84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295D88u;
}
