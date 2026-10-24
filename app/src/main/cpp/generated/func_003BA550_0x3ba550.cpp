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

// Function: func_003BA550
// Address: 0x3ba550 - 0x3ba5a0
void func_003BA550_0x3ba550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA550_0x3ba550");
#endif

    ctx->pc = 0x3ba550u;

    // 0x3ba550: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x3ba550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3ba554: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x3ba554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x3ba558: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x3ba558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3ba55c: 0x24080072  addiu       $t0, $zero, 0x72
    ctx->pc = 0x3ba55cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x3ba560: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x3ba560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x3ba564: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3ba564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ba568: 0xa0a80000  sb          $t0, 0x0($a1)
    ctx->pc = 0x3ba568u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x3ba56c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3ba56cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ba570: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x3ba570u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ba574: 0xa0a60003  sb          $a2, 0x3($a1)
    ctx->pc = 0x3ba574u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ba578: 0xa0a70004  sb          $a3, 0x4($a1)
    ctx->pc = 0x3ba578u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ba57c: 0x90830038  lbu         $v1, 0x38($a0)
    ctx->pc = 0x3ba57cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3ba580: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x3ba580u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ba584: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x3ba584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3ba588: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ba588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3ba58c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3ba58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ba590: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ba590u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ba594: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x3ba594u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ba598: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA598u;
        // 0x3ba59c: 0xa0a30007  sb          $v1, 0x7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA5A0u;
}
