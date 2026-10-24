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

// Function: cEma2_startPlayerMotion
// Address: 0x289610 - 0x2896a0
void cEma2_startPlayerMotion_0x289610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEma2_startPlayerMotion_0x289610");
#endif

    switch (ctx->pc) {
        case 0x28963cu: goto label_28963c;
        case 0x28965cu: goto label_28965c;
        case 0x28967cu: goto label_28967c;
        default: break;
    }

    ctx->pc = 0x289610u;

    // 0x289610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x289610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x289614: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x289614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x289618: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x289618u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x28961c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28961cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289620: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x289620u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x289624: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x289624u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x289628: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x289628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28962c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28962cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x289630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x289630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x289634: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x289634u;
    SET_GPR_U32(ctx, 31, 0x28963Cu);
    ctx->pc = 0x289638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289634u;
    // 0x289638: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x289634u, 0x28963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28963Cu;
label_28963c:
    // 0x28963c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x28963cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x289640: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x289640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289644: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x289644u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x289648: 0x8c700160  lw          $s0, 0x160($v1)
    ctx->pc = 0x289648u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x28964c: 0x8c710164  lw          $s1, 0x164($v1)
    ctx->pc = 0x28964cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
    // 0x289650: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x289650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x289654: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x289654u;
    SET_GPR_U32(ctx, 31, 0x28965Cu);
    ctx->pc = 0x289658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289654u;
    // 0x289658: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x289654u, 0x28965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28965Cu;
label_28965c:
    // 0x28965c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289660: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289664: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x289664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289668: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x289668u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x28966c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28966cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289670: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x289670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289674: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x289674u;
    SET_GPR_U32(ctx, 31, 0x28967Cu);
    ctx->pc = 0x289678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289674u;
    // 0x289678: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x289674u, 0x28967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28967Cu;
label_28967c:
    // 0x28967c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28967cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289680: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x289680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289684: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x289684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28968c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x28968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x289690: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x289690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x289694: 0x3e00008  jr          $ra
    ctx->pc = 0x289694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289694u;
        // 0x289698: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28969Cu;
    // 0x28969c: 0x0  nop
    ctx->pc = 0x28969cu;
    // NOP
    ctx->pc = 0x2896a0u;
}
