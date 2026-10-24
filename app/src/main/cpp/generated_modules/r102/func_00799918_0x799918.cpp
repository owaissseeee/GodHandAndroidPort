#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_00799918
// Address: 0x799918 - 0x7999b8
void func_00799918_0x799918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799918_0x799918");
#endif

    switch (ctx->pc) {
        case 0x799944u: goto label_799944;
        case 0x799958u: goto label_799958;
        case 0x799964u: goto label_799964;
        case 0x799970u: goto label_799970;
        case 0x79998cu: goto label_79998c;
        case 0x799998u: goto label_799998;
        default: break;
    }

    ctx->pc = 0x799918u;

    // 0x799918: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79991c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79991cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799920: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799924: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799924u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799928: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79992c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79992cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799930: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x799934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799938: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799938u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79993c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79993Cu;
    SET_GPR_U32(ctx, 31, 0x799944u);
    ctx->pc = 0x799940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79993Cu;
    // 0x799940: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79993Cu, 0x799944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799944u;
label_799944:
    // 0x799944: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799944u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799948: 0x3c13005d  lui         $s3, 0x5D
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)93 << 16));
    // 0x79994c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79994Cu;
    {
        const bool branch_taken_0x79994c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79994Cu;
        // 0x799950: 0x3c12007a  lui         $s2, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79994c) {
            ctx->pc = 0x799964u;
            goto label_799964;
        }
    }
    ctx->pc = 0x799954u;
    // 0x799954: 0x0  nop
    ctx->pc = 0x799954u;
    // NOP
label_799958:
    // 0x799958: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79995c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79995Cu;
    SET_GPR_U32(ctx, 31, 0x799964u);
    ctx->pc = 0x799960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79995Cu;
    // 0x799960: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79995Cu, 0x799964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799964u;
label_799964:
    // 0x799964: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799968: 0xc0b145a  jal         func_2C5168
    ctx->pc = 0x799968u;
    SET_GPR_U32(ctx, 31, 0x799970u);
    ctx->pc = 0x79996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799968u;
    // 0x79996c: 0x2625bf20  addiu       $a1, $s1, -0x40E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5168u, 0x799968u, 0x799970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799970u;
label_799970:
    // 0x799970: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799974: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799974u;
    {
        const bool branch_taken_0x799974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799974u;
        // 0x799978: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799974) {
            ctx->pc = 0x799958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799958;
        }
    }
    ctx->pc = 0x79997Cu;
    // 0x79997c: 0x2664ae50  addiu       $a0, $s3, -0x51B0
    ctx->pc = 0x79997cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946384));
    // 0x799980: 0x2645bf28  addiu       $a1, $s2, -0x40D8
    ctx->pc = 0x799980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950696));
    // 0x799984: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799984u;
    SET_GPR_U32(ctx, 31, 0x79998Cu);
    ctx->pc = 0x799988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799984u;
    // 0x799988: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799984u, 0x79998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79998Cu;
label_79998c:
    // 0x79998c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799990: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799990u;
    SET_GPR_U32(ctx, 31, 0x799998u);
    ctx->pc = 0x799994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799990u;
    // 0x799994: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799990u, 0x799998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799998u;
label_799998:
    // 0x799998: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79999c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79999cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7999a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7999a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7999a4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7999a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7999a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7999a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7999ac: 0x3e00008  jr          $ra
    ctx->pc = 0x7999ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7999B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ACu;
        // 0x7999b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7999B4u;
    // 0x7999b4: 0x0  nop
    ctx->pc = 0x7999b4u;
    // NOP
    ctx->pc = 0x7999b8u;
}
} // namespace gh_r102
