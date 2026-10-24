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

// Function: mwsfsfx_CnvFrmFmtTypeToSfx
// Address: 0x346e70 - 0x346ed0
void mwsfsfx_CnvFrmFmtTypeToSfx_0x346e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mwsfsfx_CnvFrmFmtTypeToSfx_0x346e70");
#endif

    switch (ctx->pc) {
        case 0x346eb8u: goto label_346eb8;
        default: break;
    }

    ctx->pc = 0x346e70u;

    // 0x346e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346e74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x346e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x346e7c: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x346e7cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x346e80: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x346E80u;
    {
        const bool branch_taken_0x346e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x346E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E80u;
        // 0x346e84: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e80) {
            ctx->pc = 0x346EBCu;
            goto label_346ebc;
        }
    }
    ctx->pc = 0x346E88u;
    // 0x346e88: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x346E88u;
    {
        const bool branch_taken_0x346e88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x346e88) {
            ctx->pc = 0x346E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346E88u;
            // 0x346e8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346EA0u;
            goto label_346ea0;
        }
    }
    ctx->pc = 0x346E90u;
    // 0x346e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x346e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346e94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x346E94u;
    {
        const bool branch_taken_0x346e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E94u;
        // 0x346e98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e94) {
            ctx->pc = 0x346EA4u;
            goto label_346ea4;
        }
    }
    ctx->pc = 0x346E9Cu;
    // 0x346e9c: 0x0  nop
    ctx->pc = 0x346e9cu;
    // NOP
label_346ea0:
    // 0x346ea0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x346ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_346ea4:
    // 0x346ea4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x346EA4u;
    {
        const bool branch_taken_0x346ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x346EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346EA4u;
        // 0x346ea8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346ea4) {
            ctx->pc = 0x346EC0u;
            goto label_346ec0;
        }
    }
    ctx->pc = 0x346EACu;
    // 0x346eac: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x346eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x346eb0: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x346EB0u;
    SET_GPR_U32(ctx, 31, 0x346EB8u);
    ctx->pc = 0x346EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346EB0u;
    // 0x346eb4: 0x248488b0  addiu       $a0, $a0, -0x7750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x346EB0u, 0x346EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346EB8u;
label_346eb8:
    // 0x346eb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x346eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_346ebc:
    // 0x346ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_346ec0:
    // 0x346ec0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x346ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x346EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346EC4u;
        // 0x346ec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346ECCu;
    // 0x346ecc: 0x0  nop
    ctx->pc = 0x346eccu;
    // NOP
    ctx->pc = 0x346ed0u;
}
