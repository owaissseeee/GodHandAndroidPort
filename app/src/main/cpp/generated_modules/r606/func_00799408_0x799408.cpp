#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: func_00799408
// Address: 0x799408 - 0x7994a8
void func_00799408_0x799408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799408_0x799408");
#endif

    switch (ctx->pc) {
        case 0x799428u: goto label_799428;
        case 0x799438u: goto label_799438;
        case 0x79944cu: goto label_79944c;
        case 0x799460u: goto label_799460;
        case 0x799470u: goto label_799470;
        case 0x799478u: goto label_799478;
        case 0x799484u: goto label_799484;
        case 0x799490u: goto label_799490;
        default: break;
    }

    ctx->pc = 0x799408u;

    // 0x799408: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79940c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799410: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799414: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799418: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79941c: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x799420: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799420u;
    {
        const bool branch_taken_0x799420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799420u;
        // 0x799424: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799420) {
            ctx->pc = 0x799438u;
            goto label_799438;
        }
    }
    ctx->pc = 0x799428u;
label_799428:
    // 0x799428: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79942c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799430: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799430u;
    SET_GPR_U32(ctx, 31, 0x799438u);
    ctx->pc = 0x799434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799430u;
    // 0x799434: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799430u, 0x799438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799438u;
label_799438:
    // 0x799438: 0x2611ea60  addiu       $s1, $s0, -0x15A0
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79943c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799444: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799444u;
    SET_GPR_U32(ctx, 31, 0x79944Cu);
    ctx->pc = 0x799448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799444u;
    // 0x799448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799444u, 0x79944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79944Cu;
label_79944c:
    // 0x79944c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x79944Cu;
    {
        const bool branch_taken_0x79944c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79944Cu;
        // 0x799450: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79944c) {
            ctx->pc = 0x799428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799428;
        }
    }
    ctx->pc = 0x799454u;
    // 0x799454: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799458: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799458u;
    SET_GPR_U32(ctx, 31, 0x799460u);
    ctx->pc = 0x79945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799458u;
    // 0x79945c: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799458u, 0x799460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799460u;
label_799460:
    // 0x799460: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799460u;
    {
        const bool branch_taken_0x799460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799460u;
        // 0x799464: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799460) {
            ctx->pc = 0x799470u;
            goto label_799470;
        }
    }
    ctx->pc = 0x799468u;
    // 0x799468: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799468u;
    SET_GPR_U32(ctx, 31, 0x799470u);
    ctx->pc = 0x79946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799468u;
    // 0x79946c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799468u, 0x799470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799470u;
label_799470:
    // 0x799470: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799470u;
    SET_GPR_U32(ctx, 31, 0x799478u);
    ctx->pc = 0x799474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799470u;
    // 0x799474: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799470u, 0x799478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799478u;
label_799478:
    // 0x799478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79947c: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79947Cu;
    SET_GPR_U32(ctx, 31, 0x799484u);
    ctx->pc = 0x799480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79947Cu;
    // 0x799480: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79947Cu, 0x799484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799484u;
label_799484:
    // 0x799484: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799488: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799488u;
    SET_GPR_U32(ctx, 31, 0x799490u);
    ctx->pc = 0x79948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799488u;
    // 0x79948c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799488u, 0x799490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799490u;
label_799490:
    // 0x799490: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799494: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799498: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x799498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79949c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79949cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7994a0: 0x3e00008  jr          $ra
    ctx->pc = 0x7994A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7994A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A0u;
        // 0x7994a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7994A8u;
}
} // namespace gh_r606
