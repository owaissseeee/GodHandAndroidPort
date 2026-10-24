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

// Function: func_002EFA60
// Address: 0x2efa60 - 0x2efab8
void func_002EFA60_0x2efa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EFA60_0x2efa60");
#endif

    switch (ctx->pc) {
        case 0x2efa84u: goto label_2efa84;
        case 0x2efa9cu: goto label_2efa9c;
        default: break;
    }

    ctx->pc = 0x2efa60u;

    // 0x2efa60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2efa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2efa64: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2efa64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2efa68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2efa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2efa6c: 0x8c6263f8  lw          $v0, 0x63F8($v1)
    ctx->pc = 0x2efa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7863F8u));
    // 0x2efa70: 0x247063f8  addiu       $s0, $v1, 0x63F8
    ctx->pc = 0x2efa70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25592));
    // 0x2efa74: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EFA74u;
    {
        const bool branch_taken_0x2efa74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA74u;
        // 0x2efa78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa74) {
            ctx->pc = 0x2EFA9Cu;
            goto label_2efa9c;
        }
    }
    ctx->pc = 0x2EFA7Cu;
    // 0x2efa7c: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2EFA7Cu;
    SET_GPR_U32(ctx, 31, 0x2EFA84u);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2EFA7Cu, 0x2EFA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA84u;
label_2efa84:
    // 0x2efa84: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2efa84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2efa88: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2efa88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2efa8c: 0x24a5e9f8  addiu       $a1, $a1, -0x1608
    ctx->pc = 0x2efa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961656));
    // 0x2efa90: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2efa90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2efa94: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2EFA94u;
    SET_GPR_U32(ctx, 31, 0x2EFA9Cu);
    ctx->pc = 0x2EFA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA94u;
    // 0x2efa98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2EFA94u, 0x2EFA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA9Cu;
label_2efa9c:
    // 0x2efa9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2efa9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efaa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2efaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efaa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2efaa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAA8u;
        // 0x2efaac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFAB0u;
    // 0x2efab0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2efab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2efab4: 0x0  nop
    ctx->pc = 0x2efab4u;
    // NOP
    ctx->pc = 0x2efab8u;
}
