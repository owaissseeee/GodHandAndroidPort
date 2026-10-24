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

// Function: func_0028B0A0
// Address: 0x28b0a0 - 0x28b0f0
void func_0028B0A0_0x28b0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028B0A0_0x28b0a0");
#endif

    switch (ctx->pc) {
        case 0x28b0c4u: goto label_28b0c4;
        case 0x28b0dcu: goto label_28b0dc;
        default: break;
    }

    ctx->pc = 0x28b0a0u;

    // 0x28b0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28b0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28b0a4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x28b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x28b0a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28b0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28b0ac: 0x8c6262b8  lw          $v0, 0x62B8($v1)
    ctx->pc = 0x28b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7862B8u));
    // 0x28b0b0: 0x247062b8  addiu       $s0, $v1, 0x62B8
    ctx->pc = 0x28b0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25272));
    // 0x28b0b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28B0B4u;
    {
        const bool branch_taken_0x28b0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0B4u;
        // 0x28b0b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0b4) {
            ctx->pc = 0x28B0DCu;
            goto label_28b0dc;
        }
    }
    ctx->pc = 0x28B0BCu;
    // 0x28b0bc: 0xc0a3f74  jal         func_28FDD0
    ctx->pc = 0x28B0BCu;
    SET_GPR_U32(ctx, 31, 0x28B0C4u);
    ctx->pc = 0x28FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FDD0u, 0x28B0BCu, 0x28B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B0C4u;
label_28b0c4:
    // 0x28b0c4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28b0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x28b0c8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x28b0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x28b0cc: 0x24a58f10  addiu       $a1, $a1, -0x70F0
    ctx->pc = 0x28b0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938384));
    // 0x28b0d0: 0x24c661d8  addiu       $a2, $a2, 0x61D8
    ctx->pc = 0x28b0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25048));
    // 0x28b0d4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x28B0D4u;
    SET_GPR_U32(ctx, 31, 0x28B0DCu);
    ctx->pc = 0x28B0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B0D4u;
    // 0x28b0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x28B0D4u, 0x28B0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B0DCu;
label_28b0dc:
    // 0x28b0dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28b0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b0e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28b0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b0e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28b0e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x28B0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0E8u;
        // 0x28b0ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B0F0u;
}
