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

// Function: func_003257C8
// Address: 0x3257c8 - 0x325818
void func_003257C8_0x3257c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003257C8_0x3257c8");
#endif

    ctx->pc = 0x3257c8u;

    // 0x3257c8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3257c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3257cc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3257ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3257d0: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3257d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3257d4: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3257d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3257d8: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x3257d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x3257dc: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3257dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3257e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3257e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3257e4: 0x24638158  addiu       $v1, $v1, -0x7EA8
    ctx->pc = 0x3257e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934872));
    // 0x3257e8: 0x24848168  addiu       $a0, $a0, -0x7E98
    ctx->pc = 0x3257e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934888));
    // 0x3257ec: 0x24a58178  addiu       $a1, $a1, -0x7E88
    ctx->pc = 0x3257ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934904));
    // 0x3257f0: 0x24c68188  addiu       $a2, $a2, -0x7E78
    ctx->pc = 0x3257f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934920));
    // 0x3257f4: 0x24e78198  addiu       $a3, $a3, -0x7E68
    ctx->pc = 0x3257f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934936));
    // 0x3257f8: 0x250881a8  addiu       $t0, $t0, -0x7E58
    ctx->pc = 0x3257f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934952));
    // 0x3257fc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x3257fcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3C8158u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3C8158u, _value); } while (0);
    // 0x325800: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x325800u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3C8168u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3C8168u, _value); } while (0);
    // 0x325804: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x325804u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3C8178u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3C8178u, _value); } while (0);
    // 0x325808: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x325808u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3C8188u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3C8188u, _value); } while (0);
    // 0x32580c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x32580cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3C8198u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3C8198u, _value); } while (0);
    // 0x325810: 0x3e00008  jr          $ra
    ctx->pc = 0x325810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325810u;
        // 0x325814: 0xfd020000  sd          $v0, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325818u;
}
