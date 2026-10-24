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

// Function: func_0014FE78
// Address: 0x14fe78 - 0x14ff00
void func_0014FE78_0x14fe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014FE78_0x14fe78");
#endif

    switch (ctx->pc) {
        case 0x14fea8u: goto label_14fea8;
        default: break;
    }

    ctx->pc = 0x14fe78u;

    // 0x14fe78: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14fe78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14fe7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe80: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x14fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14fe84: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x14fe84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x14fe88: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x14fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x14fe8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14fe90: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14FE90u;
    {
        const bool branch_taken_0x14fe90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE90u;
        // 0x14fe94: 0x642825  or          $a1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe90) {
            ctx->pc = 0x14FED8u;
            goto label_14fed8;
        }
    }
    ctx->pc = 0x14FE98u;
    // 0x14fe98: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x14fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x14fe9c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x14fe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x14fea0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14fea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14fea4: 0x0  nop
    ctx->pc = 0x14fea4u;
    // NOP
label_14fea8:
    // 0x14fea8: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x14fea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x14feac: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x14feacu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x14feb0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14feb4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14feb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14feb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14feb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14febc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x14febcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14fec0: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x14fec0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x14fec4: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x14fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x14fec8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14fecc: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x14feccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14fed0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14FED0u;
    {
        const bool branch_taken_0x14fed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FED0u;
        // 0x14fed4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fed0) {
            ctx->pc = 0x14FEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14fea8;
        }
    }
    ctx->pc = 0x14FED8u;
label_14fed8:
    // 0x14fed8: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x14fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x14fedc: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x14fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x14fee0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14fee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14fee4: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x14fee4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x14fee8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x14fee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14feec: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x14feecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x14fef0: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x14fef0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x14fef4: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x14fef4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x14fef8: 0x3e00008  jr          $ra
    ctx->pc = 0x14FEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEF8u;
        // 0x14fefc: 0xfcc00018  sd          $zero, 0x18($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FF00u;
}
