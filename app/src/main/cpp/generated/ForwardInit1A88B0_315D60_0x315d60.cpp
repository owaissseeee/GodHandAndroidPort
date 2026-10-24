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

// Function: ForwardInit1A88B0_315D60
// Address: 0x315d60 - 0x315dd0
void ForwardInit1A88B0_315D60_0x315d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInit1A88B0_315D60_0x315d60");
#endif

    switch (ctx->pc) {
        case 0x315d94u: goto label_315d94;
        case 0x315dacu: goto label_315dac;
        case 0x315db4u: goto label_315db4;
        default: break;
    }

    ctx->pc = 0x315d60u;

    // 0x315d60: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315d64: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315d64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315d68: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315d68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x315d6c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x315d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315d70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315d74: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315d78: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315D78u;
    {
        const bool branch_taken_0x315d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D78u;
        // 0x315d7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d78) {
            ctx->pc = 0x315DBCu;
            goto label_315dbc;
        }
    }
    ctx->pc = 0x315D80u;
    // 0x315d80: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315d80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315d84: 0x24041e70  addiu       $a0, $zero, 0x1E70
    ctx->pc = 0x315d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7792));
    // 0x315d88: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x315d8c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x315D8Cu;
    SET_GPR_U32(ctx, 31, 0x315D94u);
    ctx->pc = 0x315D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315D8Cu;
    // 0x315d90: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x315D8Cu, 0x315D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315D94u;
label_315d94:
    // 0x315d94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315d98: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315D98u;
    {
        const bool branch_taken_0x315d98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D98u;
        // 0x315d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d98) {
            ctx->pc = 0x315DBCu;
            goto label_315dbc;
        }
    }
    ctx->pc = 0x315DA0u;
    // 0x315da0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315da4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315DA4u;
    SET_GPR_U32(ctx, 31, 0x315DACu);
    ctx->pc = 0x315DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315DA4u;
    // 0x315da8: 0x24061e70  addiu       $a2, $zero, 0x1E70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315DA4u, 0x315DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315DACu;
label_315dac:
    // 0x315dac: 0xc06a22c  jal         func_1A88B0
    ctx->pc = 0x315DACu;
    SET_GPR_U32(ctx, 31, 0x315DB4u);
    ctx->pc = 0x315DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315DACu;
    // 0x315db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88B0u, 0x315DACu, 0x315DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315DB4u;
label_315db4:
    // 0x315db4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315DB4u;
    {
        const bool branch_taken_0x315db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DB4u;
        // 0x315db8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315db4) {
            ctx->pc = 0x315DC4u;
            goto label_315dc4;
        }
    }
    ctx->pc = 0x315DBCu;
label_315dbc:
    // 0x315dbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315dc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315dc4:
    // 0x315dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x315DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DC8u;
        // 0x315dcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315DD0u;
}
