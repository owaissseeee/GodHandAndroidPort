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

// Function: cSndBgmNode_Resume
// Address: 0x2ccac8 - 0x2ccb10
void cSndBgmNode_Resume_0x2ccac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_Resume_0x2ccac8");
#endif

    switch (ctx->pc) {
        case 0x2ccadcu: goto label_2ccadc;
        case 0x2ccafcu: goto label_2ccafc;
        default: break;
    }

    ctx->pc = 0x2ccac8u;

    // 0x2ccac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ccac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ccacc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ccaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ccad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ccad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ccad4: 0xc0b315a  jal         func_2CC568
    ctx->pc = 0x2CCAD4u;
    SET_GPR_U32(ctx, 31, 0x2CCADCu);
    ctx->pc = 0x2CCAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCAD4u;
    // 0x2ccad8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC568u, 0x2CCAD4u, 0x2CCADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCADCu;
label_2ccadc:
    // 0x2ccadc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CCADCu;
    {
        const bool branch_taken_0x2ccadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCADCu;
        // 0x2ccae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccadc) {
            ctx->pc = 0x2CCAFCu;
            goto label_2ccafc;
        }
    }
    ctx->pc = 0x2CCAE4u;
    // 0x2ccae4: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x2ccae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2ccae8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ccae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ccaec: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2ccaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2ccaf0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ccaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ccaf4: 0xc0dcd3c  jal         func_3734F0
    ctx->pc = 0x2CCAF4u;
    SET_GPR_U32(ctx, 31, 0x2CCAFCu);
    ctx->pc = 0x2CCAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCAF4u;
    // 0x2ccaf8: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3734F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3734F0u, 0x2CCAF4u, 0x2CCAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCAFCu;
label_2ccafc:
    // 0x2ccafc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ccafcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ccb00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ccb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccb04: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB04u;
        // 0x2ccb08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCB0Cu;
    // 0x2ccb0c: 0x0  nop
    ctx->pc = 0x2ccb0cu;
    // NOP
    ctx->pc = 0x2ccb10u;
}
