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

// Function: func_0037D9B0
// Address: 0x37d9b0 - 0x37da28
void func_0037D9B0_0x37d9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D9B0_0x37d9b0");
#endif

    switch (ctx->pc) {
        case 0x37d9d0u: goto label_37d9d0;
        default: break;
    }

    ctx->pc = 0x37d9b0u;

    // 0x37d9b0: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37d9b4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x37d9b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x37d9b8: 0x2443cf20  addiu       $v1, $v0, -0x30E0
    ctx->pc = 0x37d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x37d9bc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x37d9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x37d9c0: 0x24680ff0  addiu       $t0, $v1, 0xFF0
    ctx->pc = 0x37d9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4080));
    // 0x37d9c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37d9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d9c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x37d9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d9cc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x37d9ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x76CF20u));
label_37d9d0:
    // 0x37d9d0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x37D9D0u;
    {
        const bool branch_taken_0x37d9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d9d0) {
            ctx->pc = 0x37D9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D9D0u;
            // 0x37d9d4: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37DA14u;
            goto label_37da14;
        }
    }
    ctx->pc = 0x37D9D8u;
    // 0x37d9d8: 0x90620005  lbu         $v0, 0x5($v1)
    ctx->pc = 0x37d9d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x37d9dc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x37d9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x37d9e0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x37D9E0u;
    {
        const bool branch_taken_0x37d9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d9e0) {
            ctx->pc = 0x37D9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D9E0u;
            // 0x37d9e4: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37DA14u;
            goto label_37da14;
        }
    }
    ctx->pc = 0x37D9E8u;
    // 0x37d9e8: 0x50a70005  beql        $a1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x37D9E8u;
    {
        const bool branch_taken_0x37d9e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x37d9e8) {
            ctx->pc = 0x37D9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D9E8u;
            // 0x37d9ec: 0x94620006  lhu         $v0, 0x6($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37DA00u;
            goto label_37da00;
        }
    }
    ctx->pc = 0x37D9F0u;
    // 0x37d9f0: 0x50a60005  beql        $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x37D9F0u;
    {
        const bool branch_taken_0x37d9f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x37d9f0) {
            ctx->pc = 0x37D9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D9F0u;
            // 0x37d9f4: 0x94620006  lhu         $v0, 0x6($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37DA08u;
            goto label_37da08;
        }
    }
    ctx->pc = 0x37D9F8u;
    // 0x37d9f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x37D9F8u;
    {
        const bool branch_taken_0x37d9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D9F8u;
        // 0x37d9fc: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d9f8) {
            ctx->pc = 0x37DA14u;
            goto label_37da14;
        }
    }
    ctx->pc = 0x37DA00u;
label_37da00:
    // 0x37da00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37DA00u;
    {
        const bool branch_taken_0x37da00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DA00u;
        // 0x37da04: 0x34420009  ori         $v0, $v0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37da00) {
            ctx->pc = 0x37DA0Cu;
            goto label_37da0c;
        }
    }
    ctx->pc = 0x37DA08u;
label_37da08:
    // 0x37da08: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x37da08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_37da0c:
    // 0x37da0c: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x37da0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x37da10: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x37da10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_37da14:
    // 0x37da14: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x37da14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x37da18: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x37DA18u;
    {
        const bool branch_taken_0x37da18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37da18) {
            ctx->pc = 0x37DA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37DA18u;
            // 0x37da1c: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d9d0;
        }
    }
    ctx->pc = 0x37DA20u;
    // 0x37da20: 0x3e00008  jr          $ra
    ctx->pc = 0x37DA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37DA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37DA28u;
}
