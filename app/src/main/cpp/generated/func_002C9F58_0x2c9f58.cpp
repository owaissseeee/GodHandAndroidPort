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

// Function: func_002C9F58
// Address: 0x2c9f58 - 0x2ca040
void func_002C9F58_0x2c9f58(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C9F58_0x2c9f58");
#endif

    if (__builtin_expect(ctx->pc != 0x2c9f58u, 0)) {
        switch (ctx->pc) {
            case 0x2c9fdcu: goto label_2c9fdc;
            case 0x2c9ff0u: goto label_2c9ff0;
            case 0x2ca010u: goto label_2ca010;
            case 0x2ca018u: goto label_2ca018;
            case 0x2ca02cu: goto label_2ca02c;
            default: break;
        }
    }


    // 0x2c9f58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c9f5c: 0x44800000  mtc1        $zero, $f0
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9f60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c9f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c9f64: 0x3c020060  lui         $v0, 0x60
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2c9f68: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9f70: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c9f74: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9f78: 0x3c030060  lui         $v1, 0x60
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2c9f7c: 0x3c050060  lui         $a1, 0x60
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2c9f80: 0x3c060060  lui         $a2, 0x60
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x2c9f84: 0x3c078000  lui         $a3, 0x8000
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2c9f88: 0x2442fd80  addiu       $v0, $v0, -0x280
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966656));
    // 0x2c9f8c: 0x24631180  addiu       $v1, $v1, 0x1180
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4480));
    // 0x2c9f90: 0x24a5eff0  addiu       $a1, $a1, -0x1010
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963184));
    // 0x2c9f94: 0x24c6fcf0  addiu       $a2, $a2, -0x310
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966512));
    // 0x2c9f98: 0x2408fffe  addiu       $t0, $zero, -0x2
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2c9f9c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2c9f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2c9fa0: 0x260400d0  addiu       $a0, $s0, 0xD0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2c9fa4: 0xa600012c  sh          $zero, 0x12C($s0)
    ctx->pc = 0x2c9fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 300), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c9fa8: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2c9fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2c9fac: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x2c9facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x2c9fb0: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x2c9fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
    // 0x2c9fb4: 0xae060040  sw          $a2, 0x40($s0)
    ctx->pc = 0x2c9fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
    // 0x2c9fb8: 0xae070050  sw          $a3, 0x50($s0)
    ctx->pc = 0x2c9fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 7));
    // 0x2c9fbc: 0xae080128  sw          $t0, 0x128($s0)
    ctx->pc = 0x2c9fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 8));
    // 0x2c9fc0: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x2c9fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x2c9fc4: 0xe60100cc  swc1        $f1, 0xCC($s0)
    ctx->pc = 0x2c9fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
    // 0x2c9fc8: 0xae07005c  sw          $a3, 0x5C($s0)
    ctx->pc = 0x2c9fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 7));
    // 0x2c9fcc: 0xae070058  sw          $a3, 0x58($s0)
    ctx->pc = 0x2c9fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 7));
    // 0x2c9fd0: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x2c9fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x2c9fd4: 0xc0c2968  jal         func_30A5A0
    SET_GPR_U32(ctx, 31, 0x2C9FDCu);
    ctx->pc = 0x2C9FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9FD4u;
    // 0x2c9fd8: 0xe60000c4  swc1        $f0, 0xC4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0UnitMatrix_0x30a5a0, 0x30a5a0u, 0x2c9fdcu)) {
        return;
    }
label_2c9fdc:
    // 0x2c9fdc: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x2c9fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x2c9fe0: 0x2404ffff  addiu       $a0, $zero, -0x1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c9fe4: 0x26020160  addiu       $v0, $s0, 0x160
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x2c9fe8: 0x2403000f  addiu       $v1, $zero, 0xF
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c9fec: 0x0  nop
    // NOP
label_2c9ff0:
    // 0x2c9ff0: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x2c9ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c9ff4: 0x2463ffff  addiu       $v1, $v1, -0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c9ff8: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x2c9ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c9ffc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c9ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2ca000: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CA000u;
    {
        const bool branch_taken_0x2ca000 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2CA004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA000u;
        // 0x2ca004: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca000) {
            ctx->pc = 0x2C9FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9ff0;
        }
    }
    // 0x2ca008: 0xc0b358e  jal         func_2CD638
    SET_GPR_U32(ctx, 31, 0x2CA010u);
    ctx->pc = 0x2CA00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA008u;
    // 0x2ca00c: 0xae0001e0  sw          $zero, 0x1E0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSndMemHeap_OpenMain_0x2cd638, 0x2cd638u, 0x2ca010u)) {
        return;
    }
label_2ca010:
    // 0x2ca010: 0xc0b2888  jal         func_2CA220
    SET_GPR_U32(ctx, 31, 0x2CA018u);
    ctx->pc = 0x2CA014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA010u;
    // 0x2ca014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002CA220_0x2ca220, 0x2ca220u, 0x2ca018u)) {
        return;
    }
label_2ca018:
    // 0x2ca018: 0x2402ffff  addiu       $v0, $zero, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ca01c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca020: 0xae020130  sw          $v0, 0x130($s0)
    ctx->pc = 0x2ca020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
    // 0x2ca024: 0xc0b28e4  jal         func_2CA390
    SET_GPR_U32(ctx, 31, 0x2CA02Cu);
    ctx->pc = 0x2CA028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA024u;
    // 0x2ca028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002CA390_0x2ca390, 0x2ca390u, 0x2ca02cu)) {
        return;
    }
label_2ca02c:
    // 0x2ca02c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ca02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca034: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA034u;
        // 0x2ca038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2ca03c: 0x0  nop
    // NOP
    ctx->pc = 0x2ca040u;
}