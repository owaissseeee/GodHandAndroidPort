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

// Function: sceIpuSync
// Address: 0x3baca0 - 0x3bad08
void sceIpuSync_0x3baca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceIpuSync_0x3baca0");
#endif

    switch (ctx->pc) {
        case 0x3bacc8u: goto label_3bacc8;
        default: break;
    }

    ctx->pc = 0x3baca0u;

    // 0x3baca0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BACA0u;
    {
        const bool branch_taken_0x3baca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BACA0u;
        // 0x3baca4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baca0) {
            ctx->pc = 0x3BACBCu;
            goto label_3bacbc;
        }
    }
    ctx->pc = 0x3BACA8u;
    // 0x3baca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3baca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bacac: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3BACACu;
    {
        const bool branch_taken_0x3bacac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BACACu;
        // 0x3bacb0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bacac) {
            ctx->pc = 0x3BACECu;
            goto label_3bacec;
        }
    }
    ctx->pc = 0x3BACB4u;
    // 0x3bacb4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3BACB4u;
    {
        const bool branch_taken_0x3bacb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bacb4) {
            ctx->pc = 0x3BAD00u;
            goto label_3bad00;
        }
    }
    ctx->pc = 0x3BACBCu;
label_3bacbc:
    // 0x3bacbc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3bacbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3bacc0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x3bacc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x3bacc4: 0x0  nop
    ctx->pc = 0x3bacc4u;
    // NOP
label_3bacc8:
    // 0x3bacc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3bacc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3baccc: 0x0  nop
    ctx->pc = 0x3bacccu;
    // NOP
    // 0x3bacd0: 0x0  nop
    ctx->pc = 0x3bacd0u;
    // NOP
    // 0x3bacd4: 0x0  nop
    ctx->pc = 0x3bacd4u;
    // NOP
    // 0x3bacd8: 0x0  nop
    ctx->pc = 0x3bacd8u;
    // NOP
    // 0x3bacdc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BACDCu;
    {
        const bool branch_taken_0x3bacdc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3bacdc) {
            ctx->pc = 0x3BACC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bacc8;
        }
    }
    ctx->pc = 0x3BACE4u;
    // 0x3bace4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3BACE4u;
    {
        const bool branch_taken_0x3bace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BACE4u;
        // 0x3bace8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bace4) {
            ctx->pc = 0x3BACFCu;
            goto label_3bacfc;
        }
    }
    ctx->pc = 0x3BACECu;
label_3bacec:
    // 0x3bacec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bacecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bacf0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x3bacf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x3bacf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3bacf4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x3bacf8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3bacf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_3bacfc:
    // 0x3bacfc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3bacfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3bad00:
    // 0x3bad00: 0x3e00008  jr          $ra
    ctx->pc = 0x3BAD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BAD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BAD08u;
}
