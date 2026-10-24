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

// Function: func_003572F8
// Address: 0x3572f8 - 0x357350
void func_003572F8_0x3572f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003572F8_0x3572f8");
#endif

    switch (ctx->pc) {
        case 0x35730cu: goto label_35730c;
        case 0x357338u: goto label_357338;
        default: break;
    }

    ctx->pc = 0x3572f8u;

    // 0x3572f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3572f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3572fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3572fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357300: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x357300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x357304: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x357304u;
    SET_GPR_U32(ctx, 31, 0x35730Cu);
    ctx->pc = 0x357308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357304u;
    // 0x357308: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x357304u, 0x35730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35730Cu;
label_35730c:
    // 0x35730c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35730cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x357310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357314: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x357314u;
    {
        const bool branch_taken_0x357314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357314u;
        // 0x357318: 0x34a50138  ori         $a1, $a1, 0x138 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)312);
        ctx->in_delay_slot = false;
        if (branch_taken_0x357314) {
            ctx->pc = 0x357330u;
            goto label_357330;
        }
    }
    ctx->pc = 0x35731Cu;
    // 0x35731c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35731cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357320: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x357320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357324: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x357324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357328: 0x80d375c  j           func_34DD70
    ctx->pc = 0x357328u;
    ctx->pc = 0x35732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357328u;
    // 0x35732c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x357328u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x357330u;
label_357330:
    // 0x357330: 0xc0d5cd4  jal         func_357350
    ctx->pc = 0x357330u;
    SET_GPR_U32(ctx, 31, 0x357338u);
    ctx->pc = 0x357350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357350u, 0x357330u, 0x357338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357338u;
label_357338:
    // 0x357338: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35733c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35733cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357340: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x357340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357344: 0x3e00008  jr          $ra
    ctx->pc = 0x357344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357344u;
        // 0x357348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35734Cu;
    // 0x35734c: 0x0  nop
    ctx->pc = 0x35734cu;
    // NOP
    ctx->pc = 0x357350u;
}
