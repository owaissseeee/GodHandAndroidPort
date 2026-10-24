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

// Function: func_002461F0
// Address: 0x2461f0 - 0x246370
void func_002461F0_0x2461f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002461F0_0x2461f0");
#endif

    switch (ctx->pc) {
        case 0x246280u: goto label_246280;
        case 0x2462a0u: goto label_2462a0;
        case 0x2462e8u: goto label_2462e8;
        case 0x246308u: goto label_246308;
        case 0x246310u: goto label_246310;
        case 0x246330u: goto label_246330;
        case 0x246344u: goto label_246344;
        case 0x246350u: goto label_246350;
        default: break;
    }

    ctx->pc = 0x2461f0u;

    // 0x2461f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2461f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2461f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2461f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2461f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2461f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2461fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2461fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246200: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x246200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x246204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246208: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x246208u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24620c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x24620cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x246210: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x246210u;
    {
        const bool branch_taken_0x246210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246210u;
        // 0x246214: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246210) {
            ctx->pc = 0x246228u;
            goto label_246228;
        }
    }
    ctx->pc = 0x246218u;
    // 0x246218: 0x50620025  beql        $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x246218u;
    {
        const bool branch_taken_0x246218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x246218) {
            ctx->pc = 0x24621Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246218u;
            // 0x24621c: 0xc6010600  lwc1        $f1, 0x600($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2462B0u;
            goto label_2462b0;
        }
    }
    ctx->pc = 0x246220u;
    // 0x246220: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x246220u;
    {
        const bool branch_taken_0x246220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246220u;
        // 0x246224: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246220) {
            ctx->pc = 0x246354u;
            goto label_246354;
        }
    }
    ctx->pc = 0x246228u;
label_246228:
    // 0x246228: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x246228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x24622c: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x24622cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x246230: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x246230u;
    {
        const bool branch_taken_0x246230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x246234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246230u;
        // 0x246234: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246230) {
            ctx->pc = 0x246258u;
            goto label_246258;
        }
    }
    ctx->pc = 0x246238u;
    // 0x246238: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24623c: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x24623cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x246240: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x246240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246244: 0x8c432b7c  lw          $v1, 0x2B7C($v0)
    ctx->pc = 0x246244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11132)));
    // 0x246248: 0x8c442b80  lw          $a0, 0x2B80($v0)
    ctx->pc = 0x246248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11136)));
    // 0x24624c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x24624cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x246250: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x246250u;
    {
        const bool branch_taken_0x246250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246250u;
        // 0x246254: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x246250) {
            ctx->pc = 0x246274u;
            goto label_246274;
        }
    }
    ctx->pc = 0x246258u;
label_246258:
    // 0x246258: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x246258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24625c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x24625cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x246260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x246260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246264: 0x8c432c30  lw          $v1, 0x2C30($v0)
    ctx->pc = 0x246264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11312)));
    // 0x246268: 0x8c442c34  lw          $a0, 0x2C34($v0)
    ctx->pc = 0x246268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11316)));
    // 0x24626c: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x24626cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x246270: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x246270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_246274:
    // 0x246274: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x246274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x246278: 0xc09d91a  jal         func_276468
    ctx->pc = 0x246278u;
    SET_GPR_U32(ctx, 31, 0x246280u);
    ctx->pc = 0x24627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246278u;
    // 0x24627c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x246278u, 0x246280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246280u;
label_246280:
    // 0x246280: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x246280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x246284: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x246284u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x246288: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x246288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24628c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24628cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246294: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x246294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x246298: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x246298u;
    SET_GPR_U32(ctx, 31, 0x2462A0u);
    ctx->pc = 0x24629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246298u;
    // 0x24629c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x246298u, 0x2462A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2462A0u;
label_2462a0:
    // 0x2462a0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2462a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2462a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2462a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2462a8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2462a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2462ac: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x2462acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2462b0:
    // 0x2462b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2462b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2462b4: 0x0  nop
    ctx->pc = 0x2462b4u;
    // NOP
    // 0x2462b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2462b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2462bc: 0x0  nop
    ctx->pc = 0x2462bcu;
    // NOP
    // 0x2462c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2462C0u;
    {
        const bool branch_taken_0x2462c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2462C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462C0u;
        // 0x2462c4: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2462c0) {
            ctx->pc = 0x2462E0u;
            goto label_2462e0;
        }
    }
    ctx->pc = 0x2462C8u;
    // 0x2462c8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2462c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2462cc: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x2462ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x2462d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2462d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2462d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2462d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2462d8: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x2462d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x2462dc: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x2462dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_2462e0:
    // 0x2462e0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2462E0u;
    SET_GPR_U32(ctx, 31, 0x2462E8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2462E0u, 0x2462E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2462E8u;
label_2462e8:
    // 0x2462e8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2462e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2462ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2462ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2462f0: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x2462f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x2462f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2462f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2462f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2462f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2462fc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2462fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x246300: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x246300u;
    SET_GPR_U32(ctx, 31, 0x246308u);
    ctx->pc = 0x246304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246300u;
    // 0x246304: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x246300u, 0x246308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246308u;
label_246308:
    // 0x246308: 0xc055f06  jal         func_157C18
    ctx->pc = 0x246308u;
    SET_GPR_U32(ctx, 31, 0x246310u);
    ctx->pc = 0x24630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246308u;
    // 0x24630c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x246308u, 0x246310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246310u;
label_246310:
    // 0x246310: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x246310u;
    {
        const bool branch_taken_0x246310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246310) {
            ctx->pc = 0x246328u;
            goto label_246328;
        }
    }
    ctx->pc = 0x246318u;
    // 0x246318: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x246318u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x24631c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x24631cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x246320: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246320u;
    {
        const bool branch_taken_0x246320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246320) {
            ctx->pc = 0x246330u;
            goto label_246330;
        }
    }
    ctx->pc = 0x246328u;
label_246328:
    // 0x246328: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x246328u;
    SET_GPR_U32(ctx, 31, 0x246330u);
    ctx->pc = 0x24632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246328u;
    // 0x24632c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x246328u, 0x246330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246330u;
label_246330:
    // 0x246330: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x246330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x246334: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x246334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x246338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24633c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24633Cu;
    SET_GPR_U32(ctx, 31, 0x246344u);
    ctx->pc = 0x246340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24633Cu;
    // 0x246340: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24633Cu, 0x246344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246344u;
label_246344:
    // 0x246344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246348: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x246348u;
    SET_GPR_U32(ctx, 31, 0x246350u);
    ctx->pc = 0x24634Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246348u;
    // 0x24634c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x246348u, 0x246350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246350u;
label_246350:
    // 0x246350: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x246350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_246354:
    // 0x246354: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x246354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246358: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x246358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24635c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24635cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246360: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x246360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x246364: 0x3e00008  jr          $ra
    ctx->pc = 0x246364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246364u;
        // 0x246368: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24636Cu;
    // 0x24636c: 0x0  nop
    ctx->pc = 0x24636cu;
    // NOP
    ctx->pc = 0x246370u;
}
