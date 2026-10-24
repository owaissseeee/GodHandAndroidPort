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

// Function: func_00306E38
// Address: 0x306e38 - 0x306ed8
void func_00306E38_0x306e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306E38_0x306e38");
#endif

    switch (ctx->pc) {
        case 0x306e68u: goto label_306e68;
        case 0x306e94u: goto label_306e94;
        case 0x306ea0u: goto label_306ea0;
        default: break;
    }

    ctx->pc = 0x306e38u;

    // 0x306e38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x306e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x306e3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x306e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x306e40: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x306e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x306e44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x306e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306e48: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x306e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x306e4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x306e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306e50: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x306e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x306e54: 0x26510300  addiu       $s1, $s2, 0x300
    ctx->pc = 0x306e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
    // 0x306e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306e5c: 0x24130384  addiu       $s3, $zero, 0x384
    ctx->pc = 0x306e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x306e60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x306e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x306e64: 0x0  nop
    ctx->pc = 0x306e64u;
    // NOP
label_306e68:
    // 0x306e68: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x306E68u;
    {
        const bool branch_taken_0x306e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x306E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E68u;
        // 0x306e6c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306e68) {
            ctx->pc = 0x306EA0u;
            goto label_306ea0;
        }
    }
    ctx->pc = 0x306E70u;
    // 0x306e70: 0x94620012  lhu         $v0, 0x12($v1)
    ctx->pc = 0x306e70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x306e74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x306e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306e78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x306e7c: 0xa4620012  sh          $v0, 0x12($v1)
    ctx->pc = 0x306e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x306e80: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x306e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x306e84: 0x14530006  bne         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x306E84u;
    {
        const bool branch_taken_0x306e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x306E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E84u;
        // 0x306e88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306e84) {
            ctx->pc = 0x306EA0u;
            goto label_306ea0;
        }
    }
    ctx->pc = 0x306E8Cu;
    // 0x306e8c: 0xc0c1bb6  jal         func_306ED8
    ctx->pc = 0x306E8Cu;
    SET_GPR_U32(ctx, 31, 0x306E94u);
    ctx->pc = 0x306ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306ED8u, 0x306E8Cu, 0x306E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E94u;
label_306e94:
    // 0x306e94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x306e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306e98: 0xc0c1bc4  jal         func_306F10
    ctx->pc = 0x306E98u;
    SET_GPR_U32(ctx, 31, 0x306EA0u);
    ctx->pc = 0x306E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306E98u;
    // 0x306e9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306F10u, 0x306E98u, 0x306EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306EA0u;
label_306ea0:
    // 0x306ea0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x306ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x306ea4: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x306ea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x306ea8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x306EA8u;
    {
        const bool branch_taken_0x306ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306ea8) {
            ctx->pc = 0x306EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306EA8u;
            // 0x306eac: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306e68;
        }
    }
    ctx->pc = 0x306EB0u;
    // 0x306eb0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x306eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x306eb4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x306eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x306eb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x306eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306ebc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x306ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x306EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EC4u;
        // 0x306ec8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306ECCu;
    // 0x306ecc: 0x0  nop
    ctx->pc = 0x306eccu;
    // NOP
    // 0x306ed0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x306ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x306ed4: 0x0  nop
    ctx->pc = 0x306ed4u;
    // NOP
    ctx->pc = 0x306ed8u;
}
