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

// Function: func_00320030
// Address: 0x320030 - 0x320080
void func_00320030_0x320030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00320030_0x320030");
#endif

    switch (ctx->pc) {
        case 0x320054u: goto label_320054;
        case 0x32006cu: goto label_32006c;
        default: break;
    }

    ctx->pc = 0x320030u;

    // 0x320030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x320030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x320034: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x320034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x320038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x320038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32003c: 0x8c6266a8  lw          $v0, 0x66A8($v1)
    ctx->pc = 0x32003cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7866A8u));
    // 0x320040: 0x247066a8  addiu       $s0, $v1, 0x66A8
    ctx->pc = 0x320040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26280));
    // 0x320044: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x320044u;
    {
        const bool branch_taken_0x320044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320044u;
        // 0x320048: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320044) {
            ctx->pc = 0x32006Cu;
            goto label_32006c;
        }
    }
    ctx->pc = 0x32004Cu;
    // 0x32004c: 0xc0c7d28  jal         func_31F4A0
    ctx->pc = 0x32004Cu;
    SET_GPR_U32(ctx, 31, 0x320054u);
    ctx->pc = 0x31F4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F4A0u, 0x32004Cu, 0x320054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320054u;
label_320054:
    // 0x320054: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x320054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x320058: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x320058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x32005c: 0x24a511f8  addiu       $a1, $a1, 0x11F8
    ctx->pc = 0x32005cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4600));
    // 0x320060: 0x24c60da0  addiu       $a2, $a2, 0xDA0
    ctx->pc = 0x320060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3488));
    // 0x320064: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x320064u;
    SET_GPR_U32(ctx, 31, 0x32006Cu);
    ctx->pc = 0x320068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320064u;
    // 0x320068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x320064u, 0x32006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32006Cu;
label_32006c:
    // 0x32006c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32006cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x320070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x320074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320078: 0x3e00008  jr          $ra
    ctx->pc = 0x320078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320078u;
        // 0x32007c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320080u;
}
