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

// Function: func_001D0240
// Address: 0x1d0240 - 0x1d0340
void func_001D0240_0x1d0240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D0240_0x1d0240");
#endif

    switch (ctx->pc) {
        case 0x1d02f0u: goto label_1d02f0;
        default: break;
    }

    ctx->pc = 0x1d0240u;

    // 0x1d0240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d0240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d0244: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d0244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d0248: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d0248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d024c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d024cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0250: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d0250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d0254: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d0254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d025c: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1d025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1d0260: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D0260u;
    {
        const bool branch_taken_0x1d0260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0260u;
        // 0x1d0264: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0260) {
            ctx->pc = 0x1D0290u;
            goto label_1d0290;
        }
    }
    ctx->pc = 0x1D0268u;
    // 0x1d0268: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1d0268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1d026c: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x1d026cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x1d0270: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0270u;
    {
        const bool branch_taken_0x1d0270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0270) {
            ctx->pc = 0x1D0274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0270u;
            // 0x1d0274: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0294u;
            goto label_1d0294;
        }
    }
    ctx->pc = 0x1D0278u;
    // 0x1d0278: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d0278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d027c: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1d027cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x1d0280: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1d0280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0284: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1d0284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d0288: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1d0288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d028c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d028cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1d0290:
    // 0x1d0290: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1d0290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_1d0294:
    // 0x1d0294: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d0294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d0298: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d0298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d029c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d029cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d02a0: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1d02a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1d02a4: 0x920402b4  lbu         $a0, 0x2B4($s0)
    ctx->pc = 0x1d02a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1d02a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d02a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d02ac: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x1d02acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1d02b0: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1d02b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1d02b4: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1d02b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1d02b8: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x1d02b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
    // 0x1d02bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D02BCu;
    {
        const bool branch_taken_0x1d02bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02BCu;
        // 0x1d02c0: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02bc) {
            ctx->pc = 0x1D02D0u;
            goto label_1d02d0;
        }
    }
    ctx->pc = 0x1D02C4u;
    // 0x1d02c4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1d02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1d02c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D02C8u;
    {
        const bool branch_taken_0x1d02c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02C8u;
        // 0x1d02cc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02c8) {
            ctx->pc = 0x1D02D4u;
            goto label_1d02d4;
        }
    }
    ctx->pc = 0x1D02D0u;
label_1d02d0:
    // 0x1d02d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d02d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d02d4:
    // 0x1d02d4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D02D4u;
    {
        const bool branch_taken_0x1d02d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D02D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02D4u;
        // 0x1d02d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02d4) {
            ctx->pc = 0x1D0328u;
            goto label_1d0328;
        }
    }
    ctx->pc = 0x1D02DCu;
    // 0x1d02dc: 0xac400108  sw          $zero, 0x108($v0)
    ctx->pc = 0x1d02dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
    // 0x1d02e0: 0xac500148  sw          $s0, 0x148($v0)
    ctx->pc = 0x1d02e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 16));
    // 0x1d02e4: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1d02e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1d02e8: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1D02E8u;
    SET_GPR_U32(ctx, 31, 0x1D02F0u);
    ctx->pc = 0x1D02ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D02E8u;
    // 0x1d02ec: 0xac400104  sw          $zero, 0x104($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1D02E8u, 0x1D02F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D02F0u;
label_1d02f0:
    // 0x1d02f0: 0x26020640  addiu       $v0, $s0, 0x640
    ctx->pc = 0x1d02f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    // 0x1d02f4: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D02F4u;
    {
        const bool branch_taken_0x1d02f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1D02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02F4u;
        // 0x1d02f8: 0xae120670  sw          $s2, 0x670($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1648), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02f4) {
            ctx->pc = 0x1D0314u;
            goto label_1d0314;
        }
    }
    ctx->pc = 0x1D02FCu;
    // 0x1d02fc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d02fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0300: 0xe6000640  swc1        $f0, 0x640($s0)
    ctx->pc = 0x1d0300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1600), bits); }
    // 0x1d0304: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1d0304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0308: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1d0308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1d030c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1d030cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0310: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1d0310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1d0314:
    // 0x1d0314: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1d0314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1d0318: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1d0318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d031c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1d031cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0320: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1d0320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0324: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1d0324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1d0328:
    // 0x1d0328: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d0328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d032c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d032cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0330: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d0330u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0338: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0338u;
        // 0x1d033c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0340u;
}
