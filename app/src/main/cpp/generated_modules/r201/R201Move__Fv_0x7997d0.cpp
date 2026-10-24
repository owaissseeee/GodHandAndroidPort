#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: R201Move__Fv
// Address: 0x7997d0 - 0x7998a8
void R201Move__Fv_0x7997d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R201Move__Fv_0x7997d0");
#endif

    switch (ctx->pc) {
        case 0x799898u: goto label_799898;
        default: break;
    }

    ctx->pc = 0x7997d0u;

    // 0x7997d0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7997d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7997d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7997d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7997d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7997d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7997dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7997dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7997e0: 0x8c46bd80  lw          $a2, -0x4280($v0)
    ctx->pc = 0x7997e0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x79BD80u));
    // 0x7997e4: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7997e8: 0x14e3002b  bne         $a3, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x7997E8u;
    {
        const bool branch_taken_0x7997e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x7997ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E8u;
        // 0x7997ec: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997e8) {
            ctx->pc = 0x799898u;
            goto label_799898;
        }
    }
    ctx->pc = 0x7997F0u;
    // 0x7997f0: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x7997f4: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x7997f8: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7997fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799800: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799804: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x799804u;
    {
        const bool branch_taken_0x799804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799804u;
        // 0x799808: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799804) {
            ctx->pc = 0x799898u;
            goto label_799898;
        }
    }
    ctx->pc = 0x79980Cu;
    // 0x79980c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x79980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x799810: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799810u;
    {
        const bool branch_taken_0x799810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799810u;
        // 0x799814: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799810) {
            ctx->pc = 0x799828u;
            goto label_799828;
        }
    }
    ctx->pc = 0x799818u;
    // 0x799818: 0x8c4209d0  lw          $v0, 0x9D0($v0)
    ctx->pc = 0x799818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2512)));
    // 0x79981c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x79981cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x799820: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799820u;
    {
        const bool branch_taken_0x799820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799820u;
        // 0x799824: 0xe2180b  movn        $v1, $a3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799820) {
            ctx->pc = 0x79982Cu;
            goto label_79982c;
        }
    }
    ctx->pc = 0x799828u;
label_799828:
    // 0x799828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79982c:
    // 0x79982c: 0x8d02bd80  lw          $v0, -0x4280($t0)
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294950272)));
    // 0x799830: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x799834: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x799834u;
    {
        const bool branch_taken_0x799834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799834) {
            ctx->pc = 0x799838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799834u;
            // 0x799838: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799848u;
            goto label_799848;
        }
    }
    ctx->pc = 0x79983Cu;
    // 0x79983c: 0x8c4209d0  lw          $v0, 0x9D0($v0)
    ctx->pc = 0x79983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2512)));
    // 0x799840: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x799840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x799844: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799848:
    // 0x799848: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x799848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79984c: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x79984Cu;
    {
        const bool branch_taken_0x79984c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x799850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79984Cu;
        // 0x799850: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79984c) {
            ctx->pc = 0x79989Cu;
            goto label_79989c;
        }
    }
    ctx->pc = 0x799854u;
    // 0x799854: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799858: 0x8c43bc00  lw          $v1, -0x4400($v0)
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79BC00u));
    // 0x79985c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x79985cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799860: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x799864: 0x481000d  bgez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x799864u;
    {
        const bool branch_taken_0x799864 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x799868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799864u;
        // 0x799868: 0xac43bc00  sw          $v1, -0x4400($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294949888), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799864) {
            ctx->pc = 0x79989Cu;
            goto label_79989c;
        }
    }
    ctx->pc = 0x79986Cu;
    // 0x79986c: 0x8d238658  lw          $v1, -0x79A8($t1)
    ctx->pc = 0x79986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294936152)));
    // 0x799870: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x799870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x799874: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x799874u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x799878: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79987c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799880: 0x24a5b320  addiu       $a1, $a1, -0x4CE0
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947616));
    // 0x799884: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799888: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x79988c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79988cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799890: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799890u;
    SET_GPR_U32(ctx, 31, 0x799898u);
    ctx->pc = 0x799894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799890u;
    // 0x799894: 0x8ce42f84  lw          $a0, 0x2F84($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799890u, 0x799898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799898u;
label_799898:
    // 0x799898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79989c:
    // 0x79989c: 0x3e00008  jr          $ra
    ctx->pc = 0x79989Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79989Cu;
        // 0x7998a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79989Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998A4u;
    // 0x7998a4: 0x0  nop
    ctx->pc = 0x7998a4u;
    // NOP
    ctx->pc = 0x7998a8u;
}
} // namespace gh_r201
