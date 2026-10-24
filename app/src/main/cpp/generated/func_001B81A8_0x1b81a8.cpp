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

// Function: func_001B81A8
// Address: 0x1b81a8 - 0x1b8228
void func_001B81A8_0x1b81a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B81A8_0x1b81a8");
#endif

    switch (ctx->pc) {
        case 0x1b81bcu: goto label_1b81bc;
        case 0x1b81e4u: goto label_1b81e4;
        case 0x1b81f4u: goto label_1b81f4;
        default: break;
    }

    ctx->pc = 0x1b81a8u;

    // 0x1b81a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b81a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b81ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b81acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b81b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b81b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b81b4: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1B81B4u;
    SET_GPR_U32(ctx, 31, 0x1B81BCu);
    ctx->pc = 0x1B81B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B81B4u;
    // 0x1b81b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1B81B4u, 0x1B81BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81BCu;
label_1b81bc:
    // 0x1b81bc: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1b81bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1b81c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b81c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b81c4: 0xa2000600  sb          $zero, 0x600($s0)
    ctx->pc = 0x1b81c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b81c8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1b81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1b81cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b81ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b81d0: 0xa2000601  sb          $zero, 0x601($s0)
    ctx->pc = 0x1b81d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1537), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b81d4: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1b81d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1b81d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b81d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81dc: 0xc0a5226  jal         func_294898
    ctx->pc = 0x1B81DCu;
    SET_GPR_U32(ctx, 31, 0x1B81E4u);
    ctx->pc = 0x1B81E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B81DCu;
    // 0x1b81e0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294898u, 0x1B81DCu, 0x1B81E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81E4u;
label_1b81e4:
    // 0x1b81e4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b81e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b81e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b81e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81ec: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x1B81ECu;
    SET_GPR_U32(ctx, 31, 0x1B81F4u);
    ctx->pc = 0x1B81F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B81ECu;
    // 0x1b81f0: 0x24a58af0  addiu       $a1, $a1, -0x7510 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x1B81ECu, 0x1B81F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81F4u;
label_1b81f4:
    // 0x1b81f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b81f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81f8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B81F8u;
    {
        const bool branch_taken_0x1b81f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b81f8) {
            ctx->pc = 0x1B81FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B81F8u;
            // 0x1b81fc: 0xae000608  sw          $zero, 0x608($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8210u;
            goto label_1b8210;
        }
    }
    ctx->pc = 0x1B8200u;
    // 0x1b8200: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x1b8200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x1b8204: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1b8204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1b8208: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x1b8208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x1b820c: 0xae000608  sw          $zero, 0x608($s0)
    ctx->pc = 0x1b820cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 0));
label_1b8210:
    // 0x1b8210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8214: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b8214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b821c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B821Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B821Cu;
        // 0x1b8220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B821Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8224u;
    // 0x1b8224: 0x0  nop
    ctx->pc = 0x1b8224u;
    // NOP
    ctx->pc = 0x1b8228u;
}
