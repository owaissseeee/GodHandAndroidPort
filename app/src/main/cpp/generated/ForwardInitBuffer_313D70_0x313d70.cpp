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

// Function: ForwardInitBuffer_313D70
// Address: 0x313d70 - 0x313de0
void ForwardInitBuffer_313D70_0x313d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_313D70_0x313d70");
#endif

    switch (ctx->pc) {
        case 0x313da4u: goto label_313da4;
        case 0x313dbcu: goto label_313dbc;
        case 0x313dc4u: goto label_313dc4;
        default: break;
    }

    ctx->pc = 0x313d70u;

    // 0x313d70: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313d74: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313d74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313d78: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313d78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x313d7c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x313d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x313d80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313d84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313d88: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313D88u;
    {
        const bool branch_taken_0x313d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D88u;
        // 0x313d8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d88) {
            ctx->pc = 0x313DCCu;
            goto label_313dcc;
        }
    }
    ctx->pc = 0x313D90u;
    // 0x313d90: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313d90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313d94: 0x24040ce0  addiu       $a0, $zero, 0xCE0
    ctx->pc = 0x313d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3296));
    // 0x313d98: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x313d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x313d9c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x313D9Cu;
    SET_GPR_U32(ctx, 31, 0x313DA4u);
    ctx->pc = 0x313DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313D9Cu;
    // 0x313da0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x313D9Cu, 0x313DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313DA4u;
label_313da4:
    // 0x313da4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313da8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313DA8u;
    {
        const bool branch_taken_0x313da8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DA8u;
        // 0x313dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313da8) {
            ctx->pc = 0x313DCCu;
            goto label_313dcc;
        }
    }
    ctx->pc = 0x313DB0u;
    // 0x313db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313db4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313DB4u;
    SET_GPR_U32(ctx, 31, 0x313DBCu);
    ctx->pc = 0x313DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313DB4u;
    // 0x313db8: 0x24060ce0  addiu       $a2, $zero, 0xCE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313DB4u, 0x313DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313DBCu;
label_313dbc:
    // 0x313dbc: 0xc0623e0  jal         func_188F80
    ctx->pc = 0x313DBCu;
    SET_GPR_U32(ctx, 31, 0x313DC4u);
    ctx->pc = 0x313DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313DBCu;
    // 0x313dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188F80u, 0x313DBCu, 0x313DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313DC4u;
label_313dc4:
    // 0x313dc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313DC4u;
    {
        const bool branch_taken_0x313dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DC4u;
        // 0x313dc8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313dc4) {
            ctx->pc = 0x313DD4u;
            goto label_313dd4;
        }
    }
    ctx->pc = 0x313DCCu;
label_313dcc:
    // 0x313dcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313dd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313dd4:
    // 0x313dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x313DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DD8u;
        // 0x313ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313DE0u;
}
