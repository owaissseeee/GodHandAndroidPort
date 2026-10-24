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

// Function: func_001E4610
// Address: 0x1e4610 - 0x1e4730
void func_001E4610_0x1e4610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E4610_0x1e4610");
#endif

    switch (ctx->pc) {
        case 0x1e46f4u: goto label_1e46f4;
        case 0x1e4700u: goto label_1e4700;
        case 0x1e4710u: goto label_1e4710;
        case 0x1e471cu: goto label_1e471c;
        default: break;
    }

    ctx->pc = 0x1e4610u;

    // 0x1e4610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4614: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e4614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e4618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e461c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e461cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4620: 0x8e0304b0  lw          $v1, 0x4B0($s0)
    ctx->pc = 0x1e4620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1200)));
    // 0x1e4624: 0x5060003e  beql        $v1, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E4624u;
    {
        const bool branch_taken_0x1e4624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4624) {
            ctx->pc = 0x1E4628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4624u;
            // 0x1e4628: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4720u;
            goto label_1e4720;
        }
    }
    ctx->pc = 0x1E462Cu;
    // 0x1e462c: 0x8e0204b4  lw          $v0, 0x4B4($s0)
    ctx->pc = 0x1e462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1204)));
    // 0x1e4630: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x1E4630u;
    {
        const bool branch_taken_0x1e4630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4630) {
            ctx->pc = 0x1E4634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4630u;
            // 0x1e4634: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4720u;
            goto label_1e4720;
        }
    }
    ctx->pc = 0x1E4638u;
    // 0x1e4638: 0x9e020054  lwu         $v0, 0x54($s0)
    ctx->pc = 0x1e4638u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e463c: 0x2127b  dsra        $v0, $v0, 9
    ctx->pc = 0x1e463cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 9);
    // 0x1e4640: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e4644: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1E4644u;
    {
        const bool branch_taken_0x1e4644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4644) {
            ctx->pc = 0x1E4648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4644u;
            // 0x1e4648: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4720u;
            goto label_1e4720;
        }
    }
    ctx->pc = 0x1E464Cu;
    // 0x1e464c: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x1e464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1e4650: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e4654: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e4654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4658: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e4658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e465c: 0x3c01c302  lui         $at, 0xC302
    ctx->pc = 0x1e465cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49922 << 16));
    // 0x1e4660: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e4660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e4664: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e4664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e4668: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e4668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1e466c: 0x8e0204b4  lw          $v0, 0x4B4($s0)
    ctx->pc = 0x1e466cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1204)));
    // 0x1e4670: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1e4670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1e4674: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e4674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4678: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e4678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e467c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e467cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1e4680: 0x8e0204b0  lw          $v0, 0x4B0($s0)
    ctx->pc = 0x1e4680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1200)));
    // 0x1e4684: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1e4684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1e4688: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e4688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e468c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1e468cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4690: 0x0  nop
    ctx->pc = 0x1e4690u;
    // NOP
    // 0x1e4694: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4694u;
    {
        const bool branch_taken_0x1e4694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4694) {
            ctx->pc = 0x1E4698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4694u;
            // 0x1e4698: 0x8e0204b0  lw          $v0, 0x4B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E46B0u;
            goto label_1e46b0;
        }
    }
    ctx->pc = 0x1E469Cu;
    // 0x1e469c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e469cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e46a0: 0x8e0204b4  lw          $v0, 0x4B4($s0)
    ctx->pc = 0x1e46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1204)));
    // 0x1e46a4: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1e46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1e46a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1e46a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1e46ac: 0x8e0204b0  lw          $v0, 0x4B0($s0)
    ctx->pc = 0x1e46acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1200)));
label_1e46b0:
    // 0x1e46b0: 0x3c01c248  lui         $at, 0xC248
    ctx->pc = 0x1e46b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49736 << 16));
    // 0x1e46b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e46b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e46b8: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1e46b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1e46bc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1e46bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e46c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e46c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e46c4: 0x0  nop
    ctx->pc = 0x1e46c4u;
    // NOP
    // 0x1e46c8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1E46C8u;
    {
        const bool branch_taken_0x1e46c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E46CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E46C8u;
        // 0x1e46cc: 0x8e040458  lw          $a0, 0x458($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e46c8) {
            ctx->pc = 0x1E4708u;
            goto label_1e4708;
        }
    }
    ctx->pc = 0x1E46D0u;
    // 0x1e46d0: 0x3c01c270  lui         $at, 0xC270
    ctx->pc = 0x1e46d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49776 << 16));
    // 0x1e46d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e46d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e46d8: 0x0  nop
    ctx->pc = 0x1e46d8u;
    // NOP
    // 0x1e46dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e46dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e46e0: 0x0  nop
    ctx->pc = 0x1e46e0u;
    // NOP
    // 0x1e46e4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1E46E4u;
    {
        const bool branch_taken_0x1e46e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e46e4) {
            ctx->pc = 0x1E4708u;
            goto label_1e4708;
        }
    }
    ctx->pc = 0x1E46ECu;
    // 0x1e46ec: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E46ECu;
    SET_GPR_U32(ctx, 31, 0x1E46F4u);
    ctx->pc = 0x1E46F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E46ECu;
    // 0x1e46f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E46ECu, 0x1E46F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E46F4u;
label_1e46f4:
    // 0x1e46f4: 0x8e040488  lw          $a0, 0x488($s0)
    ctx->pc = 0x1e46f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1160)));
    // 0x1e46f8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E46F8u;
    SET_GPR_U32(ctx, 31, 0x1E4700u);
    ctx->pc = 0x1E46FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E46F8u;
    // 0x1e46fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E46F8u, 0x1E4700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4700u;
label_1e4700:
    // 0x1e4700: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E4700u;
    {
        const bool branch_taken_0x1e4700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4700u;
        // 0x1e4704: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4700) {
            ctx->pc = 0x1E4720u;
            goto label_1e4720;
        }
    }
    ctx->pc = 0x1E4708u;
label_1e4708:
    // 0x1e4708: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E4708u;
    SET_GPR_U32(ctx, 31, 0x1E4710u);
    ctx->pc = 0x1E470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4708u;
    // 0x1e470c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E4708u, 0x1E4710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4710u;
label_1e4710:
    // 0x1e4710: 0x8e040488  lw          $a0, 0x488($s0)
    ctx->pc = 0x1e4710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1160)));
    // 0x1e4714: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E4714u;
    SET_GPR_U32(ctx, 31, 0x1E471Cu);
    ctx->pc = 0x1E4718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4714u;
    // 0x1e4718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E4714u, 0x1E471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E471Cu;
label_1e471c:
    // 0x1e471c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e471cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4720:
    // 0x1e4720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4724: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4724u;
        // 0x1e4728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E472Cu;
    // 0x1e472c: 0x0  nop
    ctx->pc = 0x1e472cu;
    // NOP
    ctx->pc = 0x1e4730u;
}
