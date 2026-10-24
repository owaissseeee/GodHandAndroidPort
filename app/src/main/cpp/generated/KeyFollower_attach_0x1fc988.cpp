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

// Function: KeyFollower_attach
// Address: 0x1fc988 - 0x1fca38
void KeyFollower_attach_0x1fc988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyFollower_attach_0x1fc988");
#endif

    switch (ctx->pc) {
        case 0x1fc9acu: goto label_1fc9ac;
        case 0x1fc9ccu: goto label_1fc9cc;
        default: break;
    }

    ctx->pc = 0x1fc988u;

    // 0x1fc988: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fc98c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fc98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fc990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc994: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fc998: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1fc998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x1fc99c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc9a0: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x1fc9a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc9a4: 0xc0ae808  jal         func_2BA020
    ctx->pc = 0x1FC9A4u;
    SET_GPR_U32(ctx, 31, 0x1FC9ACu);
    ctx->pc = 0x1FC9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC9A4u;
    // 0x1fc9a8: 0x24848040  addiu       $a0, $a0, -0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA020u, 0x1FC9A4u, 0x1FC9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC9ACu;
label_1fc9ac:
    // 0x1fc9ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC9ACu;
    {
        const bool branch_taken_0x1fc9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9ACu;
        // 0x1fc9b0: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9ac) {
            ctx->pc = 0x1FC9BCu;
            goto label_1fc9bc;
        }
    }
    ctx->pc = 0x1FC9B4u;
    // 0x1fc9b4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1FC9B4u;
    {
        const bool branch_taken_0x1fc9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9B4u;
        // 0x1fc9b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9b4) {
            ctx->pc = 0x1FCA24u;
            goto label_1fca24;
        }
    }
    ctx->pc = 0x1FC9BCu;
label_1fc9bc:
    // 0x1fc9bc: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x1fc9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1fc9c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fc9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc9c4: 0xc0aec32  jal         func_2BB0C8
    ctx->pc = 0x1FC9C4u;
    SET_GPR_U32(ctx, 31, 0x1FC9CCu);
    ctx->pc = 0x1FC9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC9C4u;
    // 0x1fc9c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB0C8u, 0x1FC9C4u, 0x1FC9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC9CCu;
label_1fc9cc:
    // 0x1fc9cc: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1fc9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1fc9d0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1fc9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1fc9d4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fc9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1fc9d8: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1fc9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1fc9dc: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC9DCu;
    {
        const bool branch_taken_0x1fc9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc9dc) {
            ctx->pc = 0x1FC9FCu;
            goto label_1fc9fc;
        }
    }
    ctx->pc = 0x1FC9E4u;
    // 0x1fc9e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fc9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc9e8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1fc9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1fc9ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1fc9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fc9f0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1fc9f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1fc9f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1fc9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc9f8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1fc9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1fc9fc:
    // 0x1fc9fc: 0x12040007  beq         $s0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC9FCu;
    {
        const bool branch_taken_0x1fc9fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FCA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9FCu;
        // 0x1fca00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9fc) {
            ctx->pc = 0x1FCA1Cu;
            goto label_1fca1c;
        }
    }
    ctx->pc = 0x1FCA04u;
    // 0x1fca04: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1fca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fca08: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1fca08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1fca0c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1fca0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fca10: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1fca10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1fca14: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1fca14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fca18: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1fca18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1fca1c:
    // 0x1fca1c: 0x8602002c  lh          $v0, 0x2C($s0)
    ctx->pc = 0x1fca1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1fca20: 0xa203002e  sb          $v1, 0x2E($s0)
    ctx->pc = 0x1fca20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 3));
label_1fca24:
    // 0x1fca24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fca24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fca28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fca28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fca2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fca2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fca30: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA30u;
        // 0x1fca34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCA38u;
}
