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

// Function: func_001160A0
// Address: 0x1160a0 - 0x1161e0
void func_001160A0_0x1160a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001160A0_0x1160a0");
#endif

    switch (ctx->pc) {
        case 0x1160ecu: goto label_1160ec;
        case 0x1160f4u: goto label_1160f4;
        case 0x116168u: goto label_116168;
        case 0x11617cu: goto label_11617c;
        case 0x116184u: goto label_116184;
        case 0x116198u: goto label_116198;
        case 0x1161bcu: goto label_1161bc;
        case 0x1161c8u: goto label_1161c8;
        default: break;
    }

    ctx->pc = 0x1160a0u;

    // 0x1160a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1160a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1160a4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1160a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1160a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1160a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1160ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1160acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1160b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1160b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1160b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1160b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160b8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1160b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1160bc: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x1160bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x1160c0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1160c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1160c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1160C4u;
    {
        const bool branch_taken_0x1160c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1160C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160C4u;
        // 0x1160c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160c4) {
            ctx->pc = 0x1160DCu;
            goto label_1160dc;
        }
    }
    ctx->pc = 0x1160CCu;
    // 0x1160cc: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1160CCu;
    {
        const bool branch_taken_0x1160cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1160cc) {
            ctx->pc = 0x116174u;
            goto label_116174;
        }
    }
    ctx->pc = 0x1160D4u;
    // 0x1160d4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1160D4u;
    {
        const bool branch_taken_0x1160d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1160D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160D4u;
        // 0x1160d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160d4) {
            ctx->pc = 0x1161CCu;
            goto label_1161cc;
        }
    }
    ctx->pc = 0x1160DCu;
label_1160dc:
    // 0x1160dc: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x1160dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x1160e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1160e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160e4: 0xc049a3c  jal         func_1268F0
    ctx->pc = 0x1160E4u;
    SET_GPR_U32(ctx, 31, 0x1160ECu);
    ctx->pc = 0x1160E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160E4u;
    // 0x1160e8: 0xa60005e2  sh          $zero, 0x5E2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268F0u, 0x1160E4u, 0x1160ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160ECu;
label_1160ec:
    // 0x1160ec: 0xc049396  jal         func_124E58
    ctx->pc = 0x1160ECu;
    SET_GPR_U32(ctx, 31, 0x1160F4u);
    ctx->pc = 0x1160F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160ECu;
    // 0x1160f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x1160ECu, 0x1160F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160F4u;
label_1160f4:
    // 0x1160f4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1160f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1160f8: 0x26040490  addiu       $a0, $s0, 0x490
    ctx->pc = 0x1160f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x1160fc: 0xc6000660  lwc1        $f0, 0x660($s0)
    ctx->pc = 0x1160fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116100: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x116100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x116104: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x116104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x116108: 0xc6000668  lwc1        $f0, 0x668($s0)
    ctx->pc = 0x116108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11610c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x11610cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x116110: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x116110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x116114: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x116114u;
    {
        const bool branch_taken_0x116114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x116114) {
            ctx->pc = 0x116118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116114u;
            // 0x116118: 0xc6000670  lwc1        $f0, 0x670($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x116138u;
            goto label_116138;
        }
    }
    ctx->pc = 0x11611Cu;
    // 0x11611c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116120: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x116120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x116124: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x116124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116128: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x116128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x11612c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116130: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x116130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x116134: 0xc6000670  lwc1        $f0, 0x670($s0)
    ctx->pc = 0x116134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_116138:
    // 0x116138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11613c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x11613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x116140: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x116140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116144: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x116144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x116148: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x116148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11614c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11614cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x116150: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x116150u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116154: 0x8c450954  lw          $a1, 0x954($v0)
    ctx->pc = 0x116154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2388)));
    // 0x116158: 0x8c460958  lw          $a2, 0x958($v0)
    ctx->pc = 0x116158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2392)));
    // 0x11615c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11615cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x116160: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x116160u;
    SET_GPR_U32(ctx, 31, 0x116168u);
    ctx->pc = 0x116164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116160u;
    // 0x116164: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x116160u, 0x116168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116168u;
label_116168:
    // 0x116168: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x116168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11616c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x116170: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x116170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_116174:
    // 0x116174: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x116174u;
    SET_GPR_U32(ctx, 31, 0x11617Cu);
    ctx->pc = 0x116178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116174u;
    // 0x116178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x116174u, 0x11617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11617Cu;
label_11617c:
    // 0x11617c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11617Cu;
    SET_GPR_U32(ctx, 31, 0x116184u);
    ctx->pc = 0x116180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11617Cu;
    // 0x116180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11617Cu, 0x116184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116184u;
label_116184:
    // 0x116184: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x116184u;
    {
        const bool branch_taken_0x116184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116184u;
        // 0x116188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116184) {
            ctx->pc = 0x1161A8u;
            goto label_1161a8;
        }
    }
    ctx->pc = 0x11618Cu;
    // 0x11618c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11618cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116190: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x116190u;
    SET_GPR_U32(ctx, 31, 0x116198u);
    ctx->pc = 0x116194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116190u;
    // 0x116194: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x116190u, 0x116198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116198u;
label_116198:
    // 0x116198: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x116198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11619c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x11619cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1161a0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1161a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1161a4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1161a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1161a8:
    // 0x1161a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1161a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1161ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1161acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1161b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1161b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161b4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1161B4u;
    SET_GPR_U32(ctx, 31, 0x1161BCu);
    ctx->pc = 0x1161B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161B4u;
    // 0x1161b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1161B4u, 0x1161BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161BCu;
label_1161bc:
    // 0x1161bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1161bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161c0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1161C0u;
    SET_GPR_U32(ctx, 31, 0x1161C8u);
    ctx->pc = 0x1161C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161C0u;
    // 0x1161c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1161C0u, 0x1161C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161C8u;
label_1161c8:
    // 0x1161c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1161c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1161cc:
    // 0x1161cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1161ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1161d0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1161d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1161d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1161D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1161D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161D4u;
        // 0x1161d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1161D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1161DCu;
    // 0x1161dc: 0x0  nop
    ctx->pc = 0x1161dcu;
    // NOP
    ctx->pc = 0x1161e0u;
}
