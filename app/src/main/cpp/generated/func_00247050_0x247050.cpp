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

// Function: func_00247050
// Address: 0x247050 - 0x247218
void func_00247050_0x247050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00247050_0x247050");
#endif

    switch (ctx->pc) {
        case 0x2470b4u: goto label_2470b4;
        case 0x2470e0u: goto label_2470e0;
        case 0x2470e8u: goto label_2470e8;
        case 0x247118u: goto label_247118;
        case 0x247124u: goto label_247124;
        case 0x247130u: goto label_247130;
        case 0x247174u: goto label_247174;
        case 0x247184u: goto label_247184;
        case 0x2471b0u: goto label_2471b0;
        case 0x2471c4u: goto label_2471c4;
        case 0x2471d8u: goto label_2471d8;
        case 0x2471f4u: goto label_2471f4;
        case 0x247200u: goto label_247200;
        default: break;
    }

    ctx->pc = 0x247050u;

    // 0x247050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247054: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247058: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x247058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24705c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24705cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247068: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x247068u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24706c: 0xa2030617  sb          $v1, 0x617($s0)
    ctx->pc = 0x24706cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1559), (uint8_t)GPR_U32(ctx, 3));
    // 0x247070: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x247070u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x247074: 0x10820024  beq         $a0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x247074u;
    {
        const bool branch_taken_0x247074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x247078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247074u;
        // 0x247078: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x247074) {
            ctx->pc = 0x247108u;
            goto label_247108;
        }
    }
    ctx->pc = 0x24707Cu;
    // 0x24707c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24707Cu;
    {
        const bool branch_taken_0x24707c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24707c) {
            ctx->pc = 0x247080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24707Cu;
            // 0x247080: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247094u;
            goto label_247094;
        }
    }
    ctx->pc = 0x247084u;
    // 0x247084: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x247084u;
    {
        const bool branch_taken_0x247084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x247084) {
            ctx->pc = 0x2470ACu;
            goto label_2470ac;
        }
    }
    ctx->pc = 0x24708Cu;
    // 0x24708c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x24708Cu;
    {
        const bool branch_taken_0x24708c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24708Cu;
        // 0x247090: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24708c) {
            ctx->pc = 0x247204u;
            goto label_247204;
        }
    }
    ctx->pc = 0x247094u;
label_247094:
    // 0x247094: 0x10820039  beq         $a0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x247094u;
    {
        const bool branch_taken_0x247094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x247098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247094u;
        // 0x247098: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247094) {
            ctx->pc = 0x24717Cu;
            goto label_24717c;
        }
    }
    ctx->pc = 0x24709Cu;
    // 0x24709c: 0x1082004c  beq         $a0, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x24709Cu;
    {
        const bool branch_taken_0x24709c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x24709c) {
            ctx->pc = 0x2471D0u;
            goto label_2471d0;
        }
    }
    ctx->pc = 0x2470A4u;
    // 0x2470a4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2470A4u;
    {
        const bool branch_taken_0x2470a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2470A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470A4u;
        // 0x2470a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2470a4) {
            ctx->pc = 0x247204u;
            goto label_247204;
        }
    }
    ctx->pc = 0x2470ACu;
label_2470ac:
    // 0x2470ac: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2470ACu;
    SET_GPR_U32(ctx, 31, 0x2470B4u);
    ctx->pc = 0x2470B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2470ACu;
    // 0x2470b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2470ACu, 0x2470B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470B4u;
label_2470b4:
    // 0x2470b4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2470b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2470b8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2470b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2470bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2470bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2470c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2470c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2470c4: 0x8c6510a8  lw          $a1, 0x10A8($v1)
    ctx->pc = 0x2470c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x2470c8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2470c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2470cc: 0x8c6610ac  lw          $a2, 0x10AC($v1)
    ctx->pc = 0x2470ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4268)));
    // 0x2470d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2470d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2470d4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2470d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2470d8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2470D8u;
    SET_GPR_U32(ctx, 31, 0x2470E0u);
    ctx->pc = 0x2470DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2470D8u;
    // 0x2470dc: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2470D8u, 0x2470E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470E0u;
label_2470e0:
    // 0x2470e0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x2470E0u;
    SET_GPR_U32(ctx, 31, 0x2470E8u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x2470E0u, 0x2470E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470E8u;
label_2470e8:
    // 0x2470e8: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x2470e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x2470ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2470ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2470f0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2470f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2470f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2470f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2470f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2470f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2470fc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2470fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x247100: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x247100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x247104: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x247104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_247108:
    // 0x247108: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x247108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24710c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24710cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x247110: 0xc055f06  jal         func_157C18
    ctx->pc = 0x247110u;
    SET_GPR_U32(ctx, 31, 0x247118u);
    ctx->pc = 0x247114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247110u;
    // 0x247114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x247110u, 0x247118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247118u;
label_247118:
    // 0x247118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24711c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24711Cu;
    SET_GPR_U32(ctx, 31, 0x247124u);
    ctx->pc = 0x247120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24711Cu;
    // 0x247120: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24711Cu, 0x247124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247124u;
label_247124:
    // 0x247124: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x247124u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x247128: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x247128u;
    SET_GPR_U32(ctx, 31, 0x247130u);
    ctx->pc = 0x24712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247128u;
    // 0x24712c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x247128u, 0x247130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247130u;
label_247130:
    // 0x247130: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x247130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247134: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x247134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247138: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x247138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24713c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24713cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x247140: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x247140u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247144: 0x0  nop
    ctx->pc = 0x247144u;
    // NOP
    // 0x247148: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x247148u;
    {
        const bool branch_taken_0x247148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247148u;
        // 0x24714c: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x247148) {
            ctx->pc = 0x247158u;
            goto label_247158;
        }
    }
    ctx->pc = 0x247150u;
    // 0x247150: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x247150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x247154: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x247154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_247158:
    // 0x247158: 0xc60016c0  lwc1        $f0, 0x16C0($s0)
    ctx->pc = 0x247158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24715c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x24715cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247160: 0x0  nop
    ctx->pc = 0x247160u;
    // NOP
    // 0x247164: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
    ctx->pc = 0x247164u;
    {
        const bool branch_taken_0x247164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247164) {
            ctx->pc = 0x247168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247164u;
            // 0x247168: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247204u;
            goto label_247204;
        }
    }
    ctx->pc = 0x24716Cu;
    // 0x24716c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x24716Cu;
    SET_GPR_U32(ctx, 31, 0x247174u);
    ctx->pc = 0x247170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24716Cu;
    // 0x247170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x24716Cu, 0x247174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247174u;
label_247174:
    // 0x247174: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x247174u;
    {
        const bool branch_taken_0x247174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247174u;
        // 0x247178: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247174) {
            ctx->pc = 0x247204u;
            goto label_247204;
        }
    }
    ctx->pc = 0x24717Cu;
label_24717c:
    // 0x24717c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24717Cu;
    SET_GPR_U32(ctx, 31, 0x247184u);
    ctx->pc = 0x247180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24717Cu;
    // 0x247180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24717Cu, 0x247184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247184u;
label_247184:
    // 0x247184: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x247184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x247188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24718c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24718cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x247190: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x247190u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x247194: 0x8c6511a8  lw          $a1, 0x11A8($v1)
    ctx->pc = 0x247194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4520)));
    // 0x247198: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x247198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24719c: 0x8c6611b4  lw          $a2, 0x11B4($v1)
    ctx->pc = 0x24719cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4532)));
    // 0x2471a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2471a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2471a4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2471a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2471a8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2471A8u;
    SET_GPR_U32(ctx, 31, 0x2471B0u);
    ctx->pc = 0x2471ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471A8u;
    // 0x2471ac: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2471A8u, 0x2471B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471B0u;
label_2471b0:
    // 0x2471b0: 0x8e0406f0  lw          $a0, 0x6F0($s0)
    ctx->pc = 0x2471b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
    // 0x2471b4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2471B4u;
    {
        const bool branch_taken_0x2471b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2471b4) {
            ctx->pc = 0x2471B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2471B4u;
            // 0x2471b8: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2471C8u;
            goto label_2471c8;
        }
    }
    ctx->pc = 0x2471BCu;
    // 0x2471bc: 0xc074168  jal         func_1D05A0
    ctx->pc = 0x2471BCu;
    SET_GPR_U32(ctx, 31, 0x2471C4u);
    ctx->pc = 0x2471C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471BCu;
    // 0x2471c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05A0u, 0x2471BCu, 0x2471C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471C4u;
label_2471c4:
    // 0x2471c4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2471c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2471c8:
    // 0x2471c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2471c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2471cc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2471ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2471d0:
    // 0x2471d0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2471D0u;
    SET_GPR_U32(ctx, 31, 0x2471D8u);
    ctx->pc = 0x2471D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471D0u;
    // 0x2471d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2471D0u, 0x2471D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471D8u;
label_2471d8:
    // 0x2471d8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2471D8u;
    {
        const bool branch_taken_0x2471d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2471d8) {
            ctx->pc = 0x2471DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2471D8u;
            // 0x2471dc: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2471E0u;
            goto label_2471e0;
        }
    }
    ctx->pc = 0x2471E0u;
label_2471e0:
    // 0x2471e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2471e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2471e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2471e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2471e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2471e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2471ec: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2471ECu;
    SET_GPR_U32(ctx, 31, 0x2471F4u);
    ctx->pc = 0x2471F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471ECu;
    // 0x2471f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2471ECu, 0x2471F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471F4u;
label_2471f4:
    // 0x2471f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2471f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2471f8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2471F8u;
    SET_GPR_U32(ctx, 31, 0x247200u);
    ctx->pc = 0x2471FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471F8u;
    // 0x2471fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2471F8u, 0x247200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247200u;
label_247200:
    // 0x247200: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x247200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247204:
    // 0x247204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247208: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x247208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24720c: 0x3e00008  jr          $ra
    ctx->pc = 0x24720Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24720Cu;
        // 0x247210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24720Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247214u;
    // 0x247214: 0x0  nop
    ctx->pc = 0x247214u;
    // NOP
    ctx->pc = 0x247218u;
}
