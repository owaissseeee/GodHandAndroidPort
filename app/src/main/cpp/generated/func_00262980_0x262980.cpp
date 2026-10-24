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

// Function: func_00262980
// Address: 0x262980 - 0x262a10
void func_00262980_0x262980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00262980_0x262980");
#endif

    switch (ctx->pc) {
        case 0x2629ccu: goto label_2629cc;
        case 0x2629e0u: goto label_2629e0;
        case 0x2629f0u: goto label_2629f0;
        default: break;
    }

    ctx->pc = 0x262980u;

    // 0x262980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x262984: 0x24030260  addiu       $v1, $zero, 0x260
    ctx->pc = 0x262984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x262988: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x262988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26298c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26298cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x262990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x262990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262994: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x262994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x262998: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x262998u;
    {
        const bool branch_taken_0x262998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262998u;
        // 0x26299c: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262998) {
            ctx->pc = 0x2629B0u;
            goto label_2629b0;
        }
    }
    ctx->pc = 0x2629A0u;
    // 0x2629a0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2629a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2629a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2629a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2629a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2629A8u;
    {
        const bool branch_taken_0x2629a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2629ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629A8u;
        // 0x2629ac: 0x8e030680  lw          $v1, 0x680($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629a8) {
            ctx->pc = 0x2629BCu;
            goto label_2629bc;
        }
    }
    ctx->pc = 0x2629B0u;
label_2629b0:
    // 0x2629b0: 0x8e030680  lw          $v1, 0x680($s0)
    ctx->pc = 0x2629b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    // 0x2629b4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2629b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2629b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2629b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2629bc:
    // 0x2629bc: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x2629bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x2629c0: 0x8e040680  lw          $a0, 0x680($s0)
    ctx->pc = 0x2629c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    // 0x2629c4: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x2629C4u;
    SET_GPR_U32(ctx, 31, 0x2629CCu);
    ctx->pc = 0x2629C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629C4u;
    // 0x2629c8: 0x8e050684  lw          $a1, 0x684($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1668)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x2629C4u, 0x2629CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629CCu;
label_2629cc:
    // 0x2629cc: 0x8e020680  lw          $v0, 0x680($s0)
    ctx->pc = 0x2629ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    // 0x2629d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2629d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2629d4: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x2629d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x2629d8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x2629D8u;
    SET_GPR_U32(ctx, 31, 0x2629E0u);
    ctx->pc = 0x2629DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629D8u;
    // 0x2629dc: 0x8e040680  lw          $a0, 0x680($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x2629D8u, 0x2629E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629E0u;
label_2629e0:
    // 0x2629e0: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x2629e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x2629e4: 0x8e040680  lw          $a0, 0x680($s0)
    ctx->pc = 0x2629e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    // 0x2629e8: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x2629E8u;
    SET_GPR_U32(ctx, 31, 0x2629F0u);
    ctx->pc = 0x2629ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629E8u;
    // 0x2629ec: 0x24a57b00  addiu       $a1, $a1, 0x7B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x2629E8u, 0x2629F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629F0u;
label_2629f0:
    // 0x2629f0: 0x8e030680  lw          $v1, 0x680($s0)
    ctx->pc = 0x2629f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    // 0x2629f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2629f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2629f8: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x2629f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x2629fc: 0xa4600044  sh          $zero, 0x44($v1)
    ctx->pc = 0x2629fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x262a00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x262a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262a08: 0x3e00008  jr          $ra
    ctx->pc = 0x262A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A08u;
        // 0x262a0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262A10u;
}
