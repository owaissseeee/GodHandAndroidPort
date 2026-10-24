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

// Function: cOmBase_startCutTask
// Address: 0x1bf7d8 - 0x1bf8c8
void cOmBase_startCutTask_0x1bf7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_startCutTask_0x1bf7d8");
#endif

    switch (ctx->pc) {
        case 0x1bf864u: goto label_1bf864;
        case 0x1bf87cu: goto label_1bf87c;
        default: break;
    }

    ctx->pc = 0x1bf7d8u;

    // 0x1bf7d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bf7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bf7dc: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x1bf7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x1bf7e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bf7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bf7e4: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1bf7e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1bf7e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bf7ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bf7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bf7f4: 0x3c0a4000  lui         $t2, 0x4000
    ctx->pc = 0x1bf7f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16384 << 16));
    // 0x1bf7f8: 0x3c0b2000  lui         $t3, 0x2000
    ctx->pc = 0x1bf7f8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)8192 << 16));
    // 0x1bf7fc: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x1bf7fcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x1bf800: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x1bf800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
    // 0x1bf804: 0x3c0d0800  lui         $t5, 0x800
    ctx->pc = 0x1bf804u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)2048 << 16));
    // 0x1bf808: 0x24a47a78  addiu       $a0, $a1, 0x7A78
    ctx->pc = 0x1bf808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 31352));
    // 0x1bf80c: 0x3c0e0400  lui         $t6, 0x400
    ctx->pc = 0x1bf80cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)1024 << 16));
    // 0x1bf810: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf814: 0x3c090080  lui         $t1, 0x80
    ctx->pc = 0x1bf814u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
    // 0x1bf818: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1bf818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bf81c: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x1bf81cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x1bf820: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x1bf820u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x1bf824: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x1bf824u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x1bf828: 0x8ca27a78  lw          $v0, 0x7A78($a1)
    ctx->pc = 0x1bf828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A78u));
    // 0x1bf82c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bf82cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x1bf830: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1bf830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1bf834: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x1bf834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x1bf838: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bf838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bf83c: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x1bf83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x1bf840: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1bf840u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x747A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A80u, _value); } while (0);
    // 0x1bf844: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x1bf844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x1bf848: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x1bf848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x1bf84c: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x1bf84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x1bf850: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1bf850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1bf854: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1bf854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1bf858: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1bf858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1bf85c: 0xc0c6be8  jal         func_31AFA0
    ctx->pc = 0x1BF85Cu;
    SET_GPR_U32(ctx, 31, 0x1BF864u);
    ctx->pc = 0x1BF860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF85Cu;
    // 0x1bf860: 0xaca27a78  sw          $v0, 0x7A78($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 31352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AFA0u, 0x1BF85Cu, 0x1BF864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF864u;
label_1bf864:
    // 0x1bf864: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x1bf864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x1bf868: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1bf868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1bf86c: 0x24a5f8c8  addiu       $a1, $a1, -0x738
    ctx->pc = 0x1bf86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965448));
    // 0x1bf870: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bf870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf874: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x1BF874u;
    SET_GPR_U32(ctx, 31, 0x1BF87Cu);
    ctx->pc = 0x1BF878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF874u;
    // 0x1bf878: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x1BF874u, 0x1BF87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF87Cu;
label_1bf87c:
    // 0x1bf87c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BF87Cu;
    {
        const bool branch_taken_0x1bf87c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF87Cu;
        // 0x1bf880: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf87c) {
            ctx->pc = 0x1BF8A0u;
            goto label_1bf8a0;
        }
    }
    ctx->pc = 0x1BF884u;
    // 0x1bf884: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x1bf884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1bf888: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x1bf888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1bf88c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1bf88cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bf890: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bf890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf894: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x1bf894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1bf898: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bf898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bf89c: 0xa0620050  sb          $v0, 0x50($v1)
    ctx->pc = 0x1bf89cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 2));
label_1bf8a0:
    // 0x1bf8a0: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x1bf8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x1bf8a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bf8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf8a8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1bf8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1bf8ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf8acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf8b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bf8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bf8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf8b8: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x1bf8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x1bf8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8BCu;
        // 0x1bf8c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF8C4u;
    // 0x1bf8c4: 0x0  nop
    ctx->pc = 0x1bf8c4u;
    // NOP
    ctx->pc = 0x1bf8c8u;
}
