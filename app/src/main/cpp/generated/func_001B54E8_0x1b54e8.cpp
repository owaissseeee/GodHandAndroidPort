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

// Function: func_001B54E8
// Address: 0x1b54e8 - 0x1b55a0
void func_001B54E8_0x1b54e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B54E8_0x1b54e8");
#endif

    switch (ctx->pc) {
        case 0x1b5530u: goto label_1b5530;
        default: break;
    }

    ctx->pc = 0x1b54e8u;

    // 0x1b54e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b54e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b54ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b54ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b54f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b54f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b54f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b54f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54f8: 0x9e020600  lwu         $v0, 0x600($s0)
    ctx->pc = 0x1b54f8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b54fc: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x1b54fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x1b5500: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b5500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b5504: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B5504u;
    {
        const bool branch_taken_0x1b5504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5504) {
            ctx->pc = 0x1B5508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5504u;
            // 0x1b5508: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5594u;
            goto label_1b5594;
        }
    }
    ctx->pc = 0x1B550Cu;
    // 0x1b550c: 0x86020644  lh          $v0, 0x644($s0)
    ctx->pc = 0x1b550cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1604)));
    // 0x1b5510: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1B5510u;
    {
        const bool branch_taken_0x1b5510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5510) {
            ctx->pc = 0x1B5514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5510u;
            // 0x1b5514: 0x96020644  lhu         $v0, 0x644($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5544u;
            goto label_1b5544;
        }
    }
    ctx->pc = 0x1B5518u;
    // 0x1b5518: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b5518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b551c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b551cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b5520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5524: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b5524u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b5528: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x1B5528u;
    SET_GPR_U32(ctx, 31, 0x1B5530u);
    ctx->pc = 0x1B552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5528u;
    // 0x1b552c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x1B5528u, 0x1B5530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5530u;
label_1b5530:
    // 0x1b5530: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1b5530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b5534: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x1b5534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1b5538: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b5538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b553c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B553Cu;
    {
        const bool branch_taken_0x1b553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B553Cu;
        // 0x1b5540: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b553c) {
            ctx->pc = 0x1B5590u;
            goto label_1b5590;
        }
    }
    ctx->pc = 0x1B5544u;
label_1b5544:
    // 0x1b5544: 0x3c013dd6  lui         $at, 0x3DD6
    ctx->pc = 0x1b5544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15830 << 16));
    // 0x1b5548: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x1b5548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
    // 0x1b554c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b554cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5550: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b5550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b5554: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5554u;
    {
        const bool branch_taken_0x1b5554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5554) {
            ctx->pc = 0x1B5558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5554u;
            // 0x1b5558: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B555Cu;
            goto label_1b555c;
        }
    }
    ctx->pc = 0x1B555Cu;
label_1b555c:
    // 0x1b555c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1b555cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1b5560: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5560u;
    {
        const bool branch_taken_0x1b5560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5560u;
        // 0x1b5564: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5560) {
            ctx->pc = 0x1B5574u;
            goto label_1b5574;
        }
    }
    ctx->pc = 0x1B5568u;
    // 0x1b5568: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1b5568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1b556c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B556Cu;
    {
        const bool branch_taken_0x1b556c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B556Cu;
        // 0x1b5570: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b556c) {
            ctx->pc = 0x1B5578u;
            goto label_1b5578;
        }
    }
    ctx->pc = 0x1B5574u;
label_1b5574:
    // 0x1b5574: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b5574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5578:
    // 0x1b5578: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1b5578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b557c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b557cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b5580: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1b5580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1b5584: 0x96020644  lhu         $v0, 0x644($s0)
    ctx->pc = 0x1b5584u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1604)));
    // 0x1b5588: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b5588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b558c: 0xa6020644  sh          $v0, 0x644($s0)
    ctx->pc = 0x1b558cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1604), (uint16_t)GPR_U32(ctx, 2));
label_1b5590:
    // 0x1b5590: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b5590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5594:
    // 0x1b5594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5598: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5598u;
        // 0x1b559c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B55A0u;
}
