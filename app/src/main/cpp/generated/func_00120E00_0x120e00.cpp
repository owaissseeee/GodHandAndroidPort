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

// Function: func_00120E00
// Address: 0x120e00 - 0x1212d0
void func_00120E00_0x120e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00120E00_0x120e00");
#endif

    switch (ctx->pc) {
        case 0x120e4cu: goto label_120e4c;
        case 0x120e58u: goto label_120e58;
        case 0x120ea8u: goto label_120ea8;
        case 0x120ed0u: goto label_120ed0;
        case 0x120f1cu: goto label_120f1c;
        case 0x120f30u: goto label_120f30;
        case 0x120f38u: goto label_120f38;
        case 0x120f40u: goto label_120f40;
        case 0x120f50u: goto label_120f50;
        case 0x120fa4u: goto label_120fa4;
        case 0x120facu: goto label_120fac;
        case 0x12101cu: goto label_12101c;
        case 0x121030u: goto label_121030;
        case 0x12104cu: goto label_12104c;
        case 0x121054u: goto label_121054;
        case 0x121060u: goto label_121060;
        case 0x12106cu: goto label_12106c;
        case 0x1210b0u: goto label_1210b0;
        case 0x12110cu: goto label_12110c;
        case 0x121120u: goto label_121120;
        case 0x12113cu: goto label_12113c;
        case 0x121160u: goto label_121160;
        case 0x121170u: goto label_121170;
        case 0x121188u: goto label_121188;
        case 0x1211a8u: goto label_1211a8;
        case 0x1211b4u: goto label_1211b4;
        case 0x1211c0u: goto label_1211c0;
        case 0x121214u: goto label_121214;
        case 0x121228u: goto label_121228;
        case 0x12123cu: goto label_12123c;
        case 0x121244u: goto label_121244;
        case 0x121258u: goto label_121258;
        case 0x12127cu: goto label_12127c;
        case 0x121288u: goto label_121288;
        case 0x121294u: goto label_121294;
        case 0x1212a8u: goto label_1212a8;
        default: break;
    }

    ctx->pc = 0x120e00u;

    // 0x120e00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x120e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x120e04: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x120e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x120e08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x120e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x120e0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x120e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x120e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x120e14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x120e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x120e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x120e1c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x120e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x120e20: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x120e20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x120e24: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x120e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x120e28: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x120e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x120e2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120e30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x120e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e34: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x120e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x120e38: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x120e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x120e3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x120e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x120e40: 0x8e110694  lw          $s1, 0x694($s0)
    ctx->pc = 0x120e40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
    // 0x120e44: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x120E44u;
    SET_GPR_U32(ctx, 31, 0x120E4Cu);
    ctx->pc = 0x120E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120E44u;
    // 0x120e48: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x120E44u, 0x120E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120E4Cu;
label_120e4c:
    // 0x120e4c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x120e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x120e50: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x120E50u;
    SET_GPR_U32(ctx, 31, 0x120E58u);
    ctx->pc = 0x120E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120E50u;
    // 0x120e54: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x120E50u, 0x120E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120E58u;
label_120e58:
    // 0x120e58: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x120e58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x120e5c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x120e5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x120e60: 0x10400115  beqz        $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x120E60u;
    {
        const bool branch_taken_0x120e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E60u;
        // 0x120e64: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e60) {
            ctx->pc = 0x1212B8u;
            goto label_1212b8;
        }
    }
    ctx->pc = 0x120E68u;
    // 0x120e68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x120e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x120e6c: 0x2442c730  addiu       $v0, $v0, -0x38D0
    ctx->pc = 0x120e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952752));
    // 0x120e70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x120e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120e74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x120e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120e78: 0x800008  jr          $a0
    ctx->pc = 0x120E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120E80u: goto label_120e80;
            case 0x120F6Cu: goto label_120f6c;
            case 0x120FD0u: goto label_120fd0;
            case 0x12103Cu: goto label_12103c;
            case 0x1210C0u: goto label_1210c0;
            case 0x121134u: goto label_121134;
            case 0x1211C8u: goto label_1211c8;
            case 0x121234u: goto label_121234;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120E78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x120E80u;
label_120e80:
    // 0x120e80: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x120e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x120e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e88: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x120e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x120e8c: 0x240600cf  addiu       $a2, $zero, 0xCF
    ctx->pc = 0x120e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x120e90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x120e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x120e94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x120e98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x120e9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ea0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x120EA0u;
    SET_GPR_U32(ctx, 31, 0x120EA8u);
    ctx->pc = 0x120EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120EA0u;
    // 0x120ea4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x120EA0u, 0x120EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120EA8u;
label_120ea8:
    // 0x120ea8: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x120EA8u;
    {
        const bool branch_taken_0x120ea8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x120ea8) {
            ctx->pc = 0x120EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120EA8u;
            // 0x120eac: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120ED4u;
            goto label_120ed4;
        }
    }
    ctx->pc = 0x120EB0u;
    // 0x120eb0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x120eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x120eb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120eb8: 0xc620076c  lwc1        $f0, 0x76C($s1)
    ctx->pc = 0x120eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120ebc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x120ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x120ec0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120ec0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x120ec4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x120ec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x120ec8: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x120EC8u;
    SET_GPR_U32(ctx, 31, 0x120ED0u);
    ctx->pc = 0x120ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120EC8u;
    // 0x120ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x120EC8u, 0x120ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120ED0u;
label_120ed0:
    // 0x120ed0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x120ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_120ed4:
    // 0x120ed4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x120ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ed8: 0x3c01bd8f  lui         $at, 0xBD8F
    ctx->pc = 0x120ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48527 << 16));
    // 0x120edc: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x120edcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x120ee0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x120ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x120ee4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ee8: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x120ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x120eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ef0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120ef4: 0x3421f27c  ori         $at, $at, 0xF27C
    ctx->pc = 0x120ef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62076);
    // 0x120ef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120efc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x120efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120f04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120f08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x120f08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x120f0c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x120f0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x120f10: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x120f10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x120f14: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x120F14u;
    SET_GPR_U32(ctx, 31, 0x120F1Cu);
    ctx->pc = 0x120F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120F14u;
    // 0x120f18: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x120F14u, 0x120F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F1Cu;
label_120f1c:
    // 0x120f1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x120f1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x120f20: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x120f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x120f24: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x120f24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x120f28: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x120F28u;
    SET_GPR_U32(ctx, 31, 0x120F30u);
    ctx->pc = 0x120F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120F28u;
    // 0x120f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x120F28u, 0x120F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F30u;
label_120f30:
    // 0x120f30: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x120F30u;
    SET_GPR_U32(ctx, 31, 0x120F38u);
    ctx->pc = 0x120F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120F30u;
    // 0x120f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x120F30u, 0x120F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F38u;
label_120f38:
    // 0x120f38: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x120F38u;
    SET_GPR_U32(ctx, 31, 0x120F40u);
    ctx->pc = 0x120F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120F38u;
    // 0x120f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x120F38u, 0x120F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F40u;
label_120f40:
    // 0x120f40: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x120f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x120f44: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x120f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x120f48: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x120F48u;
    SET_GPR_U32(ctx, 31, 0x120F50u);
    ctx->pc = 0x120F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120F48u;
    // 0x120f4c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x120F48u, 0x120F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F50u;
label_120f50:
    // 0x120f50: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x120f50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x120f54: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x120f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x120f58: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x120f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x120f5c: 0xae0315b0  sw          $v1, 0x15B0($s0)
    ctx->pc = 0x120f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 3));
    // 0x120f60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x120f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120f64: 0xa604056e  sh          $a0, 0x56E($s0)
    ctx->pc = 0x120f64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x120f68: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x120f68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_120f6c:
    // 0x120f6c: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x120f6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x120f70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x120F70u;
    {
        const bool branch_taken_0x120f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F70u;
        // 0x120f74: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f70) {
            ctx->pc = 0x120F9Cu;
            goto label_120f9c;
        }
    }
    ctx->pc = 0x120F78u;
    // 0x120f78: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x120F78u;
    {
        const bool branch_taken_0x120f78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x120F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F78u;
        // 0x120f7c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f78) {
            ctx->pc = 0x120F9Cu;
            goto label_120f9c;
        }
    }
    ctx->pc = 0x120F80u;
    // 0x120f80: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x120f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x120f84: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x120f84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x120f88: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x120f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x120f8c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x120f8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120f90: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x120f90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120f94: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x120f94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x120f98: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x120f98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_120f9c:
    // 0x120f9c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x120F9Cu;
    SET_GPR_U32(ctx, 31, 0x120FA4u);
    ctx->pc = 0x120FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120F9Cu;
    // 0x120fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x120F9Cu, 0x120FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120FA4u;
label_120fa4:
    // 0x120fa4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x120FA4u;
    SET_GPR_U32(ctx, 31, 0x120FACu);
    ctx->pc = 0x120FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120FA4u;
    // 0x120fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x120FA4u, 0x120FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120FACu;
label_120fac:
    // 0x120fac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120FACu;
    {
        const bool branch_taken_0x120fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120fac) {
            ctx->pc = 0x120FC0u;
            goto label_120fc0;
        }
    }
    ctx->pc = 0x120FB4u;
    // 0x120fb4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x120fb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x120fb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x120fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120fbc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x120fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_120fc0:
    // 0x120fc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120fc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x120fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x120fc8: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x120FC8u;
    {
        const bool branch_taken_0x120fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FC8u;
        // 0x120fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120fc8) {
            ctx->pc = 0x1211ACu;
            goto label_1211ac;
        }
    }
    ctx->pc = 0x120FD0u;
label_120fd0:
    // 0x120fd0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x120fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x120fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120fd8: 0x3c01bd8f  lui         $at, 0xBD8F
    ctx->pc = 0x120fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48527 << 16));
    // 0x120fdc: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x120fdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x120fe0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x120fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x120fe4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x120fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120fe8: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x120fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x120fec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x120fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ff0: 0x3c013ef7  lui         $at, 0x3EF7
    ctx->pc = 0x120ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16119 << 16));
    // 0x120ff4: 0x3421e910  ori         $at, $at, 0xE910
    ctx->pc = 0x120ff4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59664);
    // 0x120ff8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120ffc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x120ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121000: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121004: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121008: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x121008u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12100c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x12100cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x121010: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x121010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x121014: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x121014u;
    SET_GPR_U32(ctx, 31, 0x12101Cu);
    ctx->pc = 0x121018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121014u;
    // 0x121018: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x121014u, 0x12101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12101Cu;
label_12101c:
    // 0x12101c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12101cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121024: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x121024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x121028: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x121028u;
    SET_GPR_U32(ctx, 31, 0x121030u);
    ctx->pc = 0x12102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121028u;
    // 0x12102c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x121028u, 0x121030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121030u;
label_121030:
    // 0x121030: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x121030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x121034: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x121034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x121038: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x121038u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_12103c:
    // 0x12103c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12103cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121040: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x121040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x121044: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x121044u;
    SET_GPR_U32(ctx, 31, 0x12104Cu);
    ctx->pc = 0x121048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121044u;
    // 0x121048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x121044u, 0x12104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12104Cu;
label_12104c:
    // 0x12104c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x12104Cu;
    SET_GPR_U32(ctx, 31, 0x121054u);
    ctx->pc = 0x121050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12104Cu;
    // 0x121050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x12104Cu, 0x121054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121054u;
label_121054:
    // 0x121054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121058: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x121058u;
    SET_GPR_U32(ctx, 31, 0x121060u);
    ctx->pc = 0x12105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121058u;
    // 0x12105c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x121058u, 0x121060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121060u;
label_121060:
    // 0x121060: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x121060u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121064: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x121064u;
    SET_GPR_U32(ctx, 31, 0x12106Cu);
    ctx->pc = 0x121068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121064u;
    // 0x121068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x121064u, 0x12106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12106Cu;
label_12106c:
    // 0x12106c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x12106cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x121070: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x121070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x121074: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x121074u;
    {
        const bool branch_taken_0x121074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121074u;
        // 0x121078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121074) {
            ctx->pc = 0x1210B8u;
            goto label_1210b8;
        }
    }
    ctx->pc = 0x12107Cu;
    // 0x12107c: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x12107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x121080: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x121080u;
    {
        const bool branch_taken_0x121080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121080u;
        // 0x121084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121080) {
            ctx->pc = 0x1210B8u;
            goto label_1210b8;
        }
    }
    ctx->pc = 0x121088u;
    // 0x121088: 0x1220008b  beqz        $s1, . + 4 + (0x8B << 2)
    ctx->pc = 0x121088u;
    {
        const bool branch_taken_0x121088 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121088u;
        // 0x12108c: 0xae0015b4  sw          $zero, 0x15B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121088) {
            ctx->pc = 0x1212B8u;
            goto label_1212b8;
        }
    }
    ctx->pc = 0x121090u;
    // 0x121090: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x121090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x121094: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x121094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121098: 0xc620076c  lwc1        $f0, 0x76C($s1)
    ctx->pc = 0x121098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12109c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12109cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1210a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1210a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1210a4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1210a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1210a8: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x1210A8u;
    SET_GPR_U32(ctx, 31, 0x1210B0u);
    ctx->pc = 0x1210ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1210A8u;
    // 0x1210ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x1210A8u, 0x1210B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1210B0u;
label_1210b0:
    // 0x1210b0: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1210B0u;
    {
        const bool branch_taken_0x1210b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1210B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210B0u;
        // 0x1210b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1210b0) {
            ctx->pc = 0x1212BCu;
            goto label_1212bc;
        }
    }
    ctx->pc = 0x1210B8u;
label_1210b8:
    // 0x1210b8: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1210B8u;
    {
        const bool branch_taken_0x1210b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1210BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210B8u;
        // 0x1210bc: 0xae0215b4  sw          $v0, 0x15B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1210b8) {
            ctx->pc = 0x1212B8u;
            goto label_1212b8;
        }
    }
    ctx->pc = 0x1210C0u;
label_1210c0:
    // 0x1210c0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1210c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1210c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1210c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1210c8: 0x3c01bd87  lui         $at, 0xBD87
    ctx->pc = 0x1210c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48519 << 16));
    // 0x1210cc: 0x34212b02  ori         $at, $at, 0x2B02
    ctx->pc = 0x1210ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11010);
    // 0x1210d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1210d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1210d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1210d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1210d8: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x1210d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1210dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1210dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1210e0: 0x3c013ef9  lui         $at, 0x3EF9
    ctx->pc = 0x1210e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16121 << 16));
    // 0x1210e4: 0x3421db23  ori         $at, $at, 0xDB23
    ctx->pc = 0x1210e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56099);
    // 0x1210e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1210e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1210ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1210ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1210f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1210f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1210f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1210f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1210f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1210f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1210fc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1210fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x121100: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x121100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x121104: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x121104u;
    SET_GPR_U32(ctx, 31, 0x12110Cu);
    ctx->pc = 0x121108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121104u;
    // 0x121108: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x121104u, 0x12110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12110Cu;
label_12110c:
    // 0x12110c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12110cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121114: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x121114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x121118: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x121118u;
    SET_GPR_U32(ctx, 31, 0x121120u);
    ctx->pc = 0x12111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121118u;
    // 0x12111c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x121118u, 0x121120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121120u;
label_121120:
    // 0x121120: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x121120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x121124: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x121124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x121128: 0xae0315b0  sw          $v1, 0x15B0($s0)
    ctx->pc = 0x121128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 3));
    // 0x12112c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x121130: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x121130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_121134:
    // 0x121134: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x121134u;
    SET_GPR_U32(ctx, 31, 0x12113Cu);
    ctx->pc = 0x121138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121134u;
    // 0x121138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x121134u, 0x12113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12113Cu;
label_12113c:
    // 0x12113c: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x12113cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x121140: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x121140u;
    {
        const bool branch_taken_0x121140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121140u;
        // 0x121144: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121140) {
            ctx->pc = 0x121198u;
            goto label_121198;
        }
    }
    ctx->pc = 0x121148u;
    // 0x121148: 0x1c400013  bgtz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x121148u;
    {
        const bool branch_taken_0x121148 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x12114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121148u;
        // 0x12114c: 0xae0215b0  sw          $v0, 0x15B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121148) {
            ctx->pc = 0x121198u;
            goto label_121198;
        }
    }
    ctx->pc = 0x121150u;
    // 0x121150: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x121150u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x121154: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x121154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x121158: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x121158u;
    SET_GPR_U32(ctx, 31, 0x121160u);
    ctx->pc = 0x12115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121158u;
    // 0x12115c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x121158u, 0x121160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121160u;
label_121160:
    // 0x121160: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x121160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x121164: 0x2405fc18  addiu       $a1, $zero, -0x3E8
    ctx->pc = 0x121164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x121168: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x121168u;
    SET_GPR_U32(ctx, 31, 0x121170u);
    ctx->pc = 0x12116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121168u;
    // 0x12116c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x121168u, 0x121170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121170u;
label_121170:
    // 0x121170: 0x96020434  lhu         $v0, 0x434($s0)
    ctx->pc = 0x121170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    // 0x121174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121178: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x121178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12117c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x12117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x121180: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x121180u;
    SET_GPR_U32(ctx, 31, 0x121188u);
    ctx->pc = 0x121184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121180u;
    // 0x121184: 0xa6020434  sh          $v0, 0x434($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x121180u, 0x121188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121188u;
label_121188:
    // 0x121188: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x121188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x12118c: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x12118cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x121190: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x121190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x121194: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x121194u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_121198:
    // 0x121198: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12119c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12119cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1211a0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1211A0u;
    SET_GPR_U32(ctx, 31, 0x1211A8u);
    ctx->pc = 0x1211A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1211A0u;
    // 0x1211a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1211A0u, 0x1211A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1211A8u;
label_1211a8:
    // 0x1211a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1211a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1211ac:
    // 0x1211ac: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1211ACu;
    SET_GPR_U32(ctx, 31, 0x1211B4u);
    ctx->pc = 0x1211B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1211ACu;
    // 0x1211b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1211ACu, 0x1211B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1211B4u;
label_1211b4:
    // 0x1211b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1211b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1211b8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1211B8u;
    SET_GPR_U32(ctx, 31, 0x1211C0u);
    ctx->pc = 0x1211BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1211B8u;
    // 0x1211bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1211B8u, 0x1211C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1211C0u;
label_1211c0:
    // 0x1211c0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1211C0u;
    {
        const bool branch_taken_0x1211c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211C0u;
        // 0x1211c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211c0) {
            ctx->pc = 0x1212BCu;
            goto label_1212bc;
        }
    }
    ctx->pc = 0x1211C8u;
label_1211c8:
    // 0x1211c8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1211c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1211cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1211ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1211d0: 0x3c01bd87  lui         $at, 0xBD87
    ctx->pc = 0x1211d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48519 << 16));
    // 0x1211d4: 0x34212b02  ori         $at, $at, 0x2B02
    ctx->pc = 0x1211d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11010);
    // 0x1211d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1211d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1211dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1211dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1211e0: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x1211e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1211e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1211e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1211e8: 0x3c013ef9  lui         $at, 0x3EF9
    ctx->pc = 0x1211e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16121 << 16));
    // 0x1211ec: 0x3421db23  ori         $at, $at, 0xDB23
    ctx->pc = 0x1211ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56099);
    // 0x1211f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1211f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1211f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1211f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1211f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1211f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1211fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1211fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121200: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x121200u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121204: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x121204u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x121208: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x121208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x12120c: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x12120Cu;
    SET_GPR_U32(ctx, 31, 0x121214u);
    ctx->pc = 0x121210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12120Cu;
    // 0x121210: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x12120Cu, 0x121214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121214u;
label_121214:
    // 0x121214: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x121214u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12121c: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x12121cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x121220: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x121220u;
    SET_GPR_U32(ctx, 31, 0x121228u);
    ctx->pc = 0x121224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121220u;
    // 0x121224: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x121220u, 0x121228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121228u;
label_121228:
    // 0x121228: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x121228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x12122c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12122cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x121230: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x121230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_121234:
    // 0x121234: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x121234u;
    SET_GPR_U32(ctx, 31, 0x12123Cu);
    ctx->pc = 0x121238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121234u;
    // 0x121238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x121234u, 0x12123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12123Cu;
label_12123c:
    // 0x12123c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x12123Cu;
    SET_GPR_U32(ctx, 31, 0x121244u);
    ctx->pc = 0x121240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12123Cu;
    // 0x121240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x12123Cu, 0x121244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121244u;
label_121244:
    // 0x121244: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x121244u;
    {
        const bool branch_taken_0x121244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121244u;
        // 0x121248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121244) {
            ctx->pc = 0x121268u;
            goto label_121268;
        }
    }
    ctx->pc = 0x12124Cu;
    // 0x12124c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12124cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121250: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x121250u;
    SET_GPR_U32(ctx, 31, 0x121258u);
    ctx->pc = 0x121254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121250u;
    // 0x121254: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x121250u, 0x121258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121258u;
label_121258:
    // 0x121258: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x121258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x12125c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x12125cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x121260: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x121260u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x121264: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x121264u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_121268:
    // 0x121268: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12126c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12126cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x121270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121274: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x121274u;
    SET_GPR_U32(ctx, 31, 0x12127Cu);
    ctx->pc = 0x121278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121274u;
    // 0x121278: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x121274u, 0x12127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12127Cu;
label_12127c:
    // 0x12127c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12127cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121280: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x121280u;
    SET_GPR_U32(ctx, 31, 0x121288u);
    ctx->pc = 0x121284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121280u;
    // 0x121284: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x121280u, 0x121288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121288u;
label_121288:
    // 0x121288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12128c: 0xc048e4e  jal         func_123938
    ctx->pc = 0x12128Cu;
    SET_GPR_U32(ctx, 31, 0x121294u);
    ctx->pc = 0x121290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12128Cu;
    // 0x121290: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x12128Cu, 0x121294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121294u;
label_121294:
    // 0x121294: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x121294u;
    {
        const bool branch_taken_0x121294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121294u;
        // 0x121298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121294) {
            ctx->pc = 0x1212B8u;
            goto label_1212b8;
        }
    }
    ctx->pc = 0x12129Cu;
    // 0x12129c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12129cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212a0: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x1212A0u;
    SET_GPR_U32(ctx, 31, 0x1212A8u);
    ctx->pc = 0x1212A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1212A0u;
    // 0x1212a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x1212A0u, 0x1212A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1212A8u;
label_1212a8:
    // 0x1212a8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1212a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1212ac: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1212acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1212b0: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1212b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1212b4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1212b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1212b8:
    // 0x1212b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1212b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1212bc:
    // 0x1212bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1212bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1212c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1212c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1212c4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1212c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1212c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1212C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1212CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212C8u;
        // 0x1212cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1212C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1212D0u;
}
