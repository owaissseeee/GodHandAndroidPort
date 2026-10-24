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
// Function: SetIdData__6cMcSysPCcb
// Address: 0x7c8370 - 0x7c8468
void SetIdData__6cMcSysPCcb_0x7c8370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetIdData__6cMcSysPCcb_0x7c8370");
#endif

    switch (ctx->pc) {
        case 0x7c83bcu: goto label_7c83bc;
        case 0x7c83d8u: goto label_7c83d8;
        case 0x7c83e0u: goto label_7c83e0;
        case 0x7c83ecu: goto label_7c83ec;
        case 0x7c8404u: goto label_7c8404;
        case 0x7c8414u: goto label_7c8414;
        case 0x7c8428u: goto label_7c8428;
        default: break;
    }

    ctx->pc = 0x7c8370u;

    // 0x7c8370: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7c8370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7c8374: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x7c8374u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x7c8378: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7c8378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7c837c: 0x24e74230  addiu       $a3, $a3, 0x4230
    ctx->pc = 0x7c837cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16944));
    // 0x7c8380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c8380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8384: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7c8384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7c8388: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7c8388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x7c838c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7c838cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7c8390: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x7c8390u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8394: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7c8394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7c8398: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7c8398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7c839c: 0x24843f20  addiu       $a0, $a0, 0x3F20
    ctx->pc = 0x7c839cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    // 0x7c83a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c83a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c83a4: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x7c83a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x7c83a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7c83a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c83ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c83acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c83b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x7c83b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c83b4: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x7C83B4u;
    SET_GPR_U32(ctx, 31, 0x7C83BCu);
    ctx->pc = 0x7C83B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C83B4u;
    // 0x7c83b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x7C83B4u, 0x7C83BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C83BCu;
label_7c83bc:
    // 0x7c83bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7c83bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c83c0: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x7c83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x7c83c4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7C83C4u;
    {
        const bool branch_taken_0x7c83c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C83C4u;
        // 0x7c83c8: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c83c4) {
            ctx->pc = 0x7C8440u;
            goto label_7c8440;
        }
    }
    ctx->pc = 0x7C83CCu;
    // 0x7c83cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7C83CCu;
    {
        const bool branch_taken_0x7c83cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C83CCu;
        // 0x7c83d0: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c83cc) {
            ctx->pc = 0x7C83E0u;
            goto label_7c83e0;
        }
    }
    ctx->pc = 0x7C83D4u;
    // 0x7c83d4: 0x0  nop
    ctx->pc = 0x7c83d4u;
    // NOP
label_7c83d8:
    // 0x7c83d8: 0xc1f22ca  jal         func_7C8B28
    ctx->pc = 0x7C83D8u;
    SET_GPR_U32(ctx, 31, 0x7C83E0u);
    ctx->pc = 0x7C83DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C83D8u;
    // 0x7c83dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8B28u, 0x7C83D8u, 0x7C83E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C83E0u;
label_7c83e0:
    // 0x7c83e0: 0x26843f20  addiu       $a0, $s4, 0x3F20
    ctx->pc = 0x7c83e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16160));
    // 0x7c83e4: 0xc080426  jal         func_201098
    ctx->pc = 0x7C83E4u;
    SET_GPR_U32(ctx, 31, 0x7C83ECu);
    ctx->pc = 0x7C83E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C83E4u;
    // 0x7c83e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201098u, 0x7C83E4u, 0x7C83ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C83ECu;
label_7c83ec:
    // 0x7c83ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C83ECu;
    {
        const bool branch_taken_0x7c83ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C83ECu;
        // 0x7c83f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c83ec) {
            ctx->pc = 0x7C83D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c83d8;
        }
    }
    ctx->pc = 0x7C83F4u;
    // 0x7c83f4: 0x8e642388  lw          $a0, 0x2388($s3)
    ctx->pc = 0x7c83f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9096)));
    // 0x7c83f8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x7c83f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x7c83fc: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x7C83FCu;
    SET_GPR_U32(ctx, 31, 0x7C8404u);
    ctx->pc = 0x7C8400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C83FCu;
    // 0x7c8400: 0x8e060070  lw          $a2, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x7C83FCu, 0x7C8404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8404u;
label_7c8404:
    // 0x7c8404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8408: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x7c8408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x7c840c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x7C840Cu;
    SET_GPR_U32(ctx, 31, 0x7C8414u);
    ctx->pc = 0x7C8410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C840Cu;
    // 0x7c8410: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x7C840Cu, 0x7C8414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8414u;
label_7c8414:
    // 0x7c8414: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7C8414u;
    {
        const bool branch_taken_0x7c8414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8414u;
        // 0x7c8418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8414) {
            ctx->pc = 0x7C8440u;
            goto label_7c8440;
        }
    }
    ctx->pc = 0x7C841Cu;
    // 0x7c841c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x7c841cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x7c8420: 0xc0aa7cc  jal         func_2A9F30
    ctx->pc = 0x7C8420u;
    SET_GPR_U32(ctx, 31, 0x7C8428u);
    ctx->pc = 0x7C8424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8420u;
    // 0x7c8424: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9F30u, 0x7C8420u, 0x7C8428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8428u;
label_7c8428:
    // 0x7c8428: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x7c8428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x7c842c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x7c842cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x7c8430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c8430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c8434: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c8434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c8438: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7C8438u;
    {
        const bool branch_taken_0x7c8438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8438u;
        // 0x7c843c: 0xae030074  sw          $v1, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8438) {
            ctx->pc = 0x7C8444u;
            goto label_7c8444;
        }
    }
    ctx->pc = 0x7C8440u;
label_7c8440:
    // 0x7c8440: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7c8440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7c8444:
    // 0x7c8444: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7c8444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7c8448: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7c8448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c844c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7c844cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c8450: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7c8450u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c8454: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7c8454u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c8458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c8458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c845c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C845Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C845Cu;
        // 0x7c8460: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C845Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C8464u;
    // 0x7c8464: 0x0  nop
    ctx->pc = 0x7c8464u;
    // NOP
    ctx->pc = 0x7c8468u;
}
} // namespace gh_mcport
