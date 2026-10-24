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

// Function: func_002DD300
// Address: 0x2dd300 - 0x2dd3c0
void func_002DD300_0x2dd300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DD300_0x2dd300");
#endif

    switch (ctx->pc) {
        case 0x2dd318u: goto label_2dd318;
        case 0x2dd334u: goto label_2dd334;
        case 0x2dd358u: goto label_2dd358;
        case 0x2dd398u: goto label_2dd398;
        case 0x2dd3a8u: goto label_2dd3a8;
        default: break;
    }

    ctx->pc = 0x2dd300u;

    // 0x2dd300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dd304: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dd304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dd308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd30c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd310: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DD310u;
    SET_GPR_U32(ctx, 31, 0x2DD318u);
    ctx->pc = 0x2DD314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD310u;
    // 0x2dd314: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DD310u, 0x2DD318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD318u;
label_2dd318:
    // 0x2dd318: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DD318u;
    {
        const bool branch_taken_0x2dd318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD318u;
        // 0x2dd31c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd318) {
            ctx->pc = 0x2DD3A8u;
            goto label_2dd3a8;
        }
    }
    ctx->pc = 0x2DD320u;
    // 0x2dd320: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2dd320u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x2dd324: 0x58400021  blezl       $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2DD324u;
    {
        const bool branch_taken_0x2dd324 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dd324) {
            ctx->pc = 0x2DD328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD324u;
            // 0x2dd328: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD3ACu;
            goto label_2dd3ac;
        }
    }
    ctx->pc = 0x2DD32Cu;
    // 0x2dd32c: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DD32Cu;
    SET_GPR_U32(ctx, 31, 0x2DD334u);
    ctx->pc = 0x2DD330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD32Cu;
    // 0x2dd330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DD32Cu, 0x2DD334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD334u;
label_2dd334:
    // 0x2dd334: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DD334u;
    {
        const bool branch_taken_0x2dd334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd334) {
            ctx->pc = 0x2DD338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD334u;
            // 0x2dd338: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD3ACu;
            goto label_2dd3ac;
        }
    }
    ctx->pc = 0x2DD33Cu;
    // 0x2dd33c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dd33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dd340: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dd340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dd344: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dd344u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dd348: 0x5c600018  bgtzl       $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DD348u;
    {
        const bool branch_taken_0x2dd348 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dd348) {
            ctx->pc = 0x2DD34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD348u;
            // 0x2dd34c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD3ACu;
            goto label_2dd3ac;
        }
    }
    ctx->pc = 0x2DD350u;
    // 0x2dd350: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DD350u;
    SET_GPR_U32(ctx, 31, 0x2DD358u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DD350u, 0x2DD358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD358u;
label_2dd358:
    // 0x2dd358: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DD358u;
    {
        const bool branch_taken_0x2dd358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd358) {
            ctx->pc = 0x2DD35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD358u;
            // 0x2dd35c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD3ACu;
            goto label_2dd3ac;
        }
    }
    ctx->pc = 0x2DD360u;
    // 0x2dd360: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2dd360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2dd364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd36c: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x2dd36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2dd370: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dd370u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd374: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dd374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd378: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2dd378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2dd37c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2dd37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2dd380: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd384: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dd384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd388: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x2dd388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x2dd38c: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x2dd38cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dd390: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2DD390u;
    SET_GPR_U32(ctx, 31, 0x2DD398u);
    ctx->pc = 0x2DD394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD390u;
    // 0x2dd394: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2DD390u, 0x2DD398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD398u;
label_2dd398:
    // 0x2dd398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd39c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd3a0: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2DD3A0u;
    SET_GPR_U32(ctx, 31, 0x2DD3A8u);
    ctx->pc = 0x2DD3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD3A0u;
    // 0x2dd3a4: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2DD3A0u, 0x2DD3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD3A8u;
label_2dd3a8:
    // 0x2dd3a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dd3a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd3ac:
    // 0x2dd3ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd3acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd3b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3B4u;
        // 0x2dd3b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD3BCu;
    // 0x2dd3bc: 0x0  nop
    ctx->pc = 0x2dd3bcu;
    // NOP
    ctx->pc = 0x2dd3c0u;
}
