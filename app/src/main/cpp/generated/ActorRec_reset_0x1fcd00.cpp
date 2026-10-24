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

// Function: ActorRec_reset
// Address: 0x1fcd00 - 0x1fcdb8
void ActorRec_reset_0x1fcd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ActorRec_reset_0x1fcd00");
#endif

    switch (ctx->pc) {
        case 0x1fcda0u: goto label_1fcda0;
        default: break;
    }

    ctx->pc = 0x1fcd00u;

    // 0x1fcd00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fcd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fcd04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fcd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fcd08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fcd08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fcd0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fcd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fcd10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fcd10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fcd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fcd18: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1fcd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1fcd1c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1fcd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1fcd20: 0xa200004a  sb          $zero, 0x4A($s0)
    ctx->pc = 0x1fcd20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcd24: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1fcd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1fcd28: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1fcd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1fcd2c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1fcd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1fcd30: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCD30u;
    {
        const bool branch_taken_0x1fcd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1FCD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD30u;
        // 0x1fcd34: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd30) {
            ctx->pc = 0x1FCD4Cu;
            goto label_1fcd4c;
        }
    }
    ctx->pc = 0x1FCD38u;
    // 0x1fcd38: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1fcd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcd3c: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x1fcd3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1fcd40: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1fcd40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1fcd44: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1fcd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcd48: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1fcd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1fcd4c:
    // 0x1fcd4c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1fcd4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1fcd50: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1fcd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1fcd54: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1fcd54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1fcd58: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1fcd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1fcd5c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCD5Cu;
    {
        const bool branch_taken_0x1fcd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1FCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD5Cu;
        // 0x1fcd60: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd5c) {
            ctx->pc = 0x1FCD78u;
            goto label_1fcd78;
        }
    }
    ctx->pc = 0x1FCD64u;
    // 0x1fcd64: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1fcd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcd68: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x1fcd68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1fcd6c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1fcd6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1fcd70: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1fcd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcd74: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1fcd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1fcd78:
    // 0x1fcd78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fcd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fcd7c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1fcd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1fcd80: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1fcd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1fcd84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fcd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd88: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1fcd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1fcd8c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fcd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fcd90: 0xa6000044  sh          $zero, 0x44($s0)
    ctx->pc = 0x1fcd90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fcd94: 0xa6000046  sh          $zero, 0x46($s0)
    ctx->pc = 0x1fcd94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fcd98: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1FCD98u;
    SET_GPR_U32(ctx, 31, 0x1FCDA0u);
    ctx->pc = 0x1FCD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD98u;
    // 0x1fcd9c: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1FCD98u, 0x1FCDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDA0u;
label_1fcda0:
    // 0x1fcda0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1fcda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1fcda4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fcda4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcda8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fcda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcdac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDACu;
        // 0x1fcdb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCDB4u;
    // 0x1fcdb4: 0x0  nop
    ctx->pc = 0x1fcdb4u;
    // NOP
    ctx->pc = 0x1fcdb8u;
}
