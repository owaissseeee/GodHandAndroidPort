#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: sceMcUdCheckNewCard
// Address: 0x7ce098 - 0x7ce108
void sceMcUdCheckNewCard_0x7ce098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcUdCheckNewCard_0x7ce098");
#endif

    switch (ctx->pc) {
        case 0x7ce0dcu: goto label_7ce0dc;
        case 0x7ce0ecu: goto label_7ce0ec;
        default: break;
    }

    ctx->pc = 0x7ce098u;

    // 0x7ce098: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7ce098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7ce09c: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7ce09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7ce0a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7ce0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7ce0a4: 0x3c07007d  lui         $a3, 0x7D
    ctx->pc = 0x7ce0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)125 << 16));
    // 0x7ce0a8: 0x3c10007d  lui         $s0, 0x7D
    ctx->pc = 0x7ce0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    // 0x7ce0ac: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7ce0acu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7ce0b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7ce0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7ce0b4: 0x24841980  addiu       $a0, $a0, 0x1980
    ctx->pc = 0x7ce0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6528));
    // 0x7ce0b8: 0x24e71a00  addiu       $a3, $a3, 0x1A00
    ctx->pc = 0x7ce0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6656));
    // 0x7ce0bc: 0x256bd628  addiu       $t3, $t3, -0x29D8
    ctx->pc = 0x7ce0bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956584));
    // 0x7ce0c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7ce0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7ce0c4: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x7ce0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x7ce0c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7ce0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce0cc: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x7ce0ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x7ce0d0: 0x26092f40  addiu       $t1, $s0, 0x2F40
    ctx->pc = 0x7ce0d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 12096));
    // 0x7ce0d4: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CE0D4u;
    SET_GPR_U32(ctx, 31, 0x7CE0DCu);
    ctx->pc = 0x7CE0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE0D4u;
    // 0x7ce0d8: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CE0D4u, 0x7CE0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE0DCu;
label_7ce0dc:
    // 0x7ce0dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CE0DCu;
    {
        const bool branch_taken_0x7ce0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE0DCu;
        // 0x7ce0e0: 0x3c04007d  lui         $a0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce0dc) {
            ctx->pc = 0x7CE0F4u;
            goto label_7ce0f4;
        }
    }
    ctx->pc = 0x7CE0E4u;
    // 0x7ce0e4: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x7CE0E4u;
    SET_GPR_U32(ctx, 31, 0x7CE0ECu);
    ctx->pc = 0x7CE0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE0E4u;
    // 0x7ce0e8: 0x248413c0  addiu       $a0, $a0, 0x13C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x7CE0E4u, 0x7CE0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE0ECu;
label_7ce0ec:
    // 0x7ce0ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7CE0ECu;
    {
        const bool branch_taken_0x7ce0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE0ECu;
        // 0x7ce0f0: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce0ec) {
            ctx->pc = 0x7CE0F8u;
            goto label_7ce0f8;
        }
    }
    ctx->pc = 0x7CE0F4u;
label_7ce0f4:
    // 0x7ce0f4: 0x8e022f40  lw          $v0, 0x2F40($s0)
    ctx->pc = 0x7ce0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12096)));
label_7ce0f8:
    // 0x7ce0f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7ce0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ce0fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7ce0fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ce100: 0x3e00008  jr          $ra
    ctx->pc = 0x7CE100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CE104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE100u;
        // 0x7ce104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CE100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CE108u;
}
} // namespace gh_mcport
