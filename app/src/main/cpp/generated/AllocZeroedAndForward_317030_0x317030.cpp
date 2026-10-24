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

// Function: AllocZeroedAndForward_317030
// Address: 0x317030 - 0x3170a0
void AllocZeroedAndForward_317030_0x317030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_317030_0x317030");
#endif

    switch (ctx->pc) {
        case 0x317064u: goto label_317064;
        case 0x31707cu: goto label_31707c;
        case 0x317084u: goto label_317084;
        default: break;
    }

    ctx->pc = 0x317030u;

    // 0x317030: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317034: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317038: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317038u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31703c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31703cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317040: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317044: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317048: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317048u;
    {
        const bool branch_taken_0x317048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317048u;
        // 0x31704c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317048) {
            ctx->pc = 0x31708Cu;
            goto label_31708c;
        }
    }
    ctx->pc = 0x317050u;
    // 0x317050: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317050u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317054: 0x24040d40  addiu       $a0, $zero, 0xD40
    ctx->pc = 0x317054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3392));
    // 0x317058: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31705c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31705Cu;
    SET_GPR_U32(ctx, 31, 0x317064u);
    ctx->pc = 0x317060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31705Cu;
    // 0x317060: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31705Cu, 0x317064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317064u;
label_317064:
    // 0x317064: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317068: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317068u;
    {
        const bool branch_taken_0x317068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317068u;
        // 0x31706c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317068) {
            ctx->pc = 0x31708Cu;
            goto label_31708c;
        }
    }
    ctx->pc = 0x317070u;
    // 0x317070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317074: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317074u;
    SET_GPR_U32(ctx, 31, 0x31707Cu);
    ctx->pc = 0x317078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317074u;
    // 0x317078: 0x24060d40  addiu       $a2, $zero, 0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317074u, 0x31707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31707Cu;
label_31707c:
    // 0x31707c: 0xc05db0c  jal         func_176C30
    ctx->pc = 0x31707Cu;
    SET_GPR_U32(ctx, 31, 0x317084u);
    ctx->pc = 0x317080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31707Cu;
    // 0x317080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C30u, 0x31707Cu, 0x317084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317084u;
label_317084:
    // 0x317084: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317084u;
    {
        const bool branch_taken_0x317084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317084u;
        // 0x317088: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317084) {
            ctx->pc = 0x317094u;
            goto label_317094;
        }
    }
    ctx->pc = 0x31708Cu;
label_31708c:
    // 0x31708c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31708cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317090: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317094:
    // 0x317094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317098: 0x3e00008  jr          $ra
    ctx->pc = 0x317098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317098u;
        // 0x31709c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3170A0u;
}
