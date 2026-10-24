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

// Function: func_00323B80
// Address: 0x323b80 - 0x323be0
void func_00323B80_0x323b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323B80_0x323b80");
#endif

    switch (ctx->pc) {
        case 0x323ba8u: goto label_323ba8;
        case 0x323bbcu: goto label_323bbc;
        default: break;
    }

    ctx->pc = 0x323b80u;

    // 0x323b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323b84: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x323b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x323b88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x323b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x323b8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323b90: 0x2450aec8  addiu       $s0, $v0, -0x5138
    ctx->pc = 0x323b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946504));
    // 0x323b94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x323b98: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x323b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x323b9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x323b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x323ba0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x323ba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323ba4: 0x0  nop
    ctx->pc = 0x323ba4u;
    // NOP
label_323ba8:
    // 0x323ba8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x323ba8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323bac: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x323BACu;
    {
        const bool branch_taken_0x323bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x323bac) {
            ctx->pc = 0x323BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323BACu;
            // 0x323bb0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323BC0u;
            goto label_323bc0;
        }
    }
    ctx->pc = 0x323BB4u;
    // 0x323bb4: 0xc0c8ea8  jal         func_323AA0
    ctx->pc = 0x323BB4u;
    SET_GPR_U32(ctx, 31, 0x323BBCu);
    ctx->pc = 0x323BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323BB4u;
    // 0x323bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AA0u, 0x323BB4u, 0x323BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323BBCu;
label_323bbc:
    // 0x323bbc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x323bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_323bc0:
    // 0x323bc0: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x323BC0u;
    {
        const bool branch_taken_0x323bc0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x323BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BC0u;
        // 0x323bc4: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323bc0) {
            ctx->pc = 0x323BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323ba8;
        }
    }
    ctx->pc = 0x323BC8u;
    // 0x323bc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323bcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323bccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323bd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x323bd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323bd4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x323bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x323bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x323BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BD8u;
        // 0x323bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323BE0u;
}
