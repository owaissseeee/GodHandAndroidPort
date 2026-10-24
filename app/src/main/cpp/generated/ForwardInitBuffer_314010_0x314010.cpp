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

// Function: ForwardInitBuffer_314010
// Address: 0x314010 - 0x314080
void ForwardInitBuffer_314010_0x314010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314010_0x314010");
#endif

    switch (ctx->pc) {
        case 0x314044u: goto label_314044;
        case 0x31405cu: goto label_31405c;
        case 0x314064u: goto label_314064;
        default: break;
    }

    ctx->pc = 0x314010u;

    // 0x314010: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314014: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314018: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314018u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31401c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31401cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314020: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314024: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314028: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314028u;
    {
        const bool branch_taken_0x314028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314028u;
        // 0x31402c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314028) {
            ctx->pc = 0x31406Cu;
            goto label_31406c;
        }
    }
    ctx->pc = 0x314030u;
    // 0x314030: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314034: 0x24040860  addiu       $a0, $zero, 0x860
    ctx->pc = 0x314034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x314038: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31403c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31403Cu;
    SET_GPR_U32(ctx, 31, 0x314044u);
    ctx->pc = 0x314040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31403Cu;
    // 0x314040: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31403Cu, 0x314044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314044u;
label_314044:
    // 0x314044: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314048: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314048u;
    {
        const bool branch_taken_0x314048 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314048u;
        // 0x31404c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314048) {
            ctx->pc = 0x31406Cu;
            goto label_31406c;
        }
    }
    ctx->pc = 0x314050u;
    // 0x314050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314054: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314054u;
    SET_GPR_U32(ctx, 31, 0x31405Cu);
    ctx->pc = 0x314058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314054u;
    // 0x314058: 0x24060860  addiu       $a2, $zero, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314054u, 0x31405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31405Cu;
label_31405c:
    // 0x31405c: 0xc063a84  jal         func_18EA10
    ctx->pc = 0x31405Cu;
    SET_GPR_U32(ctx, 31, 0x314064u);
    ctx->pc = 0x314060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31405Cu;
    // 0x314060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA10u, 0x31405Cu, 0x314064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314064u;
label_314064:
    // 0x314064: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314064u;
    {
        const bool branch_taken_0x314064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314064u;
        // 0x314068: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314064) {
            ctx->pc = 0x314074u;
            goto label_314074;
        }
    }
    ctx->pc = 0x31406Cu;
label_31406c:
    // 0x31406c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31406cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314070: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314074:
    // 0x314074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314078: 0x3e00008  jr          $ra
    ctx->pc = 0x314078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314078u;
        // 0x31407c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314080u;
}
