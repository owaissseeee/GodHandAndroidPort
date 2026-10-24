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

// Function: func_001C2280
// Address: 0x1c2280 - 0x1c2308
void func_001C2280_0x1c2280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C2280_0x1c2280");
#endif

    switch (ctx->pc) {
        case 0x1c22ecu: goto label_1c22ec;
        case 0x1c22f4u: goto label_1c22f4;
        default: break;
    }

    ctx->pc = 0x1c2280u;

    // 0x1c2280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2284: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c2284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c2288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c228c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c228cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2290: 0x26020640  addiu       $v0, $s0, 0x640
    ctx->pc = 0x1c2290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    // 0x1c2294: 0xae050630  sw          $a1, 0x630($s0)
    ctx->pc = 0x1c2294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 5));
    // 0x1c2298: 0x10470007  beq         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2298u;
    {
        const bool branch_taken_0x1c2298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1C229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2298u;
        // 0x1c229c: 0xae060634  sw          $a2, 0x634($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1588), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2298) {
            ctx->pc = 0x1C22B8u;
            goto label_1c22b8;
        }
    }
    ctx->pc = 0x1C22A0u;
    // 0x1c22a0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1c22a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c22a4: 0xe6000640  swc1        $f0, 0x640($s0)
    ctx->pc = 0x1c22a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1600), bits); }
    // 0x1c22a8: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1c22a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c22ac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c22acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c22b0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1c22b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c22b4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c22b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c22b8:
    // 0x1c22b8: 0x26020650  addiu       $v0, $s0, 0x650
    ctx->pc = 0x1c22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x1c22bc: 0x50480008  beql        $v0, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C22BCu;
    {
        const bool branch_taken_0x1c22bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x1c22bc) {
            ctx->pc = 0x1C22C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C22BCu;
            // 0x1c22c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C22E0u;
            goto label_1c22e0;
        }
    }
    ctx->pc = 0x1C22C4u;
    // 0x1c22c4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1c22c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c22c8: 0xe6000650  swc1        $f0, 0x650($s0)
    ctx->pc = 0x1c22c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1616), bits); }
    // 0x1c22cc: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x1c22ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c22d0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c22d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c22d4: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x1c22d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c22d8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c22d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c22dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c22e0:
    // 0x1c22e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c22e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22e4: 0xc0708de  jal         func_1C2378
    ctx->pc = 0x1C22E4u;
    SET_GPR_U32(ctx, 31, 0x1C22ECu);
    ctx->pc = 0x1C22E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22E4u;
    // 0x1c22e8: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2378u, 0x1C22E4u, 0x1C22ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22ECu;
label_1c22ec:
    // 0x1c22ec: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1C22ECu;
    SET_GPR_U32(ctx, 31, 0x1C22F4u);
    ctx->pc = 0x1C22F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22ECu;
    // 0x1c22f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1C22ECu, 0x1C22F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22F4u;
label_1c22f4:
    // 0x1c22f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c22f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c22f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c22f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c22fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C22FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22FCu;
        // 0x1c2300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C22FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2304u;
    // 0x1c2304: 0x0  nop
    ctx->pc = 0x1c2304u;
    // NOP
    ctx->pc = 0x1c2308u;
}
