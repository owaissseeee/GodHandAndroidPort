#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r602_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r602
{
// Function: waitEmDead__FP7cEmWrapi
// Address: 0x7993d0 - 0x799480
void waitEmDead__FP7cEmWrapi_0x7993d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmDead__FP7cEmWrapi_0x7993d0");
#endif

    switch (ctx->pc) {
        case 0x799400u: goto label_799400;
        case 0x799410u: goto label_799410;
        case 0x79941cu: goto label_79941c;
        case 0x799440u: goto label_799440;
        case 0x799454u: goto label_799454;
        default: break;
    }

    ctx->pc = 0x7993d0u;

    // 0x7993d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7993d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7993d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7993d8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7993d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7993dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x7993dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7993e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7993e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x7993e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7993e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7993ec: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x7993f0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7993f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7993f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7993f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7993f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7993f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7993fc: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x7993fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_799400:
    // 0x799400: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x799400u;
    {
        const bool branch_taken_0x799400 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x799404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799400u;
        // 0x799404: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799400) {
            ctx->pc = 0x799438u;
            goto label_799438;
        }
    }
    ctx->pc = 0x799408u;
    // 0x799408: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x799408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79940c: 0x0  nop
    ctx->pc = 0x79940cu;
    // NOP
label_799410:
    // 0x799410: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799414: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799414u;
    SET_GPR_U32(ctx, 31, 0x79941Cu);
    ctx->pc = 0x799418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799414u;
    // 0x799418: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799414u, 0x79941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79941Cu;
label_79941c:
    // 0x79941c: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x799420: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799424: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x799424u;
    {
        const bool branch_taken_0x799424 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x799428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799424u;
        // 0x799428: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799424) {
            ctx->pc = 0x799410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799410;
        }
    }
    ctx->pc = 0x79942Cu;
    // 0x79942c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x79942cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x799430: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799430u;
    {
        const bool branch_taken_0x799430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799430u;
        // 0x799434: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799430) {
            ctx->pc = 0x799448u;
            goto label_799448;
        }
    }
    ctx->pc = 0x799438u;
label_799438:
    // 0x799438: 0xc1e65a0  jal         func_799680
    ctx->pc = 0x799438u;
    SET_GPR_U32(ctx, 31, 0x799440u);
    ctx->pc = 0x799680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799680u, 0x799438u, 0x799440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799440u;
label_799440:
    // 0x799440: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799440u;
    {
        const bool branch_taken_0x799440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799440u;
        // 0x799444: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799440) {
            ctx->pc = 0x79945Cu;
            goto label_79945c;
        }
    }
    ctx->pc = 0x799448u;
label_799448:
    // 0x799448: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79944c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79944Cu;
    SET_GPR_U32(ctx, 31, 0x799454u);
    ctx->pc = 0x799450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79944Cu;
    // 0x799450: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79944Cu, 0x799454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799454u;
label_799454:
    // 0x799454: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x799454u;
    {
        const bool branch_taken_0x799454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799454u;
        // 0x799458: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799454) {
            ctx->pc = 0x799400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799400;
        }
    }
    ctx->pc = 0x79945Cu;
label_79945c:
    // 0x79945c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79945cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799460: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x799460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799464: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x799464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799468: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x799468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79946c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79946cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799470: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x799470u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799478: 0x3e00008  jr          $ra
    ctx->pc = 0x799478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799478u;
        // 0x79947c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799480u;
}
} // namespace gh_r602
