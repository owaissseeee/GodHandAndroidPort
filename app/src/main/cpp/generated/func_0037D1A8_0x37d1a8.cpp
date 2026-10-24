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

// Function: func_0037D1A8
// Address: 0x37d1a8 - 0x37d220
void func_0037D1A8_0x37d1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D1A8_0x37d1a8");
#endif

    switch (ctx->pc) {
        case 0x37d1c0u: goto label_37d1c0;
        case 0x37d1f0u: goto label_37d1f0;
        default: break;
    }

    ctx->pc = 0x37d1a8u;

    // 0x37d1a8: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37d1ac: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x37d1acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x37d1b0: 0x2443b9c0  addiu       $v1, $v0, -0x4640
    ctx->pc = 0x37d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949312));
    // 0x37d1b4: 0x24660f00  addiu       $a2, $v1, 0xF00
    ctx->pc = 0x37d1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 3840));
    // 0x37d1b8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x37d1b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x76B9C0u));
    // 0x37d1bc: 0x0  nop
    ctx->pc = 0x37d1bcu;
    // NOP
label_37d1c0:
    // 0x37d1c0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x37D1C0u;
    {
        const bool branch_taken_0x37d1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d1c0) {
            ctx->pc = 0x37D1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D1C0u;
            // 0x37d1c4: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D20Cu;
            goto label_37d20c;
        }
    }
    ctx->pc = 0x37D1C8u;
    // 0x37d1c8: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x37d1c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x37d1cc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x37d1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x37d1d0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x37D1D0u;
    {
        const bool branch_taken_0x37d1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d1d0) {
            ctx->pc = 0x37D1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D1D0u;
            // 0x37d1d4: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D20Cu;
            goto label_37d20c;
        }
    }
    ctx->pc = 0x37D1D8u;
    // 0x37d1d8: 0x9062000d  lbu         $v0, 0xD($v1)
    ctx->pc = 0x37d1d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x37d1dc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x37d1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x37d1e0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x37D1E0u;
    {
        const bool branch_taken_0x37d1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d1e0) {
            ctx->pc = 0x37D1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D1E0u;
            // 0x37d1e4: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D20Cu;
            goto label_37d20c;
        }
    }
    ctx->pc = 0x37D1E8u;
    // 0x37d1e8: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x37D1E8u;
    {
        const bool branch_taken_0x37d1e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d1e8) {
            ctx->pc = 0x37D1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D1E8u;
            // 0x37d1ec: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D1F8u;
            goto label_37d1f8;
        }
    }
    ctx->pc = 0x37D1F0u;
label_37d1f0:
    // 0x37d1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x37D1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D1F0u;
        // 0x37d1f4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D1F8u;
label_37d1f8:
    // 0x37d1f8: 0x0  nop
    ctx->pc = 0x37d1f8u;
    // NOP
    // 0x37d1fc: 0x0  nop
    ctx->pc = 0x37d1fcu;
    // NOP
    // 0x37d200: 0x1045fffb  beq         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x37D200u;
    {
        const bool branch_taken_0x37d200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x37d200) {
            ctx->pc = 0x37D1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d1f0;
        }
    }
    ctx->pc = 0x37D208u;
    // 0x37d208: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x37d208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_37d20c:
    // 0x37d20c: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x37d20cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x37d210: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x37D210u;
    {
        const bool branch_taken_0x37d210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d210) {
            ctx->pc = 0x37D214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D210u;
            // 0x37d214: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d1c0;
        }
    }
    ctx->pc = 0x37D218u;
    // 0x37d218: 0x3e00008  jr          $ra
    ctx->pc = 0x37D218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D218u;
        // 0x37d21c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D220u;
}
