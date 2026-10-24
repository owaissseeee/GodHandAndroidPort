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

// Function: func_00174758
// Address: 0x174758 - 0x1747a8
void func_00174758_0x174758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00174758_0x174758");
#endif

    switch (ctx->pc) {
        case 0x17477cu: goto label_17477c;
        case 0x174794u: goto label_174794;
        default: break;
    }

    ctx->pc = 0x174758u;

    // 0x174758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17475c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x17475cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x174760: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x174760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x174764: 0x8c6258a8  lw          $v0, 0x58A8($v1)
    ctx->pc = 0x174764u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7858A8u));
    // 0x174768: 0x247058a8  addiu       $s0, $v1, 0x58A8
    ctx->pc = 0x174768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22696));
    // 0x17476c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17476Cu;
    {
        const bool branch_taken_0x17476c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17476Cu;
        // 0x174770: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17476c) {
            ctx->pc = 0x174794u;
            goto label_174794;
        }
    }
    ctx->pc = 0x174774u;
    // 0x174774: 0xc0723cc  jal         func_1C8F30
    ctx->pc = 0x174774u;
    SET_GPR_U32(ctx, 31, 0x17477Cu);
    ctx->pc = 0x1C8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F30u, 0x174774u, 0x17477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17477Cu;
label_17477c:
    // 0x17477c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17477cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x174780: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x174780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x174784: 0x24a51098  addiu       $a1, $a1, 0x1098
    ctx->pc = 0x174784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4248));
    // 0x174788: 0x24c658b8  addiu       $a2, $a2, 0x58B8
    ctx->pc = 0x174788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22712));
    // 0x17478c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x17478Cu;
    SET_GPR_U32(ctx, 31, 0x174794u);
    ctx->pc = 0x174790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17478Cu;
    // 0x174790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x17478Cu, 0x174794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174794u;
label_174794:
    // 0x174794: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17479c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17479cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1747a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1747A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1747A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1747A0u;
        // 0x1747a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1747A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1747A8u;
}
