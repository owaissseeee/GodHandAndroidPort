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

// Function: func_0034FB70
// Address: 0x34fb70 - 0x34fc20
void func_0034FB70_0x34fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034FB70_0x34fb70");
#endif

    switch (ctx->pc) {
        case 0x34fb84u: goto label_34fb84;
        default: break;
    }

    ctx->pc = 0x34fb70u;

    // 0x34fb70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34fb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34fb74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34fb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34fb78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34fb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34fb7c: 0xc0d403a  jal         func_3500E8
    ctx->pc = 0x34FB7Cu;
    SET_GPR_U32(ctx, 31, 0x34FB84u);
    ctx->pc = 0x34FB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FB7Cu;
    // 0x34fb80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3500E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3500E8u, 0x34FB7Cu, 0x34FB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FB84u;
label_34fb84:
    // 0x34fb84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34fb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fb88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34fb8c: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x34fb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x34fb90: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x34FB90u;
    {
        const bool branch_taken_0x34fb90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB90u;
        // 0x34fb94: 0x26070d30  addiu       $a3, $s0, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb90) {
            ctx->pc = 0x34FC10u;
            goto label_34fc10;
        }
    }
    ctx->pc = 0x34FB98u;
    // 0x34fb98: 0x8e061f7c  lw          $a2, 0x1F7C($s0)
    ctx->pc = 0x34fb98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8060)));
    // 0x34fb9c: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x34fb9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x34fba0: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x34FBA0u;
    {
        const bool branch_taken_0x34fba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x34FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FBA0u;
        // 0x34fba4: 0x2608090c  addiu       $t0, $s0, 0x90C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 2316));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fba0) {
            ctx->pc = 0x34FC10u;
            goto label_34fc10;
        }
    }
    ctx->pc = 0x34FBA8u;
    // 0x34fba8: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x34fba8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x34fbac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x34fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34fbb0: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x34fbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x34fbb4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x34FBB4u;
    {
        const bool branch_taken_0x34fbb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FBB4u;
        // 0x34fbb8: 0xfce20158  sd          $v0, 0x158($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 344), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fbb4) {
            ctx->pc = 0x34FC10u;
            goto label_34fc10;
        }
    }
    ctx->pc = 0x34FBBCu;
    // 0x34fbbc: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x34fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x34fbc0: 0xdce40150  ld          $a0, 0x150($a3)
    ctx->pc = 0x34fbc0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x34fbc4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x34fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x34fbc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34fbcc: 0xfca40018  sd          $a0, 0x18($a1)
    ctx->pc = 0x34fbccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x34fbd0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x34fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x34fbd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34fbd8: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x34fbd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x34fbdc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x34fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34fbe0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x34fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x34fbe4: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x34fbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x34fbe8: 0x8d04001c  lw          $a0, 0x1C($t0)
    ctx->pc = 0x34fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x34fbec: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x34fbecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x34fbf0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x34fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x34fbf4: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x34fbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x34fbf8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x34fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x34fbfc: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x34fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x34fc00: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x34fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x34fc04: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x34fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x34fc08: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x34fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x34fc0c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x34fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_34fc10:
    // 0x34fc10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34fc10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fc14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34fc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34fc18: 0x3e00008  jr          $ra
    ctx->pc = 0x34FC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FC18u;
        // 0x34fc1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FC20u;
}
