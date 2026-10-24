#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: waitEmDead__FP7cEmWrapi
// Address: 0x799798 - 0x799848
void waitEmDead__FP7cEmWrapi_0x799798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmDead__FP7cEmWrapi_0x799798");
#endif

    switch (ctx->pc) {
        case 0x7997c8u: goto label_7997c8;
        case 0x7997d8u: goto label_7997d8;
        case 0x7997e4u: goto label_7997e4;
        case 0x799808u: goto label_799808;
        case 0x79981cu: goto label_79981c;
        default: break;
    }

    ctx->pc = 0x799798u;

    // 0x799798: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79979c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79979cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7997a0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7997a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7997a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x7997a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997a8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7997a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7997ac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x7997acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997b0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7997b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7997b4: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x7997b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x7997b8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7997b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7997bc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7997bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7997c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7997c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7997c4: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x7997c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_7997c8:
    // 0x7997c8: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x7997C8u;
    {
        const bool branch_taken_0x7997c8 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x7997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997C8u;
        // 0x7997cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997c8) {
            ctx->pc = 0x799800u;
            goto label_799800;
        }
    }
    ctx->pc = 0x7997D0u;
    // 0x7997d0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x7997d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997d4: 0x0  nop
    ctx->pc = 0x7997d4u;
    // NOP
label_7997d8:
    // 0x7997d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7997d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997dc: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7997DCu;
    SET_GPR_U32(ctx, 31, 0x7997E4u);
    ctx->pc = 0x7997E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997DCu;
    // 0x7997e0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7997DCu, 0x7997E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E4u;
label_7997e4:
    // 0x7997e4: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x7997e8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x7997ec: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7997ECu;
    {
        const bool branch_taken_0x7997ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x7997F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997ECu;
        // 0x7997f0: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997ec) {
            ctx->pc = 0x7997D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997d8;
        }
    }
    ctx->pc = 0x7997F4u;
    // 0x7997f4: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x7997f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x7997f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7997F8u;
    {
        const bool branch_taken_0x7997f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7997FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F8u;
        // 0x7997fc: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997f8) {
            ctx->pc = 0x799810u;
            goto label_799810;
        }
    }
    ctx->pc = 0x799800u;
label_799800:
    // 0x799800: 0xc1e6692  jal         func_799A48
    ctx->pc = 0x799800u;
    SET_GPR_U32(ctx, 31, 0x799808u);
    ctx->pc = 0x799A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799A48u, 0x799800u, 0x799808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799808u;
label_799808:
    // 0x799808: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799808u;
    {
        const bool branch_taken_0x799808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799808u;
        // 0x79980c: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799808) {
            ctx->pc = 0x799824u;
            goto label_799824;
        }
    }
    ctx->pc = 0x799810u;
label_799810:
    // 0x799810: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799814: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799814u;
    SET_GPR_U32(ctx, 31, 0x79981Cu);
    ctx->pc = 0x799818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799814u;
    // 0x799818: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799814u, 0x79981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79981Cu;
label_79981c:
    // 0x79981c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x79981Cu;
    {
        const bool branch_taken_0x79981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79981Cu;
        // 0x799820: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79981c) {
            ctx->pc = 0x7997C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997c8;
        }
    }
    ctx->pc = 0x799824u;
label_799824:
    // 0x799824: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x799824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799828: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x799828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79982c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79982cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799830: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x799830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799834: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x799834u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799838: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x799838u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79983c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79983cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799840: 0x3e00008  jr          $ra
    ctx->pc = 0x799840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799840u;
        // 0x799844: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799848u;
}
} // namespace gh_r603
