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

// Function: func_0037A6A8
// Address: 0x37a6a8 - 0x37a740
void func_0037A6A8_0x37a6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037A6A8_0x37a6a8");
#endif

    ctx->pc = 0x37a6a8u;

    // 0x37a6a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x37a6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a6ac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x37a6b0: 0x80a30007  lb          $v1, 0x7($a1)
    ctx->pc = 0x37a6b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x37a6b4: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x37a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
    // 0x37a6b8: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x37a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x37a6bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37a6c0: 0x90a60025  lbu         $a2, 0x25($a1)
    ctx->pc = 0x37a6c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 37)));
    // 0x37a6c4: 0x80a70025  lb          $a3, 0x25($a1)
    ctx->pc = 0x37a6c4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 37)));
    // 0x37a6c8: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x37a6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x37a6cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37A6CCu;
    {
        const bool branch_taken_0x37a6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A6CCu;
        // 0x37a6d0: 0x80630000  lb          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a6cc) {
            ctx->pc = 0x37A6DCu;
            goto label_37a6dc;
        }
    }
    ctx->pc = 0x37A6D4u;
    // 0x37a6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x37A6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A6D4u;
        // 0x37a6d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A6DCu;
label_37a6dc:
    // 0x37a6dc: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x37a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x37a6e0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x37a6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x37a6e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x37A6E4u;
    {
        const bool branch_taken_0x37a6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A6E4u;
        // 0x37a6e8: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a6e4) {
            ctx->pc = 0x37A6F0u;
            goto label_37a6f0;
        }
    }
    ctx->pc = 0x37A6ECu;
    // 0x37a6ec: 0xa0a20025  sb          $v0, 0x25($a1)
    ctx->pc = 0x37a6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 37), (uint8_t)GPR_U32(ctx, 2));
label_37a6f0:
    // 0x37a6f0: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x37a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x37a6f4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x37a6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x37a6f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37A6F8u;
    {
        const bool branch_taken_0x37a6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a6f8) {
            ctx->pc = 0x37A6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A6F8u;
            // 0x37a6fc: 0x80a20025  lb          $v0, 0x25($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 37)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37A710u;
            goto label_37a710;
        }
    }
    ctx->pc = 0x37A700u;
    // 0x37a700: 0x90a20025  lbu         $v0, 0x25($a1)
    ctx->pc = 0x37a700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 37)));
    // 0x37a704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37a704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37a708: 0xa0a20025  sb          $v0, 0x25($a1)
    ctx->pc = 0x37a708u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 37), (uint8_t)GPR_U32(ctx, 2));
    // 0x37a70c: 0x80a20025  lb          $v0, 0x25($a1)
    ctx->pc = 0x37a70cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 37)));
label_37a710:
    // 0x37a710: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37A710u;
    {
        const bool branch_taken_0x37a710 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x37a710) {
            ctx->pc = 0x37A714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A710u;
            // 0x37a714: 0x80a20025  lb          $v0, 0x25($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 37)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37A724u;
            goto label_37a724;
        }
    }
    ctx->pc = 0x37A718u;
    // 0x37a718: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x37a718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37a71c: 0xa0a20025  sb          $v0, 0x25($a1)
    ctx->pc = 0x37a71cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 37), (uint8_t)GPR_U32(ctx, 2));
    // 0x37a720: 0x80a20025  lb          $v0, 0x25($a1)
    ctx->pc = 0x37a720u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 37)));
label_37a724:
    // 0x37a724: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x37a724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x37a728: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37A728u;
    {
        const bool branch_taken_0x37a728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a728) {
            ctx->pc = 0x37A72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A728u;
            // 0x37a72c: 0xa0a00025  sb          $zero, 0x25($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 37), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37A730u;
            goto label_37a730;
        }
    }
    ctx->pc = 0x37A730u;
label_37a730:
    // 0x37a730: 0x80a20025  lb          $v0, 0x25($a1)
    ctx->pc = 0x37a730u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 37)));
    // 0x37a734: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x37a734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x37a738: 0x3e00008  jr          $ra
    ctx->pc = 0x37A738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A738u;
        // 0x37a73c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A740u;
}
