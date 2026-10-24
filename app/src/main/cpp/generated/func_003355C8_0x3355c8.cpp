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

// Function: func_003355C8
// Address: 0x3355c8 - 0x335610
void func_003355C8_0x3355c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003355C8_0x3355c8");
#endif

    switch (ctx->pc) {
        case 0x3355e4u: goto label_3355e4;
        case 0x3355f0u: goto label_3355f0;
        case 0x3355f8u: goto label_3355f8;
        default: break;
    }

    ctx->pc = 0x3355c8u;

    // 0x3355c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3355c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3355cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3355ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3355d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3355d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3355d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3355d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3355d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3355dc: 0xc0cd736  jal         func_335CD8
    ctx->pc = 0x3355DCu;
    SET_GPR_U32(ctx, 31, 0x3355E4u);
    ctx->pc = 0x3355E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3355DCu;
    // 0x3355e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CD8u, 0x3355DCu, 0x3355E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3355E4u;
label_3355e4:
    // 0x3355e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3355e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355e8: 0xc0cd584  jal         func_335610
    ctx->pc = 0x3355E8u;
    SET_GPR_U32(ctx, 31, 0x3355F0u);
    ctx->pc = 0x3355ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3355E8u;
    // 0x3355ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335610u, 0x3355E8u, 0x3355F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3355F0u;
label_3355f0:
    // 0x3355f0: 0xc0cd738  jal         func_335CE0
    ctx->pc = 0x3355F0u;
    SET_GPR_U32(ctx, 31, 0x3355F8u);
    ctx->pc = 0x3355F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3355F0u;
    // 0x3355f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CE0u, 0x3355F0u, 0x3355F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3355F8u;
label_3355f8:
    // 0x3355f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3355f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3355fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3355fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335608: 0x3e00008  jr          $ra
    ctx->pc = 0x335608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335608u;
        // 0x33560c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335610u;
}
