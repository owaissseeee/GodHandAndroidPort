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

// Function: func_002BF708
// Address: 0x2bf708 - 0x2bf780
void func_002BF708_0x2bf708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BF708_0x2bf708");
#endif

    ctx->pc = 0x2bf708u;

    // 0x2bf708: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2bf708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2bf70c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x2bf70cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x2bf710: 0x8c627a80  lw          $v0, 0x7A80($v1)
    ctx->pc = 0x2bf710u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x2bf714: 0x3c0a4000  lui         $t2, 0x4000
    ctx->pc = 0x2bf714u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16384 << 16));
    // 0x2bf718: 0x3c0e2000  lui         $t6, 0x2000
    ctx->pc = 0x2bf718u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)8192 << 16));
    // 0x2bf71c: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x2bf71cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x2bf720: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x2bf720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
    // 0x2bf724: 0x3c0b0800  lui         $t3, 0x800
    ctx->pc = 0x2bf724u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)2048 << 16));
    // 0x2bf728: 0x3c0c0400  lui         $t4, 0x400
    ctx->pc = 0x2bf728u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1024 << 16));
    // 0x2bf72c: 0x3c0d0200  lui         $t5, 0x200
    ctx->pc = 0x2bf72cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)512 << 16));
    // 0x2bf730: 0x8c627a80  lw          $v0, 0x7A80($v1)
    ctx->pc = 0x2bf730u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x2bf734: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x2bf734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x2bf738: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x2bf738u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x2bf73c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2bf73cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2bf740: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2bf740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2bf744: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x2bf744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x2bf748: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x2bf748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x2bf74c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x2bf74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x2bf750: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x2bf750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x2bf754: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x2bf754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x2bf758: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x2bf758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x2bf75c: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x2bf75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x2bf760: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x2bf760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x2bf764: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2bf764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2bf768: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2bf768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2bf76c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2bf76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2bf770: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2bf770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2bf774: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2bf774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2bf778: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF778u;
        // 0x2bf77c: 0xac627a80  sw          $v0, 0x7A80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 31360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF780u;
}
