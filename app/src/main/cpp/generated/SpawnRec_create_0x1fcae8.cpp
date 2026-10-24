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

// Function: SpawnRec_create
// Address: 0x1fcae8 - 0x1fcba0
void SpawnRec_create_0x1fcae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpawnRec_create_0x1fcae8");
#endif

    switch (ctx->pc) {
        case 0x1fcb0cu: goto label_1fcb0c;
        case 0x1fcb2cu: goto label_1fcb2c;
        default: break;
    }

    ctx->pc = 0x1fcae8u;

    // 0x1fcae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fcae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fcaec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fcaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fcaf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fcaf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcaf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fcaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fcaf8: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1fcaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x1fcafc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fcafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fcb00: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1fcb00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb04: 0xc0ae7bc  jal         func_2B9EF0
    ctx->pc = 0x1FCB04u;
    SET_GPR_U32(ctx, 31, 0x1FCB0Cu);
    ctx->pc = 0x1FCB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB04u;
    // 0x1fcb08: 0x24848040  addiu       $a0, $a0, -0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9EF0u, 0x1FCB04u, 0x1FCB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB0Cu;
label_1fcb0c:
    // 0x1fcb0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCB0Cu;
    {
        const bool branch_taken_0x1fcb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB0Cu;
        // 0x1fcb10: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb0c) {
            ctx->pc = 0x1FCB1Cu;
            goto label_1fcb1c;
        }
    }
    ctx->pc = 0x1FCB14u;
    // 0x1fcb14: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1FCB14u;
    {
        const bool branch_taken_0x1fcb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB14u;
        // 0x1fcb18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb14) {
            ctx->pc = 0x1FCB84u;
            goto label_1fcb84;
        }
    }
    ctx->pc = 0x1FCB1Cu;
label_1fcb1c:
    // 0x1fcb1c: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x1fcb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1fcb20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fcb20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb24: 0xc0aec32  jal         func_2BB0C8
    ctx->pc = 0x1FCB24u;
    SET_GPR_U32(ctx, 31, 0x1FCB2Cu);
    ctx->pc = 0x1FCB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB24u;
    // 0x1fcb28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB0C8u, 0x1FCB24u, 0x1FCB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB2Cu;
label_1fcb2c:
    // 0x1fcb2c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1fcb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1fcb30: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1fcb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1fcb34: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fcb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1fcb38: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1fcb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1fcb3c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCB3Cu;
    {
        const bool branch_taken_0x1fcb3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fcb3c) {
            ctx->pc = 0x1FCB5Cu;
            goto label_1fcb5c;
        }
    }
    ctx->pc = 0x1FCB44u;
    // 0x1fcb44: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fcb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcb48: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1fcb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1fcb4c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1fcb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcb50: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1fcb50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1fcb54: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1fcb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcb58: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1fcb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1fcb5c:
    // 0x1fcb5c: 0x12040007  beq         $s0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCB5Cu;
    {
        const bool branch_taken_0x1fcb5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FCB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB5Cu;
        // 0x1fcb60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb5c) {
            ctx->pc = 0x1FCB7Cu;
            goto label_1fcb7c;
        }
    }
    ctx->pc = 0x1FCB64u;
    // 0x1fcb64: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1fcb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcb68: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1fcb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1fcb6c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1fcb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcb70: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1fcb70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1fcb74: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1fcb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcb78: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1fcb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1fcb7c:
    // 0x1fcb7c: 0x8602002c  lh          $v0, 0x2C($s0)
    ctx->pc = 0x1fcb7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1fcb80: 0xa203002e  sb          $v1, 0x2E($s0)
    ctx->pc = 0x1fcb80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 3));
label_1fcb84:
    // 0x1fcb84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fcb84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcb88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fcb88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcb8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fcb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcb90: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB90u;
        // 0x1fcb94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCB98u;
    // 0x1fcb98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fcb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fcb9c: 0x0  nop
    ctx->pc = 0x1fcb9cu;
    // NOP
    ctx->pc = 0x1fcba0u;
}
