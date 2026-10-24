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

// Function: F32toF16
// Address: 0x1563f0 - 0x156488
void F32toF16_0x1563f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("F32toF16_0x1563f0");
#endif

    ctx->pc = 0x1563f0u;

    // 0x1563f0: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x1563f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1563f4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1563f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1563f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1563f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1563fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1563fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156400: 0x823024  and         $a2, $a0, $v0
    ctx->pc = 0x156400u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x156404: 0x3c0347ff  lui         $v1, 0x47FF
    ctx->pc = 0x156404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18431 << 16));
    // 0x156408: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x156408u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x15640c: 0x3463efff  ori         $v1, $v1, 0xEFFF
    ctx->pc = 0x15640cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61439);
    // 0x156410: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x156410u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x156414: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x156414u;
    {
        const bool branch_taken_0x156414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x156418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156414u;
        // 0x156418: 0x30878000  andi        $a3, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156414) {
            ctx->pc = 0x156428u;
            goto label_156428;
        }
    }
    ctx->pc = 0x15641Cu;
    // 0x15641c: 0x34e27fff  ori         $v0, $a3, 0x7FFF
    ctx->pc = 0x15641cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x156420: 0x3e00008  jr          $ra
    ctx->pc = 0x156420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156420u;
        // 0x156424: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156428u;
label_156428:
    // 0x156428: 0x3c02387f  lui         $v0, 0x387F
    ctx->pc = 0x156428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14463 << 16));
    // 0x15642c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15642cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x156430: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x156430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x156434: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x156434u;
    {
        const bool branch_taken_0x156434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156434u;
        // 0x156438: 0x62dc2  srl         $a1, $a2, 23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156434) {
            ctx->pc = 0x156460u;
            goto label_156460;
        }
    }
    ctx->pc = 0x15643Cu;
    // 0x15643c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x15643cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x156440: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x156440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x156444: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x156444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x156448: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x156448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x15644c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x15644cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x156450: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x156450u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156454: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x156454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x156458: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x156458u;
    {
        const bool branch_taken_0x156458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156458u;
        // 0x15645c: 0x623006  srlv        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156458) {
            ctx->pc = 0x156468u;
            goto label_156468;
        }
    }
    ctx->pc = 0x156460u;
label_156460:
    // 0x156460: 0x3c02c800  lui         $v0, 0xC800
    ctx->pc = 0x156460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51200 << 16));
    // 0x156464: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x156464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_156468:
    // 0x156468: 0x61342  srl         $v0, $a2, 13
    ctx->pc = 0x156468u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 13));
    // 0x15646c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15646cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x156470: 0x24420fff  addiu       $v0, $v0, 0xFFF
    ctx->pc = 0x156470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4095));
    // 0x156474: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x156474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x156478: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x156478u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x15647c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x15647cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x156480: 0x3e00008  jr          $ra
    ctx->pc = 0x156480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156480u;
        // 0x156484: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156488u;
}
