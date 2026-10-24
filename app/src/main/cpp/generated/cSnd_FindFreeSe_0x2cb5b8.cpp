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

// Function: cSnd_FindFreeSe
// Address: 0x2cb5b8 - 0x2cb638
void cSnd_FindFreeSe_0x2cb5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_FindFreeSe_0x2cb5b8");
#endif

    switch (ctx->pc) {
        case 0x2cb5e8u: goto label_2cb5e8;
        case 0x2cb5f4u: goto label_2cb5f4;
        default: break;
    }

    ctx->pc = 0x2cb5b8u;

    // 0x2cb5b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cb5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cb5bc: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2cb5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2cb5c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2cb5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2cb5c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2cb5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2cb5c8: 0x2450ce48  addiu       $s0, $v0, -0x31B8
    ctx->pc = 0x2cb5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954568));
    // 0x2cb5cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cb5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cb5d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cb5d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2cb5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2cb5d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cb5d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb5e0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2cb5e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cb5e4: 0x0  nop
    ctx->pc = 0x2cb5e4u;
    // NOP
label_2cb5e8:
    // 0x2cb5e8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2cb5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb5ec: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB5ECu;
    SET_GPR_U32(ctx, 31, 0x2CB5F4u);
    ctx->pc = 0x2CB5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB5ECu;
    // 0x2cb5f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB5ECu, 0x2CB5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB5F4u;
label_2cb5f4:
    // 0x2cb5f4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2cb5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2cb5f8: 0x14730003  bne         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB5F8u;
    {
        const bool branch_taken_0x2cb5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x2CB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5F8u;
        // 0x2cb5fc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb5f8) {
            ctx->pc = 0x2CB608u;
            goto label_2cb608;
        }
    }
    ctx->pc = 0x2CB600u;
    // 0x2cb600: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB600u;
    {
        const bool branch_taken_0x2cb600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB600u;
        // 0x2cb604: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb600) {
            ctx->pc = 0x2CB618u;
            goto label_2cb618;
        }
    }
    ctx->pc = 0x2CB608u;
label_2cb608:
    // 0x2cb608: 0x2e22000c  sltiu       $v0, $s1, 0xC
    ctx->pc = 0x2cb608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2cb60c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2CB60Cu;
    {
        const bool branch_taken_0x2cb60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB60Cu;
        // 0x2cb610: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb60c) {
            ctx->pc = 0x2CB5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb5e8;
        }
    }
    ctx->pc = 0x2CB614u;
    // 0x2cb614: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cb614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb618:
    // 0x2cb618: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2cb618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb61c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2cb61cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb620: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cb620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb624: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2cb624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb62c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB62Cu;
        // 0x2cb630: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB634u;
    // 0x2cb634: 0x0  nop
    ctx->pc = 0x2cb634u;
    // NOP
    ctx->pc = 0x2cb638u;
}
