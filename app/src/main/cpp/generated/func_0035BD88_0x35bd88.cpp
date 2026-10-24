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

// Function: func_0035BD88
// Address: 0x35bd88 - 0x35bdd0
void func_0035BD88_0x35bd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035BD88_0x35bd88");
#endif

    switch (ctx->pc) {
        case 0x35bda8u: goto label_35bda8;
        default: break;
    }

    ctx->pc = 0x35bd88u;

    // 0x35bd88: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x35bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35bd8c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x35bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x35bd90: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x35bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x35bd94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35bd98: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x35bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x35bd9c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x35bd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35bda0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x35bda0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x35bda4: 0x2482001c  addiu       $v0, $a0, 0x1C
    ctx->pc = 0x35bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_35bda8:
    // 0x35bda8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35bdac: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35bdacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x35bdb0: 0x0  nop
    ctx->pc = 0x35bdb0u;
    // NOP
    // 0x35bdb4: 0x0  nop
    ctx->pc = 0x35bdb4u;
    // NOP
    // 0x35bdb8: 0x0  nop
    ctx->pc = 0x35bdb8u;
    // NOP
    // 0x35bdbc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35BDBCu;
    {
        const bool branch_taken_0x35bdbc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x35BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BDBCu;
        // 0x35bdc0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bdbc) {
            ctx->pc = 0x35BDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bda8;
        }
    }
    ctx->pc = 0x35BDC4u;
    // 0x35bdc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35bdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x35BDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BDC8u;
        // 0x35bdcc: 0xac820020  sw          $v0, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BDD0u;
}
