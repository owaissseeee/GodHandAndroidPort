#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlay__11cEventActor
// Address: 0x7a9548 - 0x7a9608
void movePlay__11cEventActor_0x7a9548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlay__11cEventActor_0x7a9548");
#endif

    switch (ctx->pc) {
        case 0x7a957cu: goto label_7a957c;
        case 0x7a9590u: goto label_7a9590;
        case 0x7a95c0u: goto label_7a95c0;
        case 0x7a95d8u: goto label_7a95d8;
        default: break;
    }

    ctx->pc = 0x7a9548u;

    // 0x7a9548: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7a9548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7a954c: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7a954cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7a9550: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7a9550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7a9554: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x7a9554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x7a9558: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7a9558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7a955c: 0x24515280  addiu       $s1, $v0, 0x5280
    ctx->pc = 0x7a955cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x7a9560: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7a9560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a9564: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7a9564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7a9568: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x7a9568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x7a956c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7a956cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a9570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7a9570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7a9574: 0xc1ed280  jal         func_7B4A00
    ctx->pc = 0x7A9574u;
    SET_GPR_U32(ctx, 31, 0x7A957Cu);
    ctx->pc = 0x7A9578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A9574u;
    // 0x7a9578: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4A00u, 0x7A9574u, 0x7A957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A957Cu;
label_7a957c:
    // 0x7a957c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7a957cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7a9580: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x7A9580u;
    {
        const bool branch_taken_0x7a9580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9580u;
        // 0x7a9584: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9580) {
            ctx->pc = 0x7A95ECu;
            goto label_7a95ec;
        }
    }
    ctx->pc = 0x7A9588u;
    // 0x7a9588: 0xc0b6db0  jal         func_2DB6C0
    ctx->pc = 0x7A9588u;
    SET_GPR_U32(ctx, 31, 0x7A9590u);
    ctx->pc = 0x2DB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6C0u, 0x7A9588u, 0x7A9590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9590u;
label_7a9590:
    // 0x7a9590: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7a9590u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a9594: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7A9594u;
    {
        const bool branch_taken_0x7a9594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a9594) {
            ctx->pc = 0x7A9598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A9594u;
            // 0x7a9598: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A95ACu;
            goto label_7a95ac;
        }
    }
    ctx->pc = 0x7A959Cu;
    // 0x7a959c: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x7a959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x7a95a0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x7a95a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x7a95a4: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x7a95a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x7a95a8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x7a95a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_7a95ac:
    // 0x7a95ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x7a95acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a95b0: 0xc6340014  lwc1        $f20, 0x14($s1)
    ctx->pc = 0x7a95b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7a95b4: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7A95B4u;
    {
        const bool branch_taken_0x7a95b4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7A95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A95B4u;
        // 0x7a95b8: 0x8e330010  lw          $s3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a95b4) {
            ctx->pc = 0x7A95E8u;
            goto label_7a95e8;
        }
    }
    ctx->pc = 0x7A95BCu;
    // 0x7a95bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x7a95bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a95c0:
    // 0x7a95c0: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x7a95c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x7a95c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x7a95c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a95c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x7a95c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x7a95cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x7a95ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x7a95d0: 0xc1eaafa  jal         func_7AABE8
    ctx->pc = 0x7A95D0u;
    SET_GPR_U32(ctx, 31, 0x7A95D8u);
    ctx->pc = 0x7A95D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A95D0u;
    // 0x7a95d4: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AABE8u, 0x7A95D0u, 0x7A95D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A95D8u;
label_7a95d8:
    // 0x7a95d8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x7a95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x7a95dc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x7a95dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7a95e0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7A95E0u;
    {
        const bool branch_taken_0x7a95e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A95E0u;
        // 0x7a95e4: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a95e0) {
            ctx->pc = 0x7A95C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a95c0;
        }
    }
    ctx->pc = 0x7A95E8u;
label_7a95e8:
    // 0x7a95e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7a95e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7a95ec:
    // 0x7a95ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7a95ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7a95f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7a95f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7a95f4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7a95f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7a95f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7a95f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7a95fc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x7a95fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7a9600: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9600u;
        // 0x7a9604: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A9608u;
}
} // namespace gh_event
