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

// Function: func_00186598
// Address: 0x186598 - 0x186670
void func_00186598_0x186598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00186598_0x186598");
#endif

    switch (ctx->pc) {
        case 0x186604u: goto label_186604;
        case 0x186624u: goto label_186624;
        case 0x186630u: goto label_186630;
        default: break;
    }

    ctx->pc = 0x186598u;

    // 0x186598: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18659c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x18659cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1865a0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1865a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1865a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1865a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1865a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1865a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1865ac: 0x460ca034  c.lt.s      $f20, $f12
    ctx->pc = 0x1865acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1865b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1865b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1865b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1865B4u;
    {
        const bool branch_taken_0x1865b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1865B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865B4u;
        // 0x1865b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865b4) {
            ctx->pc = 0x1865C0u;
            goto label_1865c0;
        }
    }
    ctx->pc = 0x1865BCu;
    // 0x1865bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1865bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1865c0:
    // 0x1865c0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1865c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1865c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1865c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1865c8: 0x0  nop
    ctx->pc = 0x1865c8u;
    // NOP
    // 0x1865cc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1865ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1865d0: 0x0  nop
    ctx->pc = 0x1865d0u;
    // NOP
    // 0x1865d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1865D4u;
    {
        const bool branch_taken_0x1865d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1865d4) {
            ctx->pc = 0x1865D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1865D4u;
            // 0x1865d8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1865DCu;
            goto label_1865dc;
        }
    }
    ctx->pc = 0x1865DCu;
label_1865dc:
    // 0x1865dc: 0x0  nop
    ctx->pc = 0x1865dcu;
    // NOP
    // 0x1865e0: 0x0  nop
    ctx->pc = 0x1865e0u;
    // NOP
    // 0x1865e4: 0x46146503  div.s       $f20, $f12, $f20
    ctx->pc = 0x1865e4u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[20]);
    // 0x1865e8: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x1865e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x1865ec: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1865ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1865f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1865f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1865f4: 0x0  nop
    ctx->pc = 0x1865f4u;
    // NOP
    // 0x1865f8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1865f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1865fc: 0xc0c73cc  jal         func_31CF30
    ctx->pc = 0x1865FCu;
    SET_GPR_U32(ctx, 31, 0x186604u);
    ctx->pc = 0x186600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1865FCu;
    // 0x186600: 0xe6000e10  swc1        $f0, 0xE10($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3600), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CF30u, 0x1865FCu, 0x186604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186604u;
label_186604:
    // 0x186604: 0x3c013d0e  lui         $at, 0x3D0E
    ctx->pc = 0x186604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15630 << 16));
    // 0x186608: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x186608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x18660c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18660cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186610: 0x0  nop
    ctx->pc = 0x186610u;
    // NOP
    // 0x186614: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x186614u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x186618: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x186618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x18661c: 0xc0c73cc  jal         func_31CF30
    ctx->pc = 0x18661Cu;
    SET_GPR_U32(ctx, 31, 0x186624u);
    ctx->pc = 0x186620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18661Cu;
    // 0x186620: 0xe6000e14  swc1        $f0, 0xE14($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3604), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CF30u, 0x18661Cu, 0x186624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186624u;
label_186624:
    // 0x186624: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x186624u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x186628: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x186628u;
    SET_GPR_U32(ctx, 31, 0x186630u);
    ctx->pc = 0x18662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186628u;
    // 0x18662c: 0xe6140e18  swc1        $f20, 0xE18($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3608), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x186628u, 0x186630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186630u;
label_186630:
    // 0x186630: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x186630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x186634: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186634u;
    {
        const bool branch_taken_0x186634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186634) {
            ctx->pc = 0x186644u;
            goto label_186644;
        }
    }
    ctx->pc = 0x18663Cu;
    // 0x18663c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18663Cu;
    {
        const bool branch_taken_0x18663c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18663Cu;
        // 0x186640: 0xae000e1c  sw          $zero, 0xE1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18663c) {
            ctx->pc = 0x186658u;
            goto label_186658;
        }
    }
    ctx->pc = 0x186644u;
label_186644:
    // 0x186644: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x186644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x186648: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x186648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x18664c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18664cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186650: 0x0  nop
    ctx->pc = 0x186650u;
    // NOP
    // 0x186654: 0xe6000e1c  swc1        $f0, 0xE1C($s0)
    ctx->pc = 0x186654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3612), bits); }
label_186658:
    // 0x186658: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x186658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18665c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18665cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186660: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x186660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x186664: 0x3e00008  jr          $ra
    ctx->pc = 0x186664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186664u;
        // 0x186668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18666Cu;
    // 0x18666c: 0x0  nop
    ctx->pc = 0x18666cu;
    // NOP
    ctx->pc = 0x186670u;
}
