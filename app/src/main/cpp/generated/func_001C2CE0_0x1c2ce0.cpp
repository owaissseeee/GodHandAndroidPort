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

// Function: func_001C2CE0
// Address: 0x1c2ce0 - 0x1c2d60
void func_001C2CE0_0x1c2ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C2CE0_0x1c2ce0");
#endif

    switch (ctx->pc) {
        case 0x1c2ce0u: goto label_1c2ce0;
        case 0x1c2ce4u: goto label_1c2ce4;
        case 0x1c2ce8u: goto label_1c2ce8;
        case 0x1c2cecu: goto label_1c2cec;
        case 0x1c2cf0u: goto label_1c2cf0;
        case 0x1c2cf4u: goto label_1c2cf4;
        case 0x1c2cf8u: goto label_1c2cf8;
        case 0x1c2cfcu: goto label_1c2cfc;
        case 0x1c2d00u: goto label_1c2d00;
        case 0x1c2d04u: goto label_1c2d04;
        case 0x1c2d08u: goto label_1c2d08;
        case 0x1c2d0cu: goto label_1c2d0c;
        case 0x1c2d10u: goto label_1c2d10;
        case 0x1c2d14u: goto label_1c2d14;
        case 0x1c2d18u: goto label_1c2d18;
        case 0x1c2d1cu: goto label_1c2d1c;
        case 0x1c2d20u: goto label_1c2d20;
        case 0x1c2d24u: goto label_1c2d24;
        case 0x1c2d28u: goto label_1c2d28;
        case 0x1c2d2cu: goto label_1c2d2c;
        case 0x1c2d30u: goto label_1c2d30;
        case 0x1c2d34u: goto label_1c2d34;
        case 0x1c2d38u: goto label_1c2d38;
        case 0x1c2d3cu: goto label_1c2d3c;
        case 0x1c2d40u: goto label_1c2d40;
        case 0x1c2d44u: goto label_1c2d44;
        case 0x1c2d48u: goto label_1c2d48;
        case 0x1c2d4cu: goto label_1c2d4c;
        case 0x1c2d50u: goto label_1c2d50;
        case 0x1c2d54u: goto label_1c2d54;
        case 0x1c2d58u: goto label_1c2d58;
        case 0x1c2d5cu: goto label_1c2d5c;
        default: break;
    }

    ctx->pc = 0x1c2ce0u;

label_1c2ce0:
    // 0x1c2ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c2ce4:
    // 0x1c2ce4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c2ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1c2ce8:
    // 0x1c2ce8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c2cec:
    // 0x1c2cec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c2cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c2cf0:
    // 0x1c2cf0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1c2cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c2cf4:
    // 0x1c2cf4: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x1c2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1c2cf8:
    // 0x1c2cf8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1c2cf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1c2cfc:
    // 0x1c2cfc: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1c2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1c2d00:
    // 0x1c2d00: 0x40f809  jalr        $v0
label_1c2d04:
    if (ctx->pc == 0x1C2D04u) {
        ctx->pc = 0x1C2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D00u;
        // 0x1c2d04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2D08u;
        goto label_1c2d08;
    }
    ctx->pc = 0x1C2D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C2D08u);
        ctx->pc = 0x1C2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D00u;
        // 0x1c2d04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2D00u, 0x1C2D08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2D08u;
label_1c2d08:
    // 0x1c2d08: 0x53a20008  beql        $sp, $v0, . + 4 + (0x8 << 2)
label_1c2d0c:
    if (ctx->pc == 0x1C2D0Cu) {
        ctx->pc = 0x1C2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D08u;
        // 0x1c2d0c: 0x8e0505ec  lw          $a1, 0x5EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2D10u;
        goto label_1c2d10;
    }
    ctx->pc = 0x1C2D08u;
    {
        const bool branch_taken_0x1c2d08 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c2d08) {
            ctx->pc = 0x1C2D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2D08u;
            // 0x1c2d0c: 0x8e0505ec  lw          $a1, 0x5EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D2Cu;
            goto label_1c2d2c;
        }
    }
    ctx->pc = 0x1C2D10u;
label_1c2d10:
    // 0x1c2d10: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c2d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c2d14:
    // 0x1c2d14: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c2d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c2d18:
    // 0x1c2d18: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c2d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c2d1c:
    // 0x1c2d1c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c2d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c2d20:
    // 0x1c2d20: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c2d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c2d24:
    // 0x1c2d24: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c2d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c2d28:
    // 0x1c2d28: 0x8e0505ec  lw          $a1, 0x5EC($s0)
    ctx->pc = 0x1c2d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1516)));
label_1c2d2c:
    // 0x1c2d2c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1c2d30:
    if (ctx->pc == 0x1C2D30u) {
        ctx->pc = 0x1C2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D2Cu;
        // 0x1c2d30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2D34u;
        goto label_1c2d34;
    }
    ctx->pc = 0x1C2D2Cu;
    {
        const bool branch_taken_0x1c2d2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D2Cu;
        // 0x1c2d30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d2c) {
            ctx->pc = 0x1C2D4Cu;
            goto label_1c2d4c;
        }
    }
    ctx->pc = 0x1C2D34u;
label_1c2d34:
    // 0x1c2d34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c2d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c2d38:
    // 0x1c2d38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c2d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c2d3c:
    // 0x1c2d3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2d40:
    // 0x1c2d40: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1c2d40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c2d44:
    // 0x1c2d44: 0xc0c1a0e  jal         func_306838
label_1c2d48:
    if (ctx->pc == 0x1C2D48u) {
        ctx->pc = 0x1C2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D44u;
        // 0x1c2d48: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2D4Cu;
        goto label_1c2d4c;
    }
    ctx->pc = 0x1C2D44u;
    SET_GPR_U32(ctx, 31, 0x1C2D4Cu);
    ctx->pc = 0x1C2D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D44u;
    // 0x1c2d48: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1C2D44u, 0x1C2D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D4Cu;
label_1c2d4c:
    // 0x1c2d4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c2d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2d50:
    // 0x1c2d50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c2d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2d54:
    // 0x1c2d54: 0x3e00008  jr          $ra
label_1c2d58:
    if (ctx->pc == 0x1C2D58u) {
        ctx->pc = 0x1C2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D54u;
        // 0x1c2d58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2D5Cu;
        goto label_1c2d5c;
    }
    ctx->pc = 0x1C2D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D54u;
        // 0x1c2d58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2D5Cu;
label_1c2d5c:
    // 0x1c2d5c: 0x0  nop
    ctx->pc = 0x1c2d5cu;
    // NOP
    ctx->pc = 0x1c2d60u;
}
