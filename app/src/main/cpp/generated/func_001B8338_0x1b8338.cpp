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

// Function: func_001B8338
// Address: 0x1b8338 - 0x1b8448
void func_001B8338_0x1b8338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B8338_0x1b8338");
#endif

    switch (ctx->pc) {
        case 0x1b8354u: goto label_1b8354;
        case 0x1b8388u: goto label_1b8388;
        case 0x1b83d8u: goto label_1b83d8;
        case 0x1b83e0u: goto label_1b83e0;
        case 0x1b8418u: goto label_1b8418;
        default: break;
    }

    ctx->pc = 0x1b8338u;

    // 0x1b8338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b833c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b833cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b8340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8348: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1b8348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1b834c: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1B834Cu;
    SET_GPR_U32(ctx, 31, 0x1B8354u);
    ctx->pc = 0x1B8350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B834Cu;
    // 0x1b8350: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B834Cu, 0x1B8354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8354u;
label_1b8354:
    // 0x1b8354: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1b8354u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1b8358: 0xc6020604  lwc1        $f2, 0x604($s0)
    ctx->pc = 0x1b8358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b835c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b835cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8360: 0x0  nop
    ctx->pc = 0x1b8360u;
    // NOP
    // 0x1b8364: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b8364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8368: 0x0  nop
    ctx->pc = 0x1b8368u;
    // NOP
    // 0x1b836c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B836Cu;
    {
        const bool branch_taken_0x1b836c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B836Cu;
        // 0x1b8370: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b836c) {
            ctx->pc = 0x1B837Cu;
            goto label_1b837c;
        }
    }
    ctx->pc = 0x1B8374u;
    // 0x1b8374: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1b8374u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1b8378: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x1b8378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
label_1b837c:
    // 0x1b837c: 0xe60105a8  swc1        $f1, 0x5A8($s0)
    ctx->pc = 0x1b837cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    // 0x1b8380: 0xc0560a2  jal         func_158288
    ctx->pc = 0x1B8380u;
    SET_GPR_U32(ctx, 31, 0x1B8388u);
    ctx->pc = 0x1B8384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8380u;
    // 0x1b8384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1B8380u, 0x1B8388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8388u;
label_1b8388:
    // 0x1b8388: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1b8388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1b838c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1b838cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1b8390: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B8390u;
    {
        const bool branch_taken_0x1b8390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8390u;
        // 0x1b8394: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8390) {
            ctx->pc = 0x1B8434u;
            goto label_1b8434;
        }
    }
    ctx->pc = 0x1B8398u;
    // 0x1b8398: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b8398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b839c: 0x24428b00  addiu       $v0, $v0, -0x7500
    ctx->pc = 0x1b839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937344));
    // 0x1b83a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b83a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b83a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b83a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b83a8: 0x800008  jr          $a0
    ctx->pc = 0x1B83A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B83B0u: goto label_1b83b0;
            case 0x1B83F8u: goto label_1b83f8;
            case 0x1B8404u: goto label_1b8404;
            case 0x1B8428u: goto label_1b8428;
            case 0x1B8434u: goto label_1b8434;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B83A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B83B0u;
label_1b83b0:
    // 0x1b83b0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1b83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1b83b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b83b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b83b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b83b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b83bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b83bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b83c0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1b83c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b83c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b83c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b83c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b83c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b83cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b83ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b83d0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1B83D0u;
    SET_GPR_U32(ctx, 31, 0x1B83D8u);
    ctx->pc = 0x1B83D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B83D0u;
    // 0x1b83d4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1B83D0u, 0x1B83D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B83D8u;
label_1b83d8:
    // 0x1b83d8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1B83D8u;
    SET_GPR_U32(ctx, 31, 0x1B83E0u);
    ctx->pc = 0x1B83DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B83D8u;
    // 0x1b83dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1B83D8u, 0x1B83E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B83E0u;
label_1b83e0:
    // 0x1b83e0: 0x96030434  lhu         $v1, 0x434($s0)
    ctx->pc = 0x1b83e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    // 0x1b83e4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1b83e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1b83e8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1b83e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1b83ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b83ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b83f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B83F0u;
    {
        const bool branch_taken_0x1b83f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B83F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B83F0u;
        // 0x1b83f4: 0xa6030434  sh          $v1, 0x434($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1076), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b83f0) {
            ctx->pc = 0x1B8430u;
            goto label_1b8430;
        }
    }
    ctx->pc = 0x1B83F8u;
label_1b83f8:
    // 0x1b83f8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1b83f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1b83fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b8400: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1b8400u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1b8404:
    // 0x1b8404: 0x96020434  lhu         $v0, 0x434($s0)
    ctx->pc = 0x1b8404u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    // 0x1b8408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b840c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1b840cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1b8410: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1B8410u;
    SET_GPR_U32(ctx, 31, 0x1B8418u);
    ctx->pc = 0x1B8414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8410u;
    // 0x1b8414: 0xa6020434  sh          $v0, 0x434($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1B8410u, 0x1B8418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8418u;
label_1b8418:
    // 0x1b8418: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8418u;
    {
        const bool branch_taken_0x1b8418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8418u;
        // 0x1b841c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8418) {
            ctx->pc = 0x1B8434u;
            goto label_1b8434;
        }
    }
    ctx->pc = 0x1B8420u;
    // 0x1b8420: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8420u;
    {
        const bool branch_taken_0x1b8420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8420u;
        // 0x1b8424: 0xa2020601  sb          $v0, 0x601($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1537), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8420) {
            ctx->pc = 0x1B8434u;
            goto label_1b8434;
        }
    }
    ctx->pc = 0x1B8428u;
label_1b8428:
    // 0x1b8428: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1b8428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1b842c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b842cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b8430:
    // 0x1b8430: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1b8430u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1b8434:
    // 0x1b8434: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b8434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b843c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B843Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B843Cu;
        // 0x1b8440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B843Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8444u;
    // 0x1b8444: 0x0  nop
    ctx->pc = 0x1b8444u;
    // NOP
    ctx->pc = 0x1b8448u;
}
