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

// Function: cEmWrap_setPos_2959B0
// Address: 0x2959b0 - 0x295a08
void cEmWrap_setPos_2959B0_0x2959b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_setPos_2959B0_0x2959b0");
#endif

    switch (ctx->pc) {
        case 0x2959b0u: goto label_2959b0;
        case 0x2959b4u: goto label_2959b4;
        case 0x2959b8u: goto label_2959b8;
        case 0x2959bcu: goto label_2959bc;
        case 0x2959c0u: goto label_2959c0;
        case 0x2959c4u: goto label_2959c4;
        case 0x2959c8u: goto label_2959c8;
        case 0x2959ccu: goto label_2959cc;
        case 0x2959d0u: goto label_2959d0;
        case 0x2959d4u: goto label_2959d4;
        case 0x2959d8u: goto label_2959d8;
        case 0x2959dcu: goto label_2959dc;
        case 0x2959e0u: goto label_2959e0;
        case 0x2959e4u: goto label_2959e4;
        case 0x2959e8u: goto label_2959e8;
        case 0x2959ecu: goto label_2959ec;
        case 0x2959f0u: goto label_2959f0;
        case 0x2959f4u: goto label_2959f4;
        case 0x2959f8u: goto label_2959f8;
        case 0x2959fcu: goto label_2959fc;
        case 0x295a00u: goto label_295a00;
        case 0x295a04u: goto label_295a04;
        default: break;
    }

    ctx->pc = 0x2959b0u;

label_2959b0:
    // 0x2959b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2959b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2959b4:
    // 0x2959b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2959b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2959b8:
    // 0x2959b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2959b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2959bc:
    // 0x2959bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2959bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2959c0:
    // 0x2959c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2959c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2959c4:
    // 0x2959c4: 0xc0a565e  jal         func_295978
label_2959c8:
    if (ctx->pc == 0x2959C8u) {
        ctx->pc = 0x2959C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959C4u;
        // 0x2959c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2959CCu;
        goto label_2959cc;
    }
    ctx->pc = 0x2959C4u;
    SET_GPR_U32(ctx, 31, 0x2959CCu);
    ctx->pc = 0x2959C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2959C4u;
    // 0x2959c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x2959C4u, 0x2959CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2959CCu;
label_2959cc:
    // 0x2959cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2959d0:
    if (ctx->pc == 0x2959D0u) {
        ctx->pc = 0x2959D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959CCu;
        // 0x2959d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2959D4u;
        goto label_2959d4;
    }
    ctx->pc = 0x2959CCu;
    {
        const bool branch_taken_0x2959cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2959D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959CCu;
        // 0x2959d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959cc) {
            ctx->pc = 0x2959F4u;
            goto label_2959f4;
        }
    }
    ctx->pc = 0x2959D4u;
label_2959d4:
    // 0x2959d4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2959d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2959d8:
    // 0x2959d8: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x2959d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_2959dc:
    // 0x2959dc: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x2959dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_2959e0:
    // 0x2959e0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x2959e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2959e4:
    // 0x2959e4: 0x60f809  jalr        $v1
label_2959e8:
    if (ctx->pc == 0x2959E8u) {
        ctx->pc = 0x2959E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959E4u;
        // 0x2959e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2959ECu;
        goto label_2959ec;
    }
    ctx->pc = 0x2959E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2959ECu);
        ctx->pc = 0x2959E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959E4u;
        // 0x2959e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2959E4u, 0x2959ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2959ECu;
label_2959ec:
    // 0x2959ec: 0xc0527ae  jal         func_149EB8
label_2959f0:
    if (ctx->pc == 0x2959F0u) {
        ctx->pc = 0x2959F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959ECu;
        // 0x2959f0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2959F4u;
        goto label_2959f4;
    }
    ctx->pc = 0x2959ECu;
    SET_GPR_U32(ctx, 31, 0x2959F4u);
    ctx->pc = 0x2959F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2959ECu;
    // 0x2959f0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x2959ECu, 0x2959F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2959F4u;
label_2959f4:
    // 0x2959f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2959f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2959f8:
    // 0x2959f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2959f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2959fc:
    // 0x2959fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2959fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_295a00:
    // 0x295a00: 0x3e00008  jr          $ra
label_295a04:
    if (ctx->pc == 0x295A04u) {
        ctx->pc = 0x295A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A00u;
        // 0x295a04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295A08u;
        goto label_fallthrough_0x295a00;
    }
    ctx->pc = 0x295A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A00u;
        // 0x295a04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x295a00:
    ctx->pc = 0x295A08u;
}
