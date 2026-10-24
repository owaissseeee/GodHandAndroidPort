#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: __unpack_f
// Address: 0x79a6c8 - 0x79a758
void ps2___unpack_f_0x79a6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unpack_f_0x79a6c8");
#endif

    ctx->pc = 0x79a6c8u;

    // 0x79a6c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a6cc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x79a6d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79a6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79a6d4: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x79a6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x79a6d8: 0x235c2  srl         $a2, $v0, 23
    ctx->pc = 0x79a6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x79a6dc: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x79a6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79a6e0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x79a6e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x79a6e4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A6E4u;
    {
        const bool branch_taken_0x79a6e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6E4u;
        // 0x79a6e8: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6e4) {
            ctx->pc = 0x79A6F8u;
            goto label_79a6f8;
        }
    }
    ctx->pc = 0x79A6ECu;
    // 0x79a6ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6F0u;
        // 0x79a6f4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A6F8u;
label_79a6f8:
    // 0x79a6f8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x79a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x79a6fc: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A6FCu;
    {
        const bool branch_taken_0x79a6fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6FCu;
        // 0x79a700: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6fc) {
            ctx->pc = 0x79A738u;
            goto label_79a738;
        }
    }
    ctx->pc = 0x79A704u;
    // 0x79a704: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A704u;
    {
        const bool branch_taken_0x79a704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A704u;
        // 0x79a708: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a704) {
            ctx->pc = 0x79A718u;
            goto label_79a718;
        }
    }
    ctx->pc = 0x79A70Cu;
    // 0x79a70c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a710: 0x3e00008  jr          $ra
    ctx->pc = 0x79A710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A710u;
        // 0x79a714: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A718u;
label_79a718:
    // 0x79a718: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a71c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A71Cu;
    {
        const bool branch_taken_0x79a71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A71Cu;
        // 0x79a720: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a71c) {
            ctx->pc = 0x79A72Cu;
            goto label_79a72c;
        }
    }
    ctx->pc = 0x79A724u;
    // 0x79a724: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A724u;
    {
        const bool branch_taken_0x79a724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A724u;
        // 0x79a728: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a724) {
            ctx->pc = 0x79A730u;
            goto label_79a730;
        }
    }
    ctx->pc = 0x79A72Cu;
label_79a72c:
    // 0x79a72c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x79a72cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_79a730:
    // 0x79a730: 0x3e00008  jr          $ra
    ctx->pc = 0x79A730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A730u;
        // 0x79a734: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A738u;
label_79a738:
    // 0x79a738: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x79a738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x79a73c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x79a73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x79a740: 0x24c4ff81  addiu       $a0, $a2, -0x7F
    ctx->pc = 0x79a740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x79a744: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79a744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a748: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x79a748u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x79a74c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x79a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x79a750: 0x3e00008  jr          $ra
    ctx->pc = 0x79A750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A750u;
        // 0x79a754: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A758u;
}
} // namespace gh_r505
