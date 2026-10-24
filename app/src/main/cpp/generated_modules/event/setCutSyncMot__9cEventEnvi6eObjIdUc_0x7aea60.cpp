#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: setCutSyncMot__9cEventEnvi6eObjIdUc
// Address: 0x7aea60 - 0x7aeaf8
void setCutSyncMot__9cEventEnvi6eObjIdUc_0x7aea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setCutSyncMot__9cEventEnvi6eObjIdUc_0x7aea60");
#endif

    switch (ctx->pc) {
        case 0x7aea88u: goto label_7aea88;
        default: break;
    }

    ctx->pc = 0x7aea60u;

    // 0x7aea60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7aea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7aea64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7aea64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7aea68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7aea68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7aea6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7aea6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aea70: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7aea70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7aea74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7aea74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aea78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7aea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7aea7c: 0x30f200ff  andi        $s2, $a3, 0xFF
    ctx->pc = 0x7aea7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x7aea80: 0xc1eba7e  jal         func_7AE9F8
    ctx->pc = 0x7AEA80u;
    SET_GPR_U32(ctx, 31, 0x7AEA88u);
    ctx->pc = 0x7AEA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AEA80u;
    // 0x7aea84: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE9F8u, 0x7AEA80u, 0x7AEA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AEA88u;
label_7aea88:
    // 0x7aea88: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x7aea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7aea8c: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x7aea8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x7aea90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7aea90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aea94: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x7aea94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x7aea98: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x7aea98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7aea9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x7aea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7aeaa0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x7aeaa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x7aeaa4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x7AEAA4u;
    {
        const bool branch_taken_0x7aeaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7aeaa4) {
            ctx->pc = 0x7AEAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AEAA4u;
            // 0x7aeaa8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AEAE4u;
            goto label_7aeae4;
        }
    }
    ctx->pc = 0x7AEAACu;
    // 0x7aeaac: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7AEAACu;
    {
        const bool branch_taken_0x7aeaac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEAACu;
        // 0x7aeab0: 0x90620005  lbu         $v0, 0x5($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aeaac) {
            ctx->pc = 0x7AEAC0u;
            goto label_7aeac0;
        }
    }
    ctx->pc = 0x7AEAB4u;
    // 0x7aeab4: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x7aeab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x7aeab8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7AEAB8u;
    {
        const bool branch_taken_0x7aeab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEAB8u;
        // 0x7aeabc: 0xa0620005  sb          $v0, 0x5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aeab8) {
            ctx->pc = 0x7AEAE0u;
            goto label_7aeae0;
        }
    }
    ctx->pc = 0x7AEAC0u;
label_7aeac0:
    // 0x7aeac0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7aeac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x7aeac4: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x7aeac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x7aeac8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x7aeac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7aeacc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x7aeaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x7aead0: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x7aead0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x7aead4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7aead4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7aead8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x7aead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x7aeadc: 0xa0520004  sb          $s2, 0x4($v0)
    ctx->pc = 0x7aeadcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 18));
label_7aeae0:
    // 0x7aeae0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7aeae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7aeae4:
    // 0x7aeae4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7aeae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7aeae8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7aeae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7aeaec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7aeaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7aeaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x7AEAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEAF0u;
        // 0x7aeaf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AEAF8u;
}
} // namespace gh_event
