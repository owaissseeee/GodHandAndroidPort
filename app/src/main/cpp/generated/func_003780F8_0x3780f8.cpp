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

// Function: func_003780F8
// Address: 0x3780f8 - 0x378180
void func_003780F8_0x3780f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003780F8_0x3780f8");
#endif

    ctx->pc = 0x3780f8u;

    // 0x3780f8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3780f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3780fc: 0x24070168  addiu       $a3, $zero, 0x168
    ctx->pc = 0x3780fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x378100: 0x87001b  divu        $zero, $a0, $a3
    ctx->pc = 0x378100u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x378104: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x378104u;
    {
        const bool branch_taken_0x378104 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x378104) {
            ctx->pc = 0x378108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378104u;
            // 0x378108: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37810Cu;
            goto label_37810c;
        }
    }
    ctx->pc = 0x37810Cu;
label_37810c:
    // 0x37810c: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x37810cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x378110: 0x2012  mflo        $a0
    ctx->pc = 0x378110u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x378114: 0x1810  mfhi        $v1
    ctx->pc = 0x378114u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x378118: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x378118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x37811c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x37811Cu;
    {
        const bool branch_taken_0x37811c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x378120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37811Cu;
        // 0x378120: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37811c) {
            ctx->pc = 0x378154u;
            goto label_378154;
        }
    }
    ctx->pc = 0x378124u;
    // 0x378124: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x378124u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x378128: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x378128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37812c: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x37812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x378130: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x378130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x378134: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x378134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x378138: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x378138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37813c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37813cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x378140: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x378140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378144: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x378144u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x378148: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x378148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x37814c: 0x3e00008  jr          $ra
    ctx->pc = 0x37814Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37814Cu;
        // 0x378150: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37814Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378154u;
label_378154:
    // 0x378154: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x378154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x378158: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x378158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x37815c: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x37815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x378160: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x378160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x378164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x378164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x378168: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x378168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37816c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x37816cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378170: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x378170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x378174: 0x3e00008  jr          $ra
    ctx->pc = 0x378174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378174u;
        // 0x378178: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37817Cu;
    // 0x37817c: 0x0  nop
    ctx->pc = 0x37817cu;
    // NOP
    ctx->pc = 0x378180u;
}
