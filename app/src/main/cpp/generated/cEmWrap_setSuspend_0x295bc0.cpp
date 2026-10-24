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

// Function: cEmWrap_setSuspend
// Address: 0x295bc0 - 0x295c10
void cEmWrap_setSuspend_0x295bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_setSuspend_0x295bc0");
#endif

    switch (ctx->pc) {
        case 0x295bc0u: goto label_295bc0;
        case 0x295bc4u: goto label_295bc4;
        case 0x295bc8u: goto label_295bc8;
        case 0x295bccu: goto label_295bcc;
        case 0x295bd0u: goto label_295bd0;
        case 0x295bd4u: goto label_295bd4;
        case 0x295bd8u: goto label_295bd8;
        case 0x295bdcu: goto label_295bdc;
        case 0x295be0u: goto label_295be0;
        case 0x295be4u: goto label_295be4;
        case 0x295be8u: goto label_295be8;
        case 0x295becu: goto label_295bec;
        case 0x295bf0u: goto label_295bf0;
        case 0x295bf4u: goto label_295bf4;
        case 0x295bf8u: goto label_295bf8;
        case 0x295bfcu: goto label_295bfc;
        case 0x295c00u: goto label_295c00;
        case 0x295c04u: goto label_295c04;
        case 0x295c08u: goto label_295c08;
        case 0x295c0cu: goto label_295c0c;
        default: break;
    }

    ctx->pc = 0x295bc0u;

label_295bc0:
    // 0x295bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x295bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_295bc4:
    // 0x295bc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x295bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_295bc8:
    // 0x295bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x295bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_295bcc:
    // 0x295bcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x295bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_295bd0:
    // 0x295bd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_295bd4:
    // 0x295bd4: 0xc0a565e  jal         func_295978
label_295bd8:
    if (ctx->pc == 0x295BD8u) {
        ctx->pc = 0x295BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BD4u;
        // 0x295bd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295BDCu;
        goto label_295bdc;
    }
    ctx->pc = 0x295BD4u;
    SET_GPR_U32(ctx, 31, 0x295BDCu);
    ctx->pc = 0x295BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295BD4u;
    // 0x295bd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x295BD4u, 0x295BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295BDCu;
label_295bdc:
    // 0x295bdc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_295be0:
    if (ctx->pc == 0x295BE0u) {
        ctx->pc = 0x295BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BDCu;
        // 0x295be0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295BE4u;
        goto label_295be4;
    }
    ctx->pc = 0x295BDCu;
    {
        const bool branch_taken_0x295bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BDCu;
        // 0x295be0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295bdc) {
            ctx->pc = 0x295BFCu;
            goto label_295bfc;
        }
    }
    ctx->pc = 0x295BE4u;
label_295be4:
    // 0x295be4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x295be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_295be8:
    // 0x295be8: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x295be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_295bec:
    // 0x295bec: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x295becu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_295bf0:
    // 0x295bf0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x295bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_295bf4:
    // 0x295bf4: 0x60f809  jalr        $v1
label_295bf8:
    if (ctx->pc == 0x295BF8u) {
        ctx->pc = 0x295BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BF4u;
        // 0x295bf8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295BFCu;
        goto label_295bfc;
    }
    ctx->pc = 0x295BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295BFCu);
        ctx->pc = 0x295BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BF4u;
        // 0x295bf8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295BF4u, 0x295BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x295BFCu;
label_295bfc:
    // 0x295bfc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x295bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_295c00:
    // 0x295c00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x295c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_295c04:
    // 0x295c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_295c08:
    // 0x295c08: 0x3e00008  jr          $ra
label_295c0c:
    if (ctx->pc == 0x295C0Cu) {
        ctx->pc = 0x295C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C08u;
        // 0x295c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295C10u;
        goto label_fallthrough_0x295c08;
    }
    ctx->pc = 0x295C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C08u;
        // 0x295c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x295c08:
    ctx->pc = 0x295C10u;
}
