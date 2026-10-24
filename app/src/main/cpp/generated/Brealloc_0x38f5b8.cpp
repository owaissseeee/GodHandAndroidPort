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

// Function: Brealloc
// Address: 0x38f5b8 - 0x38f630
void Brealloc_0x38f5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Brealloc_0x38f5b8");
#endif

    switch (ctx->pc) {
        case 0x38f5dcu: goto label_38f5dc;
        case 0x38f5fcu: goto label_38f5fc;
        case 0x38f60cu: goto label_38f60c;
        case 0x38f614u: goto label_38f614;
        default: break;
    }

    ctx->pc = 0x38f5b8u;

    // 0x38f5b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38f5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38f5bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38f5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38f5c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38f5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f5c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38f5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38f5c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38f5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38f5cc: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x38F5CCu;
    {
        const bool branch_taken_0x38f5cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5CCu;
        // 0x38f5d0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f5cc) {
            ctx->pc = 0x38F5E4u;
            goto label_38f5e4;
        }
    }
    ctx->pc = 0x38F5D4u;
    // 0x38f5d4: 0xc0e3d3a  jal         func_38F4E8
    ctx->pc = 0x38F5D4u;
    SET_GPR_U32(ctx, 31, 0x38F5DCu);
    ctx->pc = 0x38F4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F4E8u, 0x38F5D4u, 0x38F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F5DCu;
label_38f5dc:
    // 0x38f5dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x38F5DCu;
    {
        const bool branch_taken_0x38f5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5DCu;
        // 0x38f5e0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f5dc) {
            ctx->pc = 0x38F61Cu;
            goto label_38f61c;
        }
    }
    ctx->pc = 0x38F5E4u;
label_38f5e4:
    // 0x38f5e4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x38f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x38f5e8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x38f5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x38f5ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38F5ECu;
    {
        const bool branch_taken_0x38f5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5ECu;
        // 0x38f5f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f5ec) {
            ctx->pc = 0x38F618u;
            goto label_38f618;
        }
    }
    ctx->pc = 0x38F5F4u;
    // 0x38f5f4: 0xc0e3d3a  jal         func_38F4E8
    ctx->pc = 0x38F5F4u;
    SET_GPR_U32(ctx, 31, 0x38F5FCu);
    ctx->pc = 0x38F4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F4E8u, 0x38F5F4u, 0x38F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F5FCu;
label_38f5fc:
    // 0x38f5fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38f5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f600: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38f600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f604: 0xc0e3d5c  jal         func_38F570
    ctx->pc = 0x38F604u;
    SET_GPR_U32(ctx, 31, 0x38F60Cu);
    ctx->pc = 0x38F608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F604u;
    // 0x38f608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F570u, 0x38F604u, 0x38F60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F60Cu;
label_38f60c:
    // 0x38f60c: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x38F60Cu;
    SET_GPR_U32(ctx, 31, 0x38F614u);
    ctx->pc = 0x38F610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F60Cu;
    // 0x38f610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x38F60Cu, 0x38F614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F614u;
label_38f614:
    // 0x38f614: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38f614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f618:
    // 0x38f618: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38f618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38f61c:
    // 0x38f61c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38f61cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38f620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f624: 0x3e00008  jr          $ra
    ctx->pc = 0x38F624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F624u;
        // 0x38f628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F62Cu;
    // 0x38f62c: 0x0  nop
    ctx->pc = 0x38f62cu;
    // NOP
    ctx->pc = 0x38f630u;
}
