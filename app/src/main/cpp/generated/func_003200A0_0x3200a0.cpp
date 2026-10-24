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

// Function: func_003200A0
// Address: 0x3200a0 - 0x3200f0
void func_003200A0_0x3200a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003200A0_0x3200a0");
#endif

    switch (ctx->pc) {
        case 0x3200c4u: goto label_3200c4;
        case 0x3200dcu: goto label_3200dc;
        default: break;
    }

    ctx->pc = 0x3200a0u;

    // 0x3200a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3200a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3200a4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3200a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3200a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3200a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3200ac: 0x8c6266b8  lw          $v0, 0x66B8($v1)
    ctx->pc = 0x3200acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7866B8u));
    // 0x3200b0: 0x247066b8  addiu       $s0, $v1, 0x66B8
    ctx->pc = 0x3200b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26296));
    // 0x3200b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3200B4u;
    {
        const bool branch_taken_0x3200b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3200B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200B4u;
        // 0x3200b8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3200b4) {
            ctx->pc = 0x3200DCu;
            goto label_3200dc;
        }
    }
    ctx->pc = 0x3200BCu;
    // 0x3200bc: 0xc0c7d28  jal         func_31F4A0
    ctx->pc = 0x3200BCu;
    SET_GPR_U32(ctx, 31, 0x3200C4u);
    ctx->pc = 0x31F4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F4A0u, 0x3200BCu, 0x3200C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3200C4u;
label_3200c4:
    // 0x3200c4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3200c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3200c8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x3200c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x3200cc: 0x24a51210  addiu       $a1, $a1, 0x1210
    ctx->pc = 0x3200ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4624));
    // 0x3200d0: 0x24c60da0  addiu       $a2, $a2, 0xDA0
    ctx->pc = 0x3200d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3488));
    // 0x3200d4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x3200D4u;
    SET_GPR_U32(ctx, 31, 0x3200DCu);
    ctx->pc = 0x3200D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3200D4u;
    // 0x3200d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x3200D4u, 0x3200DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3200DCu;
label_3200dc:
    // 0x3200dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3200dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3200e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3200e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3200e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3200e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3200e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3200E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3200ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200E8u;
        // 0x3200ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3200E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3200F0u;
}
