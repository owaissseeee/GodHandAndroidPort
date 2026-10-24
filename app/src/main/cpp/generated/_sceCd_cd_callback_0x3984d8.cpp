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

// Function: _sceCd_cd_callback
// Address: 0x3984d8 - 0x398580
void _sceCd_cd_callback_0x3984d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCd_cd_callback_0x3984d8");
#endif

    switch (ctx->pc) {
        case 0x39852cu: goto label_39852c;
        case 0x398554u: goto label_398554;
        default: break;
    }

    ctx->pc = 0x3984d8u;

    // 0x3984d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3984d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3984dc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3984dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3984e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3984e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3984e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3984e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3984e8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3984e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3984ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3984ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3984f0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3984f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3984f4: 0xae0386a0  sw          $v1, -0x7960($s0)
    ctx->pc = 0x3984f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F86A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F86A0u, _value); } while (0);
    // 0x3984f8: 0x8e0286a0  lw          $v0, -0x7960($s0)
    ctx->pc = 0x3984f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F86A0u));
    // 0x3984fc: 0xac8286a4  sw          $v0, -0x795C($a0)
    ctx->pc = 0x3984fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F86A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F86A4u, _value); } while (0);
    // 0x398500: 0x8e0386a0  lw          $v1, -0x7960($s0)
    ctx->pc = 0x398500u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F86A0u));
    // 0x398504: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x398504u;
    {
        const bool branch_taken_0x398504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x398508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398504u;
        // 0x398508: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398504) {
            ctx->pc = 0x398520u;
            goto label_398520;
        }
    }
    ctx->pc = 0x39850Cu;
    // 0x39850c: 0xae0086a0  sw          $zero, -0x7960($s0)
    ctx->pc = 0x39850cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936224), GPR_U32(ctx, 0));
    // 0x398510: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x398510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x398514: 0xac408674  sw          $zero, -0x798C($v0)
    ctx->pc = 0x398514u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F8674u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8674u, _value); } while (0);
    // 0x398518: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x398518u;
    {
        const bool branch_taken_0x398518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398518u;
        // 0x39851c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398518) {
            ctx->pc = 0x39856Cu;
            goto label_39856c;
        }
    }
    ctx->pc = 0x398520u;
label_398520:
    // 0x398520: 0x8c448668  lw          $a0, -0x7998($v0)
    ctx->pc = 0x398520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
    // 0x398524: 0xc0ebf34  jal         func_3AFCD0
    ctx->pc = 0x398524u;
    SET_GPR_U32(ctx, 31, 0x39852Cu);
    ctx->pc = 0x3AFCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCD0u, 0x398524u, 0x39852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39852Cu;
label_39852c:
    // 0x39852c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x39852cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x398530: 0x8c628654  lw          $v0, -0x79AC($v1)
    ctx->pc = 0x398530u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F8654u));
    // 0x398534: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x398534u;
    {
        const bool branch_taken_0x398534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398534u;
        // 0x398538: 0x3c020078  lui         $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398534) {
            ctx->pc = 0x39855Cu;
            goto label_39855c;
        }
    }
    ctx->pc = 0x39853Cu;
    // 0x39853c: 0x8c43c3c0  lw          $v1, -0x3C40($v0)
    ctx->pc = 0x39853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951872)));
    // 0x398540: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x398540u;
    {
        const bool branch_taken_0x398540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x398544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398540u;
        // 0x398544: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398540) {
            ctx->pc = 0x39855Cu;
            goto label_39855c;
        }
    }
    ctx->pc = 0x398548u;
    // 0x398548: 0x8c448660  lw          $a0, -0x79A0($v0)
    ctx->pc = 0x398548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936160)));
    // 0x39854c: 0xc0ebf34  jal         func_3AFCD0
    ctx->pc = 0x39854Cu;
    SET_GPR_U32(ctx, 31, 0x398554u);
    ctx->pc = 0x3AFCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCD0u, 0x39854Cu, 0x398554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398554u;
label_398554:
    // 0x398554: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x398554u;
    {
        const bool branch_taken_0x398554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398554) {
            ctx->pc = 0x398564u;
            goto label_398564;
        }
    }
    ctx->pc = 0x39855Cu;
label_39855c:
    // 0x39855c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39855cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x398560: 0xac408674  sw          $zero, -0x798C($v0)
    ctx->pc = 0x398560u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F8674u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8674u, _value); } while (0);
label_398564:
    // 0x398564: 0xae0086a0  sw          $zero, -0x7960($s0)
    ctx->pc = 0x398564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936224), GPR_U32(ctx, 0));
    // 0x398568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39856c:
    // 0x39856c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39856cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398570: 0x3e00008  jr          $ra
    ctx->pc = 0x398570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398570u;
        // 0x398574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398578u;
    // 0x398578: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x398578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39857c: 0x0  nop
    ctx->pc = 0x39857cu;
    // NOP
    ctx->pc = 0x398580u;
}
