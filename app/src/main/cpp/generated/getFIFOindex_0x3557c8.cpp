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

// Function: getFIFOindex
// Address: 0x3557c8 - 0x355818
void getFIFOindex_0x3557c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getFIFOindex_0x3557c8");
#endif

    ctx->pc = 0x3557c8u;

    // 0x3557c8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3557c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3557cc: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x3557ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x3557d0: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x3557d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3557d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3557d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3557d8: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x3557d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3557dc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3557dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3557e0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3557e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3557e4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3557e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3557e8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3557e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3557ec: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3557ECu;
    {
        const bool branch_taken_0x3557ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3557F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3557ECu;
        // 0x3557f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3557ec) {
            ctx->pc = 0x35580Cu;
            goto label_35580c;
        }
    }
    ctx->pc = 0x3557F4u;
    // 0x3557f4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3557f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3557f8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x3557f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3557fc: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x3557fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x355800: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x355800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x355804: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x355804u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x355808: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x355808u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_35580c:
    // 0x35580c: 0x3e00008  jr          $ra
    ctx->pc = 0x35580Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35580Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355814u;
    // 0x355814: 0x0  nop
    ctx->pc = 0x355814u;
    // NOP
    ctx->pc = 0x355818u;
}
