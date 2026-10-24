#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r104_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r104
{
// Function: func_00799538
// Address: 0x799538 - 0x7995c0
void func_00799538_0x799538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799538_0x799538");
#endif

    switch (ctx->pc) {
        case 0x799578u: goto label_799578;
        case 0x7995a0u: goto label_7995a0;
        case 0x7995acu: goto label_7995ac;
        default: break;
    }

    ctx->pc = 0x799538u;

    // 0x799538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79953c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799540: 0x8c458658  lw          $a1, -0x79A8($v0)
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799544: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x799548: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79954c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79954cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799550: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x799554: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x799554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799558: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x799558u;
    {
        const bool branch_taken_0x799558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799558u;
        // 0x79955c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799558) {
            ctx->pc = 0x79957Cu;
            goto label_79957c;
        }
    }
    ctx->pc = 0x799560u;
    // 0x799560: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x799560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x799564: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799568: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x799568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x79956c: 0x24846af0  addiu       $a0, $a0, 0x6AF0
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    // 0x799570: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x799570u;
    SET_GPR_U32(ctx, 31, 0x799578u);
    ctx->pc = 0x799574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799570u;
    // 0x799574: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799570u, 0x799578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799578u;
label_799578:
    // 0x799578: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_79957c:
    // 0x79957c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x79957cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799580: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799584: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x799588: 0x24c67b00  addiu       $a2, $a2, 0x7B00
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31488));
    // 0x79958c: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x799590: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799594: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799598: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x799598u;
    SET_GPR_U32(ctx, 31, 0x7995A0u);
    ctx->pc = 0x79959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799598u;
    // 0x79959c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799598u, 0x7995A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995A0u;
label_7995a0:
    // 0x7995a0: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7995a4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7995A4u;
    SET_GPR_U32(ctx, 31, 0x7995ACu);
    ctx->pc = 0x7995A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A4u;
    // 0x7995a8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7995A4u, 0x7995ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995ACu;
label_7995ac:
    // 0x7995ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7995acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7995b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7995b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7995b4: 0x3e00008  jr          $ra
    ctx->pc = 0x7995B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B4u;
        // 0x7995b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995BCu;
    // 0x7995bc: 0x0  nop
    ctx->pc = 0x7995bcu;
    // NOP
    ctx->pc = 0x7995c0u;
}
} // namespace gh_r104
