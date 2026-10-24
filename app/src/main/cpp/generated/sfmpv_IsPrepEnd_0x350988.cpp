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

// Function: sfmpv_IsPrepEnd
// Address: 0x350988 - 0x3509e8
void sfmpv_IsPrepEnd_0x350988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfmpv_IsPrepEnd_0x350988");
#endif

    switch (ctx->pc) {
        case 0x35099cu: goto label_35099c;
        case 0x3509acu: goto label_3509ac;
        case 0x3509bcu: goto label_3509bc;
        default: break;
    }

    ctx->pc = 0x350988u;

    // 0x350988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x350988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35098c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35098cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x350990: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x350990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x350994: 0xc0d553a  jal         func_3554E8
    ctx->pc = 0x350994u;
    SET_GPR_U32(ctx, 31, 0x35099Cu);
    ctx->pc = 0x350998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350994u;
    // 0x350998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3554E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3554E8u, 0x350994u, 0x35099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35099Cu;
label_35099c:
    // 0x35099c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35099Cu;
    {
        const bool branch_taken_0x35099c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3509A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35099Cu;
        // 0x3509a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35099c) {
            ctx->pc = 0x3509C4u;
            goto label_3509c4;
        }
    }
    ctx->pc = 0x3509A4u;
    // 0x3509a4: 0xc0d427a  jal         func_3509E8
    ctx->pc = 0x3509A4u;
    SET_GPR_U32(ctx, 31, 0x3509ACu);
    ctx->pc = 0x3509E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3509E8u, 0x3509A4u, 0x3509ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3509ACu;
label_3509ac:
    // 0x3509ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3509ACu;
    {
        const bool branch_taken_0x3509ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3509B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3509ACu;
        // 0x3509b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3509ac) {
            ctx->pc = 0x3509D0u;
            goto label_3509d0;
        }
    }
    ctx->pc = 0x3509B4u;
    // 0x3509b4: 0xc0d4294  jal         func_350A50
    ctx->pc = 0x3509B4u;
    SET_GPR_U32(ctx, 31, 0x3509BCu);
    ctx->pc = 0x350A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A50u, 0x3509B4u, 0x3509BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3509BCu;
label_3509bc:
    // 0x3509bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3509BCu;
    {
        const bool branch_taken_0x3509bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3509bc) {
            ctx->pc = 0x3509C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3509BCu;
            // 0x3509c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3509D4u;
            goto label_3509d4;
        }
    }
    ctx->pc = 0x3509C4u;
label_3509c4:
    // 0x3509c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3509C4u;
    {
        const bool branch_taken_0x3509c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3509C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3509C4u;
        // 0x3509c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3509c4) {
            ctx->pc = 0x3509D4u;
            goto label_3509d4;
        }
    }
    ctx->pc = 0x3509CCu;
    // 0x3509cc: 0x0  nop
    ctx->pc = 0x3509ccu;
    // NOP
label_3509d0:
    // 0x3509d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3509d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3509d4:
    // 0x3509d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3509d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3509d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3509d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3509dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3509DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3509E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3509DCu;
        // 0x3509e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3509DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3509E4u;
    // 0x3509e4: 0x0  nop
    ctx->pc = 0x3509e4u;
    // NOP
    ctx->pc = 0x3509e8u;
}
