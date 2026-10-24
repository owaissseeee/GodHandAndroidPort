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

// Function: __swrite
// Address: 0x3a6de0 - 0x3a6e60
void ps2___swrite_0x3a6de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___swrite_0x3a6de0");
#endif

    switch (ctx->pc) {
        case 0x3a6e20u: goto label_3a6e20;
        case 0x3a6e40u: goto label_3a6e40;
        default: break;
    }

    ctx->pc = 0x3a6de0u;

    // 0x3a6de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a6de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a6de4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a6de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3a6de8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a6de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3a6dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a6decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6df0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3a6df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3a6df4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a6df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6df8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a6dfc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3a6dfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a6e00: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3a6e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3a6e04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A6E04u;
    {
        const bool branch_taken_0x3a6e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6E04u;
        // 0x3a6e08: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6e04) {
            ctx->pc = 0x3A6E20u;
            goto label_3a6e20;
        }
    }
    ctx->pc = 0x3A6E0Cu;
    // 0x3a6e0c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3a6e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3a6e10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a6e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e14: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x3a6e14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3a6e18: 0xc0eb802  jal         func_3AE008
    ctx->pc = 0x3A6E18u;
    SET_GPR_U32(ctx, 31, 0x3A6E20u);
    ctx->pc = 0x3A6E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6E18u;
    // 0x3a6e1c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE008u, 0x3A6E18u, 0x3A6E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6E20u;
label_3a6e20:
    // 0x3a6e20: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3a6e20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a6e24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3a6e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e28: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x3a6e28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3a6e2c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3a6e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e30: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3a6e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3a6e34: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x3a6e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x3a6e38: 0xc0eb84a  jal         func_3AE128
    ctx->pc = 0x3A6E38u;
    SET_GPR_U32(ctx, 31, 0x3A6E40u);
    ctx->pc = 0x3A6E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6E38u;
    // 0x3a6e3c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE128u, 0x3A6E38u, 0x3A6E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6E40u;
label_3a6e40:
    // 0x3a6e40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a6e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a6e44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a6e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a6e48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a6e48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3a6e4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a6e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a6e50: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3a6e50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6e58: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6E58u;
        // 0x3a6e5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6E60u;
}
