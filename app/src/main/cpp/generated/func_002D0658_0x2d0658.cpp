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

// Function: func_002D0658
// Address: 0x2d0658 - 0x2d0728
void func_002D0658_0x2d0658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D0658_0x2d0658");
#endif

    switch (ctx->pc) {
        case 0x2d06a4u: goto label_2d06a4;
        case 0x2d06b8u: goto label_2d06b8;
        case 0x2d06d0u: goto label_2d06d0;
        default: break;
    }

    ctx->pc = 0x2d0658u;

    // 0x2d0658: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d0658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d065c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d065cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2d0660: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d0660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d0664: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d0664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0668: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2d0668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2d066c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d066cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0670: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2d0670u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2d0674: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d0674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0678: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d0678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2d067c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d067cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0680: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x2d0680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2d0684: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D0684u;
    {
        const bool branch_taken_0x2d0684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0684u;
        // 0x2d0688: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0684) {
            ctx->pc = 0x2D0704u;
            goto label_2d0704;
        }
    }
    ctx->pc = 0x2D068Cu;
    // 0x2d068c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d068cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d0690: 0xb1100b  movn        $v0, $a1, $s1
    ctx->pc = 0x2d0690u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2d0694: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d0694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0698: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d0698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d069c: 0xc0b4176  jal         func_2D05D8
    ctx->pc = 0x2D069Cu;
    SET_GPR_U32(ctx, 31, 0x2D06A4u);
    ctx->pc = 0x2D06A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D069Cu;
    // 0x2d06a0: 0x122a03  sra         $a1, $s2, 8 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D05D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D05D8u, 0x2D069Cu, 0x2D06A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D06A4u;
label_2d06a4:
    // 0x2d06a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d06a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d06a8: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D06A8u;
    {
        const bool branch_taken_0x2d06a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D06ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06A8u;
        // 0x2d06ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06a8) {
            ctx->pc = 0x2D0704u;
            goto label_2d0704;
        }
    }
    ctx->pc = 0x2D06B0u;
    // 0x2d06b0: 0xc0b4208  jal         func_2D0820
    ctx->pc = 0x2D06B0u;
    SET_GPR_U32(ctx, 31, 0x2D06B8u);
    ctx->pc = 0x2D06B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D06B0u;
    // 0x2d06b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0820u, 0x2D06B0u, 0x2D06B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D06B8u;
label_2d06b8:
    // 0x2d06b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d06b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d06bc: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D06BCu;
    {
        const bool branch_taken_0x2d06bc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2D06C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06BCu;
        // 0x2d06c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06bc) {
            ctx->pc = 0x2D0704u;
            goto label_2d0704;
        }
    }
    ctx->pc = 0x2D06C4u;
    // 0x2d06c4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2d06c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2d06c8: 0x244474a0  addiu       $a0, $v0, 0x74A0
    ctx->pc = 0x2d06c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2d06cc: 0x0  nop
    ctx->pc = 0x2d06ccu;
    // NOP
label_2d06d0:
    // 0x2d06d0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2d06d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d06d4: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D06D4u;
    {
        const bool branch_taken_0x2d06d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2D06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06D4u;
        // 0x2d06d8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06d4) {
            ctx->pc = 0x2D06F4u;
            goto label_2d06f4;
        }
    }
    ctx->pc = 0x2D06DCu;
    // 0x2d06dc: 0xa6110002  sh          $s1, 0x2($s0)
    ctx->pc = 0x2d06dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d06e0: 0x948205b0  lhu         $v0, 0x5B0($a0)
    ctx->pc = 0x2d06e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1456)));
    // 0x2d06e4: 0x52420007  beql        $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D06E4u;
    {
        const bool branch_taken_0x2d06e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d06e4) {
            ctx->pc = 0x2D06E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D06E4u;
            // 0x2d06e8: 0xae710058  sw          $s1, 0x58($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0704u;
            goto label_2d0704;
        }
    }
    ctx->pc = 0x2D06ECu;
    // 0x2d06ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D06ECu;
    {
        const bool branch_taken_0x2d06ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06ECu;
        // 0x2d06f0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06ec) {
            ctx->pc = 0x2D0708u;
            goto label_2d0708;
        }
    }
    ctx->pc = 0x2D06F4u;
label_2d06f4:
    // 0x2d06f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d06f8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2d06f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d06fc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D06FCu;
    {
        const bool branch_taken_0x2d06fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06FCu;
        // 0x2d0700: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06fc) {
            ctx->pc = 0x2D06D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d06d0;
        }
    }
    ctx->pc = 0x2D0704u;
label_2d0704:
    // 0x2d0704: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d0704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d0708:
    // 0x2d0708: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d0708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d070c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d070cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0710: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2d0710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0718: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2d0718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d071c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D071Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D071Cu;
        // 0x2d0720: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D071Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0724u;
    // 0x2d0724: 0x0  nop
    ctx->pc = 0x2d0724u;
    // NOP
    ctx->pc = 0x2d0728u;
}
