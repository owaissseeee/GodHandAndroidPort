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

// Function: func_001C0018
// Address: 0x1c0018 - 0x1c0068
void func_001C0018_0x1c0018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C0018_0x1c0018");
#endif

    switch (ctx->pc) {
        case 0x1c003cu: goto label_1c003c;
        case 0x1c0054u: goto label_1c0054;
        default: break;
    }

    ctx->pc = 0x1c0018u;

    // 0x1c0018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c0018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c001c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1c001cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1c0020: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c0020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c0024: 0x8c625808  lw          $v0, 0x5808($v1)
    ctx->pc = 0x1c0024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785808u));
    // 0x1c0028: 0x24705808  addiu       $s0, $v1, 0x5808
    ctx->pc = 0x1c0028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22536));
    // 0x1c002c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C002Cu;
    {
        const bool branch_taken_0x1c002c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C002Cu;
        // 0x1c0030: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c002c) {
            ctx->pc = 0x1C0054u;
            goto label_1c0054;
        }
    }
    ctx->pc = 0x1C0034u;
    // 0x1c0034: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1C0034u;
    SET_GPR_U32(ctx, 31, 0x1C003Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1C0034u, 0x1C003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C003Cu;
label_1c003c:
    // 0x1c003c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1c003cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1c0040: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1c0040u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1c0044: 0x24a59890  addiu       $a1, $a1, -0x6770
    ctx->pc = 0x1c0044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940816));
    // 0x1c0048: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1c0048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1c004c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1C004Cu;
    SET_GPR_U32(ctx, 31, 0x1C0054u);
    ctx->pc = 0x1C0050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C004Cu;
    // 0x1c0050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1C004Cu, 0x1C0054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0054u;
label_1c0054:
    // 0x1c0054: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c0054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c005c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c005cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0060: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0060u;
        // 0x1c0064: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0068u;
}
