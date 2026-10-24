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

// Function: func_001D0408
// Address: 0x1d0408 - 0x1d04d0
void func_001D0408_0x1d0408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D0408_0x1d0408");
#endif

    switch (ctx->pc) {
        case 0x1d04a8u: goto label_1d04a8;
        default: break;
    }

    ctx->pc = 0x1d0408u;

    // 0x1d0408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d040c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d040cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d0410: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0418: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1d0418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1d041c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D041Cu;
    {
        const bool branch_taken_0x1d041c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D041Cu;
        // 0x1d0420: 0x26030490  addiu       $v1, $s0, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d041c) {
            ctx->pc = 0x1D0448u;
            goto label_1d0448;
        }
    }
    ctx->pc = 0x1D0424u;
    // 0x1d0424: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1d0424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1d0428: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0428u;
    {
        const bool branch_taken_0x1d0428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0428) {
            ctx->pc = 0x1D042Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0428u;
            // 0x1d042c: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D044Cu;
            goto label_1d044c;
        }
    }
    ctx->pc = 0x1D0430u;
    // 0x1d0430: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d0430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0434: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1d0434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x1d0438: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1d0438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d043c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1d043cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d0440: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1d0440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0444: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d0444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1d0448:
    // 0x1d0448: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1d0448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_1d044c:
    // 0x1d044c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d044cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d0450: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d0450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d0454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d0454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0458: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1d0458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1d045c: 0x920402b4  lbu         $a0, 0x2B4($s0)
    ctx->pc = 0x1d045cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1d0460: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d0460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d0464: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x1d0464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1d0468: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1d0468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1d046c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1d046cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1d0470: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x1d0470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
    // 0x1d0474: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0474u;
    {
        const bool branch_taken_0x1d0474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0474u;
        // 0x1d0478: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0474) {
            ctx->pc = 0x1D0488u;
            goto label_1d0488;
        }
    }
    ctx->pc = 0x1D047Cu;
    // 0x1d047c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1d047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1d0480: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D0480u;
    {
        const bool branch_taken_0x1d0480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0480u;
        // 0x1d0484: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0480) {
            ctx->pc = 0x1D048Cu;
            goto label_1d048c;
        }
    }
    ctx->pc = 0x1D0488u;
label_1d0488:
    // 0x1d0488: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d048c:
    // 0x1d048c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D048Cu;
    {
        const bool branch_taken_0x1d048c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D048Cu;
        // 0x1d0490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d048c) {
            ctx->pc = 0x1D04C0u;
            goto label_1d04c0;
        }
    }
    ctx->pc = 0x1D0494u;
    // 0x1d0494: 0xac400108  sw          $zero, 0x108($v0)
    ctx->pc = 0x1d0494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
    // 0x1d0498: 0xac500148  sw          $s0, 0x148($v0)
    ctx->pc = 0x1d0498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 16));
    // 0x1d049c: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1d049cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1d04a0: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1D04A0u;
    SET_GPR_U32(ctx, 31, 0x1D04A8u);
    ctx->pc = 0x1D04A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D04A0u;
    // 0x1d04a4: 0xac400104  sw          $zero, 0x104($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1D04A0u, 0x1D04A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04A8u;
label_1d04a8:
    // 0x1d04a8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1d04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d04ac: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1d04acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d04b0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1d04b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d04b4: 0xae000670  sw          $zero, 0x670($s0)
    ctx->pc = 0x1d04b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1648), GPR_U32(ctx, 0));
    // 0x1d04b8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1d04b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d04bc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1d04bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1d04c0:
    // 0x1d04c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d04c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d04c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d04c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d04c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D04C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D04CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04C8u;
        // 0x1d04cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D04C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D04D0u;
}
