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

// Function: scePadSetReqState
// Address: 0x397e18 - 0x397ed0
void scePadSetReqState_0x397e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadSetReqState_0x397e18");
#endif

    switch (ctx->pc) {
        case 0x397e74u: goto label_397e74;
        case 0x397e88u: goto label_397e88;
        case 0x397e98u: goto label_397e98;
        case 0x397eacu: goto label_397eac;
        default: break;
    }

    ctx->pc = 0x397e18u;

    // 0x397e18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x397e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x397e1c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x397e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x397e20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x397e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x397e24: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x397e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x397e28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x397e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x397e2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x397e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397e30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x397e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397e34: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x397e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x397e38: 0x72231818  mult1       $v1, $s1, $v1
    ctx->pc = 0x397e38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x397e3c: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x397e3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x397e40: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x397e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x397e44: 0x2442c110  addiu       $v0, $v0, -0x3EF0
    ctx->pc = 0x397e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951184));
    // 0x397e48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x397e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x397e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x397e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x397e50: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x397e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x397e54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x397e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x397e58: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x397e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x397e5c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x397E5Cu;
    {
        const bool branch_taken_0x397e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x397E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E5Cu;
        // 0x397e60: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397e5c) {
            ctx->pc = 0x397E6Cu;
            goto label_397e6c;
        }
    }
    ctx->pc = 0x397E64u;
    // 0x397e64: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x397E64u;
    {
        const bool branch_taken_0x397e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E64u;
        // 0x397e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397e64) {
            ctx->pc = 0x397EB0u;
            goto label_397eb0;
        }
    }
    ctx->pc = 0x397E6Cu;
label_397e6c:
    // 0x397e6c: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x397E6Cu;
    SET_GPR_U32(ctx, 31, 0x397E74u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x397E6Cu, 0x397E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397E74u;
label_397e74:
    // 0x397e74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x397e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397e78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x397e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x397e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397e80: 0xc0e5ef2  jal         func_397BC8
    ctx->pc = 0x397E80u;
    SET_GPR_U32(ctx, 31, 0x397E88u);
    ctx->pc = 0x397E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397E80u;
    // 0x397e84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397BC8u, 0x397E80u, 0x397E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397E88u;
label_397e88:
    // 0x397e88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x397e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397e8c: 0xa0530071  sb          $s3, 0x71($v0)
    ctx->pc = 0x397e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 19));
    // 0x397e90: 0xc0ec144  jal         func_3B0510
    ctx->pc = 0x397E90u;
    SET_GPR_U32(ctx, 31, 0x397E98u);
    ctx->pc = 0x397E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397E90u;
    // 0x397e94: 0x2485007f  addiu       $a1, $a0, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0510u, 0x397E90u, 0x397E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397E98u;
label_397e98:
    // 0x397e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x397e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397e9c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x397E9Cu;
    {
        const bool branch_taken_0x397e9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x397EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E9Cu;
        // 0x397ea0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397e9c) {
            ctx->pc = 0x397EB4u;
            goto label_397eb4;
        }
    }
    ctx->pc = 0x397EA4u;
    // 0x397ea4: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x397EA4u;
    SET_GPR_U32(ctx, 31, 0x397EACu);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x397EA4u, 0x397EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397EACu;
label_397eac:
    // 0x397eac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x397eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_397eb0:
    // 0x397eb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x397eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_397eb4:
    // 0x397eb4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x397eb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397eb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x397eb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397ebc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x397ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397ec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x397ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x397EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397EC4u;
        // 0x397ec8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397ECCu;
    // 0x397ecc: 0x0  nop
    ctx->pc = 0x397eccu;
    // NOP
    ctx->pc = 0x397ed0u;
}
