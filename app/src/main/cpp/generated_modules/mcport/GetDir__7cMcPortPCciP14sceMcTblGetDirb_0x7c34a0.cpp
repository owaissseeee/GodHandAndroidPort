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
// Function: GetDir__7cMcPortPCciP14sceMcTblGetDirb
// Address: 0x7c34a0 - 0x7c3508
void GetDir__7cMcPortPCciP14sceMcTblGetDirb_0x7c34a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDir__7cMcPortPCciP14sceMcTblGetDirb_0x7c34a0");
#endif

    switch (ctx->pc) {
        case 0x7c34dcu: goto label_7c34dc;
        case 0x7c34f4u: goto label_7c34f4;
        default: break;
    }

    ctx->pc = 0x7c34a0u;

    // 0x7c34a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c34a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c34a4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x7c34a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c34a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c34a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c34ac: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x7c34acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c34b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c34b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c34b4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x7c34b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c34b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c34b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c34bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c34bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c34c0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x7c34c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c34c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x7c34c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c34c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7c34c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7c34cc: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x7c34ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c34d0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x7c34d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7c34d4: 0xc1f3842  jal         func_7CE108
    ctx->pc = 0x7C34D4u;
    SET_GPR_U32(ctx, 31, 0x7C34DCu);
    ctx->pc = 0x7C34D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C34D4u;
    // 0x7c34d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CE108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CE108u, 0x7C34D4u, 0x7C34DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C34DCu;
label_7c34dc:
    // 0x7c34dc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C34DCu;
    {
        const bool branch_taken_0x7c34dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C34E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C34DCu;
        // 0x7c34e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c34dc) {
            ctx->pc = 0x7C34F8u;
            goto label_7c34f8;
        }
    }
    ctx->pc = 0x7C34E4u;
    // 0x7c34e4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C34E4u;
    {
        const bool branch_taken_0x7c34e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c34e4) {
            ctx->pc = 0x7C34E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C34E4u;
            // 0x7c34e8: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C34FCu;
            goto label_7c34fc;
        }
    }
    ctx->pc = 0x7C34ECu;
    // 0x7c34ec: 0xc1f0e60  jal         func_7C3980
    ctx->pc = 0x7C34ECu;
    SET_GPR_U32(ctx, 31, 0x7C34F4u);
    ctx->pc = 0x7C34F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C34ECu;
    // 0x7c34f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3980u, 0x7C34ECu, 0x7C34F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C34F4u;
label_7c34f4:
    // 0x7c34f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c34f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c34f8:
    // 0x7c34f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c34f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c34fc:
    // 0x7c34fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c34fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3500: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3500u;
        // 0x7c3504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3508u;
}
} // namespace gh_mcport
