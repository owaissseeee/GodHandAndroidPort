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

// Function: cEmWrap_SetEscPos
// Address: 0x2961d0 - 0x296230
void cEmWrap_SetEscPos_0x2961d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_SetEscPos_0x2961d0");
#endif

    switch (ctx->pc) {
        case 0x2961ecu: goto label_2961ec;
        case 0x296204u: goto label_296204;
        case 0x296218u: goto label_296218;
        default: break;
    }

    ctx->pc = 0x2961d0u;

    // 0x2961d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2961d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2961d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2961d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2961d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2961d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2961dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2961dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2961e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2961e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2961e4: 0xc0a565e  jal         func_295978
    ctx->pc = 0x2961E4u;
    SET_GPR_U32(ctx, 31, 0x2961ECu);
    ctx->pc = 0x2961E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2961E4u;
    // 0x2961e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x2961E4u, 0x2961ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2961ECu;
label_2961ec:
    // 0x2961ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2961ECu;
    {
        const bool branch_taken_0x2961ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2961F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2961ECu;
        // 0x2961f0: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2961ec) {
            ctx->pc = 0x296218u;
            goto label_296218;
        }
    }
    ctx->pc = 0x2961F4u;
    // 0x2961f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2961f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2961f8: 0x2484a878  addiu       $a0, $a0, -0x5788
    ctx->pc = 0x2961f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944888));
    // 0x2961fc: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x2961FCu;
    SET_GPR_U32(ctx, 31, 0x296204u);
    ctx->pc = 0x296200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2961FCu;
    // 0x296200: 0x8c4504ac  lw          $a1, 0x4AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x2961FCu, 0x296204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296204u;
label_296204:
    // 0x296204: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x296204u;
    {
        const bool branch_taken_0x296204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296204) {
            ctx->pc = 0x296208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296204u;
            // 0x296208: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29621Cu;
            goto label_29621c;
        }
    }
    ctx->pc = 0x29620Cu;
    // 0x29620c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x29620cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x296210: 0xc0a240e  jal         func_289038
    ctx->pc = 0x296210u;
    SET_GPR_U32(ctx, 31, 0x296218u);
    ctx->pc = 0x296214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296210u;
    // 0x296214: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289038u, 0x296210u, 0x296218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296218u;
label_296218:
    // 0x296218: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x296218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29621c:
    // 0x29621c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29621cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296224: 0x3e00008  jr          $ra
    ctx->pc = 0x296224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296224u;
        // 0x296228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29622Cu;
    // 0x29622c: 0x0  nop
    ctx->pc = 0x29622cu;
    // NOP
    ctx->pc = 0x296230u;
}
