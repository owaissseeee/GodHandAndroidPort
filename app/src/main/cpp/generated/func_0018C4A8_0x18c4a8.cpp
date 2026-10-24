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

// Function: func_0018C4A8
// Address: 0x18c4a8 - 0x18c520
void func_0018C4A8_0x18c4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018C4A8_0x18c4a8");
#endif

    switch (ctx->pc) {
        case 0x18c4c0u: goto label_18c4c0;
        default: break;
    }

    ctx->pc = 0x18c4a8u;

    // 0x18c4a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18c4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18c4ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18c4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18c4b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c4b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4b8: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x18C4B8u;
    SET_GPR_U32(ctx, 31, 0x18C4C0u);
    ctx->pc = 0x18C4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C4B8u;
    // 0x18c4bc: 0x8e050650  lw          $a1, 0x650($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x18C4B8u, 0x18C4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C4C0u;
label_18c4c0:
    // 0x18c4c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18c4c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c4c8: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18C4C8u;
    {
        const bool branch_taken_0x18c4c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18c4c8) {
            ctx->pc = 0x18C4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C4C8u;
            // 0x18c4cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C510u;
            goto label_18c510;
        }
    }
    ctx->pc = 0x18C4D0u;
    // 0x18c4d0: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x18c4d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x18c4d4: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18C4D4u;
    {
        const bool branch_taken_0x18c4d4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x18c4d4) {
            ctx->pc = 0x18C4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C4D4u;
            // 0x18c4d8: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C500u;
            goto label_18c500;
        }
    }
    ctx->pc = 0x18C4DCu;
    // 0x18c4dc: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x18c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x18c4e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c4e4: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x18c4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x18c4e8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x18c4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x18c4ec: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x18c4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c4f0: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x18c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x18c4f4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x18c4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c4f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C4F8u;
    {
        const bool branch_taken_0x18c4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4F8u;
        // 0x18c4fc: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4f8) {
            ctx->pc = 0x18C50Cu;
            goto label_18c50c;
        }
    }
    ctx->pc = 0x18C500u;
label_18c500:
    // 0x18c500: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x18c500u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c504: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x18c504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c508: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x18c508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_18c50c:
    // 0x18c50c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18c50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18c510:
    // 0x18c510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c514: 0x3e00008  jr          $ra
    ctx->pc = 0x18C514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C514u;
        // 0x18c518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C51Cu;
    // 0x18c51c: 0x0  nop
    ctx->pc = 0x18c51cu;
    // NOP
    ctx->pc = 0x18c520u;
}
