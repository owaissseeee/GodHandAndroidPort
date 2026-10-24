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

// Function: func_0037FCC8
// Address: 0x37fcc8 - 0x37fd28
void func_0037FCC8_0x37fcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037FCC8_0x37fcc8");
#endif

    switch (ctx->pc) {
        case 0x37fce8u: goto label_37fce8;
        case 0x37fd00u: goto label_37fd00;
        default: break;
    }

    ctx->pc = 0x37fcc8u;

    // 0x37fcc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37fcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37fccc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37fcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37fcd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37fcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37fcd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37fcd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fcd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37fcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37fcdc: 0x26110370  addiu       $s1, $s0, 0x370
    ctx->pc = 0x37fcdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    // 0x37fce0: 0xc0c9132  jal         func_3244C8
    ctx->pc = 0x37FCE0u;
    SET_GPR_U32(ctx, 31, 0x37FCE8u);
    ctx->pc = 0x37FCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FCE0u;
    // 0x37fce4: 0x8e2400f4  lw          $a0, 0xF4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3244C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3244C8u, 0x37FCE0u, 0x37FCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FCE8u;
label_37fce8:
    // 0x37fce8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37fcec: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x37FCECu;
    {
        const bool branch_taken_0x37fcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x37fcec) {
            ctx->pc = 0x37FCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FCECu;
            // 0x37fcf0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FD14u;
            goto label_37fd14;
        }
    }
    ctx->pc = 0x37FCF4u;
    // 0x37fcf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x37fcf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fcf8: 0xc0dff4a  jal         func_37FD28
    ctx->pc = 0x37FCF8u;
    SET_GPR_U32(ctx, 31, 0x37FD00u);
    ctx->pc = 0x37FCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FCF8u;
    // 0x37fcfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FD28u, 0x37FCF8u, 0x37FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FD00u;
label_37fd00:
    // 0x37fd00: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x37FD00u;
    {
        const bool branch_taken_0x37fd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD00u;
        // 0x37fd04: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd00) {
            ctx->pc = 0x37FD0Cu;
            goto label_37fd0c;
        }
    }
    ctx->pc = 0x37FD08u;
    // 0x37fd08: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x37fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_37fd0c:
    // 0x37fd0c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x37fd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x37fd10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37fd10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37fd14:
    // 0x37fd14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37fd14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37fd18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37fd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37fd1c: 0x3e00008  jr          $ra
    ctx->pc = 0x37FD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD1Cu;
        // 0x37fd20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FD24u;
    // 0x37fd24: 0x0  nop
    ctx->pc = 0x37fd24u;
    // NOP
    ctx->pc = 0x37fd28u;
}
