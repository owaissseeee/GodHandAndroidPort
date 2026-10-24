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

// Function: Slot2
// Address: 0x1e4730 - 0x1e47c0
void Slot2_0x1e4730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_0x1e4730");
#endif

    switch (ctx->pc) {
        case 0x1e4760u: goto label_1e4760;
        case 0x1e4768u: goto label_1e4768;
        case 0x1e4774u: goto label_1e4774;
        case 0x1e4788u: goto label_1e4788;
        case 0x1e4790u: goto label_1e4790;
        default: break;
    }

    ctx->pc = 0x1e4730u;

    // 0x1e4730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e4730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e4734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4738: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e4738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e473c: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1e473cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1e4740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e4740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4744: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e4744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e4748: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e474c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e474cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1e4750: 0x26300058  addiu       $s0, $s1, 0x58
    ctx->pc = 0x1e4750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1e4754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4758: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1E4758u;
    SET_GPR_U32(ctx, 31, 0x1E4760u);
    ctx->pc = 0x1E475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4758u;
    // 0x1e475c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1E4758u, 0x1E4760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4760u;
label_1e4760:
    // 0x1e4760: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1e4760u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4764: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x1e4764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_1e4768:
    // 0x1e4768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e476c: 0xc07a1e6  jal         func_1E8798
    ctx->pc = 0x1E476Cu;
    SET_GPR_U32(ctx, 31, 0x1E4774u);
    ctx->pc = 0x1E4770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E476Cu;
    // 0x1e4770: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8798u, 0x1E476Cu, 0x1E4774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4774u;
label_1e4774:
    // 0x1e4774: 0x0  nop
    ctx->pc = 0x1e4774u;
    // NOP
    // 0x1e4778: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E4778u;
    {
        const bool branch_taken_0x1e4778 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1E477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4778u;
        // 0x1e477c: 0x261000e8  addiu       $s0, $s0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4778) {
            ctx->pc = 0x1E4768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4768;
        }
    }
    ctx->pc = 0x1E4780u;
    // 0x1e4780: 0xc079e58  jal         func_1E7960
    ctx->pc = 0x1E4780u;
    SET_GPR_U32(ctx, 31, 0x1E4788u);
    ctx->pc = 0x1E4784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4780u;
    // 0x1e4784: 0x26240310  addiu       $a0, $s1, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7960u, 0x1E4780u, 0x1E4788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4788u;
label_1e4788:
    // 0x1e4788: 0xc079c46  jal         func_1E7118
    ctx->pc = 0x1E4788u;
    SET_GPR_U32(ctx, 31, 0x1E4790u);
    ctx->pc = 0x1E478Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4788u;
    // 0x1e478c: 0x26240400  addiu       $a0, $s1, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7118u, 0x1E4788u, 0x1E4790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4790u;
label_1e4790:
    // 0x1e4790: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e4790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e4794: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e4794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4798: 0xa62303d0  sh          $v1, 0x3D0($s1)
    ctx->pc = 0x1e4798u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 976), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e479c: 0xa6200a80  sh          $zero, 0xA80($s1)
    ctx->pc = 0x1e479cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2688), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e47a0: 0xae2003dc  sw          $zero, 0x3DC($s1)
    ctx->pc = 0x1e47a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 988), GPR_U32(ctx, 0));
    // 0x1e47a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e47a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e47a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e47a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e47ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e47acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e47b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e47b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e47b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e47b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e47b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E47B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E47BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47B8u;
        // 0x1e47bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E47B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E47C0u;
}
