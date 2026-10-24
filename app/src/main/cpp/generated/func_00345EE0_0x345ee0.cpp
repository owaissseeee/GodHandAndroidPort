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

// Function: func_00345EE0
// Address: 0x345ee0 - 0x345f48
void func_00345EE0_0x345ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345EE0_0x345ee0");
#endif

    switch (ctx->pc) {
        case 0x345ef4u: goto label_345ef4;
        case 0x345f20u: goto label_345f20;
        case 0x345f2cu: goto label_345f2c;
        default: break;
    }

    ctx->pc = 0x345ee0u;

    // 0x345ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x345ee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x345ee8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x345ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x345eec: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x345EECu;
    SET_GPR_U32(ctx, 31, 0x345EF4u);
    ctx->pc = 0x345EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345EECu;
    // 0x345ef0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x345EECu, 0x345EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345EF4u;
label_345ef4:
    // 0x345ef4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345ef8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x345EF8u;
    {
        const bool branch_taken_0x345ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x345EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345EF8u;
        // 0x345efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ef8) {
            ctx->pc = 0x345F18u;
            goto label_345f18;
        }
    }
    ctx->pc = 0x345F00u;
    // 0x345f00: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x345f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x345f04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345f08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x345f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345f0c: 0x24848088  addiu       $a0, $a0, -0x7F78
    ctx->pc = 0x345f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934664));
    // 0x345f10: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x345F10u;
    ctx->pc = 0x345F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345F10u;
    // 0x345f14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x345F10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x345F18u;
label_345f18:
    // 0x345f18: 0xc0d177c  jal         func_345DF0
    ctx->pc = 0x345F18u;
    SET_GPR_U32(ctx, 31, 0x345F20u);
    ctx->pc = 0x345DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345DF0u, 0x345F18u, 0x345F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F20u;
label_345f20:
    // 0x345f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x345f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345f24: 0xc0d1f96  jal         func_347E58
    ctx->pc = 0x345F24u;
    SET_GPR_U32(ctx, 31, 0x345F2Cu);
    ctx->pc = 0x345F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345F24u;
    // 0x345f28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347E58u, 0x345F24u, 0x345F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F2Cu;
label_345f2c:
    // 0x345f2c: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x345f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x345f30: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x345f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x345f34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x345f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345f38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345f3c: 0x80cd654  j           func_335950
    ctx->pc = 0x345F3Cu;
    ctx->pc = 0x345F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345F3Cu;
    // 0x345f40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335950u, 0x345F3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x345F44u;
    // 0x345f44: 0x0  nop
    ctx->pc = 0x345f44u;
    // NOP
    ctx->pc = 0x345f48u;
}
