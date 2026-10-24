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

// Function: AllocZeroedAndForward_316CB0
// Address: 0x316cb0 - 0x316d20
void AllocZeroedAndForward_316CB0_0x316cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_316CB0_0x316cb0");
#endif

    switch (ctx->pc) {
        case 0x316ce4u: goto label_316ce4;
        case 0x316cfcu: goto label_316cfc;
        case 0x316d04u: goto label_316d04;
        default: break;
    }

    ctx->pc = 0x316cb0u;

    // 0x316cb0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316cb4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316cb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316cb8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x316cbc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x316cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316cc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316cc4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316cc8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316CC8u;
    {
        const bool branch_taken_0x316cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x316CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CC8u;
        // 0x316ccc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316cc8) {
            ctx->pc = 0x316D0Cu;
            goto label_316d0c;
        }
    }
    ctx->pc = 0x316CD0u;
    // 0x316cd0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316cd4: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x316cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x316cd8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x316cdc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x316CDCu;
    SET_GPR_U32(ctx, 31, 0x316CE4u);
    ctx->pc = 0x316CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316CDCu;
    // 0x316ce0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x316CDCu, 0x316CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316CE4u;
label_316ce4:
    // 0x316ce4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ce8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316CE8u;
    {
        const bool branch_taken_0x316ce8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CE8u;
        // 0x316cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ce8) {
            ctx->pc = 0x316D0Cu;
            goto label_316d0c;
        }
    }
    ctx->pc = 0x316CF0u;
    // 0x316cf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316cf4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316CF4u;
    SET_GPR_U32(ctx, 31, 0x316CFCu);
    ctx->pc = 0x316CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316CF4u;
    // 0x316cf8: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316CF4u, 0x316CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316CFCu;
label_316cfc:
    // 0x316cfc: 0xc05c33a  jal         func_170CE8
    ctx->pc = 0x316CFCu;
    SET_GPR_U32(ctx, 31, 0x316D04u);
    ctx->pc = 0x316D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316CFCu;
    // 0x316d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170CE8u, 0x316CFCu, 0x316D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316D04u;
label_316d04:
    // 0x316d04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316D04u;
    {
        const bool branch_taken_0x316d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316D04u;
        // 0x316d08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316d04) {
            ctx->pc = 0x316D14u;
            goto label_316d14;
        }
    }
    ctx->pc = 0x316D0Cu;
label_316d0c:
    // 0x316d0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x316d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316d14:
    // 0x316d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316d18: 0x3e00008  jr          $ra
    ctx->pc = 0x316D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316D18u;
        // 0x316d1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316D20u;
}
