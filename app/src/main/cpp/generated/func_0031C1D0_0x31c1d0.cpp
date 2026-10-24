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

// Function: func_0031C1D0
// Address: 0x31c1d0 - 0x31c238
void func_0031C1D0_0x31c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031C1D0_0x31c1d0");
#endif

    switch (ctx->pc) {
        case 0x31c200u: goto label_31c200;
        case 0x31c218u: goto label_31c218;
        default: break;
    }

    ctx->pc = 0x31c1d0u;

    // 0x31c1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31c1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31c1d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31c1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31c1d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31c1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31c1dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31c1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c1e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c1e4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x31C1E4u;
    {
        const bool branch_taken_0x31c1e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C1E4u;
        // 0x31c1e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c1e4) {
            ctx->pc = 0x31C218u;
            goto label_31c218;
        }
    }
    ctx->pc = 0x31C1ECu;
    // 0x31c1ec: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x31c1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x31c1f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c1f4: 0x24a50e88  addiu       $a1, $a1, 0xE88
    ctx->pc = 0x31c1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3720));
    // 0x31c1f8: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x31C1F8u;
    SET_GPR_U32(ctx, 31, 0x31C200u);
    ctx->pc = 0x31C1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C1F8u;
    // 0x31c1fc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x31C1F8u, 0x31C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C200u;
label_31c200:
    // 0x31c200: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C200u;
    {
        const bool branch_taken_0x31c200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c200) {
            ctx->pc = 0x31C204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C200u;
            // 0x31c204: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C21Cu;
            goto label_31c21c;
        }
    }
    ctx->pc = 0x31C208u;
    // 0x31c208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31c208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c20c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x31c20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31c210: 0xc0c708e  jal         func_31C238
    ctx->pc = 0x31C210u;
    SET_GPR_U32(ctx, 31, 0x31C218u);
    ctx->pc = 0x31C214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C210u;
    // 0x31c214: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C238u, 0x31C210u, 0x31C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C218u;
label_31c218:
    // 0x31c218: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31c218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31c21c:
    // 0x31c21c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31c21cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c224: 0x3e00008  jr          $ra
    ctx->pc = 0x31C224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C224u;
        // 0x31c228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C22Cu;
    // 0x31c22c: 0x0  nop
    ctx->pc = 0x31c22cu;
    // NOP
    // 0x31c230: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x31c230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x31c234: 0x0  nop
    ctx->pc = 0x31c234u;
    // NOP
    ctx->pc = 0x31c238u;
}
