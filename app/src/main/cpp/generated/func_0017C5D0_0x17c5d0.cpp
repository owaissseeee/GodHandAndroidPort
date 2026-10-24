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

// Function: func_0017C5D0
// Address: 0x17c5d0 - 0x17c620
void func_0017C5D0_0x17c5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017C5D0_0x17c5d0");
#endif

    switch (ctx->pc) {
        case 0x17c5f4u: goto label_17c5f4;
        case 0x17c60cu: goto label_17c60c;
        default: break;
    }

    ctx->pc = 0x17c5d0u;

    // 0x17c5d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c5d4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x17c5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x17c5d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17c5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17c5dc: 0x8c625988  lw          $v0, 0x5988($v1)
    ctx->pc = 0x17c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785988u));
    // 0x17c5e0: 0x24705988  addiu       $s0, $v1, 0x5988
    ctx->pc = 0x17c5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22920));
    // 0x17c5e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17C5E4u;
    {
        const bool branch_taken_0x17c5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5E4u;
        // 0x17c5e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c5e4) {
            ctx->pc = 0x17C60Cu;
            goto label_17c60c;
        }
    }
    ctx->pc = 0x17C5ECu;
    // 0x17c5ec: 0xc06f780  jal         func_1BDE00
    ctx->pc = 0x17C5ECu;
    SET_GPR_U32(ctx, 31, 0x17C5F4u);
    ctx->pc = 0x1BDE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDE00u, 0x17C5ECu, 0x17C5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C5F4u;
label_17c5f4:
    // 0x17c5f4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17c5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x17c5f8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x17c5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x17c5fc: 0x24a51d30  addiu       $a1, $a1, 0x1D30
    ctx->pc = 0x17c5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7472));
    // 0x17c600: 0x24c65858  addiu       $a2, $a2, 0x5858
    ctx->pc = 0x17c600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22616));
    // 0x17c604: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x17C604u;
    SET_GPR_U32(ctx, 31, 0x17C60Cu);
    ctx->pc = 0x17C608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C604u;
    // 0x17c608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x17C604u, 0x17C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C60Cu;
label_17c60c:
    // 0x17c60c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17c60cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c614: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17c614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c618: 0x3e00008  jr          $ra
    ctx->pc = 0x17C618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C618u;
        // 0x17c61c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C620u;
}
