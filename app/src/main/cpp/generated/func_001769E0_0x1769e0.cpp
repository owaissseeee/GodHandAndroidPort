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

// Function: func_001769E0
// Address: 0x1769e0 - 0x176a50
void func_001769E0_0x1769e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001769E0_0x1769e0");
#endif

    switch (ctx->pc) {
        case 0x176a14u: goto label_176a14;
        default: break;
    }

    ctx->pc = 0x1769e0u;

    // 0x1769e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1769e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1769e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1769e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1769e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1769e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1769ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1769ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1769f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1769f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1769f8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1769f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1769fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1769fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x176a00: 0x8c440600  lw          $a0, 0x600($v0)
    ctx->pc = 0x176a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1536)));
    // 0x176a04: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x176A04u;
    {
        const bool branch_taken_0x176a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x176a04) {
            ctx->pc = 0x176A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176A04u;
            // 0x176a08: 0x102142  srl         $a0, $s0, 5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176A18u;
            goto label_176a18;
        }
    }
    ctx->pc = 0x176A0Cu;
    // 0x176a0c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x176A0Cu;
    SET_GPR_U32(ctx, 31, 0x176A14u);
    ctx->pc = 0x176A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176A0Cu;
    // 0x176a10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x176A0Cu, 0x176A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176A14u;
label_176a14:
    // 0x176a14: 0x102142  srl         $a0, $s0, 5
    ctx->pc = 0x176a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_176a18:
    // 0x176a18: 0x26230d30  addiu       $v1, $s1, 0xD30
    ctx->pc = 0x176a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
    // 0x176a1c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x176a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x176a20: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x176a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x176a24: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x176a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x176a28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x176a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x176a2c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x176a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x176a30: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x176a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x176a34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x176a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176a38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x176a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x176a3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176a44: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x176a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x176a48: 0x3e00008  jr          $ra
    ctx->pc = 0x176A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A48u;
        // 0x176a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176A50u;
}
