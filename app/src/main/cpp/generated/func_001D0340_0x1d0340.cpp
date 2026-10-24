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

// Function: func_001D0340
// Address: 0x1d0340 - 0x1d0408
void func_001D0340_0x1d0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D0340_0x1d0340");
#endif

    switch (ctx->pc) {
        case 0x1d03e0u: goto label_1d03e0;
        default: break;
    }

    ctx->pc = 0x1d0340u;

    // 0x1d0340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0344: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d0344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d0348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d034c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d034cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0350: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1d0350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1d0354: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D0354u;
    {
        const bool branch_taken_0x1d0354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0354u;
        // 0x1d0358: 0x26030490  addiu       $v1, $s0, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0354) {
            ctx->pc = 0x1D0380u;
            goto label_1d0380;
        }
    }
    ctx->pc = 0x1D035Cu;
    // 0x1d035c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1d035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1d0360: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0360u;
    {
        const bool branch_taken_0x1d0360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0360) {
            ctx->pc = 0x1D0364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0360u;
            // 0x1d0364: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0384u;
            goto label_1d0384;
        }
    }
    ctx->pc = 0x1D0368u;
    // 0x1d0368: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d0368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d036c: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1d036cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x1d0370: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1d0370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0374: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1d0374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d0378: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1d0378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d037c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d037cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1d0380:
    // 0x1d0380: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1d0380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_1d0384:
    // 0x1d0384: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d0384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d0388: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d0388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d038c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d038cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0390: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1d0390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1d0394: 0x920402b4  lbu         $a0, 0x2B4($s0)
    ctx->pc = 0x1d0394u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1d0398: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d0398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d039c: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x1d039cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1d03a0: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1d03a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1d03a4: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1d03a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1d03a8: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x1d03a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
    // 0x1d03ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D03ACu;
    {
        const bool branch_taken_0x1d03ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D03B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03ACu;
        // 0x1d03b0: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d03ac) {
            ctx->pc = 0x1D03C0u;
            goto label_1d03c0;
        }
    }
    ctx->pc = 0x1D03B4u;
    // 0x1d03b4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1d03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1d03b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D03B8u;
    {
        const bool branch_taken_0x1d03b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03B8u;
        // 0x1d03bc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d03b8) {
            ctx->pc = 0x1D03C4u;
            goto label_1d03c4;
        }
    }
    ctx->pc = 0x1D03C0u;
label_1d03c0:
    // 0x1d03c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d03c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d03c4:
    // 0x1d03c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D03C4u;
    {
        const bool branch_taken_0x1d03c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D03C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03C4u;
        // 0x1d03c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d03c4) {
            ctx->pc = 0x1D03F8u;
            goto label_1d03f8;
        }
    }
    ctx->pc = 0x1D03CCu;
    // 0x1d03cc: 0xac400108  sw          $zero, 0x108($v0)
    ctx->pc = 0x1d03ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
    // 0x1d03d0: 0xac500148  sw          $s0, 0x148($v0)
    ctx->pc = 0x1d03d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 16));
    // 0x1d03d4: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1d03d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1d03d8: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1D03D8u;
    SET_GPR_U32(ctx, 31, 0x1D03E0u);
    ctx->pc = 0x1D03DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D03D8u;
    // 0x1d03dc: 0xac400104  sw          $zero, 0x104($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1D03D8u, 0x1D03E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03E0u;
label_1d03e0:
    // 0x1d03e0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d03e4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1d03e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d03e8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1d03e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d03ec: 0xae000670  sw          $zero, 0x670($s0)
    ctx->pc = 0x1d03ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1648), GPR_U32(ctx, 0));
    // 0x1d03f0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1d03f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d03f4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1d03f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1d03f8:
    // 0x1d03f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d03f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d03fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d03fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0400: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0400u;
        // 0x1d0404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0408u;
}
