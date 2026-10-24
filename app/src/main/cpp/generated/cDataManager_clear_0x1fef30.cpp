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

// Function: cDataManager_clear
// Address: 0x1fef30 - 0x1fefd0
void cDataManager_clear_0x1fef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDataManager_clear_0x1fef30");
#endif

    switch (ctx->pc) {
        case 0x1fef68u: goto label_1fef68;
        case 0x1fef78u: goto label_1fef78;
        default: break;
    }

    ctx->pc = 0x1fef30u;

    // 0x1fef30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fef30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fef34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fef34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fef38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fef38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fef3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fef3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fef40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fef40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fef44: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1fef44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1fef48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fef48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fef4c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fef50: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1fef50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fef54: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fef54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fef58: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FEF58u;
    {
        const bool branch_taken_0x1fef58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF58u;
        // 0x1fef5c: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef58) {
            ctx->pc = 0x1FEF80u;
            goto label_1fef80;
        }
    }
    ctx->pc = 0x1FEF60u;
    // 0x1fef60: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1fef60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fef64: 0x2028818  mult        $s1, $s0, $v0
    ctx->pc = 0x1fef64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_1fef68:
    // 0x1fef68: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fef68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fef6c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fef6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fef70: 0xc07fd12  jal         func_1FF448
    ctx->pc = 0x1FEF70u;
    SET_GPR_U32(ctx, 31, 0x1FEF78u);
    ctx->pc = 0x1FEF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEF70u;
    // 0x1fef74: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF448u, 0x1FEF70u, 0x1FEF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEF78u;
label_1fef78:
    // 0x1fef78: 0x1613fffb  bne         $s0, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FEF78u;
    {
        const bool branch_taken_0x1fef78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x1FEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF78u;
        // 0x1fef7c: 0x2631ffa4  addiu       $s1, $s1, -0x5C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef78) {
            ctx->pc = 0x1FEF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fef68;
        }
    }
    ctx->pc = 0x1FEF80u;
label_1fef80:
    // 0x1fef80: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fef80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fef84: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fef84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fef88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fef88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fef8c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1fef8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fef90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fef90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fef94: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF94u;
        // 0x1fef98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEF9Cu;
    // 0x1fef9c: 0x0  nop
    ctx->pc = 0x1fef9cu;
    // NOP
    // 0x1fefa0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fefa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fefa4: 0x0  nop
    ctx->pc = 0x1fefa4u;
    // NOP
    // 0x1fefa8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1fefa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fefac: 0x0  nop
    ctx->pc = 0x1fefacu;
    // NOP
    // 0x1fefb0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1fefb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fefb4: 0x0  nop
    ctx->pc = 0x1fefb4u;
    // NOP
    // 0x1fefb8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1fefb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fefbc: 0x0  nop
    ctx->pc = 0x1fefbcu;
    // NOP
    // 0x1fefc0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1fefc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fefc4: 0x0  nop
    ctx->pc = 0x1fefc4u;
    // NOP
    // 0x1fefc8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fefc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fefcc: 0x0  nop
    ctx->pc = 0x1fefccu;
    // NOP
    ctx->pc = 0x1fefd0u;
}
