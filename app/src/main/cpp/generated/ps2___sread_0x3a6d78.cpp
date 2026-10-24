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

// Function: __sread
// Address: 0x3a6d78 - 0x3a6de0
void ps2___sread_0x3a6d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sread_0x3a6d78");
#endif

    switch (ctx->pc) {
        case 0x3a6da0u: goto label_3a6da0;
        default: break;
    }

    ctx->pc = 0x3a6d78u;

    // 0x3a6d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a6d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a6d7c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a6d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6d80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a6d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a6d84: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3a6d84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a6d8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a6d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6d90: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a6d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6d94: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3a6d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3a6d98: 0xc0eb81a  jal         func_3AE068
    ctx->pc = 0x3A6D98u;
    SET_GPR_U32(ctx, 31, 0x3A6DA0u);
    ctx->pc = 0x3A6D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6D98u;
    // 0x3a6d9c: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE068u, 0x3A6D98u, 0x3A6DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6DA0u;
label_3a6da0:
    // 0x3a6da0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3a6da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a6da4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3a6da4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3a6da8: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A6DA8u;
    {
        const bool branch_taken_0x3a6da8 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x3a6da8) {
            ctx->pc = 0x3A6DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6DA8u;
            // 0x3a6dac: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6DC0u;
            goto label_3a6dc0;
        }
    }
    ctx->pc = 0x3A6DB0u;
    // 0x3a6db0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x3a6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3a6db4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a6db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a6db8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6DB8u;
    {
        const bool branch_taken_0x3a6db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6DB8u;
        // 0x3a6dbc: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6db8) {
            ctx->pc = 0x3A6DC8u;
            goto label_3a6dc8;
        }
    }
    ctx->pc = 0x3A6DC0u;
label_3a6dc0:
    // 0x3a6dc0: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x3a6dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x3a6dc4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3a6dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_3a6dc8:
    // 0x3a6dc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a6dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6dcc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3a6dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6DD4u;
        // 0x3a6dd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6DDCu;
    // 0x3a6ddc: 0x0  nop
    ctx->pc = 0x3a6ddcu;
    // NOP
    ctx->pc = 0x3a6de0u;
}
