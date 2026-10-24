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

// Function: Poker_SetPokerCamera
// Address: 0x1dbd50 - 0x1dbdf0
void Poker_SetPokerCamera_0x1dbd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Poker_SetPokerCamera_0x1dbd50");
#endif

    switch (ctx->pc) {
        case 0x1dbd88u: goto label_1dbd88;
        default: break;
    }

    ctx->pc = 0x1dbd50u;

    // 0x1dbd50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dbd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dbd54: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1dbd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1dbd58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dbd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1dbd5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dbd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dbd60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dbd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd64: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1dbd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1dbd68: 0x24523050  addiu       $s2, $v0, 0x3050
    ctx->pc = 0x1dbd68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
    // 0x1dbd6c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dbd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1dbd70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1dbd70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd78: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1dbd78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dbd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd80: 0xc04e3ae  jal         func_138EB8
    ctx->pc = 0x1DBD80u;
    SET_GPR_U32(ctx, 31, 0x1DBD88u);
    ctx->pc = 0x1DBD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD80u;
    // 0x1dbd84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138EB8u, 0x1DBD80u, 0x1DBD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD88u;
label_1dbd88:
    // 0x1dbd88: 0x26420c90  addiu       $v0, $s2, 0xC90
    ctx->pc = 0x1dbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3216));
    // 0x1dbd8c: 0x26430ea0  addiu       $v1, $s2, 0xEA0
    ctx->pc = 0x1dbd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3744));
    // 0x1dbd90: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBD90u;
    {
        const bool branch_taken_0x1dbd90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DBD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD90u;
        // 0x1dbd94: 0xae62304c  sw          $v0, 0x304C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd90) {
            ctx->pc = 0x1DBDB0u;
            goto label_1dbdb0;
        }
    }
    ctx->pc = 0x1DBD98u;
    // 0x1dbd98: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1dbd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbd9c: 0xe6400ea0  swc1        $f0, 0xEA0($s2)
    ctx->pc = 0x1dbd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3744), bits); }
    // 0x1dbda0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1dbda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbda4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1dbda4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1dbda8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1dbda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbdac: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1dbdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1dbdb0:
    // 0x1dbdb0: 0x8e64304c  lw          $a0, 0x304C($s3)
    ctx->pc = 0x1dbdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12364)));
    // 0x1dbdb4: 0x24820200  addiu       $v0, $a0, 0x200
    ctx->pc = 0x1dbdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x1dbdb8: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBDB8u;
    {
        const bool branch_taken_0x1dbdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1DBDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDB8u;
        // 0x1dbdbc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbdb8) {
            ctx->pc = 0x1DBDD8u;
            goto label_1dbdd8;
        }
    }
    ctx->pc = 0x1DBDC0u;
    // 0x1dbdc0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1dbdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbdc4: 0xe4800200  swc1        $f0, 0x200($a0)
    ctx->pc = 0x1dbdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 512), bits); }
    // 0x1dbdc8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1dbdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbdcc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1dbdccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1dbdd0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1dbdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbdd4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1dbdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1dbdd8:
    // 0x1dbdd8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dbdd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dbddc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dbddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbde0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1dbde0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbde4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbde4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbde8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDE8u;
        // 0x1dbdec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBDF0u;
}
