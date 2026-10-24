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

// Function: func_001482C0
// Address: 0x1482c0 - 0x148358
void func_001482C0_0x1482c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001482C0_0x1482c0");
#endif

    switch (ctx->pc) {
        case 0x1482dcu: goto label_1482dc;
        case 0x1482e8u: goto label_1482e8;
        case 0x148300u: goto label_148300;
        case 0x14830cu: goto label_14830c;
        default: break;
    }

    ctx->pc = 0x1482c0u;

    // 0x1482c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1482c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1482c4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1482c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1482c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1482c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1482cc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1482ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1482d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1482d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1482d4: 0xc0e863c  jal         func_3A18F0
    ctx->pc = 0x1482D4u;
    SET_GPR_U32(ctx, 31, 0x1482DCu);
    ctx->pc = 0x1482D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1482D4u;
    // 0x1482d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18F0u, 0x1482D4u, 0x1482DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1482DCu;
label_1482dc:
    // 0x1482dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1482dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1482e0: 0xc0e867e  jal         func_3A19F8
    ctx->pc = 0x1482E0u;
    SET_GPR_U32(ctx, 31, 0x1482E8u);
    ctx->pc = 0x1482E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1482E0u;
    // 0x1482e4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A19F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A19F8u, 0x1482E0u, 0x1482E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1482E8u;
label_1482e8:
    // 0x1482e8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1482e8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1482ec: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1482ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1482f0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1482f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1482f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1482f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1482f8: 0xc0e867e  jal         func_3A19F8
    ctx->pc = 0x1482F8u;
    SET_GPR_U32(ctx, 31, 0x148300u);
    ctx->pc = 0x1482FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1482F8u;
    // 0x1482fc: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A19F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A19F8u, 0x1482F8u, 0x148300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148300u;
label_148300:
    // 0x148300: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x148300u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x148304: 0xc0e863c  jal         func_3A18F0
    ctx->pc = 0x148304u;
    SET_GPR_U32(ctx, 31, 0x14830Cu);
    ctx->pc = 0x148308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148304u;
    // 0x148308: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18F0u, 0x148304u, 0x14830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14830Cu;
label_14830c:
    // 0x14830c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14830cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x148310: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x148310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148314: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x148314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x148318: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x148318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x14831c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x14831cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x148320: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x148320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x148324: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x148324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x148328: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x148328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x14832c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x14832cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x148330: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x148330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x148334: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x148334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x148338: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x148338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x14833c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x14833cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x148340: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x148340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148348: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x148348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14834c: 0x3e00008  jr          $ra
    ctx->pc = 0x14834Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14834Cu;
        // 0x148350: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14834Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148354u;
    // 0x148354: 0x0  nop
    ctx->pc = 0x148354u;
    // NOP
    ctx->pc = 0x148358u;
}
