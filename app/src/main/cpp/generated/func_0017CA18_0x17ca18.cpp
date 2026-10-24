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

// Function: func_0017CA18
// Address: 0x17ca18 - 0x17ca90
void func_0017CA18_0x17ca18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017CA18_0x17ca18");
#endif

    switch (ctx->pc) {
        case 0x17ca30u: goto label_17ca30;
        default: break;
    }

    ctx->pc = 0x17ca18u;

    // 0x17ca18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ca18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ca1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17ca1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17ca20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ca20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ca24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ca24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca28: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x17CA28u;
    SET_GPR_U32(ctx, 31, 0x17CA30u);
    ctx->pc = 0x17CA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA28u;
    // 0x17ca2c: 0x8e050650  lw          $a1, 0x650($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x17CA28u, 0x17CA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA30u;
label_17ca30:
    // 0x17ca30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17ca30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ca38: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17CA38u;
    {
        const bool branch_taken_0x17ca38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17ca38) {
            ctx->pc = 0x17CA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CA38u;
            // 0x17ca3c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CA80u;
            goto label_17ca80;
        }
    }
    ctx->pc = 0x17CA40u;
    // 0x17ca40: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x17ca40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x17ca44: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17CA44u;
    {
        const bool branch_taken_0x17ca44 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x17ca44) {
            ctx->pc = 0x17CA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CA44u;
            // 0x17ca48: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CA70u;
            goto label_17ca70;
        }
    }
    ctx->pc = 0x17CA4Cu;
    // 0x17ca4c: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x17ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x17ca50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ca54: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x17ca54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ca58: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x17ca58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x17ca5c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x17ca5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ca60: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x17ca60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x17ca64: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x17ca64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ca68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17CA68u;
    {
        const bool branch_taken_0x17ca68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA68u;
        // 0x17ca6c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca68) {
            ctx->pc = 0x17CA7Cu;
            goto label_17ca7c;
        }
    }
    ctx->pc = 0x17CA70u;
label_17ca70:
    // 0x17ca70: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x17ca70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ca74: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x17ca74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ca78: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x17ca78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_17ca7c:
    // 0x17ca7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17ca7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17ca80:
    // 0x17ca80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ca80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ca84: 0x3e00008  jr          $ra
    ctx->pc = 0x17CA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA84u;
        // 0x17ca88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CA8Cu;
    // 0x17ca8c: 0x0  nop
    ctx->pc = 0x17ca8cu;
    // NOP
    ctx->pc = 0x17ca90u;
}
