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

// Function: cEvent_playStart
// Address: 0x296458 - 0x296530
void cEvent_playStart_0x296458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_playStart_0x296458");
#endif

    switch (ctx->pc) {
        case 0x29646cu: goto label_29646c;
        case 0x296494u: goto label_296494;
        case 0x296518u: goto label_296518;
        default: break;
    }

    ctx->pc = 0x296458u;

    // 0x296458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29645c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x296460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296464: 0xc0a5d7e  jal         func_2975F8
    ctx->pc = 0x296464u;
    SET_GPR_U32(ctx, 31, 0x29646Cu);
    ctx->pc = 0x296468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296464u;
    // 0x296468: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2975F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2975F8u, 0x296464u, 0x29646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29646Cu;
label_29646c:
    // 0x29646c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x29646cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x296470: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x296470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x296474: 0x8c827a84  lw          $v0, 0x7A84($a0)
    ctx->pc = 0x296474u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A84u));
    // 0x296478: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x296478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29647c: 0xac827a84  sw          $v0, 0x7A84($a0)
    ctx->pc = 0x29647cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A84u, _value); } while (0);
    // 0x296480: 0xa2000034  sb          $zero, 0x34($s0)
    ctx->pc = 0x296480u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x296484: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x296484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x296488: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x296488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x29648c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x29648Cu;
    SET_GPR_U32(ctx, 31, 0x296494u);
    ctx->pc = 0x296490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29648Cu;
    // 0x296490: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x29648Cu, 0x296494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296494u;
label_296494:
    // 0x296494: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x296494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x296498: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x296498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x29649c: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x29649Cu;
    {
        const bool branch_taken_0x29649c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29649c) {
            ctx->pc = 0x2964A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29649Cu;
            // 0x2964a0: 0xc4410104  lwc1        $f1, 0x104($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2964C0u;
            goto label_2964c0;
        }
    }
    ctx->pc = 0x2964A4u;
    // 0x2964a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2964a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2964a8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2964a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2964ac: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2964acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2964b0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2964b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2964b4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2964b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2964b8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2964b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2964bc: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x2964bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2964c0:
    // 0x2964c0: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2964c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2964c4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2964c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2964c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2964c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2964cc: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x2964ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2964d0: 0xe440054c  swc1        $f0, 0x54C($v0)
    ctx->pc = 0x2964d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1356), bits); }
    // 0x2964d4: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x2964d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x2964d8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2964d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2964dc: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2964dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2964e0: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x2964e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2964e4: 0x8c626b34  lw          $v0, 0x6B34($v1)
    ctx->pc = 0x2964e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x586B34u));
    // 0x2964e8: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2964e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2964ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2964ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2964f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2964F0u;
    {
        const bool branch_taken_0x2964f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2964F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2964F0u;
        // 0x2964f4: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964f0) {
            ctx->pc = 0x296518u;
            goto label_296518;
        }
    }
    ctx->pc = 0x2964F8u;
    // 0x2964f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2964f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2964fc: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x2964fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x296500: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x296500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x296504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x296504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296508: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x296508u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x29650c: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x29650cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x296510: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x296510u;
    SET_GPR_U32(ctx, 31, 0x296518u);
    ctx->pc = 0x296514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296510u;
    // 0x296514: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x296510u, 0x296518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296518u;
label_296518:
    // 0x296518: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x296518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29651c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29651cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296520: 0x3e00008  jr          $ra
    ctx->pc = 0x296520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296520u;
        // 0x296524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296528u;
    // 0x296528: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x296528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29652c: 0x0  nop
    ctx->pc = 0x29652cu;
    // NOP
    ctx->pc = 0x296530u;
}
