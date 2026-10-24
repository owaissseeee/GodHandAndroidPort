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

// Function: func_00158FC8
// Address: 0x158fc8 - 0x159200
void func_00158FC8_0x158fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00158FC8_0x158fc8");
#endif

    switch (ctx->pc) {
        case 0x158ff0u: goto label_158ff0;
        case 0x15903cu: goto label_15903c;
        case 0x15904cu: goto label_15904c;
        case 0x159070u: goto label_159070;
        default: break;
    }

    ctx->pc = 0x158fc8u;

    // 0x158fc8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x158fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x158fcc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x158fccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158fd0: 0x94a90002  lhu         $t1, 0x2($a1)
    ctx->pc = 0x158fd0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x158fd4: 0x825821  addu        $t3, $a0, $v0
    ctx->pc = 0x158fd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x158fd8: 0x256a0018  addiu       $t2, $t3, 0x18
    ctx->pc = 0x158fd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
    // 0x158fdc: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x158fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x158fe0: 0x11200013  beqz        $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x158FE0u;
    {
        const bool branch_taken_0x158fe0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x158FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FE0u;
        // 0x158fe4: 0xc5610004  lwc1        $f1, 0x4($t3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fe0) {
            ctx->pc = 0x159030u;
            goto label_159030;
        }
    }
    ctx->pc = 0x158FE8u;
    // 0x158fe8: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x158fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158fec: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x158fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_158ff0:
    // 0x158ff0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x158ff0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158ff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158ff8: 0x0  nop
    ctx->pc = 0x158ff8u;
    // NOP
    // 0x158ffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x158ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159000: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x159000u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159004: 0x0  nop
    ctx->pc = 0x159004u;
    // NOP
    // 0x159008: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x159008u;
    {
        const bool branch_taken_0x159008 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159008u;
        // 0x15900c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159008) {
            ctx->pc = 0x1590C8u;
            goto label_1590c8;
        }
    }
    ctx->pc = 0x159010u;
    // 0x159010: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x159010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159014: 0x0  nop
    ctx->pc = 0x159014u;
    // NOP
    // 0x159018: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x159018u;
    {
        const bool branch_taken_0x159018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159018u;
        // 0x15901c: 0x24a40008  addiu       $a0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159018) {
            ctx->pc = 0x159054u;
            goto label_159054;
        }
    }
    ctx->pc = 0x159020u;
    // 0x159020: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x159020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x159024: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x159024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x159028: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x159028u;
    {
        const bool branch_taken_0x159028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159028u;
        // 0x15902c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159028) {
            ctx->pc = 0x158FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158ff0;
        }
    }
    ctx->pc = 0x159030u;
label_159030:
    // 0x159030: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x159030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x159034: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x159034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x159038: 0x9443fffa  lhu         $v1, -0x6($v0)
    ctx->pc = 0x159038u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967290)));
label_15903c:
    // 0x15903c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15903cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159040: 0x0  nop
    ctx->pc = 0x159040u;
    // NOP
    // 0x159044: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159048: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x159048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_15904c:
    // 0x15904c: 0x3e00008  jr          $ra
    ctx->pc = 0x15904Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15904Cu;
        // 0x159050: 0x46030000  add.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15904Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159054u;
label_159054:
    // 0x159054: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x159054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x159058: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x159058u;
    {
        const bool branch_taken_0x159058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159058u;
        // 0x15905c: 0x246cffff  addiu       $t4, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159058) {
            ctx->pc = 0x1590B8u;
            goto label_1590b8;
        }
    }
    ctx->pc = 0x159060u;
    // 0x159060: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x159060u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x159064: 0xca2021  addu        $a0, $a2, $t2
    ctx->pc = 0x159064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x159068: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x159068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15906c: 0x0  nop
    ctx->pc = 0x15906cu;
    // NOP
label_159070:
    // 0x159070: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x159070u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159074: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x159074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15907c: 0x0  nop
    ctx->pc = 0x15907cu;
    // NOP
    // 0x159080: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159084: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x159084u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159088: 0x0  nop
    ctx->pc = 0x159088u;
    // NOP
    // 0x15908c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x15908Cu;
    {
        const bool branch_taken_0x15908c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x159090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15908Cu;
        // 0x159090: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15908c) {
            ctx->pc = 0x1590E0u;
            goto label_1590e0;
        }
    }
    ctx->pc = 0x159094u;
    // 0x159094: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x159094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159098: 0x0  nop
    ctx->pc = 0x159098u;
    // NOP
    // 0x15909c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x15909Cu;
    {
        const bool branch_taken_0x15909c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1590A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15909Cu;
        // 0x1590a0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15909c) {
            ctx->pc = 0x1590F8u;
            goto label_1590f8;
        }
    }
    ctx->pc = 0x1590A4u;
    // 0x1590a4: 0x24a60008  addiu       $a2, $a1, 0x8
    ctx->pc = 0x1590a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1590a8: 0x25070008  addiu       $a3, $t0, 0x8
    ctx->pc = 0x1590a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1590ac: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1590acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1590b0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1590B0u;
    {
        const bool branch_taken_0x1590b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1590B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590B0u;
        // 0x1590b4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590b0) {
            ctx->pc = 0x159070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159070;
        }
    }
    ctx->pc = 0x1590B8u;
label_1590b8:
    // 0x1590b8: 0xc10c0  sll         $v0, $t4, 3
    ctx->pc = 0x1590b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x1590bc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1590bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1590c0: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1590C0u;
    {
        const bool branch_taken_0x1590c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1590C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590C0u;
        // 0x1590c4: 0x94430002  lhu         $v1, 0x2($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590c0) {
            ctx->pc = 0x15903Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15903c;
        }
    }
    ctx->pc = 0x1590C8u;
label_1590c8:
    // 0x1590c8: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1590c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1590cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1590ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1590d0: 0x0  nop
    ctx->pc = 0x1590d0u;
    // NOP
    // 0x1590d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1590d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1590d8: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x1590D8u;
    {
        const bool branch_taken_0x1590d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1590DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590D8u;
        // 0x1590dc: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590d8) {
            ctx->pc = 0x15904Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15904c;
        }
    }
    ctx->pc = 0x1590E0u;
label_1590e0:
    // 0x1590e0: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x1590e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1590e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1590e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1590e8: 0x0  nop
    ctx->pc = 0x1590e8u;
    // NOP
    // 0x1590ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1590ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1590f0: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1590F0u;
    {
        const bool branch_taken_0x1590f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1590F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590F0u;
        // 0x1590f4: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590f0) {
            ctx->pc = 0x15904Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15904c;
        }
    }
    ctx->pc = 0x1590F8u;
label_1590f8:
    // 0x1590f8: 0xc10c0  sll         $v0, $t4, 3
    ctx->pc = 0x1590f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x1590fc: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x1590fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x159100: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x159100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x159104: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x159104u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159108: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x159108u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15910c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15910cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159110: 0x0  nop
    ctx->pc = 0x159110u;
    // NOP
    // 0x159114: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159118: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x159118u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x15911c: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x15911cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x159120: 0x0  nop
    ctx->pc = 0x159120u;
    // NOP
    // 0x159124: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x159124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x159128: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x159128u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x15912c: 0x44854000  mtc1        $a1, $f8
    ctx->pc = 0x15912cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x159130: 0x0  nop
    ctx->pc = 0x159130u;
    // NOP
    // 0x159134: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x159134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x159138: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x159138u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x15913c: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x15913cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x159140: 0x0  nop
    ctx->pc = 0x159140u;
    // NOP
    // 0x159144: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x159144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x159148: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x159148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x15914c: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x15914cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x159150: 0xc565000c  lwc1        $f5, 0xC($t3)
    ctx->pc = 0x159150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x159154: 0x46066181  sub.s       $f6, $f12, $f6
    ctx->pc = 0x159154u;
    ctx->f[6] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x159158: 0xc56b0014  lwc1        $f11, 0x14($t3)
    ctx->pc = 0x159158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x15915c: 0x46014202  mul.s       $f8, $f8, $f1
    ctx->pc = 0x15915cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x159160: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x159160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x159164: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x159164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x159168: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x159168u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x15916c: 0xc5620010  lwc1        $f2, 0x10($t3)
    ctx->pc = 0x15916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159170: 0x0  nop
    ctx->pc = 0x159170u;
    // NOP
    // 0x159174: 0x0  nop
    ctx->pc = 0x159174u;
    // NOP
    // 0x159178: 0x46003183  div.s       $f6, $f6, $f0
    ctx->pc = 0x159178u;
    ctx->f[6] = ps2FpuDivide(ctx->fcr31, ctx->f[6], ctx->f[0]);
    // 0x15917c: 0xc56a0008  lwc1        $f10, 0x8($t3)
    ctx->pc = 0x15917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x159180: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x159180u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
    // 0x159184: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x159184u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x159188: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x159188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15918c: 0x0  nop
    ctx->pc = 0x15918cu;
    // NOP
    // 0x159190: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x159190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x159194: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x159194u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x159198: 0x0  nop
    ctx->pc = 0x159198u;
    // NOP
    // 0x15919c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x15919cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1591a0: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x1591a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x1591a4: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1591a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1591a8: 0x460b2102  mul.s       $f4, $f4, $f11
    ctx->pc = 0x1591a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x1591ac: 0x46060942  mul.s       $f5, $f1, $f6
    ctx->pc = 0x1591acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1591b0: 0x46090a42  mul.s       $f9, $f1, $f9
    ctx->pc = 0x1591b0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x1591b4: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x1591b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x1591b8: 0x46052800  add.s       $f0, $f5, $f5
    ctx->pc = 0x1591b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x1591bc: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x1591bcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x1591c0: 0x460a18c0  add.s       $f3, $f3, $f10
    ctx->pc = 0x1591c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[10]);
    // 0x1591c4: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x1591c4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x1591c8: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x1591c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x1591cc: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x1591ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x1591d0: 0x46091080  add.s       $f2, $f2, $f9
    ctx->pc = 0x1591d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[9]);
    // 0x1591d4: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x1591d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x1591d8: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x1591d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x1591dc: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x1591dcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x1591e0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1591e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1591e4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1591e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1591e8: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1591e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1591ec: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x1591ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x1591f0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1591f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1591f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1591F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1591F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591F4u;
        // 0x1591f8: 0x46030000  add.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1591F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1591FCu;
    // 0x1591fc: 0x0  nop
    ctx->pc = 0x1591fcu;
    // NOP
    ctx->pc = 0x159200u;
}
