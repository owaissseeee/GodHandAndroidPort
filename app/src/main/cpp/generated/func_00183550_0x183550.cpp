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

// Function: func_00183550
// Address: 0x183550 - 0x1835a0
void func_00183550_0x183550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00183550_0x183550");
#endif

    switch (ctx->pc) {
        case 0x183574u: goto label_183574;
        case 0x18358cu: goto label_18358c;
        default: break;
    }

    ctx->pc = 0x183550u;

    // 0x183550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183554: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x183554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x183558: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x183558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18355c: 0x8c625aa8  lw          $v0, 0x5AA8($v1)
    ctx->pc = 0x18355cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785AA8u));
    // 0x183560: 0x24705aa8  addiu       $s0, $v1, 0x5AA8
    ctx->pc = 0x183560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23208));
    // 0x183564: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x183564u;
    {
        const bool branch_taken_0x183564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183564u;
        // 0x183568: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183564) {
            ctx->pc = 0x18358Cu;
            goto label_18358c;
        }
    }
    ctx->pc = 0x18356Cu;
    // 0x18356c: 0xc070006  jal         func_1C0018
    ctx->pc = 0x18356Cu;
    SET_GPR_U32(ctx, 31, 0x183574u);
    ctx->pc = 0x1C0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0018u, 0x18356Cu, 0x183574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183574u;
label_183574:
    // 0x183574: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x183574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x183578: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x183578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x18357c: 0x24a52c00  addiu       $a1, $a1, 0x2C00
    ctx->pc = 0x18357cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11264));
    // 0x183580: 0x24c65808  addiu       $a2, $a2, 0x5808
    ctx->pc = 0x183580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22536));
    // 0x183584: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x183584u;
    SET_GPR_U32(ctx, 31, 0x18358Cu);
    ctx->pc = 0x183588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183584u;
    // 0x183588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x183584u, 0x18358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18358Cu;
label_18358c:
    // 0x18358c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18358cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183594: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x183594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183598: 0x3e00008  jr          $ra
    ctx->pc = 0x183598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183598u;
        // 0x18359c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1835A0u;
}
