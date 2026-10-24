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

// Function: flush__7ostream
// Address: 0x389268 - 0x3892c0
void flush__7ostream_0x389268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("flush__7ostream_0x389268");
#endif

    switch (ctx->pc) {
        case 0x389268u: goto label_389268;
        case 0x38926cu: goto label_38926c;
        case 0x389270u: goto label_389270;
        case 0x389274u: goto label_389274;
        case 0x389278u: goto label_389278;
        case 0x38927cu: goto label_38927c;
        case 0x389280u: goto label_389280;
        case 0x389284u: goto label_389284;
        case 0x389288u: goto label_389288;
        case 0x38928cu: goto label_38928c;
        case 0x389290u: goto label_389290;
        case 0x389294u: goto label_389294;
        case 0x389298u: goto label_389298;
        case 0x38929cu: goto label_38929c;
        case 0x3892a0u: goto label_3892a0;
        case 0x3892a4u: goto label_3892a4;
        case 0x3892a8u: goto label_3892a8;
        case 0x3892acu: goto label_3892ac;
        case 0x3892b0u: goto label_3892b0;
        case 0x3892b4u: goto label_3892b4;
        case 0x3892b8u: goto label_3892b8;
        case 0x3892bcu: goto label_3892bc;
        default: break;
    }

    ctx->pc = 0x389268u;

label_389268:
    // 0x389268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38926c:
    // 0x38926c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38926cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_389270:
    // 0x389270: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x389270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_389274:
    // 0x389274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x389274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_389278:
    // 0x389278: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x389278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38927c:
    // 0x38927c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38927cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_389280:
    // 0x389280: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x389280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_389284:
    // 0x389284: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x389284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_389288:
    // 0x389288: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x389288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_38928c:
    // 0x38928c: 0x40f809  jalr        $v0
label_389290:
    if (ctx->pc == 0x389290u) {
        ctx->pc = 0x389290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38928Cu;
        // 0x389290: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389294u;
        goto label_389294;
    }
    ctx->pc = 0x38928Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x389294u);
        ctx->pc = 0x389290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38928Cu;
        // 0x389290: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38928Cu, 0x389294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389294u;
label_389294:
    // 0x389294: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_389298:
    if (ctx->pc == 0x389298u) {
        ctx->pc = 0x389298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389294u;
        // 0x389298: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38929Cu;
        goto label_38929c;
    }
    ctx->pc = 0x389294u;
    {
        const bool branch_taken_0x389294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389294u;
        // 0x389298: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389294) {
            ctx->pc = 0x3892B0u;
            goto label_3892b0;
        }
    }
    ctx->pc = 0x38929Cu;
label_38929c:
    // 0x38929c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3892a0:
    // 0x3892a0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x3892a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_3892a4:
    // 0x3892a4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3892a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3892a8:
    // 0x3892a8: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x3892a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_3892ac:
    // 0x3892ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3892acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3892b0:
    // 0x3892b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3892b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3892b4:
    // 0x3892b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3892b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3892b8:
    // 0x3892b8: 0x3e00008  jr          $ra
label_3892bc:
    if (ctx->pc == 0x3892BCu) {
        ctx->pc = 0x3892BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892B8u;
        // 0x3892bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3892C0u;
        goto label_fallthrough_0x3892b8;
    }
    ctx->pc = 0x3892B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3892BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892B8u;
        // 0x3892bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3892B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3892b8:
    ctx->pc = 0x3892C0u;
}
