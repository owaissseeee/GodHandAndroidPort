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

// Function: func_003758E8
// Address: 0x3758e8 - 0x375988
void func_003758E8_0x3758e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003758E8_0x3758e8");
#endif

    switch (ctx->pc) {
        case 0x375910u: goto label_375910;
        case 0x375918u: goto label_375918;
        case 0x375938u: goto label_375938;
        case 0x375968u: goto label_375968;
        default: break;
    }

    ctx->pc = 0x3758e8u;

    // 0x3758e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3758e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3758ec: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x3758ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x3758f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3758f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3758f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3758f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3758f8: 0x2450a880  addiu       $s0, $v0, -0x5780
    ctx->pc = 0x3758f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944896));
    // 0x3758fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3758fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x375900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x375900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x375904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x375908: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x375908u;
    {
        const bool branch_taken_0x375908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375908u;
        // 0x37590c: 0x261200dc  addiu       $s2, $s0, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375908) {
            ctx->pc = 0x375930u;
            goto label_375930;
        }
    }
    ctx->pc = 0x375910u;
label_375910:
    // 0x375910: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x375910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x375914: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x375914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_375918:
    // 0x375918: 0x0  nop
    ctx->pc = 0x375918u;
    // NOP
    // 0x37591c: 0x0  nop
    ctx->pc = 0x37591cu;
    // NOP
    // 0x375920: 0x0  nop
    ctx->pc = 0x375920u;
    // NOP
    // 0x375924: 0x0  nop
    ctx->pc = 0x375924u;
    // NOP
    // 0x375928: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x375928u;
    {
        const bool branch_taken_0x375928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x37592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375928u;
        // 0x37592c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375928) {
            ctx->pc = 0x375918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375918;
        }
    }
    ctx->pc = 0x375930u;
label_375930:
    // 0x375930: 0xc0eccca  jal         func_3B3328
    ctx->pc = 0x375930u;
    SET_GPR_U32(ctx, 31, 0x375938u);
    ctx->pc = 0x375934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375930u;
    // 0x375934: 0x260400dc  addiu       $a0, $s0, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3328u, 0x375930u, 0x375938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375938u;
label_375938:
    // 0x375938: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x375938u;
    {
        const bool branch_taken_0x375938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375938u;
        // 0x37593c: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375938) {
            ctx->pc = 0x375910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375910;
        }
    }
    ctx->pc = 0x375940u;
    // 0x375940: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x375940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375944: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x375944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375948: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x375948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37594c: 0x26090040  addiu       $t1, $s0, 0x40
    ctx->pc = 0x37594cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x375950: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x375950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x375954: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x375954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375958: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x375958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x37595c: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x37595cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x375960: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x375960u;
    SET_GPR_U32(ctx, 31, 0x375968u);
    ctx->pc = 0x375964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375960u;
    // 0x375964: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x375960u, 0x375968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375968u;
label_375968:
    // 0x375968: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x375968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x37596c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37596cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x375970: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x375970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375974: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x375974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37597c: 0x3e00008  jr          $ra
    ctx->pc = 0x37597Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37597Cu;
        // 0x375980: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37597Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375984u;
    // 0x375984: 0x0  nop
    ctx->pc = 0x375984u;
    // NOP
    ctx->pc = 0x375988u;
}
