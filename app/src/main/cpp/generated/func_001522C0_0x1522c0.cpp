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

// Function: func_001522C0
// Address: 0x1522c0 - 0x152340
void func_001522C0_0x1522c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001522C0_0x1522c0");
#endif

    switch (ctx->pc) {
        case 0x1522e0u: goto label_1522e0;
        default: break;
    }

    ctx->pc = 0x1522c0u;

    // 0x1522c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1522c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1522c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1522c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1522c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1522c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1522cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1522ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1522d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1522d4: 0x30d100ff  andi        $s1, $a2, 0xFF
    ctx->pc = 0x1522d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1522d8: 0xc05458c  jal         func_151630
    ctx->pc = 0x1522D8u;
    SET_GPR_U32(ctx, 31, 0x1522E0u);
    ctx->pc = 0x1522DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1522D8u;
    // 0x1522dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151630u, 0x1522D8u, 0x1522E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1522E0u;
label_1522e0:
    // 0x1522e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1522e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1522e4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1522E4u;
    {
        const bool branch_taken_0x1522e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1522E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522E4u;
        // 0x1522e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522e4) {
            ctx->pc = 0x1522FCu;
            goto label_1522fc;
        }
    }
    ctx->pc = 0x1522ECu;
    // 0x1522ec: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1522ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1522f0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1522f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1522f4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1522f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1522f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1522f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1522fc:
    // 0x1522fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1522fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152308: 0x3e00008  jr          $ra
    ctx->pc = 0x152308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152308u;
        // 0x15230c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152310u;
    // 0x152310: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x152310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x152314: 0x0  nop
    ctx->pc = 0x152314u;
    // NOP
    // 0x152318: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x152318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15231c: 0x0  nop
    ctx->pc = 0x15231cu;
    // NOP
    // 0x152320: 0x0  nop
    ctx->pc = 0x152320u;
    // NOP
    // 0x152324: 0x0  nop
    ctx->pc = 0x152324u;
    // NOP
    // 0x152328: 0x0  nop
    ctx->pc = 0x152328u;
    // NOP
    // 0x15232c: 0x0  nop
    ctx->pc = 0x15232cu;
    // NOP
    // 0x152330: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x152330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x152334: 0x0  nop
    ctx->pc = 0x152334u;
    // NOP
    // 0x152338: 0x0  nop
    ctx->pc = 0x152338u;
    // NOP
    // 0x15233c: 0x0  nop
    ctx->pc = 0x15233cu;
    // NOP
    ctx->pc = 0x152340u;
}
