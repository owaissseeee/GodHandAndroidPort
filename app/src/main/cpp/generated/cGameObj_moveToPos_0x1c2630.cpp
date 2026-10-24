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

// Function: cGameObj_moveToPos
// Address: 0x1c2630 - 0x1c26b8
void cGameObj_moveToPos_0x1c2630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_moveToPos_0x1c2630");
#endif

    switch (ctx->pc) {
        case 0x1c2674u: goto label_1c2674;
        default: break;
    }

    ctx->pc = 0x1c2630u;

    // 0x1c2630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2634: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c2634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c2638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c263c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c263cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2644: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c2644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2648: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1c2648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1c264c: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C264Cu;
    {
        const bool branch_taken_0x1c264c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1c264c) {
            ctx->pc = 0x1C266Cu;
            goto label_1c266c;
        }
    }
    ctx->pc = 0x1C2654u;
    // 0x1c2654: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1c2654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2658: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c2658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1c265c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1c265cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2660: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c2660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c2664: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1c2664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2668: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c2668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c266c:
    // 0x1c266c: 0xc070114  jal         func_1C0450
    ctx->pc = 0x1C266Cu;
    SET_GPR_U32(ctx, 31, 0x1C2674u);
    ctx->pc = 0x1C2670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C266Cu;
    // 0x1c2670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0450u, 0x1C266Cu, 0x1C2674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2674u;
label_1c2674:
    // 0x1c2674: 0x26220490  addiu       $v0, $s1, 0x490
    ctx->pc = 0x1c2674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
    // 0x1c2678: 0x50500008  beql        $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2678u;
    {
        const bool branch_taken_0x1c2678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1c2678) {
            ctx->pc = 0x1C267Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2678u;
            // 0x1c267c: 0x8e2205b8  lw          $v0, 0x5B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C269Cu;
            goto label_1c269c;
        }
    }
    ctx->pc = 0x1C2680u;
    // 0x1c2680: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1c2680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2684: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x1c2684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
    // 0x1c2688: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1c2688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c268c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c268cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c2690: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1c2690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2694: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c2694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c2698: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x1c2698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
label_1c269c:
    // 0x1c269c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c269cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c26a0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1c26a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1c26a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c26a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c26a8: 0xae2205b8  sw          $v0, 0x5B8($s1)
    ctx->pc = 0x1c26a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 2));
    // 0x1c26ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c26acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c26b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C26B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26B0u;
        // 0x1c26b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C26B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C26B8u;
}
