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

// Function: func_00115F60
// Address: 0x115f60 - 0x1160a0
void func_00115F60_0x115f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00115F60_0x115f60");
#endif

    switch (ctx->pc) {
        case 0x115facu: goto label_115fac;
        case 0x115fb4u: goto label_115fb4;
        case 0x116028u: goto label_116028;
        case 0x11603cu: goto label_11603c;
        case 0x116044u: goto label_116044;
        case 0x116058u: goto label_116058;
        case 0x11607cu: goto label_11607c;
        case 0x116088u: goto label_116088;
        default: break;
    }

    ctx->pc = 0x115f60u;

    // 0x115f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115f64: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x115f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x115f68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115f6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x115f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x115f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115f74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x115f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f78: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x115f78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x115f7c: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x115f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x115f80: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x115f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x115f84: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x115F84u;
    {
        const bool branch_taken_0x115f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F84u;
        // 0x115f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f84) {
            ctx->pc = 0x115F9Cu;
            goto label_115f9c;
        }
    }
    ctx->pc = 0x115F8Cu;
    // 0x115f8c: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x115F8Cu;
    {
        const bool branch_taken_0x115f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x115f8c) {
            ctx->pc = 0x116034u;
            goto label_116034;
        }
    }
    ctx->pc = 0x115F94u;
    // 0x115f94: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x115F94u;
    {
        const bool branch_taken_0x115f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F94u;
        // 0x115f98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f94) {
            ctx->pc = 0x11608Cu;
            goto label_11608c;
        }
    }
    ctx->pc = 0x115F9Cu;
label_115f9c:
    // 0x115f9c: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x115f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x115fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115fa4: 0xc049a3c  jal         func_1268F0
    ctx->pc = 0x115FA4u;
    SET_GPR_U32(ctx, 31, 0x115FACu);
    ctx->pc = 0x115FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FA4u;
    // 0x115fa8: 0xa60005e2  sh          $zero, 0x5E2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268F0u, 0x115FA4u, 0x115FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FACu;
label_115fac:
    // 0x115fac: 0xc049396  jal         func_124E58
    ctx->pc = 0x115FACu;
    SET_GPR_U32(ctx, 31, 0x115FB4u);
    ctx->pc = 0x115FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FACu;
    // 0x115fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x115FACu, 0x115FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FB4u;
label_115fb4:
    // 0x115fb4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x115fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x115fb8: 0x26040490  addiu       $a0, $s0, 0x490
    ctx->pc = 0x115fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x115fbc: 0xc6000660  lwc1        $f0, 0x660($s0)
    ctx->pc = 0x115fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115fc0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x115fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x115fc4: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x115fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x115fc8: 0xc6000668  lwc1        $f0, 0x668($s0)
    ctx->pc = 0x115fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115fcc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x115fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x115fd0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x115fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x115fd4: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x115FD4u;
    {
        const bool branch_taken_0x115fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x115fd4) {
            ctx->pc = 0x115FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115FD4u;
            // 0x115fd8: 0xc6000670  lwc1        $f0, 0x670($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x115FF8u;
            goto label_115ff8;
        }
    }
    ctx->pc = 0x115FDCu;
    // 0x115fdc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x115fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115fe0: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x115fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x115fe4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x115fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115fe8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x115fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x115fec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x115fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115ff0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x115ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x115ff4: 0xc6000670  lwc1        $f0, 0x670($s0)
    ctx->pc = 0x115ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_115ff8:
    // 0x115ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ffc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x115ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x116000: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x116000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116004: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x116004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x116008: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x116008u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11600c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11600cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x116010: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x116010u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116014: 0x8c4508b8  lw          $a1, 0x8B8($v0)
    ctx->pc = 0x116014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2232)));
    // 0x116018: 0x8c4608bc  lw          $a2, 0x8BC($v0)
    ctx->pc = 0x116018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2236)));
    // 0x11601c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11601cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x116020: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x116020u;
    SET_GPR_U32(ctx, 31, 0x116028u);
    ctx->pc = 0x116024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116020u;
    // 0x116024: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x116020u, 0x116028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116028u;
label_116028:
    // 0x116028: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x116028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11602c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x116030: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x116030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_116034:
    // 0x116034: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x116034u;
    SET_GPR_U32(ctx, 31, 0x11603Cu);
    ctx->pc = 0x116038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116034u;
    // 0x116038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x116034u, 0x11603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11603Cu;
label_11603c:
    // 0x11603c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11603Cu;
    SET_GPR_U32(ctx, 31, 0x116044u);
    ctx->pc = 0x116040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11603Cu;
    // 0x116040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11603Cu, 0x116044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116044u;
label_116044:
    // 0x116044: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x116044u;
    {
        const bool branch_taken_0x116044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116044u;
        // 0x116048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116044) {
            ctx->pc = 0x116068u;
            goto label_116068;
        }
    }
    ctx->pc = 0x11604Cu;
    // 0x11604c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11604cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116050: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x116050u;
    SET_GPR_U32(ctx, 31, 0x116058u);
    ctx->pc = 0x116054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116050u;
    // 0x116054: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x116050u, 0x116058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116058u;
label_116058:
    // 0x116058: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x116058u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11605c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x11605cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x116060: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x116060u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x116064: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x116064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_116068:
    // 0x116068: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11606c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11606cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x116070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116074: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x116074u;
    SET_GPR_U32(ctx, 31, 0x11607Cu);
    ctx->pc = 0x116078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116074u;
    // 0x116078: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x116074u, 0x11607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11607Cu;
label_11607c:
    // 0x11607c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11607cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116080: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x116080u;
    SET_GPR_U32(ctx, 31, 0x116088u);
    ctx->pc = 0x116084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116080u;
    // 0x116084: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x116080u, 0x116088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116088u;
label_116088:
    // 0x116088: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x116088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11608c:
    // 0x11608c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11608cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116090: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x116090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x116094: 0x3e00008  jr          $ra
    ctx->pc = 0x116094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116094u;
        // 0x116098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11609Cu;
    // 0x11609c: 0x0  nop
    ctx->pc = 0x11609cu;
    // NOP
    ctx->pc = 0x1160a0u;
}
