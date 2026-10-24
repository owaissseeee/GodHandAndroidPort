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

// Function: AllocZeroedAndForward_316A80
// Address: 0x316a80 - 0x316af0
void AllocZeroedAndForward_316A80_0x316a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_316A80_0x316a80");
#endif

    switch (ctx->pc) {
        case 0x316ab4u: goto label_316ab4;
        case 0x316accu: goto label_316acc;
        case 0x316ad4u: goto label_316ad4;
        default: break;
    }

    ctx->pc = 0x316a80u;

    // 0x316a80: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316a84: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316a84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316a88: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316a88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x316a8c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x316a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316a90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316a94: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316a98: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316A98u;
    {
        const bool branch_taken_0x316a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x316A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A98u;
        // 0x316a9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316a98) {
            ctx->pc = 0x316ADCu;
            goto label_316adc;
        }
    }
    ctx->pc = 0x316AA0u;
    // 0x316aa0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316aa4: 0x24040920  addiu       $a0, $zero, 0x920
    ctx->pc = 0x316aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2336));
    // 0x316aa8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x316aac: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x316AACu;
    SET_GPR_U32(ctx, 31, 0x316AB4u);
    ctx->pc = 0x316AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316AACu;
    // 0x316ab0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x316AACu, 0x316AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316AB4u;
label_316ab4:
    // 0x316ab4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ab8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316AB8u;
    {
        const bool branch_taken_0x316ab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AB8u;
        // 0x316abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ab8) {
            ctx->pc = 0x316ADCu;
            goto label_316adc;
        }
    }
    ctx->pc = 0x316AC0u;
    // 0x316ac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ac4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316AC4u;
    SET_GPR_U32(ctx, 31, 0x316ACCu);
    ctx->pc = 0x316AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316AC4u;
    // 0x316ac8: 0x24060920  addiu       $a2, $zero, 0x920 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316AC4u, 0x316ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316ACCu;
label_316acc:
    // 0x316acc: 0xc05bfda  jal         func_16FF68
    ctx->pc = 0x316ACCu;
    SET_GPR_U32(ctx, 31, 0x316AD4u);
    ctx->pc = 0x316AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316ACCu;
    // 0x316ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FF68u, 0x316ACCu, 0x316AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316AD4u;
label_316ad4:
    // 0x316ad4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316AD4u;
    {
        const bool branch_taken_0x316ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AD4u;
        // 0x316ad8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ad4) {
            ctx->pc = 0x316AE4u;
            goto label_316ae4;
        }
    }
    ctx->pc = 0x316ADCu;
label_316adc:
    // 0x316adc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x316adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ae0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316ae4:
    // 0x316ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x316AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AE8u;
        // 0x316aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316AF0u;
}
