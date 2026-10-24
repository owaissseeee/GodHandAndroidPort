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

// Function: func_001B8758
// Address: 0x1b8758 - 0x1b87a8
void func_001B8758_0x1b8758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B8758_0x1b8758");
#endif

    switch (ctx->pc) {
        case 0x1b877cu: goto label_1b877c;
        case 0x1b8794u: goto label_1b8794;
        default: break;
    }

    ctx->pc = 0x1b8758u;

    // 0x1b8758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b875c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1b875cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1b8760: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b8760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b8764: 0x8c6260e8  lw          $v0, 0x60E8($v1)
    ctx->pc = 0x1b8764u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7860E8u));
    // 0x1b8768: 0x247060e8  addiu       $s0, $v1, 0x60E8
    ctx->pc = 0x1b8768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24808));
    // 0x1b876c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B876Cu;
    {
        const bool branch_taken_0x1b876c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B876Cu;
        // 0x1b8770: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b876c) {
            ctx->pc = 0x1B8794u;
            goto label_1b8794;
        }
    }
    ctx->pc = 0x1B8774u;
    // 0x1b8774: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1B8774u;
    SET_GPR_U32(ctx, 31, 0x1B877Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1B8774u, 0x1B877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B877Cu;
label_1b877c:
    // 0x1b877c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b877cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b8780: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1b8780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1b8784: 0x24a58c08  addiu       $a1, $a1, -0x73F8
    ctx->pc = 0x1b8784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937608));
    // 0x1b8788: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1b8788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1b878c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1B878Cu;
    SET_GPR_U32(ctx, 31, 0x1B8794u);
    ctx->pc = 0x1B8790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B878Cu;
    // 0x1b8790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1B878Cu, 0x1B8794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8794u;
label_1b8794:
    // 0x1b8794: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b8794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b879c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b879cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b87a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B87A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87A0u;
        // 0x1b87a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B87A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B87A8u;
}
