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

// Function: func_001B56D8
// Address: 0x1b56d8 - 0x1b5768
void func_001B56D8_0x1b56d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B56D8_0x1b56d8");
#endif

    switch (ctx->pc) {
        case 0x1b5700u: goto label_1b5700;
        case 0x1b5710u: goto label_1b5710;
        case 0x1b5730u: goto label_1b5730;
        default: break;
    }

    ctx->pc = 0x1b56d8u;

    // 0x1b56d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b56d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b56dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b56dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b56e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b56e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b56e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b56e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b56e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b56ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b56ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b56f0: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1b56f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b56f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b56f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b56f8: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1B56F8u;
    SET_GPR_U32(ctx, 31, 0x1B5700u);
    ctx->pc = 0x1B56FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56F8u;
    // 0x1b56fc: 0x26300610  addiu       $s0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1B56F8u, 0x1B5700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5700u;
label_1b5700:
    // 0x1b5700: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1b5700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b5704: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b5704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b5708: 0x24428840  addiu       $v0, $v0, -0x77C0
    ctx->pc = 0x1b5708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936640));
    // 0x1b570c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1b570cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1b5710:
    // 0x1b5710: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1b5710u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b5714: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1b5714u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b5718: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1b5718u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b571c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1b571cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b5720: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1b5720u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b5724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5728: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1B5728u;
    SET_GPR_U32(ctx, 31, 0x1B5730u);
    ctx->pc = 0x1B572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5728u;
    // 0x1b572c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1B5728u, 0x1B5730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5730u;
label_1b5730:
    // 0x1b5730: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b5730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b5734: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B5734u;
    {
        const bool branch_taken_0x1b5734 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1B5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5734u;
        // 0x1b5738: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5734) {
            ctx->pc = 0x1B5710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5710;
        }
    }
    ctx->pc = 0x1B573Cu;
    // 0x1b573c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b573cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5740: 0xae200608  sw          $zero, 0x608($s1)
    ctx->pc = 0x1b5740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1544), GPR_U32(ctx, 0));
    // 0x1b5744: 0xae200604  sw          $zero, 0x604($s1)
    ctx->pc = 0x1b5744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 0));
    // 0x1b5748: 0xae200600  sw          $zero, 0x600($s1)
    ctx->pc = 0x1b5748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 0));
    // 0x1b574c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b574cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5750: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b5750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5754: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b5754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5758: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b5758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b575c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b575cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5760: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5760u;
        // 0x1b5764: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5768u;
}
