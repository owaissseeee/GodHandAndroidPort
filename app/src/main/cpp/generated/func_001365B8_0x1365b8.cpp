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

// Function: func_001365B8
// Address: 0x1365b8 - 0x136640
void func_001365B8_0x1365b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001365B8_0x1365b8");
#endif

    switch (ctx->pc) {
        case 0x1365e4u: goto label_1365e4;
        case 0x1365f4u: goto label_1365f4;
        default: break;
    }

    ctx->pc = 0x1365b8u;

    // 0x1365b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1365b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1365bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1365bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1365c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1365c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1365c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1365c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1365c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1365c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1365cc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1365ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1365d0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1365d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1365d4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1365d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1365d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1365d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1365dc: 0xc04d7b2  jal         func_135EC8
    ctx->pc = 0x1365DCu;
    SET_GPR_U32(ctx, 31, 0x1365E4u);
    ctx->pc = 0x1365E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1365DCu;
    // 0x1365e0: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135EC8u, 0x1365DCu, 0x1365E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1365E4u;
label_1365e4:
    // 0x1365e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1365E4u;
    {
        const bool branch_taken_0x1365e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1365E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365E4u;
        // 0x1365e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365e4) {
            ctx->pc = 0x1365FCu;
            goto label_1365fc;
        }
    }
    ctx->pc = 0x1365ECu;
    // 0x1365ec: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x1365ECu;
    SET_GPR_U32(ctx, 31, 0x1365F4u);
    ctx->pc = 0x1365F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1365ECu;
    // 0x1365f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A0u, 0x1365ECu, 0x1365F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1365F4u;
label_1365f4:
    // 0x1365f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1365F4u;
    {
        const bool branch_taken_0x1365f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1365f4) {
            ctx->pc = 0x136604u;
            goto label_136604;
        }
    }
    ctx->pc = 0x1365FCu;
label_1365fc:
    // 0x1365fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1365FCu;
    {
        const bool branch_taken_0x1365fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365FCu;
        // 0x136600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365fc) {
            ctx->pc = 0x13662Cu;
            goto label_13662c;
        }
    }
    ctx->pc = 0x136604u;
label_136604:
    // 0x136604: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x136604u;
    {
        const bool branch_taken_0x136604 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x136608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136604u;
        // 0x136608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136604) {
            ctx->pc = 0x13662Cu;
            goto label_13662c;
        }
    }
    ctx->pc = 0x13660Cu;
    // 0x13660c: 0x121d0007  beq         $s0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x13660Cu;
    {
        const bool branch_taken_0x13660c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 29));
        ctx->pc = 0x136610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13660Cu;
        // 0x136610: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13660c) {
            ctx->pc = 0x13662Cu;
            goto label_13662c;
        }
    }
    ctx->pc = 0x136614u;
    // 0x136614: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x136614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x136618: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x136618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13661c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x13661cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x136620: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x136620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x136624: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x136624u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x136628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13662c:
    // 0x13662c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13662cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136630: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x136630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136634: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x136634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136638: 0x3e00008  jr          $ra
    ctx->pc = 0x136638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136638u;
        // 0x13663c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136640u;
}
