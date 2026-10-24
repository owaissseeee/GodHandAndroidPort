#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: waitEmDead__FP7cEmWrapi
// Address: 0x79a9b0 - 0x79aa60
void waitEmDead__FP7cEmWrapi_0x79a9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmDead__FP7cEmWrapi_0x79a9b0");
#endif

    switch (ctx->pc) {
        case 0x79a9e0u: goto label_79a9e0;
        case 0x79a9f0u: goto label_79a9f0;
        case 0x79a9fcu: goto label_79a9fc;
        case 0x79aa20u: goto label_79aa20;
        case 0x79aa34u: goto label_79aa34;
        default: break;
    }

    ctx->pc = 0x79a9b0u;

    // 0x79a9b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79a9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79a9b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79a9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79a9b8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79a9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79a9bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x79a9bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9c0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x79a9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x79a9c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x79a9c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9c8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79a9cc: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x79a9ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x79a9d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79a9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79a9d4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79a9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79a9d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a9dc: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x79a9dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_79a9e0:
    // 0x79a9e0: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x79A9E0u;
    {
        const bool branch_taken_0x79a9e0 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x79A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9E0u;
        // 0x79a9e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9e0) {
            ctx->pc = 0x79AA18u;
            goto label_79aa18;
        }
    }
    ctx->pc = 0x79A9E8u;
    // 0x79a9e8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x79a9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9ec: 0x0  nop
    ctx->pc = 0x79a9ecu;
    // NOP
label_79a9f0:
    // 0x79a9f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9f4: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A9F4u;
    SET_GPR_U32(ctx, 31, 0x79A9FCu);
    ctx->pc = 0x79A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9F4u;
    // 0x79a9f8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A9F4u, 0x79A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9FCu;
label_79a9fc:
    // 0x79a9fc: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x79a9fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x79aa00: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x79aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79aa04: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79AA04u;
    {
        const bool branch_taken_0x79aa04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA04u;
        // 0x79aa08: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa04) {
            ctx->pc = 0x79A9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a9f0;
        }
    }
    ctx->pc = 0x79AA0Cu;
    // 0x79aa0c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x79aa0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79aa10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AA10u;
    {
        const bool branch_taken_0x79aa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA10u;
        // 0x79aa14: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa10) {
            ctx->pc = 0x79AA28u;
            goto label_79aa28;
        }
    }
    ctx->pc = 0x79AA18u;
label_79aa18:
    // 0x79aa18: 0xc1e6b18  jal         func_79AC60
    ctx->pc = 0x79AA18u;
    SET_GPR_U32(ctx, 31, 0x79AA20u);
    ctx->pc = 0x79AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AC60u, 0x79AA18u, 0x79AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA20u;
label_79aa20:
    // 0x79aa20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79AA20u;
    {
        const bool branch_taken_0x79aa20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA20u;
        // 0x79aa24: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa20) {
            ctx->pc = 0x79AA3Cu;
            goto label_79aa3c;
        }
    }
    ctx->pc = 0x79AA28u;
label_79aa28:
    // 0x79aa28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79aa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aa2c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AA2Cu;
    SET_GPR_U32(ctx, 31, 0x79AA34u);
    ctx->pc = 0x79AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA2Cu;
    // 0x79aa30: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AA2Cu, 0x79AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA34u;
label_79aa34:
    // 0x79aa34: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x79AA34u;
    {
        const bool branch_taken_0x79aa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA34u;
        // 0x79aa38: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa34) {
            ctx->pc = 0x79A9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a9e0;
        }
    }
    ctx->pc = 0x79AA3Cu;
label_79aa3c:
    // 0x79aa3c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79aa3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79aa40: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79aa40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79aa44: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79aa44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79aa48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79aa48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79aa4c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79aa4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79aa50: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x79aa50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79aa54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79aa54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79aa58: 0x3e00008  jr          $ra
    ctx->pc = 0x79AA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA58u;
        // 0x79aa5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AA60u;
}
} // namespace gh_r604
