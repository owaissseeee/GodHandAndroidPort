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
// Function: waitEmDead__FP7cEmWrapi
// Address: 0x799e40 - 0x799ef0
void waitEmDead__FP7cEmWrapi_0x799e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmDead__FP7cEmWrapi_0x799e40");
#endif

    switch (ctx->pc) {
        case 0x799e70u: goto label_799e70;
        case 0x799e80u: goto label_799e80;
        case 0x799e8cu: goto label_799e8c;
        case 0x799eb0u: goto label_799eb0;
        case 0x799ec4u: goto label_799ec4;
        default: break;
    }

    ctx->pc = 0x799e40u;

    // 0x799e40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x799e44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x799e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x799e48: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x799e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x799e4c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x799e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e50: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x799e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x799e54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x799e54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e58: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x799e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x799e5c: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x799e5cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x799e60: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x799e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x799e64: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x799e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x799e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799e6c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x799e6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_799e70:
    // 0x799e70: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x799E70u;
    {
        const bool branch_taken_0x799e70 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x799E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E70u;
        // 0x799e74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e70) {
            ctx->pc = 0x799EA8u;
            goto label_799ea8;
        }
    }
    ctx->pc = 0x799E78u;
    // 0x799e78: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x799e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e7c: 0x0  nop
    ctx->pc = 0x799e7cu;
    // NOP
label_799e80:
    // 0x799e80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e84: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799E84u;
    SET_GPR_U32(ctx, 31, 0x799E8Cu);
    ctx->pc = 0x799E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E84u;
    // 0x799e88: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799E84u, 0x799E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E8Cu;
label_799e8c:
    // 0x799e8c: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x799e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x799e90: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x799e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799e94: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x799E94u;
    {
        const bool branch_taken_0x799e94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E94u;
        // 0x799e98: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e94) {
            ctx->pc = 0x799E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e80;
        }
    }
    ctx->pc = 0x799E9Cu;
    // 0x799e9c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x799e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x799ea0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799EA0u;
    {
        const bool branch_taken_0x799ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EA0u;
        // 0x799ea4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ea0) {
            ctx->pc = 0x799EB8u;
            goto label_799eb8;
        }
    }
    ctx->pc = 0x799EA8u;
label_799ea8:
    // 0x799ea8: 0xc1e683c  jal         func_79A0F0
    ctx->pc = 0x799EA8u;
    SET_GPR_U32(ctx, 31, 0x799EB0u);
    ctx->pc = 0x79A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A0F0u, 0x799EA8u, 0x799EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB0u;
label_799eb0:
    // 0x799eb0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799EB0u;
    {
        const bool branch_taken_0x799eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EB0u;
        // 0x799eb4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799eb0) {
            ctx->pc = 0x799ECCu;
            goto label_799ecc;
        }
    }
    ctx->pc = 0x799EB8u;
label_799eb8:
    // 0x799eb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799ebc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799EBCu;
    SET_GPR_U32(ctx, 31, 0x799EC4u);
    ctx->pc = 0x799EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EBCu;
    // 0x799ec0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799EBCu, 0x799EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EC4u;
label_799ec4:
    // 0x799ec4: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x799EC4u;
    {
        const bool branch_taken_0x799ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EC4u;
        // 0x799ec8: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ec4) {
            ctx->pc = 0x799E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e70;
        }
    }
    ctx->pc = 0x799ECCu;
label_799ecc:
    // 0x799ecc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x799eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799ed0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x799ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799ed4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x799ed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799ed8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x799ed8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799edc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x799edcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799ee0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x799ee0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x799EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EE8u;
        // 0x799eec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799EF0u;
}
} // namespace gh_r606
