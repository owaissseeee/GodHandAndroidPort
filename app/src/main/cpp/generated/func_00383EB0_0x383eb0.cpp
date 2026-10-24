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

// Function: func_00383EB0
// Address: 0x383eb0 - 0x383f50
void func_00383EB0_0x383eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00383EB0_0x383eb0");
#endif

    switch (ctx->pc) {
        case 0x383f00u: goto label_383f00;
        case 0x383f3cu: goto label_383f3c;
        default: break;
    }

    ctx->pc = 0x383eb0u;

    // 0x383eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x383eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x383eb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x383eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x383eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x383eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x383ebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383ec0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x383ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383ec4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x383ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x383ec8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x383ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x383ecc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x383ECCu;
    {
        const bool branch_taken_0x383ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383ECCu;
        // 0x383ed0: 0x249003a4  addiu       $s0, $a0, 0x3A4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 932));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ecc) {
            ctx->pc = 0x383F00u;
            goto label_383f00;
        }
    }
    ctx->pc = 0x383ED4u;
    // 0x383ed4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x383ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x383ed8: 0x2862fff2  slti        $v0, $v1, -0xE
    ctx->pc = 0x383ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967282) ? 1 : 0);
    // 0x383edc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x383EDCu;
    {
        const bool branch_taken_0x383edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383EDCu;
        // 0x383ee0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383edc) {
            ctx->pc = 0x383EE8u;
            goto label_383ee8;
        }
    }
    ctx->pc = 0x383EE4u;
    // 0x383ee4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x383ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_383ee8:
    // 0x383ee8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x383ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x383eec: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x383eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x383ef0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x383EF0u;
    {
        const bool branch_taken_0x383ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x383ef0) {
            ctx->pc = 0x383EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383EF0u;
            // 0x383ef4: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383F04u;
            goto label_383f04;
        }
    }
    ctx->pc = 0x383EF8u;
    // 0x383ef8: 0xc0caa30  jal         func_32A8C0
    ctx->pc = 0x383EF8u;
    SET_GPR_U32(ctx, 31, 0x383F00u);
    ctx->pc = 0x383EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383EF8u;
    // 0x383efc: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A8C0u, 0x383EF8u, 0x383F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383F00u;
label_383f00:
    // 0x383f00: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x383f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_383f04:
    // 0x383f04: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x383f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x383f08: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x383F08u;
    {
        const bool branch_taken_0x383f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383f08) {
            ctx->pc = 0x383F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383F08u;
            // 0x383f0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383F40u;
            goto label_383f40;
        }
    }
    ctx->pc = 0x383F10u;
    // 0x383f10: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x383f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x383f14: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x383f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x383f18: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x383F18u;
    {
        const bool branch_taken_0x383f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383F18u;
        // 0x383f1c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383f18) {
            ctx->pc = 0x383F24u;
            goto label_383f24;
        }
    }
    ctx->pc = 0x383F20u;
    // 0x383f20: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x383f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_383f24:
    // 0x383f24: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x383f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x383f28: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x383f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x383f2c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x383F2Cu;
    {
        const bool branch_taken_0x383f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x383f2c) {
            ctx->pc = 0x383F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383F2Cu;
            // 0x383f30: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383F40u;
            goto label_383f40;
        }
    }
    ctx->pc = 0x383F34u;
    // 0x383f34: 0xc0caa30  jal         func_32A8C0
    ctx->pc = 0x383F34u;
    SET_GPR_U32(ctx, 31, 0x383F3Cu);
    ctx->pc = 0x383F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383F34u;
    // 0x383f38: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A8C0u, 0x383F34u, 0x383F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383F3Cu;
label_383f3c:
    // 0x383f3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x383f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_383f40:
    // 0x383f40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x383f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383f48: 0x3e00008  jr          $ra
    ctx->pc = 0x383F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383F48u;
        // 0x383f4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383F50u;
}
