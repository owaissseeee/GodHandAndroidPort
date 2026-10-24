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

// Function: func_001DBCF8
// Address: 0x1dbcf8 - 0x1dbd50
void func_001DBCF8_0x1dbcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DBCF8_0x1dbcf8");
#endif

    switch (ctx->pc) {
        case 0x1dbd24u: goto label_1dbd24;
        default: break;
    }

    ctx->pc = 0x1dbcf8u;

    // 0x1dbcf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbcfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dbcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dbd00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd08: 0x92023025  lbu         $v0, 0x3025($s0)
    ctx->pc = 0x1dbd08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
    // 0x1dbd0c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1DBD0Cu;
    {
        const bool branch_taken_0x1dbd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbd0c) {
            ctx->pc = 0x1DBD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBD0Cu;
            // 0x1dbd10: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBD40u;
            goto label_1dbd40;
        }
    }
    ctx->pc = 0x1DBD14u;
    // 0x1dbd14: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1dbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1dbd18: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x1dbd18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x1dbd1c: 0xc050ea4  jal         func_143A90
    ctx->pc = 0x1DBD1Cu;
    SET_GPR_U32(ctx, 31, 0x1DBD24u);
    ctx->pc = 0x1DBD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD1Cu;
    // 0x1dbd20: 0x24841ae0  addiu       $a0, $a0, 0x1AE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143A90u, 0x1DBD1Cu, 0x1DBD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD24u;
label_1dbd24:
    // 0x1dbd24: 0x8e023020  lw          $v0, 0x3020($s0)
    ctx->pc = 0x1dbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12320)));
    // 0x1dbd28: 0x92033025  lbu         $v1, 0x3025($s0)
    ctx->pc = 0x1dbd28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
    // 0x1dbd2c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1dbd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1dbd30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dbd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1dbd34: 0xae023020  sw          $v0, 0x3020($s0)
    ctx->pc = 0x1dbd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12320), GPR_U32(ctx, 2));
    // 0x1dbd38: 0xa2033025  sb          $v1, 0x3025($s0)
    ctx->pc = 0x1dbd38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12325), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dbd3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dbd3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dbd40:
    // 0x1dbd40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd44: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD44u;
        // 0x1dbd48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBD4Cu;
    // 0x1dbd4c: 0x0  nop
    ctx->pc = 0x1dbd4cu;
    // NOP
    ctx->pc = 0x1dbd50u;
}
