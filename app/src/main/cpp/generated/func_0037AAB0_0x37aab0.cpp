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

// Function: func_0037AAB0
// Address: 0x37aab0 - 0x37ab00
void func_0037AAB0_0x37aab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037AAB0_0x37aab0");
#endif

    switch (ctx->pc) {
        case 0x37aad4u: goto label_37aad4;
        case 0x37aaf0u: goto label_37aaf0;
        default: break;
    }

    ctx->pc = 0x37aab0u;

    // 0x37aab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37aab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37aab4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x37aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x37aab8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37aab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37aabc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37aabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37aac0: 0x80820025  lb          $v0, 0x25($a0)
    ctx->pc = 0x37aac0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 37)));
    // 0x37aac4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x37AAC4u;
    {
        const bool branch_taken_0x37aac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x37AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AAC4u;
        // 0x37aac8: 0x249000cc  addiu       $s0, $a0, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aac4) {
            ctx->pc = 0x37AAF0u;
            goto label_37aaf0;
        }
    }
    ctx->pc = 0x37AACCu;
    // 0x37aacc: 0xc0e1d0c  jal         func_387430
    ctx->pc = 0x37AACCu;
    SET_GPR_U32(ctx, 31, 0x37AAD4u);
    ctx->pc = 0x37AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AACCu;
    // 0x37aad0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387430u, 0x37AACCu, 0x37AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AAD4u;
label_37aad4:
    // 0x37aad4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x37aad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37aad8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37AAD8u;
    {
        const bool branch_taken_0x37aad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AAD8u;
        // 0x37aadc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aad8) {
            ctx->pc = 0x37AAF0u;
            goto label_37aaf0;
        }
    }
    ctx->pc = 0x37AAE0u;
    // 0x37aae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37aae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aae4: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x37aae4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x37aae8: 0xc0e1c58  jal         func_387160
    ctx->pc = 0x37AAE8u;
    SET_GPR_U32(ctx, 31, 0x37AAF0u);
    ctx->pc = 0x37AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AAE8u;
    // 0x37aaec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387160u, 0x37AAE8u, 0x37AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AAF0u;
label_37aaf0:
    // 0x37aaf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37aaf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37aaf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37aaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37aaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x37AAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AAF8u;
        // 0x37aafc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AB00u;
}
