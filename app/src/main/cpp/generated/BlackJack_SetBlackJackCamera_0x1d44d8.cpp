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

// Function: BlackJack_SetBlackJackCamera
// Address: 0x1d44d8 - 0x1d4578
void BlackJack_SetBlackJackCamera_0x1d44d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_SetBlackJackCamera_0x1d44d8");
#endif

    switch (ctx->pc) {
        case 0x1d4510u: goto label_1d4510;
        default: break;
    }

    ctx->pc = 0x1d44d8u;

    // 0x1d44d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d44d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d44dc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1d44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1d44e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d44e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d44e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d44e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d44e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d44e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d44ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d44ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d44f0: 0x24523050  addiu       $s2, $v0, 0x3050
    ctx->pc = 0x1d44f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
    // 0x1d44f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d44f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d44f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d44f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d44fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d44fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4500: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d4500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4504: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d4504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4508: 0xc04e3ae  jal         func_138EB8
    ctx->pc = 0x1D4508u;
    SET_GPR_U32(ctx, 31, 0x1D4510u);
    ctx->pc = 0x1D450Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4508u;
    // 0x1d450c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138EB8u, 0x1D4508u, 0x1D4510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4510u;
label_1d4510:
    // 0x1d4510: 0x26420c90  addiu       $v0, $s2, 0xC90
    ctx->pc = 0x1d4510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3216));
    // 0x1d4514: 0x26430ea0  addiu       $v1, $s2, 0xEA0
    ctx->pc = 0x1d4514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3744));
    // 0x1d4518: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4518u;
    {
        const bool branch_taken_0x1d4518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4518u;
        // 0x1d451c: 0xae62181c  sw          $v0, 0x181C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4518) {
            ctx->pc = 0x1D4538u;
            goto label_1d4538;
        }
    }
    ctx->pc = 0x1D4520u;
    // 0x1d4520: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1d4520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4524: 0xe6400ea0  swc1        $f0, 0xEA0($s2)
    ctx->pc = 0x1d4524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3744), bits); }
    // 0x1d4528: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1d4528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d452c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1d452cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d4530: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1d4530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4534: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d4534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1d4538:
    // 0x1d4538: 0x8e64181c  lw          $a0, 0x181C($s3)
    ctx->pc = 0x1d4538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6172)));
    // 0x1d453c: 0x24820200  addiu       $v0, $a0, 0x200
    ctx->pc = 0x1d453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x1d4540: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4540u;
    {
        const bool branch_taken_0x1d4540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1D4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4540u;
        // 0x1d4544: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4540) {
            ctx->pc = 0x1D4560u;
            goto label_1d4560;
        }
    }
    ctx->pc = 0x1D4548u;
    // 0x1d4548: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d4548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d454c: 0xe4800200  swc1        $f0, 0x200($a0)
    ctx->pc = 0x1d454cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 512), bits); }
    // 0x1d4550: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1d4550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4554: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1d4554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1d4558: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1d4558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d455c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1d455cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1d4560:
    // 0x1d4560: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d4560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4564: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d4564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4568: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d4568u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d456c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d456cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4570: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4570u;
        // 0x1d4574: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4578u;
}
