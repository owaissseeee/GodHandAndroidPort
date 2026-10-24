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

// Function: func_0019C0C8
// Address: 0x19c0c8 - 0x19c118
void func_0019C0C8_0x19c0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019C0C8_0x19c0c8");
#endif

    switch (ctx->pc) {
        case 0x19c0ecu: goto label_19c0ec;
        case 0x19c104u: goto label_19c104;
        default: break;
    }

    ctx->pc = 0x19c0c8u;

    // 0x19c0c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c0cc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19c0d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c0d4: 0x8c625db8  lw          $v0, 0x5DB8($v1)
    ctx->pc = 0x19c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785DB8u));
    // 0x19c0d8: 0x24705db8  addiu       $s0, $v1, 0x5DB8
    ctx->pc = 0x19c0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23992));
    // 0x19c0dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C0DCu;
    {
        const bool branch_taken_0x19c0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0DCu;
        // 0x19c0e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c0dc) {
            ctx->pc = 0x19C104u;
            goto label_19c104;
        }
    }
    ctx->pc = 0x19C0E4u;
    // 0x19c0e4: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x19C0E4u;
    SET_GPR_U32(ctx, 31, 0x19C0ECu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x19C0E4u, 0x19C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0ECu;
label_19c0ec:
    // 0x19c0ec: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19c0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19c0f0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19c0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19c0f4: 0x24a55aa8  addiu       $a1, $a1, 0x5AA8
    ctx->pc = 0x19c0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23208));
    // 0x19c0f8: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x19c0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x19c0fc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19C0FCu;
    SET_GPR_U32(ctx, 31, 0x19C104u);
    ctx->pc = 0x19C100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0FCu;
    // 0x19c100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19C0FCu, 0x19C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C104u;
label_19c104:
    // 0x19c104: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19c104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c10c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c10cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c110: 0x3e00008  jr          $ra
    ctx->pc = 0x19C110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C110u;
        // 0x19c114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C118u;
}
