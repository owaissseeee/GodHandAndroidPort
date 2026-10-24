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

// Function: cScenario_startSoftTask
// Address: 0x28e7c8 - 0x28e858
void cScenario_startSoftTask_0x28e7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_startSoftTask_0x28e7c8");
#endif

    switch (ctx->pc) {
        case 0x28e7ecu: goto label_28e7ec;
        case 0x28e81cu: goto label_28e81c;
        default: break;
    }

    ctx->pc = 0x28e7c8u;

    // 0x28e7c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28e7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28e7cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28e7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28e7d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28e7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28e7d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28e7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28e7d8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x28e7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x28e7dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28e7dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e7e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e7e4: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x28E7E4u;
    SET_GPR_U32(ctx, 31, 0x28E7ECu);
    ctx->pc = 0x28E7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E7E4u;
    // 0x28e7e8: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x28E7E4u, 0x28E7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E7ECu;
label_28e7ec:
    // 0x28e7ec: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x28e7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x28e7f0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x28e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x28e7f4: 0x8cc37a84  lw          $v1, 0x7A84($a2)
    ctx->pc = 0x28e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x28e7f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28e7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x28e7fc: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x28e7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x28e800: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x28e800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x28e804: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28e804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28e808: 0x24a5e858  addiu       $a1, $a1, -0x17A8
    ctx->pc = 0x28e808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961240));
    // 0x28e80c: 0xacc37a84  sw          $v1, 0x7A84($a2)
    ctx->pc = 0x28e80cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31364), GPR_U32(ctx, 3));
    // 0x28e810: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28e810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e814: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x28E814u;
    SET_GPR_U32(ctx, 31, 0x28E81Cu);
    ctx->pc = 0x28E818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E814u;
    // 0x28e818: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x28E814u, 0x28E81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E81Cu;
label_28e81c:
    // 0x28e81c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E81Cu;
    {
        const bool branch_taken_0x28e81c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x28E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E81Cu;
        // 0x28e820: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e81c) {
            ctx->pc = 0x28E840u;
            goto label_28e840;
        }
    }
    ctx->pc = 0x28E824u;
    // 0x28e824: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x28e824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x28e828: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x28e828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x28e82c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x28e82cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28e830: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28e830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28e834: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x28e834u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x28e838: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28e838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28e83c: 0xa0620050  sb          $v0, 0x50($v1)
    ctx->pc = 0x28e83cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 2));
label_28e840:
    // 0x28e840: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28e840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28e844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e84c: 0x3e00008  jr          $ra
    ctx->pc = 0x28E84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E84Cu;
        // 0x28e850: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E854u;
    // 0x28e854: 0x0  nop
    ctx->pc = 0x28e854u;
    // NOP
    ctx->pc = 0x28e858u;
}
