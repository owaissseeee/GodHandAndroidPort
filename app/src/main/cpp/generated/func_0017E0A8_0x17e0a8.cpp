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

// Function: func_0017E0A8
// Address: 0x17e0a8 - 0x17e0f8
void func_0017E0A8_0x17e0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017E0A8_0x17e0a8");
#endif

    switch (ctx->pc) {
        case 0x17e0ccu: goto label_17e0cc;
        case 0x17e0e4u: goto label_17e0e4;
        default: break;
    }

    ctx->pc = 0x17e0a8u;

    // 0x17e0a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e0ac: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x17e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x17e0b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17e0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17e0b4: 0x8c6259c8  lw          $v0, 0x59C8($v1)
    ctx->pc = 0x17e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7859C8u));
    // 0x17e0b8: 0x247059c8  addiu       $s0, $v1, 0x59C8
    ctx->pc = 0x17e0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22984));
    // 0x17e0bc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E0BCu;
    {
        const bool branch_taken_0x17e0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0BCu;
        // 0x17e0c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0bc) {
            ctx->pc = 0x17E0E4u;
            goto label_17e0e4;
        }
    }
    ctx->pc = 0x17E0C4u;
    // 0x17e0c4: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x17E0C4u;
    SET_GPR_U32(ctx, 31, 0x17E0CCu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x17E0C4u, 0x17E0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E0CCu;
label_17e0cc:
    // 0x17e0cc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17e0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x17e0d0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x17e0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x17e0d4: 0x24a51fd0  addiu       $a1, $a1, 0x1FD0
    ctx->pc = 0x17e0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8144));
    // 0x17e0d8: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x17e0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x17e0dc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x17E0DCu;
    SET_GPR_U32(ctx, 31, 0x17E0E4u);
    ctx->pc = 0x17E0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E0DCu;
    // 0x17e0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x17E0DCu, 0x17E0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E0E4u;
label_17e0e4:
    // 0x17e0e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17e0e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e0ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17e0ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x17E0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0F0u;
        // 0x17e0f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E0F8u;
}
