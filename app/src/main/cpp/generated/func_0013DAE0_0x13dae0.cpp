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

// Function: func_0013DAE0
// Address: 0x13dae0 - 0x13db50
void func_0013DAE0_0x13dae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013DAE0_0x13dae0");
#endif

    switch (ctx->pc) {
        case 0x13db38u: goto label_13db38;
        case 0x13db40u: goto label_13db40;
        default: break;
    }

    ctx->pc = 0x13dae0u;

    // 0x13dae0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x13dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x13dae4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13dae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13dae8: 0x8c637a84  lw          $v1, 0x7A84($v1)
    ctx->pc = 0x13dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x13daec: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x13daecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x13daf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13daf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13daf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13daf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13daf8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13daf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13dafc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13DAFCu;
    {
        const bool branch_taken_0x13dafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DAFCu;
        // 0x13db00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dafc) {
            ctx->pc = 0x13DB40u;
            goto label_13db40;
        }
    }
    ctx->pc = 0x13DB04u;
    // 0x13db04: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x13db04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x13db08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13db08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13db0c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x13DB0Cu;
    {
        const bool branch_taken_0x13db0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13db0c) {
            ctx->pc = 0x13DB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DB0Cu;
            // 0x13db10: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DB44u;
            goto label_13db44;
        }
    }
    ctx->pc = 0x13DB14u;
    // 0x13db14: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x13db14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x13db18: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x13db18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x13db1c: 0x8c839b70  lw          $v1, -0x6490($a0)
    ctx->pc = 0x13db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x569B70u));
    // 0x13db20: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x13db20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x13db24: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x13db24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x13db28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DB28u;
    {
        const bool branch_taken_0x13db28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13db28) {
            ctx->pc = 0x13DB38u;
            goto label_13db38;
        }
    }
    ctx->pc = 0x13DB30u;
    // 0x13db30: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x13DB30u;
    SET_GPR_U32(ctx, 31, 0x13DB38u);
    ctx->pc = 0x13DB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB30u;
    // 0x13db34: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x13DB30u, 0x13DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DB38u;
label_13db38:
    // 0x13db38: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x13DB38u;
    SET_GPR_U32(ctx, 31, 0x13DB40u);
    ctx->pc = 0x13DB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB38u;
    // 0x13db3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x13DB38u, 0x13DB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DB40u;
label_13db40:
    // 0x13db40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13db40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13db44:
    // 0x13db44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13db44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13db48: 0x3e00008  jr          $ra
    ctx->pc = 0x13DB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB48u;
        // 0x13db4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DB50u;
}
