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

// Function: SFD_SetConcatPlay
// Address: 0x34cce8 - 0x34cd48
void SFD_SetConcatPlay_0x34cce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFD_SetConcatPlay_0x34cce8");
#endif

    switch (ctx->pc) {
        case 0x34ccfcu: goto label_34ccfc;
        case 0x34cd30u: goto label_34cd30;
        default: break;
    }

    ctx->pc = 0x34cce8u;

    // 0x34cce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34cce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34ccec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34ccecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34ccf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34ccf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34ccf4: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x34CCF4u;
    SET_GPR_U32(ctx, 31, 0x34CCFCu);
    ctx->pc = 0x34CCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CCF4u;
    // 0x34ccf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x34CCF4u, 0x34CCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CCFCu;
label_34ccfc:
    // 0x34ccfc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34ccfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34cd00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34cd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cd04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34cd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cd08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34CD08u;
    {
        const bool branch_taken_0x34cd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD08u;
        // 0x34cd0c: 0x34a50161  ori         $a1, $a1, 0x161 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)353);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd08) {
            ctx->pc = 0x34CD28u;
            goto label_34cd28;
        }
    }
    ctx->pc = 0x34CD10u;
    // 0x34cd10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34cd10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34cd14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34cd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cd18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34cd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34cd1c: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34CD1Cu;
    ctx->pc = 0x34CD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD1Cu;
    // 0x34cd20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34CD1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34CD24u;
    // 0x34cd24: 0x0  nop
    ctx->pc = 0x34cd24u;
    // NOP
label_34cd28:
    // 0x34cd28: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x34CD28u;
    SET_GPR_U32(ctx, 31, 0x34CD30u);
    ctx->pc = 0x34CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD28u;
    // 0x34cd2c: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x34CD28u, 0x34CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD30u;
label_34cd30:
    // 0x34cd30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34cd30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cd34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34cd34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34cd38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34cd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34cd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x34CD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD3Cu;
        // 0x34cd40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CD44u;
    // 0x34cd44: 0x0  nop
    ctx->pc = 0x34cd44u;
    // NOP
    ctx->pc = 0x34cd48u;
}
