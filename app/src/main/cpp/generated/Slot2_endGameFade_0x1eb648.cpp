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

// Function: Slot2_endGameFade
// Address: 0x1eb648 - 0x1eb718
void Slot2_endGameFade_0x1eb648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_endGameFade_0x1eb648");
#endif

    switch (ctx->pc) {
        case 0x1eb6a8u: goto label_1eb6a8;
        case 0x1eb6c0u: goto label_1eb6c0;
        case 0x1eb6ccu: goto label_1eb6cc;
        case 0x1eb6dcu: goto label_1eb6dc;
        default: break;
    }

    ctx->pc = 0x1eb648u;

    // 0x1eb648: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1eb648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1eb64c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eb64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eb650: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1eb650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1eb654: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eb654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eb65c: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x1eb65cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1eb660: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1eb660u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1eb664: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1eb664u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1eb668: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1eb668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1eb66c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1EB66Cu;
    {
        const bool branch_taken_0x1eb66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB66Cu;
        // 0x1eb670: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb66c) {
            ctx->pc = 0x1EB6F8u;
            goto label_1eb6f8;
        }
    }
    ctx->pc = 0x1EB674u;
    // 0x1eb674: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1eb674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1eb678: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1eb678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1eb67c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1eb67cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1eb680: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1eb680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1eb684: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1eb684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1eb688: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1eb688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1eb68c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1eb68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1eb690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb694: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x1eb694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1eb698: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1eb698u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1eb69c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1eb69cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1eb6a0: 0xc0b45da  jal         func_2D1768
    ctx->pc = 0x1EB6A0u;
    SET_GPR_U32(ctx, 31, 0x1EB6A8u);
    ctx->pc = 0x1EB6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB6A0u;
    // 0x1eb6a4: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1768u, 0x1EB6A0u, 0x1EB6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB6A8u;
label_1eb6a8:
    // 0x1eb6a8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1eb6a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1eb6ac: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1eb6acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1eb6b0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1eb6b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1eb6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb6b8: 0xc0b45da  jal         func_2D1768
    ctx->pc = 0x1EB6B8u;
    SET_GPR_U32(ctx, 31, 0x1EB6C0u);
    ctx->pc = 0x1EB6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB6B8u;
    // 0x1eb6bc: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1768u, 0x1EB6B8u, 0x1EB6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB6C0u;
label_1eb6c0:
    // 0x1eb6c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eb6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb6c4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1EB6C4u;
    SET_GPR_U32(ctx, 31, 0x1EB6CCu);
    ctx->pc = 0x1EB6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB6C4u;
    // 0x1eb6c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1EB6C4u, 0x1EB6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB6CCu;
label_1eb6cc:
    // 0x1eb6cc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1eb6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1eb6d0: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x1eb6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x1eb6d4: 0xc050ea4  jal         func_143A90
    ctx->pc = 0x1EB6D4u;
    SET_GPR_U32(ctx, 31, 0x1EB6DCu);
    ctx->pc = 0x1EB6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB6D4u;
    // 0x1eb6d8: 0x24841ae0  addiu       $a0, $a0, 0x1AE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143A90u, 0x1EB6D4u, 0x1EB6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB6DCu;
label_1eb6dc:
    // 0x1eb6dc: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x1eb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1eb6e0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1eb6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1eb6e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1eb6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1eb6e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eb6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eb6ec: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x1eb6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x1eb6f0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1eb6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1eb6f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1eb6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1eb6f8:
    // 0x1eb6f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eb6f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb6fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb700: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x1eb700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1eb704: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1eb704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1eb708: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1eb708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1eb70c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB70Cu;
        // 0x1eb710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB714u;
    // 0x1eb714: 0x0  nop
    ctx->pc = 0x1eb714u;
    // NOP
    ctx->pc = 0x1eb718u;
}
