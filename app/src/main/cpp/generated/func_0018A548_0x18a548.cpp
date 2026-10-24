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

// Function: func_0018A548
// Address: 0x18a548 - 0x18a598
void func_0018A548_0x18a548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018A548_0x18a548");
#endif

    switch (ctx->pc) {
        case 0x18a56cu: goto label_18a56c;
        case 0x18a584u: goto label_18a584;
        default: break;
    }

    ctx->pc = 0x18a548u;

    // 0x18a548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a54c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x18a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x18a550: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18a550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18a554: 0x8c625b48  lw          $v0, 0x5B48($v1)
    ctx->pc = 0x18a554u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785B48u));
    // 0x18a558: 0x24705b48  addiu       $s0, $v1, 0x5B48
    ctx->pc = 0x18a558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23368));
    // 0x18a55c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18A55Cu;
    {
        const bool branch_taken_0x18a55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A55Cu;
        // 0x18a560: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a55c) {
            ctx->pc = 0x18A584u;
            goto label_18a584;
        }
    }
    ctx->pc = 0x18A564u;
    // 0x18a564: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x18A564u;
    SET_GPR_U32(ctx, 31, 0x18A56Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x18A564u, 0x18A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A56Cu;
label_18a56c:
    // 0x18a56c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x18a56cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x18a570: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x18a570u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x18a574: 0x24a536b8  addiu       $a1, $a1, 0x36B8
    ctx->pc = 0x18a574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14008));
    // 0x18a578: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x18a578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x18a57c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x18A57Cu;
    SET_GPR_U32(ctx, 31, 0x18A584u);
    ctx->pc = 0x18A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A57Cu;
    // 0x18a580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x18A57Cu, 0x18A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A584u;
label_18a584:
    // 0x18a584: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18a584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a58c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18a58cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a590: 0x3e00008  jr          $ra
    ctx->pc = 0x18A590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A590u;
        // 0x18a594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A598u;
}
