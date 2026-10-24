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

// Function: func_00173638
// Address: 0x173638 - 0x1736a8
void func_00173638_0x173638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00173638_0x173638");
#endif

    switch (ctx->pc) {
        case 0x17366cu: goto label_17366c;
        default: break;
    }

    ctx->pc = 0x173638u;

    // 0x173638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17363c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17363cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x173640: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173644: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x173644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173648: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x173648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17364c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17364cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173650: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x173650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x173654: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x173654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x173658: 0x8c440600  lw          $a0, 0x600($v0)
    ctx->pc = 0x173658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1536)));
    // 0x17365c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17365Cu;
    {
        const bool branch_taken_0x17365c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17365c) {
            ctx->pc = 0x173660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17365Cu;
            // 0x173660: 0x102142  srl         $a0, $s0, 5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173670u;
            goto label_173670;
        }
    }
    ctx->pc = 0x173664u;
    // 0x173664: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x173664u;
    SET_GPR_U32(ctx, 31, 0x17366Cu);
    ctx->pc = 0x173668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173664u;
    // 0x173668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x173664u, 0x17366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17366Cu;
label_17366c:
    // 0x17366c: 0x102142  srl         $a0, $s0, 5
    ctx->pc = 0x17366cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_173670:
    // 0x173670: 0x26230d90  addiu       $v1, $s1, 0xD90
    ctx->pc = 0x173670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3472));
    // 0x173674: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x173674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x173678: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x173678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x17367c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x17367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x173680: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x173680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x173684: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x173684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x173688: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x173688u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x17368c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17368cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173690: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x173690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x173694: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17369c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x17369cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1736a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1736A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1736A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736A0u;
        // 0x1736a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1736A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1736A8u;
}
