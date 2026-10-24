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

// Function: func_0019A458
// Address: 0x19a458 - 0x19a4a8
void func_0019A458_0x19a458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019A458_0x19a458");
#endif

    switch (ctx->pc) {
        case 0x19a47cu: goto label_19a47c;
        case 0x19a494u: goto label_19a494;
        default: break;
    }

    ctx->pc = 0x19a458u;

    // 0x19a458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a45c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19a460: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19a460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19a464: 0x8c625d48  lw          $v0, 0x5D48($v1)
    ctx->pc = 0x19a464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785D48u));
    // 0x19a468: 0x24705d48  addiu       $s0, $v1, 0x5D48
    ctx->pc = 0x19a468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23880));
    // 0x19a46c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19A46Cu;
    {
        const bool branch_taken_0x19a46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A46Cu;
        // 0x19a470: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a46c) {
            ctx->pc = 0x19A494u;
            goto label_19a494;
        }
    }
    ctx->pc = 0x19A474u;
    // 0x19a474: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x19A474u;
    SET_GPR_U32(ctx, 31, 0x19A47Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x19A474u, 0x19A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A47Cu;
label_19a47c:
    // 0x19a47c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19a47cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19a480: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19a480u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19a484: 0x24a55448  addiu       $a1, $a1, 0x5448
    ctx->pc = 0x19a484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21576));
    // 0x19a488: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x19a488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x19a48c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19A48Cu;
    SET_GPR_U32(ctx, 31, 0x19A494u);
    ctx->pc = 0x19A490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A48Cu;
    // 0x19a490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19A48Cu, 0x19A494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A494u;
label_19a494:
    // 0x19a494: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19a494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a49c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19a49cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x19A4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A4A0u;
        // 0x19a4a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A4A8u;
}
