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

// Function: func_00394D58
// Address: 0x394d58 - 0x394dd8
void func_00394D58_0x394d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00394D58_0x394d58");
#endif

    switch (ctx->pc) {
        case 0x394d98u: goto label_394d98;
        default: break;
    }

    ctx->pc = 0x394d58u;

    // 0x394d58: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x394d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x394d5c: 0x3c033141  lui         $v1, 0x3141
    ctx->pc = 0x394d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12609 << 16));
    // 0x394d60: 0x24455520  addiu       $a1, $v0, 0x5520
    ctx->pc = 0x394d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21792));
    // 0x394d64: 0x34635926  ori         $v1, $v1, 0x5926
    ctx->pc = 0x394d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22822);
    // 0x394d68: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x394d68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F5524u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5524u, _value); } while (0);
    // 0x394d6c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x394D6Cu;
    {
        const bool branch_taken_0x394d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x394D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D6Cu;
        // 0x394d70: 0xac405520  sw          $zero, 0x5520($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 21792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394d6c) {
            ctx->pc = 0x394D80u;
            goto label_394d80;
        }
    }
    ctx->pc = 0x394D74u;
    // 0x394d74: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x394d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x394d78: 0x8c43a420  lw          $v1, -0x5BE0($v0)
    ctx->pc = 0x394d78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x40A420u));
    // 0x394d7c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x394d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_394d80:
    // 0x394d80: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x394d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x394d84: 0x8c43852c  lw          $v1, -0x7AD4($v0)
    ctx->pc = 0x394d84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F852Cu));
    // 0x394d88: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x394d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x394d8c: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x394D8Cu;
    {
        const bool branch_taken_0x394d8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x394D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D8Cu;
        // 0x394d90: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394d8c) {
            ctx->pc = 0x394DCCu;
            goto label_394dcc;
        }
    }
    ctx->pc = 0x394D94u;
    // 0x394d94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x394d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_394d98:
    // 0x394d98: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x394d98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x394d9c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x394D9Cu;
    {
        const bool branch_taken_0x394d9c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x394DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D9Cu;
        // 0x394da0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394d9c) {
            ctx->pc = 0x394DB8u;
            goto label_394db8;
        }
    }
    ctx->pc = 0x394DA4u;
    // 0x394da4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x394DA4u;
    {
        const bool branch_taken_0x394da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394da4) {
            ctx->pc = 0x394DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394DA4u;
            // 0x394da8: 0xa080000b  sb          $zero, 0xB($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394DC0u;
            goto label_394dc0;
        }
    }
    ctx->pc = 0x394DACu;
    // 0x394dac: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x394dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x394db0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x394DB0u;
    {
        const bool branch_taken_0x394db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394db0) {
            ctx->pc = 0x394DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394DB0u;
            // 0x394db4: 0xa086000b  sb          $a2, 0xB($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394DC0u;
            goto label_394dc0;
        }
    }
    ctx->pc = 0x394DB8u;
label_394db8:
    // 0x394db8: 0x3e00008  jr          $ra
    ctx->pc = 0x394DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DB8u;
        // 0x394dbc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394DC0u;
label_394dc0:
    // 0x394dc0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x394dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x394dc4: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x394DC4u;
    {
        const bool branch_taken_0x394dc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x394DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DC4u;
        // 0x394dc8: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394dc4) {
            ctx->pc = 0x394D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394d98;
        }
    }
    ctx->pc = 0x394DCCu;
label_394dcc:
    // 0x394dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x394DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DCCu;
        // 0x394dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394DD4u;
    // 0x394dd4: 0x0  nop
    ctx->pc = 0x394dd4u;
    // NOP
    ctx->pc = 0x394dd8u;
}
