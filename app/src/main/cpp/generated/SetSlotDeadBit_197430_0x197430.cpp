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

// Function: SetSlotDeadBit_197430
// Address: 0x197430 - 0x1974a0
void SetSlotDeadBit_197430_0x197430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSlotDeadBit_197430_0x197430");
#endif

    switch (ctx->pc) {
        case 0x197464u: goto label_197464;
        default: break;
    }

    ctx->pc = 0x197430u;

    // 0x197430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x197434: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x197434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x197438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19743c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19743cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197440: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x197440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197448: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x197448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19744c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x197450: 0x8c440600  lw          $a0, 0x600($v0)
    ctx->pc = 0x197450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1536)));
    // 0x197454: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x197454u;
    {
        const bool branch_taken_0x197454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x197454) {
            ctx->pc = 0x197458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197454u;
            // 0x197458: 0x102142  srl         $a0, $s0, 5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197468u;
            goto label_197468;
        }
    }
    ctx->pc = 0x19745Cu;
    // 0x19745c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x19745Cu;
    SET_GPR_U32(ctx, 31, 0x197464u);
    ctx->pc = 0x197460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19745Cu;
    // 0x197460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x19745Cu, 0x197464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197464u;
label_197464:
    // 0x197464: 0x102142  srl         $a0, $s0, 5
    ctx->pc = 0x197464u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_197468:
    // 0x197468: 0x262309d0  addiu       $v1, $s1, 0x9D0
    ctx->pc = 0x197468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2512));
    // 0x19746c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19746cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x197470: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x197470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x197474: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x197474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x197478: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x197478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19747c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19747cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197480: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x197480u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x197484: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x197484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197488: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x197488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19748c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19748cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197494: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x197494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x197498: 0x3e00008  jr          $ra
    ctx->pc = 0x197498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197498u;
        // 0x19749c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1974A0u;
}
