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

// Function: UpdateSequenceNodeWeighted_373560
// Address: 0x373560 - 0x3735e0
void UpdateSequenceNodeWeighted_373560_0x373560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateSequenceNodeWeighted_373560_0x373560");
#endif

    switch (ctx->pc) {
        case 0x373584u: goto label_373584;
        case 0x373594u: goto label_373594;
        case 0x3735b0u: goto label_3735b0;
        case 0x3735c4u: goto label_3735c4;
        default: break;
    }

    ctx->pc = 0x373560u;

    // 0x373560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x373564: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x373564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x373568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x373568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37356c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37356cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373570: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x373570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x373574: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x373574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37357c: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x37357Cu;
    SET_GPR_U32(ctx, 31, 0x373584u);
    ctx->pc = 0x373580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37357Cu;
    // 0x373580: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x37357Cu, 0x373584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373584u;
label_373584:
    // 0x373584: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x373584u;
    {
        const bool branch_taken_0x373584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x373584) {
            ctx->pc = 0x373588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373584u;
            // 0x373588: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3735C8u;
            goto label_3735c8;
        }
    }
    ctx->pc = 0x37358Cu;
    // 0x37358c: 0xc0dcec8  jal         func_373B20
    ctx->pc = 0x37358Cu;
    SET_GPR_U32(ctx, 31, 0x373594u);
    ctx->pc = 0x373590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37358Cu;
    // 0x373590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B20u, 0x37358Cu, 0x373594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373594u;
label_373594:
    // 0x373594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x373594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373598: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x373598u;
    {
        const bool branch_taken_0x373598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x37359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373598u;
        // 0x37359c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373598) {
            ctx->pc = 0x3735B8u;
            goto label_3735b8;
        }
    }
    ctx->pc = 0x3735A0u;
    // 0x3735a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3735a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3735a4: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x3735a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3735a8: 0xc0dd170  jal         func_3745C0
    ctx->pc = 0x3735A8u;
    SET_GPR_U32(ctx, 31, 0x3735B0u);
    ctx->pc = 0x3735ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3735A8u;
    // 0x3735ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3745C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3745C0u, 0x3735A8u, 0x3735B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3735B0u;
label_3735b0:
    // 0x3735b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3735B0u;
    {
        const bool branch_taken_0x3735b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3735B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3735B0u;
        // 0x3735b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3735b0) {
            ctx->pc = 0x3735C8u;
            goto label_3735c8;
        }
    }
    ctx->pc = 0x3735B8u;
label_3735b8:
    // 0x3735b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3735b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3735bc: 0xc0dcffc  jal         func_373FF0
    ctx->pc = 0x3735BCu;
    SET_GPR_U32(ctx, 31, 0x3735C4u);
    ctx->pc = 0x3735C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3735BCu;
    // 0x3735c0: 0x8c850054  lw          $a1, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373FF0u, 0x3735BCu, 0x3735C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3735C4u;
label_3735c4:
    // 0x3735c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3735c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3735c8:
    // 0x3735c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3735c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3735cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3735ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3735d0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x3735d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3735d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3735D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3735D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3735D4u;
        // 0x3735d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3735D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3735DCu;
    // 0x3735dc: 0x0  nop
    ctx->pc = 0x3735dcu;
    // NOP
    ctx->pc = 0x3735e0u;
}
