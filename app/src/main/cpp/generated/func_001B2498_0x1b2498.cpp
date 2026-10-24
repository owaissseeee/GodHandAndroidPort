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

// Function: func_001B2498
// Address: 0x1b2498 - 0x1b24e8
void func_001B2498_0x1b2498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B2498_0x1b2498");
#endif

    switch (ctx->pc) {
        case 0x1b24bcu: goto label_1b24bc;
        case 0x1b24d4u: goto label_1b24d4;
        default: break;
    }

    ctx->pc = 0x1b2498u;

    // 0x1b2498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b249c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1b249cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1b24a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b24a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b24a4: 0x8c626088  lw          $v0, 0x6088($v1)
    ctx->pc = 0x1b24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786088u));
    // 0x1b24a8: 0x24706088  addiu       $s0, $v1, 0x6088
    ctx->pc = 0x1b24a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24712));
    // 0x1b24ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B24ACu;
    {
        const bool branch_taken_0x1b24ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B24B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24ACu;
        // 0x1b24b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24ac) {
            ctx->pc = 0x1B24D4u;
            goto label_1b24d4;
        }
    }
    ctx->pc = 0x1B24B4u;
    // 0x1b24b4: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x1B24B4u;
    SET_GPR_U32(ctx, 31, 0x1B24BCu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x1B24B4u, 0x1B24BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24BCu;
label_1b24bc:
    // 0x1b24bc: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b24bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b24c0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1b24c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1b24c4: 0x24a58570  addiu       $a1, $a1, -0x7A90
    ctx->pc = 0x1b24c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935920));
    // 0x1b24c8: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x1b24c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x1b24cc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1B24CCu;
    SET_GPR_U32(ctx, 31, 0x1B24D4u);
    ctx->pc = 0x1B24D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B24CCu;
    // 0x1b24d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1B24CCu, 0x1B24D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24D4u;
label_1b24d4:
    // 0x1b24d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b24d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b24d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b24dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b24dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b24e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B24E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24E0u;
        // 0x1b24e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B24E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B24E8u;
}
