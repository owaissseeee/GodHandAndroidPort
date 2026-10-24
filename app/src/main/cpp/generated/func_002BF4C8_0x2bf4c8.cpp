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

// Function: func_002BF4C8
// Address: 0x2bf4c8 - 0x2bf518
void func_002BF4C8_0x2bf4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BF4C8_0x2bf4c8");
#endif

    switch (ctx->pc) {
        case 0x2bf4dcu: goto label_2bf4dc;
        case 0x2bf4e4u: goto label_2bf4e4;
        case 0x2bf4f0u: goto label_2bf4f0;
        default: break;
    }

    ctx->pc = 0x2bf4c8u;

    // 0x2bf4c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bf4cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bf4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bf4d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf4d4: 0xc0afdc2  jal         func_2BF708
    ctx->pc = 0x2BF4D4u;
    SET_GPR_U32(ctx, 31, 0x2BF4DCu);
    ctx->pc = 0x2BF4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF4D4u;
    // 0x2bf4d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF708u, 0x2BF4D4u, 0x2BF4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4DCu;
label_2bf4dc:
    // 0x2bf4dc: 0xc0afde4  jal         func_2BF790
    ctx->pc = 0x2BF4DCu;
    SET_GPR_U32(ctx, 31, 0x2BF4E4u);
    ctx->pc = 0x2BF4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF4DCu;
    // 0x2bf4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF790u, 0x2BF4DCu, 0x2BF4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4E4u;
label_2bf4e4:
    // 0x2bf4e4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2bf4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2bf4e8: 0xc0b027a  jal         func_2C09E8
    ctx->pc = 0x2BF4E8u;
    SET_GPR_U32(ctx, 31, 0x2BF4F0u);
    ctx->pc = 0x2BF4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF4E8u;
    // 0x2bf4ec: 0x8c44264c  lw          $a0, 0x264C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C09E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C09E8u, 0x2BF4E8u, 0x2BF4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4F0u;
label_2bf4f0:
    // 0x2bf4f0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2bf4f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf4f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bf4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bf4f8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2bf4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf4fc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2bf4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bf500: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x2bf500u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf504: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x2bf504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf508: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bf508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf50c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf510: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF510u;
        // 0x2bf514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF518u;
}
