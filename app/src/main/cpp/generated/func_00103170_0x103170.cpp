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

// Function: func_00103170
// Address: 0x103170 - 0x1032c8
void func_00103170_0x103170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00103170_0x103170");
#endif

    switch (ctx->pc) {
        case 0x10318cu: goto label_10318c;
        case 0x1031e4u: goto label_1031e4;
        case 0x103204u: goto label_103204;
        case 0x103210u: goto label_103210;
        case 0x103220u: goto label_103220;
        case 0x103240u: goto label_103240;
        case 0x103260u: goto label_103260;
        case 0x103278u: goto label_103278;
        case 0x1032a4u: goto label_1032a4;
        case 0x1032b0u: goto label_1032b0;
        default: break;
    }

    ctx->pc = 0x103170u;

    // 0x103170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x103170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x103174: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x103174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x103178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x103178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10317c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10317cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x103180: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x103180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x103184: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x103184u;
    SET_GPR_U32(ctx, 31, 0x10318Cu);
    ctx->pc = 0x103188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103184u;
    // 0x103188: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x103184u, 0x10318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10318Cu;
label_10318c:
    // 0x10318c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10318cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x103190: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x103190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103194: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x103194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103198: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x103198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10319c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10319Cu;
    {
        const bool branch_taken_0x10319c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1031A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10319Cu;
        // 0x1031a0: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10319c) {
            ctx->pc = 0x1031B8u;
            goto label_1031b8;
        }
    }
    ctx->pc = 0x1031A4u;
    // 0x1031a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1031a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1031a8: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1031A8u;
    {
        const bool branch_taken_0x1031a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1031a8) {
            ctx->pc = 0x103270u;
            goto label_103270;
        }
    }
    ctx->pc = 0x1031B0u;
    // 0x1031b0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1031B0u;
    {
        const bool branch_taken_0x1031b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1031B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1031B0u;
        // 0x1031b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1031b0) {
            ctx->pc = 0x1032B4u;
            goto label_1032b4;
        }
    }
    ctx->pc = 0x1031B8u;
label_1031b8:
    // 0x1031b8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1031b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1031bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1031bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1031c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1031c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1031c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1031c8: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1031c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1031cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1031ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031d0: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x1031d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1031d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1031d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1031d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1031dc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1031DCu;
    SET_GPR_U32(ctx, 31, 0x1031E4u);
    ctx->pc = 0x1031E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031DCu;
    // 0x1031e0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1031DCu, 0x1031E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031E4u;
label_1031e4:
    // 0x1031e4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1031e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1031e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1031e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1031ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031f0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1031f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1031f4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1031f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1031f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1031f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031fc: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1031FCu;
    SET_GPR_U32(ctx, 31, 0x103204u);
    ctx->pc = 0x103200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031FCu;
    // 0x103200: 0x24050052  addiu       $a1, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1031FCu, 0x103204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103204u;
label_103204:
    // 0x103204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103208: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x103208u;
    SET_GPR_U32(ctx, 31, 0x103210u);
    ctx->pc = 0x10320Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103208u;
    // 0x10320c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x103208u, 0x103210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103210u;
label_103210:
    // 0x103210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103218: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x103218u;
    SET_GPR_U32(ctx, 31, 0x103220u);
    ctx->pc = 0x10321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103218u;
    // 0x10321c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x103218u, 0x103220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103220u;
label_103220:
    // 0x103220: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x103220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x103224: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x103224u;
    {
        const bool branch_taken_0x103224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103224u;
        // 0x103228: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103224) {
            ctx->pc = 0x103264u;
            goto label_103264;
        }
    }
    ctx->pc = 0x10322Cu;
    // 0x10322c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10322cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103230: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x103230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103234: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x103234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x103238: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x103238u;
    SET_GPR_U32(ctx, 31, 0x103240u);
    ctx->pc = 0x10323Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103238u;
    // 0x10323c: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x103238u, 0x103240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103240u;
label_103240:
    // 0x103240: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x103240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x103244: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x103244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x103248: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x103248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10324c: 0x0  nop
    ctx->pc = 0x10324cu;
    // NOP
    // 0x103250: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x103250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x103254: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x103254u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x103258: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x103258u;
    SET_GPR_U32(ctx, 31, 0x103260u);
    ctx->pc = 0x10325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103258u;
    // 0x10325c: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x103258u, 0x103260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103260u;
label_103260:
    // 0x103260: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x103260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_103264:
    // 0x103264: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x103264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x103268: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x103268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10326c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x10326cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_103270:
    // 0x103270: 0xc055f06  jal         func_157C18
    ctx->pc = 0x103270u;
    SET_GPR_U32(ctx, 31, 0x103278u);
    ctx->pc = 0x103274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103270u;
    // 0x103274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x103270u, 0x103278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103278u;
label_103278:
    // 0x103278: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103278u;
    {
        const bool branch_taken_0x103278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103278) {
            ctx->pc = 0x103290u;
            goto label_103290;
        }
    }
    ctx->pc = 0x103280u;
    // 0x103280: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x103280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x103284: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x103284u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x103288: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x103288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x10328c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x10328cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_103290:
    // 0x103290: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x103290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x103294: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x103294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x103298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10329c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x10329Cu;
    SET_GPR_U32(ctx, 31, 0x1032A4u);
    ctx->pc = 0x1032A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10329Cu;
    // 0x1032a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10329Cu, 0x1032A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1032A4u;
label_1032a4:
    // 0x1032a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1032a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1032a8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1032A8u;
    SET_GPR_U32(ctx, 31, 0x1032B0u);
    ctx->pc = 0x1032ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1032A8u;
    // 0x1032ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1032A8u, 0x1032B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1032B0u;
label_1032b0:
    // 0x1032b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1032b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1032b4:
    // 0x1032b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1032b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1032b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1032b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1032bc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1032bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1032c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1032C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1032C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032C0u;
        // 0x1032c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1032C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1032C8u;
}
