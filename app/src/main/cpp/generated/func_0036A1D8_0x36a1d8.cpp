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

// Function: func_0036A1D8
// Address: 0x36a1d8 - 0x36a238
void func_0036A1D8_0x36a1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036A1D8_0x36a1d8");
#endif

    switch (ctx->pc) {
        case 0x36a1f4u: goto label_36a1f4;
        default: break;
    }

    ctx->pc = 0x36a1d8u;

    // 0x36a1d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36a1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36a1dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a1e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36a1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a1e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36a1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36a1e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36a1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36a1ec: 0xc0db17e  jal         func_36C5F8
    ctx->pc = 0x36A1ECu;
    SET_GPR_U32(ctx, 31, 0x36A1F4u);
    ctx->pc = 0x36A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A1ECu;
    // 0x36a1f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5F8u, 0x36A1ECu, 0x36A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A1F4u;
label_36a1f4:
    // 0x36a1f4: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36a1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36a1f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36A1F8u;
    {
        const bool branch_taken_0x36a1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A1F8u;
        // 0x36a1fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a1f8) {
            ctx->pc = 0x36A218u;
            goto label_36a218;
        }
    }
    ctx->pc = 0x36A200u;
    // 0x36a200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a204: 0x34a5020d  ori         $a1, $a1, 0x20D
    ctx->pc = 0x36a204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)525);
    // 0x36a208: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36a208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a20c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36a20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a210: 0x80da7c8  j           func_369F20
    ctx->pc = 0x36A210u;
    ctx->pc = 0x36A214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A210u;
    // 0x36a214: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F20u, 0x36A210u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36A218u;
label_36a218:
    // 0x36a218: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x36a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x36a21c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a21cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a220: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x36a220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x36a224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36a224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a228: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36a228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a22c: 0x3e00008  jr          $ra
    ctx->pc = 0x36A22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A22Cu;
        // 0x36a230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A234u;
    // 0x36a234: 0x0  nop
    ctx->pc = 0x36a234u;
    // NOP
    ctx->pc = 0x36a238u;
}
