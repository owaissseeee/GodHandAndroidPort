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

// Function: func_00146190
// Address: 0x146190 - 0x146328
void func_00146190_0x146190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00146190_0x146190");
#endif

    switch (ctx->pc) {
        case 0x146208u: goto label_146208;
        case 0x1462a8u: goto label_1462a8;
        default: break;
    }

    ctx->pc = 0x146190u;

    // 0x146190: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x146190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146198: 0x84c30420  lh          $v1, 0x420($a2)
    ctx->pc = 0x146198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 1056)));
    // 0x14619c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14619Cu;
    {
        const bool branch_taken_0x14619c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1461A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14619Cu;
        // 0x1461a0: 0x94c40420  lhu         $a0, 0x420($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14619c) {
            ctx->pc = 0x1461E4u;
            goto label_1461e4;
        }
    }
    ctx->pc = 0x1461A4u;
    // 0x1461a4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1461a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1461a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1461A8u;
    {
        const bool branch_taken_0x1461a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1461a8) {
            ctx->pc = 0x1461ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1461A8u;
            // 0x1461ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1461C0u;
            goto label_1461c0;
        }
    }
    ctx->pc = 0x1461B0u;
    // 0x1461b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1461B0u;
    {
        const bool branch_taken_0x1461b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1461B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1461B0u;
        // 0x1461b4: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1461b0) {
            ctx->pc = 0x1461D0u;
            goto label_1461d0;
        }
    }
    ctx->pc = 0x1461B8u;
    // 0x1461b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1461B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1461B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1461C0u;
label_1461c0:
    // 0x1461c0: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1461C0u;
    {
        const bool branch_taken_0x1461c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1461C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1461C0u;
        // 0x1461c4: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1461c0) {
            ctx->pc = 0x14626Cu;
            goto label_14626c;
        }
    }
    ctx->pc = 0x1461C8u;
    // 0x1461c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1461C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1461C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1461D0u;
label_1461d0:
    // 0x1461d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1461d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1461d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1461d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1461d8: 0xa4c20420  sh          $v0, 0x420($a2)
    ctx->pc = 0x1461d8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1056), (uint16_t)GPR_U32(ctx, 2));
    // 0x1461dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1461DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1461E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1461DCu;
        // 0x1461e0: 0xe4c00338  swc1        $f0, 0x338($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 824), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1461DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1461E4u;
label_1461e4:
    // 0x1461e4: 0xc4c00338  lwc1        $f0, 0x338($a2)
    ctx->pc = 0x1461e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1461e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1461e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1461ec: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1461ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1461f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1461f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1461f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1461f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1461f8: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1461f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1461fc: 0x24c90098  addiu       $t1, $a2, 0x98
    ctx->pc = 0x1461fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 152));
    // 0x146200: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x146200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x146204: 0xe4c00338  swc1        $f0, 0x338($a2)
    ctx->pc = 0x146204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 824), bits); }
label_146208:
    // 0x146208: 0xe81018  mult        $v0, $a3, $t0
    ctx->pc = 0x146208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14620c: 0xc4c00338  lwc1        $f0, 0x338($a2)
    ctx->pc = 0x14620cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146210: 0x492021  addu        $a0, $v0, $t1
    ctx->pc = 0x146210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x146214: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x146214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x146218: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x146218u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14621c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14621cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x146220: 0x2ce50005  sltiu       $a1, $a3, 0x5
    ctx->pc = 0x146220u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x146224: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x146224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x146228: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x146228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14622c: 0xc4c00338  lwc1        $f0, 0x338($a2)
    ctx->pc = 0x14622cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146230: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x146230u;
    {
        const bool branch_taken_0x146230 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x146234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146230u;
        // 0x146234: 0xe4600040  swc1        $f0, 0x40($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146230) {
            ctx->pc = 0x146208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146208;
        }
    }
    ctx->pc = 0x146238u;
    // 0x146238: 0xc4c10338  lwc1        $f1, 0x338($a2)
    ctx->pc = 0x146238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14623c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x14623cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x146240: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x146240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x146244: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x146244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146248: 0x0  nop
    ctx->pc = 0x146248u;
    // NOP
    // 0x14624c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14624cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146250: 0x0  nop
    ctx->pc = 0x146250u;
    // NOP
    // 0x146254: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x146254u;
    {
        const bool branch_taken_0x146254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146254) {
            ctx->pc = 0x146320u;
            goto label_146320;
        }
    }
    ctx->pc = 0x14625Cu;
    // 0x14625c: 0x94c20420  lhu         $v0, 0x420($a2)
    ctx->pc = 0x14625cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 1056)));
    // 0x146260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x146260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x146264: 0x3e00008  jr          $ra
    ctx->pc = 0x146264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146264u;
        // 0x146268: 0xa4c20420  sh          $v0, 0x420($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 1056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14626Cu;
label_14626c:
    // 0x14626c: 0x3c08bfff  lui         $t0, 0xBFFF
    ctx->pc = 0x14626cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49151 << 16));
    // 0x146270: 0x3c05dfff  lui         $a1, 0xDFFF
    ctx->pc = 0x146270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57343 << 16));
    // 0x146274: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x146274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x146278: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x146278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14627c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x14627cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x146280: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x146280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x146284: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x146284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146288: 0x244ae880  addiu       $t2, $v0, -0x1780
    ctx->pc = 0x146288u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x14628c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14628cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146290: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x146290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x146294: 0x24cb0094  addiu       $t3, $a2, 0x94
    ctx->pc = 0x146294u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 148));
    // 0x146298: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x146298u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x14629c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x14629cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1462a0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1462a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1462a4: 0x0  nop
    ctx->pc = 0x1462a4u;
    // NOP
label_1462a8:
    // 0x1462a8: 0xe91818  mult        $v1, $a3, $t1
    ctx->pc = 0x1462a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1462ac: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1462acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1462b0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1462b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1462b4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x1462b4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x1462b8: 0x6b2021  addu        $a0, $v1, $t3
    ctx->pc = 0x1462b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1462bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1462bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1462c0: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x1462c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1462c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1462c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1462c8: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1462c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1462cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1462ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1462d0: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1462d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1462d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1462d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1462d8: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x1462d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x1462dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1462dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1462e0: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x1462e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1462e4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1462e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1462e8: 0x0  nop
    ctx->pc = 0x1462e8u;
    // NOP
    // 0x1462ec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1462ECu;
    {
        const bool branch_taken_0x1462ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1462F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1462ECu;
        // 0x1462f0: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1462ec) {
            ctx->pc = 0x146310u;
            goto label_146310;
        }
    }
    ctx->pc = 0x1462F4u;
    // 0x1462f4: 0x8cc20090  lw          $v0, 0x90($a2)
    ctx->pc = 0x1462f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
    // 0x1462f8: 0xa4c00420  sh          $zero, 0x420($a2)
    ctx->pc = 0x1462f8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1056), (uint16_t)GPR_U32(ctx, 0));
    // 0x1462fc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x1462fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x146300: 0xa4c0041e  sh          $zero, 0x41E($a2)
    ctx->pc = 0x146300u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1054), (uint16_t)GPR_U32(ctx, 0));
    // 0x146304: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x146304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x146308: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x146308u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
    // 0x14630c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x14630cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_146310:
    // 0x146310: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x146310u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x146314: 0x2ce30004  sltiu       $v1, $a3, 0x4
    ctx->pc = 0x146314u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x146318: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x146318u;
    {
        const bool branch_taken_0x146318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146318u;
        // 0x14631c: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146318) {
            ctx->pc = 0x1462A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1462a8;
        }
    }
    ctx->pc = 0x146320u;
label_146320:
    // 0x146320: 0x3e00008  jr          $ra
    ctx->pc = 0x146320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146328u;
}
