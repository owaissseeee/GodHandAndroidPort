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

// Function: func_001A37F0
// Address: 0x1a37f0 - 0x1a3860
void func_001A37F0_0x1a37f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A37F0_0x1a37f0");
#endif

    switch (ctx->pc) {
        case 0x1a3824u: goto label_1a3824;
        default: break;
    }

    ctx->pc = 0x1a37f0u;

    // 0x1a37f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a37f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a37f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a37f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a37f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a37f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a37fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a37fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3800: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3808: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a3808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a380c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a3810: 0x8c440600  lw          $a0, 0x600($v0)
    ctx->pc = 0x1a3810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1536)));
    // 0x1a3814: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3814u;
    {
        const bool branch_taken_0x1a3814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3814) {
            ctx->pc = 0x1A3818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3814u;
            // 0x1a3818: 0x102142  srl         $a0, $s0, 5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3828u;
            goto label_1a3828;
        }
    }
    ctx->pc = 0x1A381Cu;
    // 0x1a381c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1A381Cu;
    SET_GPR_U32(ctx, 31, 0x1A3824u);
    ctx->pc = 0x1A3820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A381Cu;
    // 0x1a3820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1A381Cu, 0x1A3824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3824u;
label_1a3824:
    // 0x1a3824: 0x102142  srl         $a0, $s0, 5
    ctx->pc = 0x1a3824u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_1a3828:
    // 0x1a3828: 0x26230d90  addiu       $v1, $s1, 0xD90
    ctx->pc = 0x1a3828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3472));
    // 0x1a382c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a382cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3830: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x1a3830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1a3834: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a3834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a3838: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a3838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a383c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a383cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3840: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x1a3840u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1a3844: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a3844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3848: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a3848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a384c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a384cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3854: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a3854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a3858: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3858u;
        // 0x1a385c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3860u;
}
