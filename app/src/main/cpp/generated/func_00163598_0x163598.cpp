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

// Function: func_00163598
// Address: 0x163598 - 0x163840
void func_00163598_0x163598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00163598_0x163598");
#endif

    switch (ctx->pc) {
        case 0x163698u: goto label_163698;
        default: break;
    }

    ctx->pc = 0x163598u;

    // 0x163598: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x163598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16359c: 0x80e3005c  lb          $v1, 0x5C($a3)
    ctx->pc = 0x16359cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x1635a0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1635a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1635a4: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x1635A4u;
    {
        const bool branch_taken_0x1635a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1635A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635A4u;
        // 0x1635a8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635a4) {
            ctx->pc = 0x163834u;
            goto label_163834;
        }
    }
    ctx->pc = 0x1635ACu;
    // 0x1635ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1635acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1635b0: 0x2442f560  addiu       $v0, $v0, -0xAA0
    ctx->pc = 0x1635b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964576));
    // 0x1635b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1635b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1635b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1635b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1635bc: 0x800008  jr          $a0
    ctx->pc = 0x1635BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1635C4u: goto label_1635c4;
            case 0x163664u: goto label_163664;
            case 0x1636A4u: goto label_1636a4;
            case 0x1636DCu: goto label_1636dc;
            case 0x163824u: goto label_163824;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1635BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1635C4u;
label_1635c4:
    // 0x1635c4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1635c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1635c8: 0x24e50100  addiu       $a1, $a3, 0x100
    ctx->pc = 0x1635c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x1635cc: 0xc461d880  lwc1        $f1, -0x2780($v1)
    ctx->pc = 0x1635ccu;
    { uint32_t bits = FAST_READ32(0x3BD880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1635d0: 0x2462d880  addiu       $v0, $v1, -0x2780
    ctx->pc = 0x1635d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957184));
    // 0x1635d4: 0x24e60110  addiu       $a2, $a3, 0x110
    ctx->pc = 0x1635d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 272));
    // 0x1635d8: 0x24e40080  addiu       $a0, $a3, 0x80
    ctx->pc = 0x1635d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x1635dc: 0xe4e10100  swc1        $f1, 0x100($a3)
    ctx->pc = 0x1635dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 256), bits); }
    // 0x1635e0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1635e0u;
    { uint32_t bits = FAST_READ32(0x3BD884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1635e4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1635e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1635e8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1635e8u;
    { uint32_t bits = FAST_READ32(0x3BD888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1635ec: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1635ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1635f0: 0xc460d880  lwc1        $f0, -0x2780($v1)
    ctx->pc = 0x1635f0u;
    { uint32_t bits = FAST_READ32(0x3BD880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1635f4: 0xe4e00110  swc1        $f0, 0x110($a3)
    ctx->pc = 0x1635f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 272), bits); }
    // 0x1635f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1635f8u;
    { uint32_t bits = FAST_READ32(0x3BD884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1635fc: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1635fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x163600: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x163600u;
    { uint32_t bits = FAST_READ32(0x3BD888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163604: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x163604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x163608: 0x80e300f0  lb          $v1, 0xF0($a3)
    ctx->pc = 0x163608u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 240)));
    // 0x16360c: 0x90e5005c  lbu         $a1, 0x5C($a3)
    ctx->pc = 0x16360cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x163610: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x163610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x163614: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163618: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x163618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16361c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x16361cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x163620: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x163620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163624: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x163624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163628: 0xc4420040  lwc1        $f2, 0x40($v0)
    ctx->pc = 0x163628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16362c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x16362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163630: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x163630u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x163634: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x163634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x163638: 0xe4e00100  swc1        $f0, 0x100($a3)
    ctx->pc = 0x163638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 256), bits); }
    // 0x16363c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16363cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163640: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x163640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163644: 0xe4e00104  swc1        $f0, 0x104($a3)
    ctx->pc = 0x163644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 260), bits); }
    // 0x163648: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x163648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16364c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x16364cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163650: 0xe4e00110  swc1        $f0, 0x110($a3)
    ctx->pc = 0x163650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 272), bits); }
    // 0x163654: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x163654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163658: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x163658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16365c: 0xa0e5005c  sb          $a1, 0x5C($a3)
    ctx->pc = 0x16365cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 92), (uint8_t)GPR_U32(ctx, 5));
    // 0x163660: 0xe4e00114  swc1        $f0, 0x114($a3)
    ctx->pc = 0x163660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 276), bits); }
label_163664:
    // 0x163664: 0xc4e00108  lwc1        $f0, 0x108($a3)
    ctx->pc = 0x163664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163668: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x163668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x16366c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x16366cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x163670: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x163670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x163674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x163678: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x163678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16367c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16367cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x163680: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x163680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163684: 0x0  nop
    ctx->pc = 0x163684u;
    // NOP
    // 0x163688: 0x4500006a  bc1f        . + 4 + (0x6A << 2)
    ctx->pc = 0x163688u;
    {
        const bool branch_taken_0x163688 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163688u;
        // 0x16368c: 0xe4e00108  swc1        $f0, 0x108($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163688) {
            ctx->pc = 0x163834u;
            goto label_163834;
        }
    }
    ctx->pc = 0x163690u;
    // 0x163690: 0x90e2005c  lbu         $v0, 0x5C($a3)
    ctx->pc = 0x163690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x163694: 0xe4e20108  swc1        $f2, 0x108($a3)
    ctx->pc = 0x163694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 264), bits); }
label_163698:
    // 0x163698: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16369c: 0x3e00008  jr          $ra
    ctx->pc = 0x16369Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1636A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16369Cu;
        // 0x1636a0: 0xa0e2005c  sb          $v0, 0x5C($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 92), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16369Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1636A4u;
label_1636a4:
    // 0x1636a4: 0xc4e00118  lwc1        $f0, 0x118($a3)
    ctx->pc = 0x1636a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1636a8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1636a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1636ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1636acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1636b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1636b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1636b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1636b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1636b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1636b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1636bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1636bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1636c0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1636c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1636c4: 0x0  nop
    ctx->pc = 0x1636c4u;
    // NOP
    // 0x1636c8: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
    ctx->pc = 0x1636C8u;
    {
        const bool branch_taken_0x1636c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1636CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636C8u;
        // 0x1636cc: 0xe4e00118  swc1        $f0, 0x118($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636c8) {
            ctx->pc = 0x163834u;
            goto label_163834;
        }
    }
    ctx->pc = 0x1636D0u;
    // 0x1636d0: 0x90e2005c  lbu         $v0, 0x5C($a3)
    ctx->pc = 0x1636d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x1636d4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1636D4u;
    {
        const bool branch_taken_0x1636d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636D4u;
        // 0x1636d8: 0xe4e20118  swc1        $f2, 0x118($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636d4) {
            ctx->pc = 0x163698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163698;
        }
    }
    ctx->pc = 0x1636DCu;
label_1636dc:
    // 0x1636dc: 0x90e200f0  lbu         $v0, 0xF0($a3)
    ctx->pc = 0x1636dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 240)));
    // 0x1636e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1636e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1636e4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1636e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1636e8: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x1636e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1636ec: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x1636ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1636f0: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1636F0u;
    {
        const bool branch_taken_0x1636f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636F0u;
        // 0x1636f4: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636f0) {
            ctx->pc = 0x163824u;
            goto label_163824;
        }
    }
    ctx->pc = 0x1636F8u;
    // 0x1636f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1636f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1636fc: 0x2442f580  addiu       $v0, $v0, -0xA80
    ctx->pc = 0x1636fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964608));
    // 0x163700: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x163700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163704: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x163704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163708: 0x800008  jr          $a0
    ctx->pc = 0x163708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163710u: goto label_163710;
            case 0x163730u: goto label_163730;
            case 0x163750u: goto label_163750;
            case 0x163770u: goto label_163770;
            case 0x163790u: goto label_163790;
            case 0x1637CCu: goto label_1637cc;
            case 0x1637ECu: goto label_1637ec;
            case 0x16380Cu: goto label_16380c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163708u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x163710u;
label_163710:
    // 0x163710: 0x8ce50084  lw          $a1, 0x84($a3)
    ctx->pc = 0x163710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x163714: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x163714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x163718: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x163718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16371c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x16371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x163720: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x163720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x163724: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x163724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x163728: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x163728u;
    {
        const bool branch_taken_0x163728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163728u;
        // 0x16372c: 0x8ce400a4  lw          $a0, 0xA4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163728) {
            ctx->pc = 0x163818u;
            goto label_163818;
        }
    }
    ctx->pc = 0x163730u;
label_163730:
    // 0x163730: 0x8ce50088  lw          $a1, 0x88($a3)
    ctx->pc = 0x163730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x163734: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x163734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x163738: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x163738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16373c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x16373cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x163740: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x163740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x163744: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x163744u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x163748: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x163748u;
    {
        const bool branch_taken_0x163748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163748u;
        // 0x16374c: 0x8ce400a8  lw          $a0, 0xA8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163748) {
            ctx->pc = 0x163818u;
            goto label_163818;
        }
    }
    ctx->pc = 0x163750u;
label_163750:
    // 0x163750: 0x8ce5008c  lw          $a1, 0x8C($a3)
    ctx->pc = 0x163750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x163754: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x163754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x163758: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x163758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16375c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x16375cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x163760: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x163760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x163764: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x163764u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x163768: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x163768u;
    {
        const bool branch_taken_0x163768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163768u;
        // 0x16376c: 0x8ce400ac  lw          $a0, 0xAC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163768) {
            ctx->pc = 0x163818u;
            goto label_163818;
        }
    }
    ctx->pc = 0x163770u;
label_163770:
    // 0x163770: 0x8ce50090  lw          $a1, 0x90($a3)
    ctx->pc = 0x163770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 144)));
    // 0x163774: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x163774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x163778: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x163778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16377c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x16377cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x163780: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x163780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x163784: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x163784u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x163788: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x163788u;
    {
        const bool branch_taken_0x163788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163788u;
        // 0x16378c: 0x8ce400b0  lw          $a0, 0xB0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163788) {
            ctx->pc = 0x163818u;
            goto label_163818;
        }
    }
    ctx->pc = 0x163790u;
label_163790:
    // 0x163790: 0x8ce50094  lw          $a1, 0x94($a3)
    ctx->pc = 0x163790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x163794: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x163794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x163798: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x163798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16379c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x16379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1637a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1637a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1637a4: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x1637a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x1637a8: 0x8ce400b4  lw          $a0, 0xB4($a3)
    ctx->pc = 0x1637a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x1637ac: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1637acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1637b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1637b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1637b4: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1637b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1637b8: 0x8ce50098  lw          $a1, 0x98($a3)
    ctx->pc = 0x1637b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 152)));
    // 0x1637bc: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x1637bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1637c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1637c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1637c4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1637C4u;
    {
        const bool branch_taken_0x1637c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1637C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637C4u;
        // 0x1637c8: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637c4) {
            ctx->pc = 0x163824u;
            goto label_163824;
        }
    }
    ctx->pc = 0x1637CCu;
label_1637cc:
    // 0x1637cc: 0x8ce5009c  lw          $a1, 0x9C($a3)
    ctx->pc = 0x1637ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 156)));
    // 0x1637d0: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1637d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1637d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1637d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1637d8: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x1637d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1637dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1637dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1637e0: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x1637e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x1637e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1637E4u;
    {
        const bool branch_taken_0x1637e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1637E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637E4u;
        // 0x1637e8: 0x8ce400b8  lw          $a0, 0xB8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637e4) {
            ctx->pc = 0x163818u;
            goto label_163818;
        }
    }
    ctx->pc = 0x1637ECu;
label_1637ec:
    // 0x1637ec: 0x8ce500a0  lw          $a1, 0xA0($a3)
    ctx->pc = 0x1637ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
    // 0x1637f0: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1637f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1637f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1637f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1637f8: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x1637f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1637fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1637fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x163800: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x163800u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x163804: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x163804u;
    {
        const bool branch_taken_0x163804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163804u;
        // 0x163808: 0x8ce400bc  lw          $a0, 0xBC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163804) {
            ctx->pc = 0x163818u;
            goto label_163818;
        }
    }
    ctx->pc = 0x16380Cu;
label_16380c:
    // 0x16380c: 0x8ce400c0  lw          $a0, 0xC0($a3)
    ctx->pc = 0x16380cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x163810: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x163810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x163814: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x163814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_163818:
    // 0x163818: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x163818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16381c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16381cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x163820: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x163820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_163824:
    // 0x163824: 0x90e2005b  lbu         $v0, 0x5B($a3)
    ctx->pc = 0x163824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x163828: 0xa0e0005c  sb          $zero, 0x5C($a3)
    ctx->pc = 0x163828u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x16382c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163830: 0xa0e2005b  sb          $v0, 0x5B($a3)
    ctx->pc = 0x163830u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 91), (uint8_t)GPR_U32(ctx, 2));
label_163834:
    // 0x163834: 0x3e00008  jr          $ra
    ctx->pc = 0x163834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16383Cu;
    // 0x16383c: 0x0  nop
    ctx->pc = 0x16383cu;
    // NOP
    ctx->pc = 0x163840u;
}
