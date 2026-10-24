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

// Function: func_001FB1C0
// Address: 0x1fb1c0 - 0x1fb2d8
void func_001FB1C0_0x1fb1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FB1C0_0x1fb1c0");
#endif

    switch (ctx->pc) {
        case 0x1fb208u: goto label_1fb208;
        default: break;
    }

    ctx->pc = 0x1fb1c0u;

    // 0x1fb1c0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1fb1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1fb1c4: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1fb1c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb1c8: 0x90437a51  lbu         $v1, 0x7A51($v0)
    ctx->pc = 0x1fb1c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x747A51u));
    // 0x1fb1cc: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1FB1CCu;
    {
        const bool branch_taken_0x1fb1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB1CCu;
        // 0x1fb1d0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb1cc) {
            ctx->pc = 0x1FB2CCu;
            goto label_1fb2cc;
        }
    }
    ctx->pc = 0x1FB1D4u;
    // 0x1fb1d4: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x1fb1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fb1d8: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1FB1D8u;
    {
        const bool branch_taken_0x1fb1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB1D8u;
        // 0x1fb1dc: 0x2444028a  addiu       $a0, $v0, 0x28A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 650));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb1d8) {
            ctx->pc = 0x1FB2CCu;
            goto label_1fb2cc;
        }
    }
    ctx->pc = 0x1FB1E0u;
    // 0x1fb1e0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1fb1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1fb1e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb1e8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1fb1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1fb1ec: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1fb1ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1fb1f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fb1f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fb1f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fb1f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb1f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fb1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fb1fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fb1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fb200: 0x340dffff  ori         $t5, $zero, 0xFFFF
    ctx->pc = 0x1fb200u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fb204: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1fb204u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb208:
    // 0x1fb208: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1fb208u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb20c: 0x104d002a  beq         $v0, $t5, . + 4 + (0x2A << 2)
    ctx->pc = 0x1FB20Cu;
    {
        const bool branch_taken_0x1fb20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        ctx->pc = 0x1FB210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB20Cu;
        // 0x1fb210: 0xb5100  sll         $t2, $t3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb20c) {
            ctx->pc = 0x1FB2B8u;
            goto label_1fb2b8;
        }
    }
    ctx->pc = 0x1FB214u;
    // 0x1fb214: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x1fb214u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1fb218: 0x14450028  bne         $v0, $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FB218u;
    {
        const bool branch_taken_0x1fb218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1FB21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB218u;
        // 0x1fb21c: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb218) {
            ctx->pc = 0x1FB2BCu;
            goto label_1fb2bc;
        }
    }
    ctx->pc = 0x1FB220u;
    // 0x1fb220: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1fb220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb224: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fb224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fb228: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fb228u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fb22c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fb22cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fb230: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x1fb230u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fb234: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fb234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fb238: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1fb238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb23c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1fb23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1fb240: 0x2463028a  addiu       $v1, $v1, 0x28A
    ctx->pc = 0x1fb240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 650));
    // 0x1fb244: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fb244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fb248: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fb248u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fb24c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fb24cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fb250: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x1fb250u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fb254: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x1fb254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fb258: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1fb258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb25c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1fb25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1fb260: 0x2484028a  addiu       $a0, $a0, 0x28A
    ctx->pc = 0x1fb260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 650));
    // 0x1fb264: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fb264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fb268: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fb268u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fb26c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fb26cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fb270: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x1fb270u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fb274: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1fb274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb278: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x1fb278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fb27c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1fb27cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1fb280: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1fb280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1fb284: 0x2484028a  addiu       $a0, $a0, 0x28A
    ctx->pc = 0x1fb284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 650));
    // 0x1fb288: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1fb288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1fb28c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fb28cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fb290: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1fb290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1fb294: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x1fb294u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb298: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x1fb298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fb29c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1fb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1fb2a0: 0xa4480298  sh          $t0, 0x298($v0)
    ctx->pc = 0x1fb2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 664), (uint16_t)GPR_U32(ctx, 8));
    // 0x1fb2a4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fb2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fb2a8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fb2a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb2ac: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1fb2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1fb2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2B0u;
        // 0x1fb2b4: 0xa062028e  sb          $v0, 0x28E($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 654), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB2B8u;
label_1fb2b8:
    // 0x1fb2b8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1fb2b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1fb2bc:
    // 0x1fb2bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1fb2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1fb2c0: 0x2d620080  sltiu       $v0, $t3, 0x80
    ctx->pc = 0x1fb2c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1fb2c4: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1FB2C4u;
    {
        const bool branch_taken_0x1fb2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2C4u;
        // 0x1fb2c8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb2c4) {
            ctx->pc = 0x1FB208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb208;
        }
    }
    ctx->pc = 0x1FB2CCu;
label_1fb2cc:
    // 0x1fb2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB2D4u;
    // 0x1fb2d4: 0x0  nop
    ctx->pc = 0x1fb2d4u;
    // NOP
    ctx->pc = 0x1fb2d8u;
}
