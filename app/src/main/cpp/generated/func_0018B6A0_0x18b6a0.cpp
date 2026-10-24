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

// Function: func_0018B6A0
// Address: 0x18b6a0 - 0x18b718
void func_0018B6A0_0x18b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018B6A0_0x18b6a0");
#endif

    switch (ctx->pc) {
        case 0x18b6b8u: goto label_18b6b8;
        default: break;
    }

    ctx->pc = 0x18b6a0u;

    // 0x18b6a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18b6a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18b6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18b6a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b6ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6b0: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x18B6B0u;
    SET_GPR_U32(ctx, 31, 0x18B6B8u);
    ctx->pc = 0x18B6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B6B0u;
    // 0x18b6b4: 0x8e050650  lw          $a1, 0x650($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x18B6B0u, 0x18B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B6B8u;
label_18b6b8:
    // 0x18b6b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18b6b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b6c0: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18B6C0u;
    {
        const bool branch_taken_0x18b6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b6c0) {
            ctx->pc = 0x18B6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B6C0u;
            // 0x18b6c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B708u;
            goto label_18b708;
        }
    }
    ctx->pc = 0x18B6C8u;
    // 0x18b6c8: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x18b6c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x18b6cc: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18B6CCu;
    {
        const bool branch_taken_0x18b6cc = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x18b6cc) {
            ctx->pc = 0x18B6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B6CCu;
            // 0x18b6d0: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B6F8u;
            goto label_18b6f8;
        }
    }
    ctx->pc = 0x18B6D4u;
    // 0x18b6d4: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x18b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x18b6d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b6dc: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x18b6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b6e0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x18b6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x18b6e4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x18b6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b6e8: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x18b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x18b6ec: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x18b6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b6f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B6F0u;
    {
        const bool branch_taken_0x18b6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6F0u;
        // 0x18b6f4: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6f0) {
            ctx->pc = 0x18B704u;
            goto label_18b704;
        }
    }
    ctx->pc = 0x18B6F8u;
label_18b6f8:
    // 0x18b6f8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x18b6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b6fc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x18b6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b700: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x18b700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_18b704:
    // 0x18b704: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18b704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18b708:
    // 0x18b708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b70c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B70Cu;
        // 0x18b710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B714u;
    // 0x18b714: 0x0  nop
    ctx->pc = 0x18b714u;
    // NOP
    ctx->pc = 0x18b718u;
}
